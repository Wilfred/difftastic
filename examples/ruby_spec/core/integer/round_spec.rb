require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/to_i', __FILE__)

describe "Integer#round" do
  it_behaves_like(:integer_to_i, :round)

  ruby_version_is ""..."2.5" do
    it "rounds itself as a float if passed a positive precision" do
      [2, -4, 10**70, -10**100].each do |v|
        v.round(42).should eql(v.to_f)
      end
    end
  end

  ruby_version_is "2.5" do
    it "returns itself if passed a positive precision" do
      [2, -4, 10**70, -10**100].each do |v|
        v.round(42).should eql(v)
      end
    end
  end

  it "returns itself if passed zero" do
    [2, -4, 10**70, -10**100].each do |v|
      v.round(0).should eql(v)
    end
  end

  # redmine:5228
  it "returns itself rounded if passed a negative value" do
    +249.round(-2).should eql(+200)
    -249.round(-2).should eql(-200)
    (+25 * 10**70 - 1).round(-71).should eql(+20 * 10**70)
    (-25 * 10**70 + 1).round(-71).should eql(-20 * 10**70)
  end

  it "returns itself rounded to nearest if passed a negative value" do
    +250.round(-2).should eql(+300)
    -250.round(-2).should eql(-300)
    (+25 * 10**70).round(-71).should eql(+30 * 10**70)
    (-25 * 10**70).round(-71).should eql(-30 * 10**70)
  end

  platform_is_not wordsize: 32 do
    it "raises a RangeError when passed a big negative value" do
      lambda { 42.round(fixnum_min) }.should raise_error(RangeError)
    end
  end

  it "raises a RangeError when passed Float::INFINITY" do
    lambda { 42.round(Float::INFINITY) }.should raise_error(RangeError)
  end

  it "raises a RangeError when passed a beyond signed int" do
    lambda { 42.round(1<<31) }.should raise_error(RangeError)
  end

  it "raises a TypeError when passed a String" do
    lambda { 42.round("4") }.should raise_error(TypeError)
  end

  it "raises a TypeError when its argument cannot be converted to an Integer" do
    lambda { 42.round(nil) }.should raise_error(TypeError)
  end

  it "calls #to_int on the argument to convert it to an Integer" do
    obj = mock("Object")
    obj.should_receive(:to_int).and_return(0)
    42.round(obj)
  end

  it "raises a TypeError when #to_int does not return an Integer" do
    obj = mock("Object")
    obj.stub!(:to_int).and_return([])
    lambda { 42.round(obj) }.should raise_error(TypeError)
  end
end
