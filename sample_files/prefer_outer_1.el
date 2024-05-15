(defun deadgrep--find-file (path)
  (save-match-data
    (let* ((initial-buffers (buffer-list))
           (buf (save-match-data (find-file-noselect path))))
      (unless (-contains-p initial-buffers buf)
        (setq opened t))
      (cons buf opened))))
