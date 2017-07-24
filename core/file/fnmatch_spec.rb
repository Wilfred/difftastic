require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/fnmatch', __FILE__)

describe "File.fnmatch" do
  it_behaves_like(:file_fnmatch, :fnmatch)
end

describe "File.fnmatch?" do
  it_behaves_like(:file_fnmatch, :fnmatch?)
end
