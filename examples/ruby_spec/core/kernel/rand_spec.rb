require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel.rand" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:rand)
  end

  it "returns a float if no argument is passed" do
    rand.should be_kind_of(Float)
  end

  it "returns an integer for an integer argument" do
    rand(77).should be_kind_of(Integer)
  end

  it "returns an integer for a float argument greater than 1" do
    rand(1.3).should be_kind_of(Integer)
  end

  it "returns a float for an argument between -1 and 1" do
    rand(-0.999).should be_kind_of(Float)
    rand(-0.01).should be_kind_of(Float)
    rand(0).should be_kind_of(Float)
    rand(0.01).should be_kind_of(Float)
    rand(0.999).should be_kind_of(Float)
  end

  it "ignores the sign of the argument" do
    [0, 1, 2, 3].should include(rand(-4))
  end

  it "never returns a value greater or equal to 1.0 with no arguments" do
    1000.times do
      (0...1.0).should include(rand)
    end
  end

  it "never returns a value greater or equal to any passed in max argument" do
    1000.times do
      (0...100).to_a.should include(rand(100))
    end
  end

  it "calls to_int on its argument" do
    l = mock('limit')
    l.should_receive(:to_int).and_return 7

    rand l
  end

  context "given an exclusive range" do
    it "returns an Integer between the two Integers" do
      1000.times do
        x = rand(4...6)
        x.should be_kind_of(Integer)
        (4...6).should include(x)
      end
    end

    it "returns a Float between the given Integer and Float" do
      1000.times do
        x = rand(4...6.5)
        x.should be_kind_of(Float)
        (4...6.5).should include(x)
      end
    end

    it "returns a Float between the given Float and Integer" do
      1000.times do
        x = rand(3.5...6)
        x.should be_kind_of(Float)
        (3.5...6).should include(x)
      end
    end

    it "returns a Float between the two given Floats" do
      1000.times do
        x = rand(3.5...6.5)
        x.should be_kind_of(Float)
        (3.5...6.5).should include(x)
      end
    end
  end

  context "given an inclusive range" do
    it "returns an Integer between the two Integers" do
      1000.times do
        x = rand(4..6)
        x.should be_kind_of(Integer)
        (4..6).should include(x)
      end
    end

    it "returns a Float between the given Integer and Float" do
      1000.times do
        x = rand(4..6.5)
        x.should be_kind_of(Float)
        (4..6.5).should include(x)
      end
    end

    it "returns a Float between the given Float and Integer" do
      1000.times do
        x = rand(3.5..6)
        x.should be_kind_of(Float)
        (3.5..6).should include(x)
      end
    end

    it "returns a Float between the two given Floats" do
      1000.times do
        x = rand(3.5..6.5)
        x.should be_kind_of(Float)
        (3.5..6.5).should include(x)
      end
    end
  end

  it "returns a numeric for an range argument where max is < 1" do
    rand(0.25..0.75).should be_kind_of(Numeric)
  end

  it "returns nil when range is backwards" do
    rand(1..0).should be_nil
  end

  it "returns the range start/end when Float range is 0" do
    rand(1.0..1.0).should eql(1.0)
  end

  it "returns the range start/end when Integer range is 0" do
    rand(42..42).should eql(42)
  end
end

describe "Kernel#rand" do
  it "needs to be reviewed for spec completeness"
end
