require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../../../shared/file/file', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "File::Stat#file?" do
  it_behaves_like :file_file, :file?, FileStat
end
