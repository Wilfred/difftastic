require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::MD5#inspect" do

  it "returns a Ruby object representation" do
    cur_digest = Digest::MD5.new
    cur_digest.inspect.should == "#<#{MD5Constants::Klass}: #{cur_digest.hexdigest()}>"
  end

end

