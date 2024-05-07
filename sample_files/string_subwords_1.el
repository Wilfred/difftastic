(format "SoloWiki Viewing: %s" name)

(defcustom deadgrep-max-buffers
  4
  "Deadgrep will kill the least recently used results buffer
if there are more than this many.

To disable cleanup entirely, set this variable to nil."
  :type '(choice
          (number :tag "Maximum of buffers allowed")
          (const :tag "Disable cleanup" nil))
  :group 'deadgrep)

