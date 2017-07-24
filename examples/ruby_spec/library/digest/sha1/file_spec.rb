require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)
require File.expand_path('../../../../core/file/shared/read', __FILE__)

describe "Digest::SHA1.file" do

  describe "when passed a path to a file that exists" do
    before :each do
      @file = tmp("md5_temp")
      touch(@file, 'wb') {|f| f.write SHA1Constants::Contents }
    end

    after :each do
      rm_r @file
    end

    it "returns a Digest::SHA1 object" do
      Digest::SHA1.file(@file).should be_kind_of(Digest::SHA1)
    end

    it "returns a Digest::SHA1 object with the correct digest" do
      Digest::SHA1.file(@file).digest.should == SHA1Constants::Digest
    end

    it "calls #to_str on an object and returns the Digest::SHA1 with the result" do
      obj = mock("to_str")
      obj.should_receive(:to_str).and_return(@file)
      result = Digest::SHA1.file(obj)
      result.should be_kind_of(Digest::SHA1)
      result.digest.should == SHA1Constants::Digest
    end
  end

  it_behaves_like :file_read_directory, :file, Digest::SHA1

  it "raises a Errno::ENOENT when passed a path that does not exist" do
    lambda { Digest::SHA1.file("") }.should raise_error(Errno::ENOENT)
  end

  it "raises a TypeError when passed nil" do
    lambda { Digest::SHA1.file(nil) }.should raise_error(TypeError)
  end
end
