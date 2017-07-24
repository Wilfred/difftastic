require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/setuid', __FILE__)

describe "File.setuid?" do
  it_behaves_like :file_setuid, :setuid?, File
end

describe "File.setuid?" do
  before :each do
    @name = tmp('test.txt')
    touch @name
  end

  after :each do
    rm_r @name
  end

  it "returns false if the file was just made" do
    File.setuid?(@name).should == false
  end

  it "returns false if the file does not exist" do
    rm_r @name # delete it prematurely, just for this part
    File.setuid?(@name).should == false
  end

  platform_is_not :windows do
    it "returns true when the gid bit is set" do
      platform_is :solaris do
        # Solaris requires execute bit before setting suid
        system "chmod u+x #{@name}"
      end
      system "chmod u+s #{@name}"

      File.setuid?(@name).should == true
    end
  end
end
