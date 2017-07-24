require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel.catch" do
  before :each do
    ScratchPad.clear
  end

  it "executes its block and catches a thrown value matching its argument" do
    catch :thrown_key do
      ScratchPad.record :catch_block
      throw :thrown_key
      ScratchPad.record :throw_failed
    end
    ScratchPad.recorded.should == :catch_block
  end

  it "returns the second value passed to throw" do
    catch(:thrown_key) { throw :thrown_key, :catch_value }.should == :catch_value
  end

  it "returns the last expression evaluated if throw was not called" do
    catch(:thrown_key) { 1; :catch_block }.should == :catch_block
  end

  it "passes the given symbol to its block" do
    catch :thrown_key do |tag|
      ScratchPad.record tag
    end
    ScratchPad.recorded.should == :thrown_key
  end

  it "raises an ArgumentError if a Symbol is thrown for a String catch value" do
    lambda { catch("exit") { throw :exit } }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if a String with different identity is thrown" do
    lambda { catch("exit") { throw "exit" } }.should raise_error(ArgumentError)
  end

  it "catches a Symbol when thrown a matching Symbol" do
    catch :thrown_key do
      ScratchPad.record :catch_block
      throw :thrown_key
    end
    ScratchPad.recorded.should == :catch_block
  end

  it "catches a String when thrown a String with the same identity" do
    key = "thrown_key"
    catch key do
      ScratchPad.record :catch_block
      throw key
    end
    ScratchPad.recorded.should == :catch_block
  end

  it "accepts an object as an argument" do
    catch(Object.new) { :catch_block }.should == :catch_block
  end

  it "yields an object when called without arguments" do
    catch { |tag| tag }.should be_an_instance_of(Object)
  end

  it "can be used even in a method different from where throw is called" do
    class CatchSpecs
      def self.throwing_method
        throw :blah, :thrown_value
      end
      def self.catching_method
        catch :blah do
          throwing_method
        end
      end
    end
    CatchSpecs.catching_method.should == :thrown_value
  end

  describe "when nested" do
    before :each do
      ScratchPad.record []
    end

    it "catches across invocation boundaries" do
      catch :one do
        ScratchPad << 1
        catch :two do
          ScratchPad << 2
          catch :three do
            ScratchPad << 3
            throw :one
            ScratchPad << 4
          end
          ScratchPad << 5
        end
        ScratchPad << 6
      end

      ScratchPad.recorded.should == [1, 2, 3]
    end

    it "catches in the nested invocation with the same key object" do
      catch :thrown_key do
        ScratchPad << 1
        catch :thrown_key do
          ScratchPad << 2
          throw :thrown_key
          ScratchPad << 3
        end
        ScratchPad << 4
      end

      ScratchPad.recorded.should == [1, 2, 4]
    end
  end

  it "raises LocalJumpError if no block is given" do
    lambda { catch :blah }.should raise_error(LocalJumpError)
  end
end

describe "Kernel#catch" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:catch)
  end
end
