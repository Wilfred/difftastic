require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)
require File.expand_path('../shared/puttextfile', __FILE__)

describe "Net::FTP#puttextfile" do
  it_behaves_like :net_ftp_puttextfile, :puttextfile
end
