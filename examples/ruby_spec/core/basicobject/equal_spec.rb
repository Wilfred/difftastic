require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/kernel/equal', __FILE__)

describe "BasicObject#equal?" do
  it "is a public instance method" do
    BasicObject.should have_public_instance_method(:equal?)
  end

  it_behaves_like :object_equal, :equal?

  it "is unaffected by overriding __id__" do
    o1 = mock("object")
    o2 = mock("object")
    def o1.__id__; 10; end
    def o2.__id__; 10; end
    o1.equal?(o2).should be_false
  end

  it "is unaffected by overriding object_id" do
    o1 = mock("object")
    o1.stub!(:object_id).and_return(10)
    o2 = mock("object")
    o2.stub!(:object_id).and_return(10)
    o1.equal?(o2).should be_false
  end

  it "is unaffected by overriding ==" do
    # different objects, overriding == to return true
    o1 = mock("object")
    o1.stub!(:==).and_return(true)
    o2 = mock("object")
    o1.equal?(o2).should be_false

    # same objects, overriding == to return false
    o3 = mock("object")
    o3.stub!(:==).and_return(false)
    o3.equal?(o3).should be_true
  end

  it "is unaffected by overriding eql?" do
    # different objects, overriding eql? to return true
    o1 = mock("object")
    o1.stub!(:eql?).and_return(true)
    o2 = mock("object")
    o1.equal?(o2).should be_false

    # same objects, overriding eql? to return false
    o3 = mock("object")
    o3.stub!(:eql?).and_return(false)
    o3.equal?(o3).should be_true
  end
end
