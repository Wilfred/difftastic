require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../shared/last_response_code', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)

describe "Net::FTP#lastresp" do
  it_behaves_like :net_ftp_last_response_code, :lastresp
end
