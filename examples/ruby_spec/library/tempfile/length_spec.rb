require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/length', __FILE__)
require 'tempfile'

describe "Tempfile#length" do
  it_behaves_like :tempfile_length, :length
end
