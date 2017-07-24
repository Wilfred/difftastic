require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../../../shared/file/socket', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "File::Stat#socket?" do
  it_behaves_like :file_socket, :socket?, FileStat
end

describe "File::Stat#socket?" do
  it "needs to be reviewed for spec completeness"
end
