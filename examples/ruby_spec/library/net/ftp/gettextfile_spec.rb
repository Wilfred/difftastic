require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)
require File.expand_path('../shared/gettextfile', __FILE__)

describe "Net::FTP#gettextfile" do
  it_behaves_like :net_ftp_gettextfile, :gettextfile
end
