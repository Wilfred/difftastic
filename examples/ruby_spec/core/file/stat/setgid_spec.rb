require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../../../shared/file/setgid', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "File::Stat#setgid?" do
  it_behaves_like :file_setgid, :setgid?, FileStat
end

describe "File::Stat#setgid?" do
  it "needs to be reviewed for spec completeness"
end
