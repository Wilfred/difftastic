require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../../../shared/file/zero', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "File::Stat#zero?" do
  it_behaves_like :file_zero, :zero?, FileStat
end
