require File.expand_path('../../../spec_helper', __FILE__)

describe "StopIteration" do
  it "is a subclass of IndexError" do
    StopIteration.superclass.should equal(IndexError)
  end
end

describe "StopIteration#result" do
  before :each do
    obj = Object.new
    def obj.each
      yield :yield_returned_1
      yield :yield_returned_2
      :method_returned
    end
    @enum = obj.to_enum
  end

  it "returns the method-returned-object from an Enumerator" do
    @enum.next
    @enum.next
    lambda { @enum.next }.should(
      raise_error(StopIteration) do |error|
        error.result.should equal(:method_returned)
      end
    )
  end
end
