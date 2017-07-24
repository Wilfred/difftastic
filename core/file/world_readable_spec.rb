require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/world_readable', __FILE__)

describe "File.world_readable?" do
  it_behaves_like(:file_world_readable, :world_readable?, File)

  it "returns nil if the file does not exist" do
    file = rand.to_s + $$.to_s
    File.exist?(file).should be_false
    File.world_readable?(file).should be_nil
  end
end
