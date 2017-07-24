require File.expand_path('../../../spec_helper', __FILE__)

describe "Random.rand" do
  it "returns a Float if no max argument is passed" do
    Random.rand.should be_kind_of(Float)
  end

  it "returns a Float >= 0 if no max argument is passed" do
    floats = 200.times.map { Random.rand }
    floats.min.should >= 0
  end

  it "returns a Float < 1 if no max argument is passed" do
    floats = 200.times.map { Random.rand }
    floats.max.should < 1
  end

  it "returns the same sequence for a given seed if no max argument is passed" do
    Random.srand 33
    floats_a = 20.times.map { Random.rand }
    Random.srand 33
    floats_b = 20.times.map { Random.rand }
    floats_a.should == floats_b
  end

  it "returns an Integer if an Integer argument is passed" do
    Random.rand(20).should be_kind_of(Integer)
  end

  it "returns an Integer >= 0 if an Integer argument is passed" do
    ints = 200.times.map { Random.rand(34) }
    ints.min.should >= 0
  end

  it "returns an Integer < the max argument if an Integer argument is passed" do
    ints = 200.times.map { Random.rand(55) }
    ints.max.should < 55
  end

  it "returns the same sequence for a given seed if an Integer argument is passed" do
    Random.srand 33
    floats_a = 20.times.map { Random.rand(90) }
    Random.srand 33
    floats_b = 20.times.map { Random.rand(90) }
    floats_a.should == floats_b
  end

  it "coerces arguments to Integers with #to_int" do
    obj = mock_numeric('int')
    obj.should_receive(:to_int).and_return(99)
    Random.rand(obj).should be_kind_of(Integer)
  end
end

describe "Random#rand with Fixnum" do
  it "returns an Integer" do
    Random.new.rand(20).should be_an_instance_of(Fixnum)
  end

  it "returns a Fixnum greater than or equal to 0" do
    prng = Random.new
    ints = 20.times.map { prng.rand(5) }
    ints.min.should >= 0
  end

  it "returns a Fixnum less than the argument" do
    prng = Random.new
    ints = 20.times.map { prng.rand(5) }
    ints.max.should <= 4
  end

  it "returns the same sequence for a given seed" do
    prng = Random.new 33
    a = 20.times.map { prng.rand(90) }
    prng = Random.new 33
    b = 20.times.map { prng.rand(90) }
    a.should == b
  end

  it "eventually returns all possible values" do
    prng = Random.new 33
    100.times.map{ prng.rand(10) }.uniq.sort.should == (0...10).to_a
  end

  it "raises an ArgumentError when the argument is 0" do
    lambda do
      Random.new.rand(0)
    end.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the argument is negative" do
    lambda do
      Random.new.rand(-12)
    end.should raise_error(ArgumentError)
  end
end

describe "Random#rand with Bignum" do
  it "typically returns a Bignum" do
    rnd = Random.new(1)
    10.times.map{ rnd.rand(bignum_value*2) }.max.should be_an_instance_of(Bignum)
  end

  it "returns a Bignum greater than or equal to 0" do
    prng = Random.new
    bigs = 20.times.map { prng.rand(bignum_value) }
    bigs.min.should >= 0
  end

  it "returns a Bignum less than the argument" do
    prng = Random.new
    bigs = 20.times.map { prng.rand(bignum_value) }
    bigs.max.should < bignum_value
  end

  it "returns the same sequence for a given seed" do
    prng = Random.new 33
    a = 20.times.map { prng.rand(bignum_value) }
    prng = Random.new 33
    b = 20.times.map { prng.rand(bignum_value) }
    a.should == b
  end

  it "raises an ArgumentError when the argument is negative" do
    lambda do
      Random.new.rand(-bignum_value)
    end.should raise_error(ArgumentError)
  end
end

describe "Random#rand with Float" do
  it "returns a Float" do
    Random.new.rand(20.43).should be_an_instance_of(Float)
  end

  it "returns a Float greater than or equal to 0.0" do
    prng = Random.new
    floats = 20.times.map { prng.rand(5.2) }
    floats.min.should >= 0.0
  end

  it "returns a Float less than the argument" do
    prng = Random.new
    floats = 20.times.map { prng.rand(4.30) }
    floats.max.should < 4.30
  end

  it "returns the same sequence for a given seed" do
    prng = Random.new 33
    a = 20.times.map { prng.rand(89.2928) }
    prng = Random.new 33
    b = 20.times.map { prng.rand(89.2928) }
    a.should == b
  end

  it "raises an ArgumentError when the argument is negative" do
    lambda do
      Random.new.rand(-1.234567)
    end.should raise_error(ArgumentError)
  end
end

describe "Random#rand with Range" do
  it "returns an element from the Range" do
    Random.new.rand(20..43).should be_an_instance_of(Fixnum)
  end

  it "returns an object that is a member of the Range" do
    prng = Random.new
    r = 20..30
    20.times { r.member?(prng.rand(r)).should be_true }
  end

  it "works with inclusive ranges" do
    prng = Random.new
    r = 3..5
    40.times.map { prng.rand(r) }.uniq.sort.should == [3,4,5]
  end

  it "works with exclusive ranges" do
    prng = Random.new
    r = 3...5
    20.times.map { prng.rand(r) }.uniq.sort.should == [3,4]
  end

  it "returns the same sequence for a given seed" do
    prng = Random.new 33
    a = 20.times.map { prng.rand(76890.028..800000.00) }
    prng = Random.new 33
    b = 20.times.map { prng.rand(76890.028..800000.00) }
    a.should == b
  end

  it "eventually returns all possible values" do
    prng = Random.new 33
    100.times.map{ prng.rand(10..20) }.uniq.sort.should == (10..20).to_a
    100.times.map{ prng.rand(10...20) }.uniq.sort.should == (10...20).to_a
  end

  it "considers Integers as Floats if one end point is a float" do
    Random.new(42).rand(0.0..1).should be_kind_of(Float)
    Random.new(42).rand(0..1.0).should be_kind_of(Float)
  end

  it "raises an ArgumentError when the startpoint lacks #+ and #- methods" do
    lambda do
      Random.new.rand(Object.new..67)
    end.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the endpoint lacks #+ and #- methods" do
    lambda do
      Random.new.rand(68..Object.new)
    end.should raise_error(ArgumentError)
  end
end
