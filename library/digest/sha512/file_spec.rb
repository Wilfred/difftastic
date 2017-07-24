require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)
require File.expand_path('../../../../core/file/shared/read', __FILE__)

describe "Digest::SHA512.file" do

  describe "when passed a path to a file that exists" do
    before :each do
      @file = tmp("md5_temp")
      touch(@file, 'wb') {|f| f.write SHA512Constants::Contents }
    end

    after :each do
      rm_r @file
    end

    it "returns a Digest::SHA512 object" do
      Digest::SHA512.file(@file).should be_kind_of(Digest::SHA512)
    end

    it "returns a Digest::SHA512 object with the correct digest" do
      Digest::SHA512.file(@file).digest.should == SHA512Constants::Digest
    end

    it "calls #to_str on an object and returns the Digest::SHA512 with the result" do
      obj = mock("to_str")
      obj.should_receive(:to_str).and_return(@file)
      result = Digest::SHA512.file(obj)
      result.should be_kind_of(Digest::SHA512)
      result.digest.should == SHA512Constants::Digest
    end
  end

  it_behaves_like :file_read_directory, :file, Digest::SHA512

  it "raises a Errno::ENOENT when passed a path that does not exist" do
    lambda { Digest::SHA512.file("") }.should raise_error(Errno::ENOENT)
  end

  it "raises a TypeError when passed nil" do
    lambda { Digest::SHA512.file(nil) }.should raise_error(TypeError)
  end
end
