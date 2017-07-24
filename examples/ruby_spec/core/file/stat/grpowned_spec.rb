require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../../../shared/file/grpowned', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "File::Stat#grpowned?" do
  it_behaves_like :file_grpowned, :grpowned?, FileStat
end
