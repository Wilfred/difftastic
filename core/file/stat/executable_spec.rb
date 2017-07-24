require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../../../shared/file/executable', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "File::Stat#executable?" do
  it_behaves_like :file_executable, :executable?, FileStat
end
