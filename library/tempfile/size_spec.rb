require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/length', __FILE__)
require 'tempfile'

describe "Tempfile#size" do
  it_behaves_like :tempfile_length, :size
end
