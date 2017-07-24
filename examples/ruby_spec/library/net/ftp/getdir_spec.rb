require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../shared/pwd', __FILE__)

describe "Net::FTP#getdir" do
  it_behaves_like :net_ftp_pwd, :getdir
end
