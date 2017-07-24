require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)
require File.expand_path('../shared/list', __FILE__)

describe "Net::FTP#dir" do
  it_behaves_like :net_ftp_list, :dir
end
