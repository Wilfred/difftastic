require File.expand_path('../../spec_helper', __FILE__)
require File.expand_path('../fixtures/variables', __FILE__)

describe "Multiple assignment" do
  context "with a single RHS value" do
    it "assigns a simple MLHS" do
      (a, b, c = 1).should == 1
      [a, b, c].should == [1, nil, nil]
    end

    it "calls #to_ary to convert an Object RHS when assigning a simple MLHS" do
      x = mock("multi-assign single RHS")
      x.should_receive(:to_ary).and_return([1, 2])

      (a, b, c = x).should == x
      [a, b, c].should == [1, 2, nil]
    end

    it "calls #to_ary if it is private" do
      x = mock("multi-assign single RHS")
      x.should_receive(:to_ary).and_return([1, 2])
      class << x; private :to_ary; end

      (a, b, c = x).should == x
      [a, b, c].should == [1, 2, nil]
    end

    it "does not call #to_ary if #respond_to? returns false" do
      x = mock("multi-assign single RHS")
      x.should_receive(:respond_to?).with(:to_ary, true).and_return(false)
      x.should_not_receive(:to_ary)

      (a, b, c = x).should == x
      [a, b, c].should == [x, nil, nil]
    end

    it "wraps the Object in an Array if #to_ary returns nil" do
      x = mock("multi-assign single RHS")
      x.should_receive(:to_ary).and_return(nil)

      (a, b, c = x).should == x
      [a, b, c].should == [x, nil, nil]
    end

    it "raises a TypeError of #to_ary does not return an Array" do
      x = mock("multi-assign single RHS")
      x.should_receive(:to_ary).and_return(1)

      lambda { a, b, c = x }.should raise_error(TypeError)
    end

    it "does not call #to_a to convert an Object RHS when assigning a simple MLHS" do
      x = mock("multi-assign single RHS")
      x.should_not_receive(:to_a)

      (a, b, c = x).should == x
      [a, b, c].should == [x, nil, nil]
    end

    it "does not call #to_ary on an Array instance" do
      x = [1, 2]
      x.should_not_receive(:to_ary)

      (a, b = x).should == x
      [a, b].should == [1, 2]
    end

    it "does not call #to_a on an Array instance" do
      x = [1, 2]
      x.should_not_receive(:to_a)

      (a, b = x).should == x
      [a, b].should == [1, 2]
    end

    it "returns the RHS when it is an Array" do
      ary = [1, 2]

      x = (a, b = ary)
      x.should equal(ary)
    end

    it "returns the RHS when it is an Array subclass" do
      cls = Class.new(Array)
      ary = cls.new [1, 2]

      x = (a, b = ary)
      x.should equal(ary)
    end

    it "does not call #to_ary on an Array subclass instance" do
      x = Class.new(Array).new [1, 2]
      x.should_not_receive(:to_ary)

      (a, b = x).should == x
      [a, b].should == [1, 2]
    end

    it "does not call #to_a on an Array subclass instance" do
      x = Class.new(Array).new [1, 2]
      x.should_not_receive(:to_a)

      (a, b = x).should == x
      [a, b].should == [1, 2]
    end

    it "assigns a MLHS with a trailing comma" do
      a, = 1
      b, c, = []
      [a, b, c].should == [1, nil, nil]
    end

    it "assigns a single LHS splat" do
      (*a = 1).should == 1
      a.should == [1]
    end

    it "calls #to_ary to convert an Object RHS" do
      x = mock("multi-assign splat")
      x.should_receive(:to_ary).and_return([1, 2])

      (*a = x).should == x
      a.should == [1, 2]
    end

    it "raises a TypeError if #to_ary does not return an Array" do
      x = mock("multi-assign splat")
      x.should_receive(:to_ary).and_return(1)

      lambda { *a = x }.should raise_error(TypeError)
    end

    it "does not call #to_ary on an Array subclass" do
      cls = Class.new(Array)
      ary = cls.new [1, 2]
      ary.should_not_receive(:to_ary)

      (*a = ary).should == [1, 2]
      a.should == [1, 2]
    end

    it "assigns an Array when the RHS is an Array subclass" do
      cls = Class.new(Array)
      ary = cls.new [1, 2]

      x = (*a = ary)
      x.should equal(ary)
      a.should be_an_instance_of(Array)
    end

    it "calls #to_ary to convert an Object RHS with MLHS" do
      x = mock("multi-assign splat")
      x.should_receive(:to_ary).and_return([1, 2])

      (a, *b, c = x).should == x
      [a, b, c].should == [1, [], 2]
    end

    it "raises a TypeError if #to_ary does not return an Array with MLHS" do
      x = mock("multi-assign splat")
      x.should_receive(:to_ary).and_return(1)

      lambda { a, *b, c = x }.should raise_error(TypeError)
    end

    it "does not call #to_a to convert an Object RHS with a MLHS" do
      x = mock("multi-assign splat")
      x.should_not_receive(:to_a)

      (a, *b = x).should == x
      [a, b].should == [x, []]
    end

    it "assigns a MLHS with leading splat" do
      (*a, b, c = 1).should == 1
      [a, b, c].should == [[], 1, nil]
    end

    it "assigns a MLHS with a middle splat" do
      a, b, *c, d, e = 1
      [a, b, c, d, e].should == [1, nil, [], nil, nil]
    end

    it "assigns a MLHS with a trailing splat" do
      a, b, *c = 1
      [a, b, c].should == [1, nil, []]
    end

    it "assigns a grouped LHS without splat" do
      ((a, b), c), (d, (e,), (f, (g, h))) = 1
      [a, b, c, d, e, f, g, h].should == [1, nil, nil, nil, nil, nil, nil, nil]
    end

    it "assigns a single grouped LHS splat" do
      (*a) = nil
      a.should == [nil]
    end

    it "assigns a grouped LHS with splats" do
      (a, *b), c, (*d, (e, *f, g)) = 1
      [a, b, c, d, e, f, g].should == [1, [], nil, [], nil, [], nil]
    end

    it "consumes values for an anonymous splat" do
      (* = 1).should == 1
    end

    it "consumes values for a grouped anonymous splat" do
      ((*) = 1).should == 1
    end

    it "does not mutate a RHS Array" do
      x = [1, 2, 3, 4]
      a, *b, c, d = x
      [a, b, c, d].should == [1, [2], 3, 4]
      x.should == [1, 2, 3, 4]
    end

    it "assigns values from a RHS method call" do
      def x() 1 end

      (a, b = x).should == 1
      [a, b].should == [1, nil]
    end

    it "assigns values from a RHS method call with arguments" do
      def x(a) a end

      (a, b = x []).should == []
      [a, b].should == [nil, nil]
    end

    it "assigns values from a RHS method call with receiver" do
      x = mock("multi-assign attributes")
      x.should_receive(:m).and_return([1, 2, 3])

      a, b = x.m
      [a, b].should == [1, 2]
    end

    it "calls #to_ary on the value returned by the method call" do
      y = mock("multi-assign method return value")
      y.should_receive(:to_ary).and_return([1, 2])

      x = mock("multi-assign attributes")
      x.should_receive(:m).and_return(y)

      (a, b = x.m).should == y
      [a, b].should == [1, 2]
    end

    it "raises a TypeError if #to_ary does not return an Array on a single RHS" do
      y = mock("multi-assign method return value")
      y.should_receive(:to_ary).and_return(1)

      x = mock("multi-assign attributes")
      x.should_receive(:m).and_return(y)

      lambda { a, b = x.m }.should raise_error(TypeError)
    end

    it "assigns values from a RHS method call with receiver and arguments" do
      x = mock("multi-assign attributes")
      x.should_receive(:m).with(1, 2).and_return([1, 2, 3])

      a, b = x.m 1, 2
      [a, b].should == [1, 2]
    end

    it "assigns global variables" do
      $spec_a, $spec_b = 1
      [$spec_a, $spec_b].should == [1, nil]
    end

    it "assigns instance variables" do
      @a, @b = 1
      [@a, @b].should == [1, nil]
    end

    it "assigns attributes" do
      a = mock("multi-assign attributes")
      a.should_receive(:x=).with(1)
      a.should_receive(:y=).with(nil)

      a.x, a.y = 1
    end

    it "assigns indexed elements" do
      a = []
      a[1], a[2] = 1
      a.should == [nil, 1, nil]
    end

    it "assigns constants" do
      module VariableSpecs
        SINGLE_RHS_1, SINGLE_RHS_2 = 1
        [SINGLE_RHS_1, SINGLE_RHS_2].should == [1, nil]
      end
    end
  end

  context "with a single splatted RHS value" do
    it "assigns a single grouped LHS splat" do
      (*a) = *1
      a.should == [1]
    end

    it "assigns an empty Array to a single LHS value when passed nil" do
      (a = *nil).should == []
      a.should == []
    end

    it "calls #to_a to convert nil to an empty Array" do
      nil.should_receive(:to_a).and_return([])

      (*a = *nil).should == []
      a.should == []
    end

    it "does not call #to_a on an Array" do
      ary = [1, 2]
      ary.should_not_receive(:to_a)

      (a = *ary).should == [1, 2]
      a.should == [1, 2]
    end

    it "returns a copy of a splatted Array" do
      ary = [1, 2]

      (a = *ary).should == [1, 2]
      a.should_not equal(ary)
    end

    it "does not call #to_a on an Array subclass" do
      cls = Class.new(Array)
      ary = cls.new [1, 2]
      ary.should_not_receive(:to_a)

      (a = *ary).should == [1, 2]
      a.should == [1, 2]
    end

    it "returns an Array when the splatted object is an Array subclass" do
      cls = Class.new(Array)
      ary = cls.new [1, 2]

      x = (a = *ary)

      x.should == [1, 2]
      x.should be_an_instance_of(Array)

      a.should == [1, 2]
      a.should be_an_instance_of(Array)
    end

    it "consumes values for an anonymous splat" do
      a = 1
      (* = *a).should == [1]
    end

    it "consumes values for a grouped anonymous splat" do
      ((*) = *1).should == [1]
    end

    it "assigns a single LHS splat" do
      x = 1
      (*a = *x).should == [1]
      a.should == [1]
    end

    it "calls #to_a to convert an Object RHS with a single splat LHS" do
      x = mock("multi-assign RHS splat")
      x.should_receive(:to_a).and_return([1, 2])

      (*a = *x).should == [1, 2]
      a.should == [1, 2]
    end

    it "calls #to_a if it is private" do
      x = mock("multi-assign RHS splat")
      x.should_receive(:to_a).and_return([1, 2])
      class << x; private :to_a; end

      (*a = *x).should == [1, 2]
      a.should == [1, 2]
    end

    it "does not call #to_a if #respond_to? returns false" do
      x = mock("multi-assign RHS splat")
      x.should_receive(:respond_to?).with(:to_a, true).and_return(false)
      x.should_not_receive(:to_a)

      (*a = *x).should == [x]
      a.should == [x]
    end

    it "wraps the Object in an Array if #to_a returns nil" do
      x = mock("multi-assign RHS splat")
      x.should_receive(:to_a).and_return(nil)

      (*a = *x).should == [x]
      a.should == [x]
    end

    it "raises a TypeError if #to_a does not return an Array" do
      x = mock("multi-assign RHS splat")
      x.should_receive(:to_a).and_return(1)

      lambda { *a = *x }.should raise_error(TypeError)
    end

    it "does not call #to_ary to convert an Object RHS with a single splat LHS" do
      x = mock("multi-assign RHS splat")
      x.should_not_receive(:to_ary)

      (*a = *x).should == [x]
      a.should == [x]
    end

    it "assigns a MLHS with leading splat" do
      (*a, b, c = *1).should == [1]
      [a, b, c].should == [[], 1, nil]
    end

    it "assigns a MLHS with a middle splat" do
      a, b, *c, d, e = *1
      [a, b, c, d, e].should == [1, nil, [], nil, nil]
    end

    it "assigns a MLHS with a trailing splat" do
      a, b, *c = *nil
      [a, b, c].should == [nil, nil, []]
    end

    it "calls #to_a to convert an Object RHS with a single LHS" do
      x = mock("multi-assign RHS splat")
      x.should_receive(:to_a).and_return([1, 2])

      (a = *x).should == [1, 2]
      a.should == [1, 2]
    end

    it "does not call #to_ary to convert an Object RHS with a single LHS" do
      x = mock("multi-assign RHS splat")
      x.should_not_receive(:to_ary)

      (a = *x).should == [x]
      a.should == [x]
    end

    it "raises a TypeError if #to_a does not return an Array with a single LHS" do
      x = mock("multi-assign splat")
      x.should_receive(:to_a).and_return(1)

      lambda { a = *x }.should raise_error(TypeError)
    end

    it "calls #to_a to convert an Object splat RHS when assigned to a simple MLHS" do
      x = mock("multi-assign splat")
      x.should_receive(:to_a).and_return([1, 2])

      (a, b, c = *x).should == [1, 2]
      [a, b, c].should == [1, 2, nil]
    end

    it "raises a TypeError if #to_a does not return an Array with a simple MLHS" do
      x = mock("multi-assign splat")
      x.should_receive(:to_a).and_return(1)

      lambda { a, b, c = *x }.should raise_error(TypeError)
    end

    it "does not call #to_ary to convert an Object splat RHS when assigned to a simple MLHS" do
      x = mock("multi-assign splat")
      x.should_not_receive(:to_ary)

      (a, b, c = *x).should == [x]
      [a, b, c].should == [x, nil, nil]
    end

    it "calls #to_a to convert an Object RHS with MLHS" do
      x = mock("multi-assign splat")
      x.should_receive(:to_a).and_return([1, 2])

      a, *b, c = *x
      [a, b, c].should == [1, [], 2]
    end

    it "raises a TypeError if #to_a does not return an Array with MLHS" do
      x = mock("multi-assign splat")
      x.should_receive(:to_a).and_return(1)

      lambda { a, *b, c = *x }.should raise_error(TypeError)
    end

    it "does not call #to_ary to convert an Object RHS with a MLHS" do
      x = mock("multi-assign splat")
      x.should_not_receive(:to_ary)

      a, *b = *x
      [a, b].should == [x, []]
    end

    it "assigns a grouped LHS without splats" do
      ((a, b), c), (d, (e,), (f, (g, h))) = *1
      [a, b, c, d, e, f, g, h].should == [1, nil, nil, nil, nil, nil, nil, nil]
    end

    it "assigns a grouped LHS with splats" do
      (a, *b), c, (*d, (e, *f, g)) = *1
      [a, b, c, d, e, f, g].should == [1, [], nil, [], nil, [], nil]
    end

    it "does not mutate a RHS Array" do
      x = [1, 2, 3, 4]
      a, *b, c, d = *x
      [a, b, c, d].should == [1, [2], 3, 4]
      x.should == [1, 2, 3, 4]
    end

    it "assigns constants" do
      module VariableSpecs
        (*SINGLE_SPLATTED_RHS) = *1
        SINGLE_SPLATTED_RHS.should == [1]
      end
    end
  end

  context "with a MRHS value" do
    it "consumes values for an anonymous splat" do
      (* = 1, 2, 3).should == [1, 2, 3]
    end

    it "consumes values for a grouped anonymous splat" do
      ((*) = 1, 2, 3).should == [1, 2, 3]
    end

    it "consumes values for multiple '_' variables" do
      a, _, b, _, c = 1, 2, 3, 4, 5
      [a, b, c].should == [1, 3, 5]
    end

    it "does not call #to_a to convert an Object in a MRHS" do
      x = mock("multi-assign MRHS")
      x.should_not_receive(:to_a)

      (a, b = 1, x).should == [1, x]
      [a, b].should == [1, x]
    end

    it "does not call #to_ary to convert an Object in a MRHS" do
      x = mock("multi-assign MRHS")
      x.should_not_receive(:to_ary)

      (a, b = 1, x).should == [1, x]
      [a, b].should == [1, x]
    end

    it "calls #to_a to convert a splatted Object as part of a MRHS with a splat MLHS" do
      x = mock("multi-assign splat MRHS")
      x.should_receive(:to_a).and_return([3, 4])

      (a, *b = 1, *x).should == [1, 3, 4]
      [a, b].should == [1, [3, 4]]
    end

    it "raises a TypeError if #to_a does not return an Array with a splat MLHS" do
      x = mock("multi-assign splat MRHS")
      x.should_receive(:to_a).and_return(1)

      lambda { a, *b = 1, *x }.should raise_error(TypeError)
    end

    it "does not call #to_ary to convert a splatted Object as part of a MRHS with a splat MRHS" do
      x = mock("multi-assign splat MRHS")
      x.should_not_receive(:to_ary)

      (a, *b = 1, *x).should == [1, x]
      [a, b].should == [1, [x]]
    end

    it "calls #to_a to convert a splatted Object as part of a MRHS" do
      x = mock("multi-assign splat MRHS")
      x.should_receive(:to_a).and_return([3, 4])

      (a, *b = *x, 1).should == [3, 4, 1]
      [a, b].should == [3, [4, 1]]
    end

    it "raises a TypeError if #to_a does not return an Array with a splat MRHS" do
      x = mock("multi-assign splat MRHS")
      x.should_receive(:to_a).and_return(1)

      lambda { a, *b = *x, 1 }.should raise_error(TypeError)
    end

    it "does not call #to_ary to convert a splatted Object with a splat MRHS" do
      x = mock("multi-assign splat MRHS")
      x.should_not_receive(:to_ary)

      (a, *b = *x, 1).should == [x, 1]
      [a, b].should == [x, [1]]
    end

    it "assigns a grouped LHS without splat from a simple Array" do
      ((a, b), c), (d, (e,), (f, (g, h))) = 1, 2, 3, 4, 5
      [a, b, c, d, e, f, g, h].should == [1, nil, nil, 2, nil, nil, nil, nil]
    end

    it "assigns a grouped LHS without splat from nested Arrays" do
      ary = [[1, 2, 3], 4], [[5], [6, 7], [8, [9, 10]]]
      ((a, b), c), (d, (e,), (f, (g, h))) = ary
      [a, b, c, d, e, f, g, h].should == [1, 2, 4, [5], 6, 8, 9, 10]
    end

    it "assigns a single grouped LHS splat" do
      (*a) = 1, 2, 3
      a.should == [1, 2, 3]
    end

    it "assigns a grouped LHS with splats from nested Arrays for simple values" do
      (a, *b), c, (*d, (e, *f, g)) = 1, 2, 3, 4
      [a, b, c, d, e, f, g].should == [1, [], 2, [], 3, [], nil]
    end

    it "assigns a grouped LHS with splats from nested Arrays for nested arrays" do
      (a, *b), c, (*d, (e, *f, g)) = [1, [2, 3]], [4, 5], [6, 7, 8]
      [a, b, c, d, e, f, g].should == [1, [[2, 3]], [4, 5], [6, 7], 8, [], nil]
    end

    it "calls #to_ary to convert an Object when the position receiving the value is a multiple assignment" do
      x = mock("multi-assign mixed RHS")
      x.should_receive(:to_ary).and_return([1, 2])

      (a, (b, c), d, e = 1, x, 3, 4).should == [1, x, 3, 4]
      [a, b, c, d, e].should == [1, 1, 2, 3, 4]
    end

    it "raises a TypeError if #to_ary does not return an Array" do
      x = mock("multi-assign mixed RHS")
      x.should_receive(:to_ary).and_return(x)

      lambda { a, (b, c), d = 1, x, 3, 4 }.should raise_error(TypeError)
    end

    it "calls #to_a to convert a splatted Object value in a MRHS" do
      x = mock("multi-assign mixed splatted RHS")
      x.should_receive(:to_a).and_return([4, 5])

      (a, *b, (c, d) = 1, 2, 3, *x).should == [1, 2, 3, 4, 5]
      [a, b, c, d].should == [1, [2, 3, 4], 5, nil]

    end

    it "calls #to_ary to convert a splatted Object when the position receiving the value is a multiple assignment" do
      x = mock("multi-assign mixed splatted RHS")
      x.should_receive(:to_ary).and_return([4, 5])

      (a, *b, (c, d) = 1, 2, 3, *x).should == [1, 2, 3, x]
      [a, b, c, d].should == [1, [2, 3], 4, 5]
    end

    it "raises a TypeError if #to_ary does not return an Array in a MRHS" do
      x = mock("multi-assign mixed splatted RHS")
      x.should_receive(:to_ary).and_return(x)

      lambda { a, *b, (c, d) = 1, 2, 3, *x }.should raise_error(TypeError)
    end

    it "does not call #to_ary to convert an Object when the position receiving the value is a simple variable" do
      x = mock("multi-assign mixed RHS")
      x.should_not_receive(:to_ary)

      a, b, c, d = 1, x, 3, 4
      [a, b, c, d].should == [1, x, 3, 4]
    end

    it "does not call #to_ary to convert an Object when the position receiving the value is a rest variable" do
      x = mock("multi-assign mixed RHS")
      x.should_not_receive(:to_ary)

      a, *b, c, d = 1, x, 3, 4
      [a, b, c, d].should == [1, [x], 3, 4]
    end

    it "does not call #to_ary to convert a splatted Object when the position receiving the value is a simple variable" do
      x = mock("multi-assign mixed splatted RHS")
      x.should_not_receive(:to_ary)

      a, *b, c = 1, 2, *x
      [a, b, c].should == [1, [2], x]
    end

    it "does not call #to_ary to convert a splatted Object when the position receiving the value is a rest variable" do
      x = mock("multi-assign mixed splatted RHS")
      x.should_not_receive(:to_ary)

      a, b, *c = 1, 2, *x
      [a, b, c].should == [1, 2, [x]]
    end

    it "does not mutate the assigned Array" do
      x = ((a, *b, c, d) = 1, 2, 3, 4, 5)
      x.should == [1, 2, 3, 4, 5]
    end

    it "assigns RHS values to LHS constants" do
      module VariableSpecs
        MRHS_VALUES_1, MRHS_VALUES_2 = 1, 2
        MRHS_VALUES_1.should == 1
        MRHS_VALUES_2.should == 2
      end
    end

    it "assigns all RHS values as an array to a single LHS constant" do
      module VariableSpecs
        MRHS_VALUES = 1, 2, 3
        MRHS_VALUES.should == [1, 2, 3]
      end
    end
  end

  context "with a RHS assignment value" do
    it "consumes values for an anonymous splat" do
      (* = (a = 1)).should == 1
      a.should == 1
    end

    it "does not mutate a RHS Array" do
      a, *b, c, d = (e = [1, 2, 3, 4])
      [a, b, c, d].should == [1, [2], 3, 4]
      e.should == [1, 2, 3, 4]
    end
  end
end

describe "A local variable assigned only within a conditional block" do
  context "accessed from a later closure" do
    it "is defined?" do
      if VariablesSpecs.false
        a = 1
      end

      1.times do
        defined?(a).should == "local-variable"
      end
    end

    it "is nil" do
      if VariablesSpecs.false
        a = 1
      end

      1.times do
        a.inspect.should == "nil"
      end
    end
  end
end
