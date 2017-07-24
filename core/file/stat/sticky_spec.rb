require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../../../shared/file/sticky', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "File::Stat#sticky?" do
  it_behaves_like :file_sticky, :sticky?, FileStat
end

describe "File::Stat#sticky?" do
  it "needs to be reviewed for spec completeness"
end
