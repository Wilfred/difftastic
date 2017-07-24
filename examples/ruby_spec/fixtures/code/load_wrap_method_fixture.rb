def top_level_method
  ::ScratchPad << :load_wrap_loaded
end

begin
  top_level_method
rescue NameError
  ::ScratchPad << :load_wrap_error
end
