require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/unlink', __FILE__)
require 'tempfile'

describe "Tempfile#delete" do
  it_behaves_like :tempfile_unlink, :delete
end
