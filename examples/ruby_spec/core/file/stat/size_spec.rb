require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../../../shared/file/size', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "File::Stat.size?" do
  it_behaves_like :file_size,                     :size?, FileStat
  it_behaves_like :file_size_nil_when_empty,      :size?, FileStat
end

describe "File::Stat.size" do
  it_behaves_like :file_size,                     :size,  FileStat
  it_behaves_like :file_size_0_when_empty,        :size,  FileStat
end

describe "File::Stat#size" do
  it "needs to be reviewed for spec completeness"
end

describe "File::Stat#size?" do
  it "needs to be reviewed for spec completeness"
end
