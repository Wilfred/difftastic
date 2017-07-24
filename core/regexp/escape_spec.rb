require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/quote', __FILE__)

describe "Regexp.escape" do
  it_behaves_like :regexp_quote, :escape
end
