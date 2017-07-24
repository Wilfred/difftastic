require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/clone', __FILE__)

describe "Array#clone" do
  it_behaves_like :array_clone, :clone

  it "copies frozen status from the original" do
    a = [1, 2, 3, 4]
    b = [1, 2, 3, 4]
    a.freeze
    aa = a.clone
    bb = b.clone

    aa.frozen?.should == true
    bb.frozen?.should == false
  end

  it "copies singleton methods" do
    a = [1, 2, 3, 4]
    b = [1, 2, 3, 4]
    def a.a_singleton_method; end
    aa = a.clone
    bb = b.clone

    a.respond_to?(:a_singleton_method).should be_true
    b.respond_to?(:a_singleton_method).should be_false
    aa.respond_to?(:a_singleton_method).should be_true
    bb.respond_to?(:a_singleton_method).should be_false
  end
end
