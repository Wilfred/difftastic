require File.expand_path("../../spec_helper", __FILE__)

ruby_version_is "2.3" do
  describe "Safe navigator" do
    it "requires a method name to be provided" do
      lambda { eval("obj&. {}") }.should raise_error(SyntaxError)
    end

    context "when context is nil" do
      it "always returns nil" do
        eval("nil&.unknown").should == nil
        eval("[][10]&.unknown").should == nil
      end

      it "can be chained" do
        eval("nil&.one&.two&.three").should == nil
      end

      it "doesn't evaluate arguments" do
        obj = Object.new
        obj.should_not_receive(:m)
        eval("nil&.unknown(obj.m) { obj.m }")
      end
    end

    context "when context is false" do
      it "calls the method" do
        eval("false&.to_s").should == "false"

        lambda { eval("false&.unknown") }.should raise_error(NoMethodError)
      end
    end

    context "when context is truthy" do
      it "calls the method" do
        eval("1&.to_s").should == "1"

        lambda { eval("1&.unknown") }.should raise_error(NoMethodError)
      end
    end

    it "takes a list of arguments" do
      eval("[1,2,3]&.first(2)").should == [1,2]
    end

    it "takes a block" do
      eval("[1,2]&.map { |i| i * 2 }").should == [2, 4]
    end

    it "allows assignment methods" do
      klass = Class.new do
        attr_reader :foo
        def foo=(val)
          @foo = val
          42
        end
      end
      obj = klass.new

      eval("obj&.foo = 3").should == 3
      obj.foo.should == 3

      obj = nil
      eval("obj&.foo = 3").should == nil
    end

    it "allows assignment operators" do
      klass = Class.new do
        attr_accessor :m

        def initialize
          @m = 0
        end
      end

      obj = klass.new

      eval("obj&.m += 3")
      obj.m.should == 3

      obj = nil
      eval("obj&.m += 3").should == nil
    end

    it "does not call the operator method lazily with an assignment operator" do
      klass = Class.new do
        attr_writer :foo
        def foo
          nil
        end
      end
      obj = klass.new

      lambda {
        eval("obj&.foo += 3")
      }.should raise_error(NoMethodError) { |e|
        e.name.should == :+
      }
    end
  end
end
