ScratchPad << :loaded

if ScratchPad.recorded == [:loaded]
  load File.expand_path("../recursive_load_fixture.rb", __FILE__)
end
