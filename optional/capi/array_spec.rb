require File.expand_path('../spec_helper', __FILE__)

load_extension("array")

describe :rb_ary_new2, shared: true do
  it "returns an empty array" do
    @s.send(@method, 5).should == []
  end

  it "raises an ArgumentError when the given argument is negative" do
    lambda { @s.send(@method, -1) }.should raise_error(ArgumentError)
  end
end

describe "C-API Array function" do
  before :each do
    @s = CApiArraySpecs.new
  end

  describe "rb_Array" do
    it "returns obj if it is an array" do
      arr = @s.rb_Array([1,2])
      arr.should == [1, 2]
    end

    it "tries to convert obj to an array" do
      arr = @s.rb_Array({"bar" => "foo"})
      arr.should == [["bar", "foo"]]
    end

    it "returns obj wrapped in an array if it cannot be converted to an array" do
      arr = @s.rb_Array("a")
      arr.should == ["a"]
    end
  end

  describe "rb_ary_new" do
    it "returns an empty array" do
      @s.rb_ary_new.should == []
    end
  end

  describe "rb_ary_new2" do
    it_behaves_like :rb_ary_new2, :rb_ary_new2
  end

  describe "rb_ary_new_capa" do
    it_behaves_like :rb_ary_new2, :rb_ary_new_capa
  end

  describe "rb_ary_new3" do
    it "returns an array with the passed cardinality and varargs" do
      @s.rb_ary_new3(1,2,3).should == [1,2,3]
    end
  end

  describe "rb_ary_new_from_args" do
    it "returns an array with the passed cardinality and varargs" do
      @s.rb_ary_new_from_args(1,2,3).should == [1,2,3]
    end
  end

  describe "rb_ary_new4" do
    it "returns an array with the passed values" do
      @s.rb_ary_new4(1,2,3).should == [1,2,3]
    end
  end

  describe "rb_ary_new_from_values" do
    it "returns an array with the passed values" do
      @s.rb_ary_new_from_values(1,2,3).should == [1,2,3]
    end
  end

  describe "rb_ary_push" do
    it "adds an element to the array" do
      @s.rb_ary_push([], 4).should == [4]
    end
  end

  describe "rb_ary_cat" do
    it "pushes the given objects onto the end of the array" do
      @s.rb_ary_cat([1, 2], 3, 4).should == [1, 2, 3, 4]
    end

    it "raises a RuntimeError if the array is frozen" do
      lambda { @s.rb_ary_cat([].freeze, 1) }.should raise_error(RuntimeError)
    end
  end

  describe "rb_ary_pop" do
    it "removes and returns the last element in the array" do
      a = [1,2,3]
      @s.rb_ary_pop(a).should == 3
      a.should == [1,2]
    end
  end

  describe "rb_ary_join" do
    it "joins elements of an array with a string" do
      a = [1,2,3]
      b = ","
      @s.rb_ary_join(a,b).should == "1,2,3"
    end
  end

  describe "rb_ary_to_s" do
    it "creates an Array literal representation as a String" do
      @s.rb_ary_to_s([1,2,3]).should == "[1, 2, 3]"
      @s.rb_ary_to_s([]).should == "[]"
    end
  end

  describe "rb_ary_reverse" do
    it "reverses the order of elements in the array" do
      a = [1,2,3]
      @s.rb_ary_reverse(a)
      a.should == [3,2,1]
    end

    it "returns the original array" do
      a = [1,2,3]
      @s.rb_ary_reverse(a).should equal(a)
    end
  end

  describe "rb_ary_rotate" do
    it "rotates the array so that the element at the specified position comes first" do
      @s.rb_ary_rotate([1, 2, 3, 4], 2).should == [3, 4, 1, 2]
      @s.rb_ary_rotate([1, 2, 3, 4], -3).should == [2, 3, 4, 1]
    end

    it "raises a RuntimeError if the array is frozen" do
      lambda { @s.rb_ary_rotate([].freeze, 1) }.should raise_error(RuntimeError)
    end
  end

  describe "rb_ary_entry" do
    it "returns nil when passed an empty array" do
      @s.rb_ary_entry([], 0).should == nil
    end

    it "returns elements from the end when passed a negative index" do
      @s.rb_ary_entry([1, 2, 3], -1).should == 3
      @s.rb_ary_entry([1, 2, 3], -2).should == 2
    end

    it "returns nil if the index is out of range" do
      @s.rb_ary_entry([1, 2, 3], 3).should == nil
      @s.rb_ary_entry([1, 2, 3], -10).should == nil
    end
  end

  describe "rb_ary_clear" do
    it "removes all elements from the array" do
      @s.rb_ary_clear([]).should == []
      @s.rb_ary_clear([1, 2, 3]).should == []
    end
  end

  describe "rb_ary_dup" do
    it "duplicates the array" do
      @s.rb_ary_dup([]).should == []

      a = [1, 2, 3]
      b = @s.rb_ary_dup(a)

      b.should == a
      b.should_not equal(a)
    end
  end

  describe "rb_ary_unshift" do
    it "prepends the element to the array" do
      a = [1, 2, 3]
      @s.rb_ary_unshift(a, "a").should == ["a", 1, 2, 3]
      a.should == ['a', 1, 2, 3]
    end
  end

  describe "rb_ary_shift" do
    it "removes and returns the first element" do
      a = [5, 1, 1, 5, 4]
      @s.rb_ary_shift(a).should == 5
      a.should == [1, 1, 5, 4]
    end

    it "returns nil when the array is empty" do
      @s.rb_ary_shift([]).should == nil
    end
  end

  describe "rb_ary_store" do
    it "overwrites the element at the given position" do
      a = [1, 2, 3]
      @s.rb_ary_store(a, 1, 5)
      a.should == [1, 5, 3]
    end

    it "writes to elements offset from the end if passed a negative index" do
      a = [1, 2, 3]
      @s.rb_ary_store(a, -1, 5)
      a.should == [1, 2, 5]
    end

    it "raises an IndexError if the negative index is greater than the length" do
      a = [1, 2, 3]
      lambda { @s.rb_ary_store(a, -10, 5) }.should raise_error(IndexError)
    end

    it "enlarges the array as needed" do
      a = []
      @s.rb_ary_store(a, 2, 7)
      a.should == [nil, nil, 7]
    end

    it "raises a RuntimeError if the array is frozen" do
      a = [1, 2, 3].freeze
      lambda { @s.rb_ary_store(a, 1, 5) }.should raise_error(RuntimeError)
    end
  end

  describe "rb_ary_concat" do
    it "concats two arrays" do
      a = [5, 1, 1, 5, 4]
      b = [2, 3]
      @s.rb_ary_concat(a, b).should == [5, 1, 1, 5, 4, 2, 3]
    end
  end

  describe "rb_ary_plus" do
    it "adds two arrays together" do
      @s.rb_ary_plus([10], [20]).should == [10, 20]
    end
  end

  describe "RARRAY_PTR" do
    it "returns a pointer to a C array of the array's elements" do
      a = [1, 2, 3]
      b = []
      @s.RARRAY_PTR_iterate(a) do |e|
        b << e
      end
      a.should == b
    end

    it "allows assigning to the elements of the C array" do
      a = [1, 2, 3]
      @s.RARRAY_PTR_assign(a, :set)
      a.should == [:set, :set, :set]
    end
  end

  describe "RARRAY_LEN" do
    it "returns the size of the array" do
      @s.RARRAY_LEN([1, 2, 3]).should == 3
    end
  end

  describe "RARRAY_AREF" do
    # This macro does NOT do any bounds checking!
    it "returns an element from the array" do
      @s.RARRAY_AREF([1, 2, 3], 1).should == 2
    end
  end

  describe "rb_assoc_new" do
    it "returns an array containing the two elements" do
      @s.rb_assoc_new(1, 2).should == [1, 2]
      @s.rb_assoc_new(:h, [:a, :b]).should == [:h, [:a, :b]]
    end
  end

  describe "rb_ary_includes" do
    it "returns true if the array includes the element" do
      @s.rb_ary_includes([1, 2, 3], 2).should be_true
    end

    it "returns false if the array does not include the element" do
      @s.rb_ary_includes([1, 2, 3], 4).should be_false
    end
  end

  describe "rb_ary_aref" do
    it "returns the element at the given index" do
      @s.rb_ary_aref([:me, :you], 0).should == :me
      @s.rb_ary_aref([:me, :you], 1).should == :you
    end

    it "returns nil for an out of range index" do
      @s.rb_ary_aref([1, 2, 3], 6).should be_nil
    end

    it "returns a new array where the first argument is the index and the second is the length" do
      @s.rb_ary_aref([1, 2, 3, 4], 0, 2).should == [1, 2]
      @s.rb_ary_aref([1, 2, 3, 4], -4, 3).should == [1, 2, 3]
    end

    it "accepts a range" do
      @s.rb_ary_aref([1, 2, 3, 4], 0..-1).should == [1, 2, 3, 4]
    end

    it "returns nil when the start of a range is out of bounds" do
      @s.rb_ary_aref([1, 2, 3, 4], 6..10).should be_nil
    end

    it "returns an empty array when the start of a range equals the last element" do
      @s.rb_ary_aref([1, 2, 3, 4], 4..10).should == []
    end
  end

  describe "rb_iterate" do
    it "calls an callback function as a block passed to an method" do
      s = [1,2,3,4]
      s2 = @s.rb_iterate(s)

      s2.should == s

      # Make sure they're different objects
      s2.equal?(s).should be_false
    end

    it "calls a function with the other function available as a block" do
      h = {a: 1, b: 2}

      @s.rb_iterate_each_pair(h).sort.should == [1,2]
    end

    it "calls a function which can yield into the original block" do
      s2 = []

      o = Object.new
      def o.each
        yield 1
        yield 2
        yield 3
        yield 4
      end

      @s.rb_iterate_then_yield(o) { |x| s2 << x }

      s2.should == [1,2,3,4]
    end
  end

  describe "rb_ary_delete" do
    it "removes an element from an array and returns it" do
      ary = [1, 2, 3, 4]
      @s.rb_ary_delete(ary, 3).should == 3
      ary.should == [1, 2, 4]
    end

    it "returns nil if the element is not in the array" do
      ary = [1, 2, 3, 4]
      @s.rb_ary_delete(ary, 5).should be_nil
      ary.should == [1, 2, 3, 4]
    end
  end

  describe "rb_mem_clear" do
    it "sets elements of a C array to nil" do
      @s.rb_mem_clear(1).should == nil
    end
  end

  describe "rb_ary_freeze" do
    it "freezes the object exactly like Kernel#freeze" do
      ary = [1,2]
      @s.rb_ary_freeze(ary)
      ary.frozen?.should be_true
    end
  end

  describe "rb_ary_delete_at" do
    before :each do
      @array = [1, 2, 3, 4]
    end

    it "removes an element from an array at a positive index" do
      @s.rb_ary_delete_at(@array, 2).should == 3
      @array.should == [1, 2, 4]
    end

    it "removes an element from an array at a negative index" do
      @s.rb_ary_delete_at(@array, -3).should == 2
      @array.should == [1, 3, 4]
    end

    it "returns nil if the index is out of bounds" do
      @s.rb_ary_delete_at(@array, 4).should be_nil
      @array.should == [1, 2, 3, 4]
    end

    it "returns nil if the negative index is out of bounds" do
      @s.rb_ary_delete_at(@array, -5).should be_nil
      @array.should == [1, 2, 3, 4]
    end
  end

  describe "rb_ary_to_ary" do

    describe "with an array" do

      it "returns the given array" do
        array = [1, 2, 3]
        @s.rb_ary_to_ary(array).should equal(array)
      end

    end

    describe "with an object that responds to to_ary" do

      it "calls to_ary on the object" do
        obj = mock('to_ary')
        obj.stub!(:to_ary).and_return([1, 2, 3])
        @s.rb_ary_to_ary(obj).should == [1, 2, 3]
      end

    end

    describe "with an object that responds to to_a" do

      it "returns the original object in an array" do
        obj = mock('to_a')
        obj.stub!(:to_a).and_return([1, 2, 3])
        @s.rb_ary_to_ary(obj).should == [obj]
      end

    end

    describe "with an object that doesn't respond to to_ary" do

      it "returns the original object in an array" do
        obj = mock('no_to_ary')
        @s.rb_ary_to_ary(obj).should == [obj]
      end

    end

  end

  describe "rb_ary_subseq" do
    it "returns a subsequence of the given array" do
      @s.rb_ary_subseq([1, 2, 3, 4, 5], 1, 3).should == [2, 3, 4]
    end

    it "returns an empty array for a subsequence of 0 elements" do
      @s.rb_ary_subseq([1, 2, 3, 4, 5], 1, 0).should == []
    end

    it "returns nil if the begin index is out of bound" do
      @s.rb_ary_subseq([1, 2, 3, 4, 5], 6, 3).should be_nil
    end

    it "returns the existing subsequence of the length is out of bounds" do
      @s.rb_ary_subseq([1, 2, 3, 4, 5], 4, 3).should == [5]
    end

    it "returns nil if the size is negative" do
      @s.rb_ary_subseq([1, 2, 3, 4, 5], 1, -1).should be_nil
    end
  end
end
