require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/socket', __FILE__)
require 'socket'

describe "File.socket?" do
  it_behaves_like :file_socket, :socket?, File
end

describe "File.socket?" do
  it "returns false if file does not exist" do
    File.socket?("I_am_a_bogus_file").should == false
  end

  it "returns false if the file is not a socket" do
    filename = tmp("i_exist")
    touch(filename)

    File.socket?(filename).should == false

    rm_r filename
  end
end

platform_is_not :windows do
  describe "File.socket?" do
    before :each do
      # We need a really short name here.
      # On Linux the path length is limited to 107, see unix(7).
      @name = tmp("s")
      @server = UNIXServer.new @name
    end

    after :each do
      @server.close
      rm_r @name
    end

    it "returns true if the file is a socket" do
      File.socket?(@name).should == true
    end
  end
end
