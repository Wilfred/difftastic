require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/entries', __FILE__)

describe "Enumerable#entries" do
  it_behaves_like(:enumerable_entries , :entries)
end
