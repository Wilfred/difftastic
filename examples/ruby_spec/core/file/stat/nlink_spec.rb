require File.expand_path('../../../../spec_helper', __FILE__)

describe "File::Stat#nlink" do
  before :each do
    @file = tmp("stat_nlink")
    @link = @file + ".lnk"
    touch @file
  end

  after :each do
    rm_r @link, @file
  end

  platform_is_not :windows do
    it "returns the number of links to a file" do
      File::Stat.new(@file).nlink.should == 1
      File.link(@file, @link)
      File::Stat.new(@file).nlink.should == 2
    end
  end
end
