require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/length', __FILE__)

describe "MatchData#size" do
  it_behaves_like(:matchdata_length, :size)
end
