require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)
require File.expand_path('../shared/puttextfile', __FILE__)
require File.expand_path('../shared/putbinaryfile', __FILE__)

describe "Net::FTP#put (binary mode)" do
  before :each do
    @binary_mode = true
  end

  it_behaves_like :net_ftp_putbinaryfile, :put
end

describe "Net::FTP#put (text mode)" do
  before :each do
    @binary_mode = false
  end

  it_behaves_like :net_ftp_puttextfile, :put
end
