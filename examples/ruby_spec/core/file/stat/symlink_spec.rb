require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../../../shared/file/symlink', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "File::Stat#symlink?" do
  it_behaves_like :file_symlink, :symlink?, FileStat
end
