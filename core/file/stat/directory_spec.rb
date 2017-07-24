require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../../../shared/file/directory', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "File::Stat#directory?" do
  it_behaves_like :file_directory, :directory?, FileStat
end
