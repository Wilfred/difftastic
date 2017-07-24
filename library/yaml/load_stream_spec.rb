require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)
require File.expand_path('../fixtures/strings', __FILE__)
require File.expand_path('../shared/each_document', __FILE__)

describe "YAML.load_stream" do
  it_behaves_like :yaml_each_document, :load_stream
end
