require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../../../shared/file/writable', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "File::Stat#writable?" do
  it_behaves_like :file_writable, :writable?, FileStat
end
