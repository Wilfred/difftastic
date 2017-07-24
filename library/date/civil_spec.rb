require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/civil', __FILE__)
require 'date'

describe "Date#civil" do
  it_behaves_like(:date_civil, :civil)
end


describe "Date.civil" do
  it "needs to be reviewed for spec completeness"
end
