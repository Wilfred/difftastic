require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)
require File.expand_path('../shared/getbinaryfile', __FILE__)

describe "Net::FTP#getbinaryfile" do
  it_behaves_like :net_ftp_getbinaryfile, :getbinaryfile
end
