require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)
require File.expand_path('../shared/gettextfile', __FILE__)
require File.expand_path('../shared/getbinaryfile', __FILE__)

describe "Net::FTP#get (binary mode)" do
  before :each do
    @binary_mode = true
  end

  it_behaves_like :net_ftp_getbinaryfile, :get
end

describe "Net::FTP#get (text mode)" do
  before :each do
    @binary_mode = false
  end

  it_behaves_like :net_ftp_gettextfile, :get
end
