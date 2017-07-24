require File.expand_path('../../../spec_helper', __FILE__)

ruby_version_is '2.3' do
  describe "Hash#dig" do

    it "returns #[] with one arg" do
      h = { 0 => false, a: 1 }
      h.dig(:a).should == 1
      h.dig(0).should be_false
      h.dig(1).should be_nil
    end

    it "returns the nested value specified by the sequence of keys" do
      h = { foo: { bar: { baz: 1 } } }
      h.dig(:foo, :bar, :baz).should == 1
      h.dig(:foo, :bar, :nope).should be_nil
      h.dig(:foo, :baz).should be_nil
      h.dig(:bar, :baz, :foo).should be_nil
    end

    it "returns the nested value specified if the sequence includes an index" do
      h = { foo: [1, 2, 3] }
      h.dig(:foo, 2).should == 3
    end

    it "returns nil if any intermediate step is nil" do
      h = { foo: { bar: { baz: 1 } } }
      h.dig(:foo, :zot, :xyz).should == nil
    end

    it "raises an ArgumentError if no arguments provided" do
      lambda { { the: 'borg' }.dig() }.should raise_error(ArgumentError)
    end

    it "handles type-mixed deep digging" do
      h = {}
      h[:foo] = [ { bar: [ 1 ] }, [ obj = Object.new, 'str' ] ]
      def obj.dig(*args); [ 42 ] end

      h.dig(:foo, 0, :bar).should == [ 1 ]
      h.dig(:foo, 0, :bar, 0).should == 1
      h.dig(:foo, 1, 1).should == 'str'
      # MRI does not recurse values returned from `obj.dig`
      h.dig(:foo, 1, 0, 0).should == [ 42 ]
      h.dig(:foo, 1, 0, 0, 10).should == [ 42 ]
    end

    it "raises TypeError if an intermediate element does not respond to #dig" do
      h = {}
      h[:foo] = [ { bar: [ 1 ] }, [ nil, 'str' ] ]
      lambda { h.dig(:foo, 0, :bar, 0, 0) }.should raise_error(TypeError)
      lambda { h.dig(:foo, 1, 1, 0) }.should raise_error(TypeError)
    end

    it "calls #dig on the result of #[] with the remaining arguments" do
      h = { foo: { bar: { baz: 42 } } }
      h[:foo].should_receive(:dig).with(:bar, :baz).and_return(42)
      h.dig(:foo, :bar, :baz).should == 42
    end

    it "respects Hash's default" do
      default = {bar: 42}
      h = Hash.new(default)
      h.dig(:foo).should equal default
      h.dig(:foo, :bar).should == 42
    end
  end
end
