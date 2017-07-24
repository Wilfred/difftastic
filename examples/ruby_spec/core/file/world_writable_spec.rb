require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/world_writable', __FILE__)

describe "File.world_writable?" do
  it_behaves_like(:file_world_writable, :world_writable?, File)

  it "returns nil if the file does not exist" do
    file = rand.to_s + $$.to_s
    File.exist?(file).should be_false
    File.world_writable?(file).should be_nil
  end
end
