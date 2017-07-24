require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/normalization', __FILE__)
require File.expand_path('../shared/eql', __FILE__)
require 'uri'

describe "URI#eql?" do
  it_behaves_like :uri_eql, :eql?

  it_behaves_like :uri_eql_against_other_types, :eql?
end
