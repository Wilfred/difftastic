(loop for dim-idx in xyz below x
      for y from 0
      for letter in (list 'x 'y 'z) in 2
      collect x)

(loop for x below 3 in 2
      do (format t "~A~%" x))
