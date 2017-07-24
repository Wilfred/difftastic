require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::MD5#==" do

  it "equals itself" do
    cur_digest = Digest::MD5.new
    cur_digest.should == cur_digest
  end

  it "equals the string representing its hexdigest" do
    cur_digest = Digest::MD5.new
    cur_digest.should == MD5Constants::BlankHexdigest
  end

  it "equals the appropriate object that responds to to_str" do
    # blank digest
    cur_digest = Digest::MD5.new
    obj = mock(MD5Constants::BlankHexdigest)
    obj.should_receive(:to_str).and_return(MD5Constants::BlankHexdigest)
    cur_digest.should == obj

    # non-blank digest
    cur_digest = Digest::MD5.new
    cur_digest << "test"
    d_value = cur_digest.hexdigest
    (obj = mock(d_value)).should_receive(:to_str).and_return(d_value)
    cur_digest.should == obj
  end

  it "equals the same digest for a different object" do
    cur_digest = Digest::MD5.new
    cur_digest2 = Digest::MD5.new
    cur_digest.should == cur_digest2
  end

end

