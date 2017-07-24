require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/jd', __FILE__)
require 'date'

describe "Date#jd" do

  it "determines the Julian day for a Date object" do
    Date.civil(2008, 1, 16).jd.should == 2454482
  end

end

describe "Date.jd" do
  it_behaves_like :date_jd, :jd
end
