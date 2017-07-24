ScratchPad.recorded << :con_pre
Thread.current[:in_concurrent_rb] = true

if t = Thread.current[:wait_for]
  Thread.pass until t.backtrace && t.backtrace.any? { |call| call.include? 'require' }
end

if Thread.current[:con_raise]
  raise "con1"
end

ScratchPad.recorded << :con_post
