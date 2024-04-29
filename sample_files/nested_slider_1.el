(defun deadgrep--project-root ()
  "Guess the project root of the given FILE-PATH."
  (let ((root default-directory)
        (project (project-current)))
    (when project
      (-when-let (roots (project-roots project))
        (setq root (car roots))))
    (when root
      (deadgrep--lookup-override root))))

