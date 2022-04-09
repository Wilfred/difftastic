(ns io.aviso.binary
  "Utilities for formatting binary data (byte arrays) or binary deltas."
  (:require [io.aviso.ansi :as ansi]
            [io.aviso.columns :as c]))

(defprotocol BinaryData
  "Allows various data sources to be treated as a byte-array data type that
  supports a length and random access to individual bytes.

  BinaryData is extended onto byte arrays, onto `String`, and onto nil."

  (data-length [this] "The total number of bytes available.")
  (byte-at [this index] "The byte value at a specific offset."))

(extend-type (Class/forName "[B")
  BinaryData
  (data-length [ary] (alength (bytes ary)))
  (byte-at [ary index] (aget (bytes ary) index)))

;;; Extends String as a convenience; assumes that the
;;; String is in utf-8.

(extend-type String
  BinaryData
  (data-length [s] (.length s))
  (byte-at [s index] (-> s (.charAt index) int byte)))

(extend-type StringBuilder
  BinaryData
  (data-length [sb] (.length sb))
  (byte-at [sb index]
    (-> sb (.charAt index) int byte)))

(extend-type nil
  BinaryData
  (data-length [_] 0)
  (byte-at [_ index] (throw (IndexOutOfBoundsException. "Can't use byte-at with nil."))))

(def ^:private ^:const bytes-per-diff-line 16)
(def ^:private ^:const bytes-per-ascii-line 16)
(def ^:private ^:const bytes-per-line (* 2 bytes-per-diff-line))

(def ^:private printable-chars
      (into #{}
            (map byte (str "abcdefghijklmnopqrstuvwxyz"
                           "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                           "0123456789"
                           " !@#$%^&*()-_=+[]{}\\|'\";:,./<>?`~"))))

(def ^:private nonprintable-placeholder (ansi/bold-magenta-bg " "))

(defn ^:private to-ascii [b]
  (if (printable-chars b)
    (char b)
    nonprintable-placeholder))

(defn ^:private write-line
  [formatter write-ascii? offset data line-count]
  (let [line-bytes (for [i (range line-count)]
                     (byte-at data (+ offset i)))]
    (formatter
      (format "%04X" offset)
      (apply str (interpose " "
                            (map #(format "%02X" %) line-bytes)))
      (if write-ascii?
        (apply str (map to-ascii line-bytes))))))

(def ^:private standard-binary-columns
  [4
   ": "
   :none])

(defn ^:private ascii-binary-columns [per-line]
  [4
   ": "
   (* 3 per-line)
   "|"
   per-line
   "|"
   ])

(defn write-binary
  "Formats a BinaryData into a hex-dump string, consisting of multiple lines; each line formatted as:

      0000: 43 68 6F 6F 73 65 20 69 6D 6D 75 74 61 62 69 6C 69 74 79 2C 20 61 6E 64 20 73 65 65 20 77 68 65
      0020: 72 65 20 74 68 61 74 20 74 61 6B 65 73 20 79 6F 75 2E

  The full version specifies:

  - [[BinaryData]] to write
  - option keys and values:

      :ascii - boolean
      : true to enable ASCII mode

      :line-bytes - number
      : number of bytes per line (defaults to 16 for ASCII, 32 otherwise)

  In ASCII mode, the output is 16 bytes per line, but each line includes the ASCII printable characters:

      0000: 43 68 6F 6F 73 65 20 69 6D 6D 75 74 61 62 69 6C |Choose immutabil|
      0010: 69 74 79 2C 20 61 6E 64 20 73 65 65 20 77 68 65 |ity, and see whe|
      0020: 72 65 20 74 68 61 74 20 74 61 6B 65 73 20 79 6F |re that takes yo|
      0030: 75 2E                                           |u.              |

  A placeholder character (a space with magenta background) is used for any non-printable
  character."
  ([data]
   (write-binary data nil))
  ([data options]
   (let [{show-ascii?     :ascii
          per-line-option :line-bytes} options
         per-line  (or per-line-option
                      (if show-ascii? bytes-per-ascii-line bytes-per-line))
         formatter (apply c/format-columns
                          (if show-ascii?
                            (ascii-binary-columns per-line)
                            standard-binary-columns))]
     (assert (pos? per-line) "Must be at least one byte per line.")
     (loop [offset 0]
       (let [remaining (- (data-length data) offset)]
         (when (pos? remaining)
           (write-line formatter show-ascii? offset data (min per-line remaining))
           (recur (long (+ per-line offset)))))))))

(defn format-binary
  "Formats the data using [[write-binary]] and returns the result as a string."
  ([data]
   (format-binary data nil))
  ([data options]
   (with-out-str
     (write-binary data options))))

(defn ^:private match?
  [byte-offset data-length data alternate-length alternate]
  (and
    (< byte-offset data-length)
    (< byte-offset alternate-length)
    (== (byte-at data byte-offset) (byte-at alternate byte-offset))))

(defn ^:private to-hex
  [byte-array byte-offset]
  ;; This could be made a lot more efficient!
  (format "%02X" (byte-at byte-array byte-offset)))

(defn ^:private write-byte-deltas
  [ansi-color pad? offset data-length data alternate-length alternate]
  (doseq [i (range bytes-per-diff-line)]
    (let [byte-offset (+ offset i)]
      (cond
        ;; Exact match on both sides is easy, just print it out.
        (match? byte-offset data-length data alternate-length alternate) (print (str " " (to-hex data byte-offset)))
        ;; Some kind of mismatch, so decorate with this side's color
        (< byte-offset data-length) (print (str " " (ansi-color (to-hex data byte-offset))))
        ;; Are we out of data on this side?  Print a "--" decorated with the color.
        (< byte-offset alternate-length) (print (str " " (ansi-color "--")))
        ;; This side must be longer than the alternate side.
        ;; On the left/green side, we need to pad with spaces
        ;; On the right/red side, we need nothing.
        pad? (print "   ")))))

(defn ^:private write-delta-line
  [offset expected-length ^bytes expected actual-length actual]
  (printf "%04X:" offset)
  (write-byte-deltas ansi/bold-green true offset expected-length expected actual-length actual)
  (print " | ")
  (write-byte-deltas ansi/bold-red false offset actual-length actual expected-length expected)
  (println))

(defn write-binary-delta
  "Formats a hex dump of the expected data (on the left) and actual data (on the right). Bytes
  that do not match are highlighted in green on the expected side, and red on the actual side.
  When one side is shorter than the other, it is padded with `--` placeholders to make this
  more clearly visible.

  expected and actual are [[BinaryData]].

  Display 16 bytes (from each data set) per line."
  [expected actual]
  (let [expected-length (data-length expected)
        actual-length   (data-length actual)
        target-length   (max actual-length expected-length)]
    (loop [offset 0]
      (when (pos? (- target-length offset))
        (write-delta-line offset expected-length expected actual-length actual)
        (recur (long (+ bytes-per-diff-line offset)))))))

(defn format-binary-delta
  "Formats the delta using [[write-binary-delta]] and returns the result as a string."
  [expected actual]
  (with-out-str
    (write-binary-delta expected actual)))
