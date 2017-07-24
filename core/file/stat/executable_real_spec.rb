require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../../../shared/file/executable_real', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "File::Stat#executable_real?" do
  it_behaves_like :file_executable_real, :executable_real?, FileStat
end
