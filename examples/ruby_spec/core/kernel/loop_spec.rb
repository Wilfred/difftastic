require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel.loop" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:loop)
  end

  it "calls block until it is terminated by a break" do
    i = 0
    loop do
      i += 1
      break if i == 10
    end

    i.should == 10
  end

  it "returns value passed to break" do
    loop do
      break 123
    end.should == 123
  end

  it "returns nil if no value passed to break" do
    loop do
      break
    end.should == nil
  end

  it "returns an enumerator if no block given" do
    enum = loop
    enum.instance_of?(Enumerator).should be_true
    cnt = 0
    enum.each do |*args|
      raise "Args should be empty #{args.inspect}" unless args.empty?
      cnt += 1
      break cnt if cnt >= 42
    end.should == 42
  end

  it "rescues StopIteration" do
    loop do
      raise StopIteration
    end
    42.should == 42
  end

  it "rescues StopIteration's subclasses" do
    finish = Class.new StopIteration
    loop do
      raise finish
    end
    42.should == 42
  end

  it "does not rescue other errors" do
    lambda{ loop do raise StandardError end }.should raise_error( StandardError )
  end

  ruby_version_is "2.3" do
    it "returns StopIteration#result, the result value of a finished iterator" do
      e = Enumerator.new { |y|
        y << 1
        y << 2
        :stopped
      }
      loop { e.next }.should == :stopped
    end
  end

  describe "when no block is given" do
    describe "returned Enumerator" do
      describe "size" do
        it "returns Float::INFINITY" do
          loop.size.should == Float::INFINITY
        end
      end
    end
  end
end
