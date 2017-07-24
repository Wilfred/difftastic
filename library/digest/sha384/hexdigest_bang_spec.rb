require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::SHA384#hexdigest!" do

  it "returns a hexdigest and resets the state" do
    cur_digest = Digest::SHA384.new

    cur_digest << SHA384Constants::Contents
    cur_digest.hexdigest!.should == SHA384Constants::Hexdigest
    cur_digest.hexdigest.should == SHA384Constants::BlankHexdigest
  end

end
