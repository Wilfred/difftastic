require File.expand_path('../spec_helper', __FILE__)

load_extension("exception")

describe "C-API Exception function" do
  before :each do
    @s = CApiExceptionSpecs.new
  end

  describe "rb_exc_new" do
    it "creates an exception from a C string and length" do
      @s.rb_exc_new('foo').to_s.should == 'foo'
    end
  end

  describe "rb_exc_new2" do
    it "creates an exception from a C string" do
      @s.rb_exc_new2('foo').to_s.should == 'foo'
    end
  end

  describe "rb_exc_new3" do
    it "creates an exception from a Ruby string" do
      @s.rb_exc_new3('foo').to_s.should == 'foo'
    end
  end

  describe "rb_exc_raise" do
    it "raises passed exception" do
      runtime_error = RuntimeError.new '42'
      lambda { @s.rb_exc_raise(runtime_error) }.should raise_error(RuntimeError, '42')
    end

    it "raises an exception with an empty backtrace" do
      runtime_error = RuntimeError.new '42'
      runtime_error.set_backtrace []
      lambda { @s.rb_exc_raise(runtime_error) }.should raise_error(RuntimeError, '42')
    end
  end

  describe "rb_set_errinfo" do
    after :each do
      @s.rb_set_errinfo(nil)
    end

    it "accepts nil" do
      @s.rb_set_errinfo(nil).should be_nil
    end

    it "accepts an Exception instance" do
      @s.rb_set_errinfo(Exception.new).should be_nil
    end

    it "raises a TypeError if the object is not nil or an Exception instance" do
      lambda { @s.rb_set_errinfo("error") }.should raise_error(TypeError)
    end
  end
end
