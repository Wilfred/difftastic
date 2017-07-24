require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)
require File.expand_path('../shared/putbinaryfile', __FILE__)

describe "Net::FTP#putbinaryfile" do
  it_behaves_like :net_ftp_putbinaryfile, :putbinaryfile
end
