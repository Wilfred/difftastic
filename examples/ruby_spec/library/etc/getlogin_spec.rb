require File.expand_path('../../../spec_helper', __FILE__)
require 'etc'

describe "Etc.getlogin" do
  it "returns the name associated with the current login activity" do
    getlogin_null = false

    # POSIX logname(1) shows getlogin(2)'s result
    # NOTE: Etc.getlogin returns ENV['USER'] if getlogin(2) returns NULL
    begin
      # make Etc.getlogin to return nil if getlogin(3) returns NULL
      envuser, ENV['USER'] = ENV['USER'], nil
      if Etc.getlogin
        # Etc.getlogin returns the same result of logname(2)
        # if it returns non NULL
        Etc.getlogin.should == `id -un`.chomp
      else
        # Etc.getlogin may return nil if the login name is not set
        # because of chroot or sudo or something.
        Etc.getlogin.should be_nil
        getlogin_null = true
      end
    ensure
      ENV['USER'] = envuser
    end

    # if getlogin(2) returns NULL, Etc.getlogin returns ENV['USER']
    if getlogin_null
      Etc.getlogin.should == ENV['USER']
    end
  end
end
