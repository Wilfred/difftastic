;; Example from Autochrome, under EPL-1.0 license.

(defn example
  [x]
  (-> {:more (inc x)
       :less (dec x)}
      (assoc :twice (+ x x)))
