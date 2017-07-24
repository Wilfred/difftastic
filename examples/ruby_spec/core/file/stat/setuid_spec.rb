require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../../../shared/file/setuid', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "File::Stat#setuid?" do
  it_behaves_like :file_setuid, :setuid?, FileStat
end

describe "File::Stat#setuid?" do
  it "needs to be reviewed for spec completeness"
end
