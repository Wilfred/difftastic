require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::SHA384#inspect" do

  it "returns a Ruby object representation" do
    cur_digest = Digest::SHA384.new
    cur_digest.inspect.should == "#<#{SHA384Constants::Klass}: #{cur_digest.hexdigest()}>"
  end

end

