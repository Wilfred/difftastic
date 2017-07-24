require 'weakref'

# From MRI test_weakref.rb
class WeakRefSpec
  def self.make_weakref(level = 10)
    if level > 0
      make_weakref(level - 1)
    else
      WeakRef.new(Object.new)
    end
  end

  def self.make_dead_weakref
    weaks = []
    weak = nil
    10_000.times do
      weaks << make_weakref
      GC.start
      GC.start
      break if weak = weaks.find { |w| !w.weakref_alive? }
    end
    weak
  end
end
