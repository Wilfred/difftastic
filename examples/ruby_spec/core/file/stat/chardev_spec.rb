require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../../../shared/file/chardev', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "File::Stat#chardev?" do
  it_behaves_like :file_chardev, :chardev?, FileStat
end
