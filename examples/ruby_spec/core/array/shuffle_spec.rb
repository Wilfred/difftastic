require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#shuffle" do
  it "returns the same values, in a usually different order" do
    a = [1, 2, 3, 4]
    different = false
    10.times do
      s = a.shuffle
      s.sort.should == a
      different ||= (a != s)
    end
    different.should be_true # Will fail once in a blue moon (4!^10)
  end

  it "is not destructive" do
    a = [1, 2, 3]
    10.times do
      a.shuffle
      a.should == [1, 2, 3]
    end
  end

  it "does not return subclass instances with Array subclass" do
    ArraySpecs::MyArray[1, 2, 3].shuffle.should be_an_instance_of(Array)
  end

  it "attempts coercion via #to_hash" do
    obj = mock('hash')
    obj.should_receive(:to_hash).once.and_return({})
    [2, 3].shuffle(obj)
  end

  it "calls #rand on the Object passed by the :random key in the arguments Hash" do
    obj = mock("array_shuffle_random")
    obj.should_receive(:rand).at_least(1).times.and_return(0.5)

    result = [1, 2].shuffle(random: obj)
    result.size.should == 2
    result.should include(1, 2)
  end

  it "raises a NoMethodError if an object passed for the RNG does not define #rand" do
    obj = BasicObject.new

    lambda { [1, 2].shuffle(random: obj) }.should raise_error(NoMethodError)
  end

  it "accepts a Float for the value returned by #rand" do
    random = mock("array_shuffle_random")
    random.should_receive(:rand).at_least(1).times.and_return(0.3)

    [1, 2].shuffle(random: random).should be_an_instance_of(Array)
  end

  it "calls #to_int on the Object returned by #rand" do
    value = mock("array_shuffle_random_value")
    value.should_receive(:to_int).at_least(1).times.and_return(0)
    random = mock("array_shuffle_random")
    random.should_receive(:rand).at_least(1).times.and_return(value)

    [1, 2].shuffle(random: random).should be_an_instance_of(Array)
  end

  it "raises a RangeError if the value is less than zero" do
    value = mock("array_shuffle_random_value")
    value.should_receive(:to_int).and_return(-1)
    random = mock("array_shuffle_random")
    random.should_receive(:rand).and_return(value)

    lambda { [1, 2].shuffle(random: random) }.should raise_error(RangeError)
  end

  it "raises a RangeError if the value is equal to one" do
    value = mock("array_shuffle_random_value")
    value.should_receive(:to_int).at_least(1).times.and_return(1)
    random = mock("array_shuffle_random")
    random.should_receive(:rand).at_least(1).times.and_return(value)

    lambda { [1, 2].shuffle(random: random) }.should raise_error(RangeError)
  end
end

describe "Array#shuffle!" do
  it "returns the same values, in a usually different order" do
    a = [1, 2, 3, 4]
    original = a
    different = false
    10.times do
      a = a.shuffle!
      a.sort.should == [1, 2, 3, 4]
      different ||= (a != [1, 2, 3, 4])
    end
    different.should be_true # Will fail once in a blue moon (4!^10)
    a.should equal(original)
  end

  it "raises a RuntimeError on a frozen array" do
    lambda { ArraySpecs.frozen_array.shuffle! }.should raise_error(RuntimeError)
    lambda { ArraySpecs.empty_frozen_array.shuffle! }.should raise_error(RuntimeError)
  end
end
