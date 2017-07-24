require File.expand_path('../../../spec_helper', __FILE__)

describe "ObjectSpace._id2ref" do
  it "converts an object id to a reference to the object" do
    s = "I am a string"
    r = ObjectSpace._id2ref(s.object_id)
    r.should == s
  end

  it "retrieves a Fixnum by object_id" do
    f = 1
    r = ObjectSpace._id2ref(f.object_id)
    r.should == f
  end

  it "retrieves a Symbol by object_id" do
    s = :sym
    r = ObjectSpace._id2ref(s.object_id)
    r.should == s
  end

  it 'raises RangeError when an object could not be found' do
    proc { ObjectSpace._id2ref(1 << 60) }.should raise_error(RangeError)
  end
end
