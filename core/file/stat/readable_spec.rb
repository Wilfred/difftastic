require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../../../shared/file/readable', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "File::Stat#readable?" do
  it_behaves_like :file_readable, :readable?, FileStat
end
