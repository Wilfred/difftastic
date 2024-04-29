(format "%s: %s" (site-name) name)

(defcustom deadgrep-max-buffers
  4
  "The maximum number of deadgrep results buffers.

If the number of results buffers exceeds this value, deadgrep
will kill results buffers. The least recently used buffers are
killed first.

To disable cleanup entirely, set this variable to nil."
  :type '(choice
          (number :tag "Maximum of buffers allowed")
          (const :tag "Disable cleanup" nil))
  :group 'deadgrep)

