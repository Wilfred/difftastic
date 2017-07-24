require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../../../shared/file/writable_real', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "File::Stat#writable_real?" do
  it_behaves_like :file_writable_real, :writable_real?, FileStat
end
