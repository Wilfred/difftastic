require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/size', __FILE__)

describe "FileTest.size?" do
  it_behaves_like :file_size,                     :size?, FileTest
end

describe "FileTest.size?" do
  it_behaves_like :file_size_nil_when_missing,    :size?, FileTest
end

describe "FileTest.size?" do
  it_behaves_like :file_size_nil_when_empty,      :size?, FileTest
end

describe "FileTest.size?" do
  it_behaves_like :file_size_with_file_argument,  :size?, FileTest
end

describe "FileTest.size" do
  it_behaves_like :file_size,                     :size,  FileTest
end

describe "FileTest.size" do
  it_behaves_like :file_size_raise_when_missing,  :size,  FileTest
end

describe "FileTest.size" do
  it_behaves_like :file_size_0_when_empty,        :size,  FileTest
end

describe "FileTest.size" do
  it_behaves_like :file_size_with_file_argument,  :size,  FileTest
end
