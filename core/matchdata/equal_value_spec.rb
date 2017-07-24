require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/eql', __FILE__)

describe "MatchData#==" do
  it_behaves_like(:matchdata_eql, :==)
end
