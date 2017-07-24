ScratchPad.recorded << :con2_pre

Thread.current[:in_concurrent_rb2] = true

t = Thread.current[:concurrent_require_thread]
Thread.pass until t[:in_concurrent_rb3]

ScratchPad.recorded << :con2_post
