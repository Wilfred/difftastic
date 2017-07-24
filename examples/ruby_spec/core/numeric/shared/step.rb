require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

# Describes Numeric#step shared specs between different argument styles.
# To be able to do it, the @step_args var must contain a Proc that transforms
# the step call arguments passed as positional arguments to the style of
# arguments pretended to test.
describe :numeric_step, :shared => true do
  before :each do
    ScratchPad.record []
    @prc = lambda { |x| ScratchPad << x }
  end

  it "defaults to step = 1" do
    1.send(@method, *@step_args.call(5), &@prc)
    ScratchPad.recorded.should eql [1, 2, 3, 4, 5]
  end

  describe "when self, stop and step are Fixnums" do
    it "yields only Fixnums" do
      1.send(@method, *@step_args.call(5, 1)) { |x| x.should be_an_instance_of(Fixnum) }
    end

    describe "with a positive step" do
      it "yields while increasing self by step until stop is reached" do
        1.send(@method, *@step_args.call(5, 1), &@prc)
        ScratchPad.recorded.should eql [1, 2, 3, 4, 5]
      end

      it "yields once when self equals stop" do
        1.send(@method, *@step_args.call(1, 1), &@prc)
        ScratchPad.recorded.should eql [1]
      end

      it "does not yield when self is greater than stop" do
        2.send(@method, *@step_args.call(1, 1), &@prc)
        ScratchPad.recorded.should eql []
      end
    end

    describe "with a negative step" do
      it "yields while decreasing self by step until stop is reached" do
        5.send(@method, *@step_args.call(1, -1), &@prc)
        ScratchPad.recorded.should eql [5, 4, 3, 2, 1]
      end

      it "yields once when self equals stop" do
        5.send(@method, *@step_args.call(5, -1), &@prc)
        ScratchPad.recorded.should eql [5]
      end

      it "does not yield when self is less than stop" do
        1.send(@method, *@step_args.call(5, -1), &@prc)
        ScratchPad.recorded.should == []
      end
    end
  end

  describe "when at least one of self, stop or step is a Float" do
    it "yields Floats even if only self is a Float" do
      1.5.send(@method, *@step_args.call(5, 1)) { |x| x.should be_an_instance_of(Float) }
    end

    it "yields Floats even if only stop is a Float" do
      1.send(@method, *@step_args.call(5.0, 1)) { |x| x.should be_an_instance_of(Float) }
    end

    it "yields Floats even if only step is a Float" do
      1.send(@method, *@step_args.call(5, 1.0)) { |x| x.should be_an_instance_of(Float) }
    end

    describe "with a positive step" do
      it "yields while increasing self by step while < stop" do
        1.5.send(@method, *@step_args.call(5, 1), &@prc)
        ScratchPad.recorded.should eql [1.5, 2.5, 3.5, 4.5]
      end

      it "yields once when self equals stop" do
        1.5.send(@method, *@step_args.call(1.5, 1), &@prc)
        ScratchPad.recorded.should eql [1.5]
      end

      it "does not yield when self is greater than stop" do
        2.5.send(@method, *@step_args.call(1.5, 1), &@prc)
        ScratchPad.recorded.should == []
      end

      it "is careful about not yielding a value greater than limit" do
        # As 9*1.3+1.0 == 12.700000000000001 > 12.7, we test:
        1.0.send(@method, *@step_args.call(12.7, 1.3), &@prc)
        ScratchPad.recorded.should eql [1.0, 2.3, 3.6, 4.9, 6.2, 7.5, 8.8, 10.1, 11.4, 12.7]
      end
    end

    describe "with a negative step" do
      it "yields while decreasing self by step while self > stop" do
        5.send(@method, *@step_args.call(1.5, -1), &@prc)
        ScratchPad.recorded.should eql [5.0, 4.0, 3.0, 2.0]
      end

      it "yields once when self equals stop" do
        1.5.send(@method, *@step_args.call(1.5, -1), &@prc)
        ScratchPad.recorded.should eql [1.5]
      end

      it "does not yield when self is less than stop" do
        1.send(@method, *@step_args.call(5, -1.5), &@prc)
        ScratchPad.recorded.should == []
      end

      it "is careful about not yielding a value smaller than limit" do
        # As -9*1.3-1.0 == -12.700000000000001 < -12.7, we test:
        -1.0.send(@method, *@step_args.call(-12.7, -1.3), &@prc)
        ScratchPad.recorded.should eql [-1.0, -2.3, -3.6, -4.9, -6.2, -7.5, -8.8, -10.1, -11.4, -12.7]
      end
    end

    describe "with a positive Infinity step" do
      it "yields once if self < stop" do
        42.send(@method, *@step_args.call(100, infinity_value), &@prc)
        ScratchPad.recorded.should eql [42.0]
      end

      it "yields once when stop is Infinity" do
        42.send(@method, *@step_args.call(infinity_value, infinity_value), &@prc)
        ScratchPad.recorded.should eql [42.0]
      end

      it "yields once when self equals stop" do
        42.send(@method, *@step_args.call(42, infinity_value), &@prc)
        ScratchPad.recorded.should eql [42.0]
      end

      it "yields once when self and stop are Infinity" do
        (infinity_value).send(@method, *@step_args.call(infinity_value, infinity_value), &@prc)
        ScratchPad.recorded.should == [infinity_value]
      end

      it "does not yield when self > stop" do
        100.send(@method, *@step_args.call(42, infinity_value), &@prc)
        ScratchPad.recorded.should == []
      end

      it "does not yield when stop is -Infinity" do
        42.send(@method, *@step_args.call(-infinity_value, infinity_value), &@prc)
        ScratchPad.recorded.should == []
      end
    end

    describe "with a negative Infinity step" do
      it "yields once if self > stop" do
        42.send(@method, *@step_args.call(6, -infinity_value), &@prc)
        ScratchPad.recorded.should eql [42.0]
      end

      it "yields once if stop is -Infinity" do
        42.send(@method, *@step_args.call(-infinity_value, -infinity_value), &@prc)
        ScratchPad.recorded.should eql [42.0]
      end

      it "yields once when self equals stop" do
        42.send(@method, *@step_args.call(42, -infinity_value), &@prc)
        ScratchPad.recorded.should eql [42.0]
      end

      it "yields once when self and stop are Infinity" do
        (infinity_value).send(@method, *@step_args.call(infinity_value, -infinity_value), &@prc)
        ScratchPad.recorded.should == [infinity_value]
      end

      it "does not yield when self > stop" do
        42.send(@method, *@step_args.call(100, -infinity_value), &@prc)
        ScratchPad.recorded.should == []
      end

      it "does not yield when stop is Infinity" do
        42.send(@method, *@step_args.call(infinity_value, -infinity_value), &@prc)
        ScratchPad.recorded.should == []
      end
    end

    describe "with a Infinity stop and a positive step" do
      it "does not yield when self is infinity" do
        (infinity_value).send(@method, *@step_args.call(infinity_value, 1), &@prc)
        ScratchPad.recorded.should == []
      end
    end

    describe "with a Infinity stop and a negative step" do
      it "does not yield when self is negative infinity" do
        (-infinity_value).send(@method, *@step_args.call(infinity_value, -1), &@prc)
        ScratchPad.recorded.should == []
      end

      it "does not yield when self is positive infinity" do
        infinity_value.send(@method, *@step_args.call(infinity_value, -1), &@prc)
        ScratchPad.recorded.should == []
      end
    end

    describe "with a negative Infinity stop and a positive step" do
      it "does not yield when self is negative infinity" do
        (-infinity_value).send(@method, *@step_args.call(-infinity_value, 1), &@prc)
        ScratchPad.recorded.should == []
      end
    end

    describe "with a negative Infinity stop and a negative step" do
      it "does not yield when self is negative infinity" do
        (-infinity_value).send(@method, *@step_args.call(-infinity_value, -1), &@prc)
        ScratchPad.recorded.should == []
      end
    end

  end

  describe "when step is a String" do
    error = nil
    ruby_version_is ""..."2.4" do
      error = ArgumentError
    end
    ruby_version_is "2.4"..."2.5" do
      error = TypeError
    end
    ruby_version_is "2.5" do
      error = ArgumentError
    end

    describe "with self and stop as Fixnums" do
      it "raises an #{error} when step is a numeric representation" do
        lambda { 1.send(@method, *@step_args.call(5, "1")) {} }.should raise_error(error)
        lambda { 1.send(@method, *@step_args.call(5, "0.1")) {} }.should raise_error(error)
        lambda { 1.send(@method, *@step_args.call(5, "1/3")) {} }.should raise_error(error)
      end
      it "raises an #{error} with step as an alphanumeric string" do
        lambda { 1.send(@method, *@step_args.call(5, "foo")) {} }.should raise_error(error)
      end
    end

    describe "with self and stop as Floats" do
      it "raises an #{error} when step is a numeric representation" do
        lambda { 1.1.send(@method, *@step_args.call(5.1, "1")) {} }.should raise_error(error)
        lambda { 1.1.send(@method, *@step_args.call(5.1, "0.1")) {} }.should raise_error(error)
        lambda { 1.1.send(@method, *@step_args.call(5.1, "1/3")) {} }.should raise_error(error)
      end
      it "raises an #{error} with step as an alphanumeric string" do
        lambda { 1.1.send(@method, *@step_args.call(5.1, "foo")) {} }.should raise_error(error)
      end
    end
  end

  it "does not rescue ArgumentError exceptions" do
    lambda { 1.send(@method, *@step_args.call(2)) { raise ArgumentError, "" }}.should raise_error(ArgumentError)
  end

  it "does not rescue TypeError exceptions" do
    lambda { 1.send(@method, *@step_args.call(2)) { raise TypeError, "" } }.should raise_error(TypeError)
  end

  describe "when no block is given" do
    it "returns an Enumerator when step is 0" do
      1.send(@method, *@step_args.call(2, 0)).should be_an_instance_of(Enumerator)
    end

    it "returns an Enumerator when not passed a block and self > stop" do
      1.send(@method, *@step_args.call(0, 2)).should be_an_instance_of(Enumerator)
    end

    it "returns an Enumerator when not passed a block and self < stop" do
      1.send(@method, *@step_args.call(2, 3)).should be_an_instance_of(Enumerator)
    end

    it "returns an Enumerator that uses the given step" do
      0.send(@method, *@step_args.call(5, 2)).to_a.should eql [0, 2, 4]
    end

    describe "when step is a String" do
      describe "with self and stop as Fixnums" do
        it "returns an Enumerator" do
          1.send(@method, *@step_args.call(5, "foo")).should be_an_instance_of(Enumerator)
        end
      end

      describe "with self and stop as Floats" do
        it "returns an Enumerator" do
          1.1.send(@method, *@step_args.call(5.1, "foo")).should be_an_instance_of(Enumerator)
        end
      end
    end

    describe "returned Enumerator" do
      describe "size" do
        describe "when step is a String" do
          error = nil
          ruby_version_is ""..."2.4" do
            error = ArgumentError
          end
          ruby_version_is "2.4"..."2.5" do
            error = TypeError
          end
          ruby_version_is "2.5" do
            error = ArgumentError
          end

          describe "with self and stop as Fixnums" do
            it "raises an #{error} when step is a numeric representation" do
              lambda { 1.send(@method, *@step_args.call(5, "1")).size }.should raise_error(error)
              lambda { 1.send(@method, *@step_args.call(5, "0.1")).size }.should raise_error(error)
              lambda { 1.send(@method, *@step_args.call(5, "1/3")).size }.should raise_error(error)
            end
            it "raises an #{error} with step as an alphanumeric string" do
              lambda { 1.send(@method, *@step_args.call(5, "foo")).size }.should raise_error(error)
            end
          end

          describe "with self and stop as Floats" do
            it "raises an #{error} when step is a numeric representation" do
              lambda { 1.1.send(@method, *@step_args.call(5.1, "1")).size }.should raise_error(error)
              lambda { 1.1.send(@method, *@step_args.call(5.1, "0.1")).size }.should raise_error(error)
              lambda { 1.1.send(@method, *@step_args.call(5.1, "1/3")).size }.should raise_error(error)
            end
            it "raises an #{error} with step as an alphanumeric string" do
              lambda { 1.1.send(@method, *@step_args.call(5.1, "foo")).size }.should raise_error(error)
            end
          end
        end

        describe "when self, stop and step are Fixnums and step is positive" do
          it "returns the difference between self and stop divided by the number of steps" do
            5.send(@method, *@step_args.call(10, 11)).size.should == 1
            5.send(@method, *@step_args.call(10, 6)).size.should == 1
            5.send(@method, *@step_args.call(10, 5)).size.should == 2
            5.send(@method, *@step_args.call(10, 4)).size.should == 2
            5.send(@method, *@step_args.call(10, 2)).size.should == 3
            5.send(@method, *@step_args.call(10, 1)).size.should == 6
            5.send(@method, *@step_args.call(10)).size.should == 6
            10.send(@method, *@step_args.call(10, 1)).size.should == 1
          end

          it "returns 0 if value > limit" do
            11.send(@method, *@step_args.call(10, 1)).size.should == 0
          end
        end

        describe "when self, stop and step are Fixnums and step is negative" do
          it "returns the difference between self and stop divided by the number of steps" do
            10.send(@method, *@step_args.call(5, -11)).size.should == 1
            10.send(@method, *@step_args.call(5, -6)).size.should == 1
            10.send(@method, *@step_args.call(5, -5)).size.should == 2
            10.send(@method, *@step_args.call(5, -4)).size.should == 2
            10.send(@method, *@step_args.call(5, -2)).size.should == 3
            10.send(@method, *@step_args.call(5, -1)).size.should == 6
            10.send(@method, *@step_args.call(10, -1)).size.should == 1
          end

          it "returns 0 if value < limit" do
            10.send(@method, *@step_args.call(11, -1)).size.should == 0
          end
        end

        describe "when self, stop or step is a Float" do
          describe "and step is positive" do
            it "returns the difference between self and stop divided by the number of steps" do
              5.send(@method, *@step_args.call(10, 11.0)).size.should == 1
              5.send(@method, *@step_args.call(10, 6.0)).size.should == 1
              5.send(@method, *@step_args.call(10, 5.0)).size.should == 2
              5.send(@method, *@step_args.call(10, 4.0)).size.should == 2
              5.send(@method, *@step_args.call(10, 2.0)).size.should == 3
              5.send(@method, *@step_args.call(10, 0.5)).size.should == 11
              5.send(@method, *@step_args.call(10, 1.0)).size.should == 6
              5.send(@method, *@step_args.call(10.5)).size.should == 6
              10.send(@method, *@step_args.call(10, 1.0)).size.should == 1
            end

            it "returns 0 if value > limit" do
              10.send(@method, *@step_args.call(5.5)).size.should == 0
              11.send(@method, *@step_args.call(10, 1.0)).size.should == 0
              11.send(@method, *@step_args.call(10, 1.5)).size.should == 0
              10.send(@method, *@step_args.call(5, infinity_value)).size.should == 0
            end

            it "returns 1 if step is infinity_value" do
              5.send(@method, *@step_args.call(10, infinity_value)).size.should == 1
            end
          end

          describe "and step is negative" do
            it "returns the difference between self and stop divided by the number of steps" do
              10.send(@method, *@step_args.call(5, -11.0)).size.should == 1
              10.send(@method, *@step_args.call(5, -6.0)).size.should == 1
              10.send(@method, *@step_args.call(5, -5.0)).size.should == 2
              10.send(@method, *@step_args.call(5, -4.0)).size.should == 2
              10.send(@method, *@step_args.call(5, -2.0)).size.should == 3
              10.send(@method, *@step_args.call(5, -0.5)).size.should == 11
              10.send(@method, *@step_args.call(5, -1.0)).size.should == 6
              10.send(@method, *@step_args.call(10, -1.0)).size.should == 1
            end

            it "returns 0 if value < limit" do
              10.send(@method, *@step_args.call(11, -1.0)).size.should == 0
              10.send(@method, *@step_args.call(11, -1.5)).size.should == 0
              5.send(@method, *@step_args.call(10, -infinity_value)).size.should == 0
            end

            it "returns 1 if step is infinity_value" do
              10.send(@method, *@step_args.call(5, -infinity_value)).size.should == 1
            end
          end
        end

        describe "when stop is not passed" do
          it "returns infinity_value" do
            1.send(@method, *@step_args.call()).size.should == infinity_value
          end
        end

        describe "when stop is nil" do
          it "returns infinity_value" do
            1.send(@method, *@step_args.call(nil, 5)).size.should == infinity_value
          end
        end
      end
    end
  end
end
