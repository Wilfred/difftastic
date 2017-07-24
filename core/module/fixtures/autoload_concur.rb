ScratchPad.recorded << :con_pre
Thread.current[:in_autoload_rb] = true
sleep 0.1

module ModuleSpecs::Autoload
  Concur = 1
end

ScratchPad.recorded << :con_post
