require File.expand_path('../../../spec_helper', __FILE__)
require 'tempfile'

describe "Tempfile#initialize" do
  before :each do
    @tempfile = Tempfile.allocate
  end

  after :each do
    @tempfile.close!
  end

  it "opens a new tempfile with the passed name in the passed directory" do
    @tempfile.send(:initialize, "basename", tmp(""))
    File.exist?(@tempfile.path).should be_true

    tmpdir = tmp("")
    path = @tempfile.path

    platform_is :windows do
      # on Windows, both types of slashes are OK,
      # but the tmp helper always uses '/'
      path.gsub!('\\', '/')
    end

    path[0, tmpdir.length].should == tmpdir
    path.should include("basename")
  end

  platform_is_not :windows do
    it "sets the permisssions on the tempfile to 0600" do
      @tempfile.send(:initialize, "basename", tmp(""))
      File.stat(@tempfile.path).mode.should == 0100600
    end
  end

  it "accepts encoding options" do
    @tempfile.send(:initialize, ['shiftjis', 'yml'], encoding: 'SHIFT_JIS')
    @tempfile.external_encoding.should == Encoding::Shift_JIS
  end
end
