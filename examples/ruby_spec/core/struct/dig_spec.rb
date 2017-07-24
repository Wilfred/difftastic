require File.expand_path('../../../spec_helper', __FILE__)

ruby_version_is "2.3" do
  describe "Struct#dig" do
    before(:each) do
      @klass = Struct.new(:a)
      @instance = @klass.new(@klass.new({ b: [1, 2, 3] }))
    end

    it "returns the nested value specified by the sequence of keys" do
      @instance.dig(:a, :a).should == { b: [1, 2, 3] }
    end

    it "returns the nested value specified if the sequence includes an index" do
      @instance.dig(:a, :a, :b, 0).should == 1
    end

    it "returns nil if any intermediate step is nil" do
      @instance.dig(:b, 0).should == nil
    end

    it "raises a TypeError if any intermediate step does not respond to #dig" do
      instance = @klass.new(1)
      lambda {
        instance.dig(:a, 3)
      }.should raise_error(TypeError)
    end

    it "raises an ArgumentError if no arguments provided" do
      lambda { @instance.dig }.should raise_error(ArgumentError)
    end

    it "calls #dig on any intermediate step with the rest of the sequence as arguments" do
      obj = Object.new
      instance = @klass.new(obj)

      def obj.dig(*args)
        {dug: args}
      end

      instance.dig(:a, :bar, :baz).should == { dug: [:bar, :baz] }
    end
  end
end
