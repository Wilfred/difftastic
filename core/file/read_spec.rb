require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/read', __FILE__)

describe "File.read" do
  it_behaves_like :file_read_directory, :read, File
end
