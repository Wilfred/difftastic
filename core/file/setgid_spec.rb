require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/setgid', __FILE__)

describe "File.setgid?" do
  it_behaves_like :file_setgid, :setgid?, File
end

describe "File.setgid?" do
  before :each do
    @name = tmp('test.txt')
    touch @name
  end

  after :each do
    rm_r @name
  end

  it "returns false if the file was just made" do
    File.setgid?(@name).should == false
  end

  it "returns false if the file does not exist" do
    rm_r @name # delete it prematurely, just for this part
    File.setgid?(@name).should == false
  end

  as_superuser do
    platform_is_not :windows do
      it "returns true when the gid bit is set" do
        system "chmod g+s #{@name}"

        File.setgid?(@name).should == true
      end
    end
  end
end
