((comment) @_start @_end
     (#make-range! "range" @_start @_end))

(((_) @head . (comment) @_start . (comment)+ @_end (_) @tail)
    (#not-has-type? @tail "comment")
    (#not-has-type? @head "comment")
    (#make-range! "range" @_start @_end))

((key_value value: _? @_start (_)* @_end)
    (#make-range! "range" @_start @_end))

((key_value) @_start @_end
    (#make-range! "range" @_start @_end)
)
