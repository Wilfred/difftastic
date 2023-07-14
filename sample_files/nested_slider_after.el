(defun deadgrep--project-root ()
  "Guess the project root of the given FILE-PATH."
  (let ((root default-directory)
        (project (project-current)))
    (when project
      (setq root (project-root project)))
    (when root
      (deadgrep--lookup-override root))))
