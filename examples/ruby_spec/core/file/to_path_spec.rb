require File.expand_path('../../../spec_helper', __FILE__)

describe "File#to_path" do
  before :each do
    @name = "file_to_path"
    @path = tmp(@name)
    touch @path
  end

  after :each do
    @file.close if @file and !@file.closed?
    rm_r @path
  end

  it "returns a String" do
    @file = File.new @path
    @file.to_path.should be_an_instance_of(String)
  end

  it "does not normalise the path it returns" do
    Dir.chdir(tmp("")) do
      unorm = "./#{@name}"
      @file = File.new unorm
      @file.to_path.should == unorm
    end
  end

  it "does not canonicalize the path it returns" do
    dir = File.basename tmp("")
    path = "#{tmp("")}../#{dir}/#{@name}"
    @file = File.new path
    @file.to_path.should == path
  end

  it "does not absolute-ise the path it returns" do
    Dir.chdir(tmp("")) do
      @file = File.new @name
      @file.to_path.should == @name
    end
  end

  with_feature :encoding do
    it "preserves the encoding of the path" do
      path = @path.force_encoding("euc-jp")
      @file = File.new path
      @file.to_path.encoding.should == Encoding.find("euc-jp")
    end
  end
end
