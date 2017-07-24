require File.expand_path('../spec_helper', __FILE__)

load_extension("complex")

describe :rb_Complex, shared: true do
  it "creates a new Complex with numerator and denominator" do
    @r.send(@method, 1, 2).should == Complex(1, 2)
  end
end

describe :rb_complex_new, shared: true do
  it "creates a normalized Complex" do
    r = @r.send(@method, 10, 4)
    r.real.should == 10
    r.imag.should == 4
  end
end

describe "CApiComplexSpecs" do
  before :each do
    @r = CApiComplexSpecs.new
  end

  describe "rb_Complex" do
    it_behaves_like :rb_Complex, :rb_Complex
  end

  describe "rb_Complex2" do
    it_behaves_like :rb_Complex, :rb_Complex2
  end

  describe "rb_Complex1" do
    it "creates a new Complex with real and imaginary of 0" do
      @r.rb_Complex1(5).should == Complex(5, 0)
    end
  end

  describe "rb_complex_new" do
    it_behaves_like :rb_complex_new, :rb_complex_new
  end

  describe "rb_complex_new2" do
    it_behaves_like :rb_complex_new, :rb_complex_new2
  end
end
