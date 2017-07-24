require File.expand_path('../../spec_helper', __FILE__)

describe "The loop expression" do
  it "repeats the given block until a break is called" do
    outer_loop = 0
    loop do
      outer_loop += 1
      break if outer_loop == 10
    end
    outer_loop.should == 10
  end

  it "executes code in its own scope" do
    loop do
      inner_loop = 123
      break
    end
    lambda { inner_loop }.should raise_error(NameError)
  end

  it "returns the value passed to break if interrupted by break" do
    loop do
      break 123
    end.should == 123
  end

  it "returns nil if interrupted by break with no arguments" do
    loop do
      break
    end.should == nil
  end

  it "skips to end of body with next" do
    a = []
    i = 0
    loop do
      break if (i+=1) >= 5
      next if i == 3
      a << i
    end
    a.should == [1, 2, 4]
  end

  it "restarts the current iteration with redo" do
    a = []
    loop do
      a << 1
      redo if a.size < 2
      a << 2
      break if a.size == 3
    end
    a.should == [1, 1, 2]
  end

  it "uses a spaghetti nightmare of redo, next and break" do
    a = []
    loop do
      a << 1
      redo if a.size == 1
      a << 2
      next if a.size == 3
      a << 3
      break if a.size > 6
    end
    a.should == [1, 1, 2, 1, 2, 3, 1, 2, 3]
  end
end
