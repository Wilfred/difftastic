require File.expand_path('../../spec_helper', __FILE__)
require File.expand_path('../fixtures/ensure', __FILE__)

describe "An ensure block inside a begin block" do
  before :each do
    ScratchPad.record []
  end

  it "is executed when an exception is raised in it's corresponding begin block" do
    begin
      lambda {
        begin
          ScratchPad << :begin
          raise "An exception occured!"
        ensure
          ScratchPad << :ensure
        end
      }.should raise_error(RuntimeError)

      ScratchPad.recorded.should == [:begin, :ensure]
    end
  end

  it "is executed when an exception is raised and rescued in it's corresponding begin block" do
    begin
      begin
        ScratchPad << :begin
        raise "An exception occured!"
      rescue
        ScratchPad << :rescue
      ensure
        ScratchPad << :ensure
      end

      ScratchPad.recorded.should == [:begin, :rescue, :ensure]
    end
  end

  it "is executed even when a symbol is thrown in it's corresponding begin block" do
    begin
      catch(:symbol) do
        begin
          ScratchPad << :begin
          throw(:symbol)
        rescue
          ScratchPad << :rescue
        ensure
          ScratchPad << :ensure
        end
      end

      ScratchPad.recorded.should == [:begin, :ensure]
    end
  end

  it "is executed when nothing is raised or thrown in it's corresponding begin block" do
    begin
      ScratchPad << :begin
    rescue
      ScratchPad << :rescue
    ensure
      ScratchPad << :ensure
    end

    ScratchPad.recorded.should == [:begin, :ensure]
  end

  it "has no return value" do
    begin
      :begin
    ensure
      :ensure
    end.should == :begin
  end
end

describe "The value of an ensure expression," do
  it "in no-exception scenarios, is the value of the last statement of the protected body" do
    begin
      v = 1
      eval('x=1') # to prevent opts from triggering
      v
    ensure
      v = 2
    end.should == 1
  end

  it "when an exception is rescued, is the value of the rescuing block" do
    begin
      raise 'foo'
    rescue
      v = 3
    ensure
      v = 2
    end.should == 3
  end
end

describe "An ensure block inside a method" do
  before :each do
    @obj = EnsureSpec::Container.new
  end

  it "is executed when an exception is raised in the method" do
    lambda { @obj.raise_in_method_with_ensure }.should raise_error(RuntimeError)
    @obj.executed.should == [:method, :ensure]
  end

  it "is executed when an exception is raised and rescued in the method" do
    @obj.raise_and_rescue_in_method_with_ensure
    @obj.executed.should == [:method, :rescue, :ensure]
  end

  it "is executed even when a symbol is thrown in the method" do
    catch(:symbol) { @obj.throw_in_method_with_ensure }
    @obj.executed.should == [:method, :ensure]
  end

  it "has no impact on the method's implicit return value" do
    @obj.implicit_return_in_method_with_ensure.should == :method
  end

  it "has an impact on the method's explicit return value" do
    @obj.explicit_return_in_method_with_ensure.should == :ensure
  end
end
