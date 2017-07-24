class NextSpecs
  def self.yielding_method(expected)
    yield.should == expected
    :method_return_value
  end

  def self.yielding
    yield
  end

  # The methods below are defined to spec the behavior of the next statement
  # while specifically isolating whether the statement is in an Iter block or
  # not. In a normal spec example, the code is always nested inside a block.
  # Rather than rely on that implicit context in this case, the context is
  # made explicit because of the interaction of next in a loop nested inside
  # an Iter block.
  def self.while_next(arg)
    x = true
    while x
      begin
        ScratchPad << :begin
        x = false
        if arg
          next 42
        else
          next
        end
      ensure
        ScratchPad << :ensure
      end
    end
  end

  def self.while_within_iter(arg)
    yielding do
      x = true
      while x
        begin
          ScratchPad << :begin
          x = false
          if arg
            next 42
          else
            next
          end
        ensure
          ScratchPad << :ensure
        end
      end
    end
  end

  def self.until_next(arg)
    x = false
    until x
      begin
        ScratchPad << :begin
        x = true
        if arg
          next 42
        else
          next
        end
      ensure
        ScratchPad << :ensure
      end
    end
  end

  def self.until_within_iter(arg)
    yielding do
      x = false
      until x
        begin
          ScratchPad << :begin
          x = true
          if arg
            next 42
          else
            next
          end
        ensure
          ScratchPad << :ensure
        end
      end
    end
  end

  def self.loop_next(arg)
    x = 1
    loop do
      break if x == 2

      begin
        ScratchPad << :begin
        x += 1
        if arg
          next 42
        else
          next
        end
      ensure
        ScratchPad << :ensure
      end
    end
  end

  def self.loop_within_iter(arg)
    yielding do
      x = 1
      loop do
        break if x == 2

        begin
          ScratchPad << :begin
          x += 1
          if arg
            next 42
          else
            next
          end
        ensure
          ScratchPad << :ensure
        end
      end
    end
  end

  class Block
    def method(v)
      yield v
    end
  end
end
