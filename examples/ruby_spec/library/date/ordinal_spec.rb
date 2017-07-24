require 'date'
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/ordinal', __FILE__)

describe "Date.ordinal" do
  it_behaves_like :date_ordinal, :ordinal
end

