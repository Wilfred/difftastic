require File.expand_path('../../../../spec_helper', __FILE__)

describe :matchdata_eql, shared: true do
  it "returns true if both operands have equal target strings, patterns, and match positions" do
    a = 'haystack'.match(/hay/)
    b = 'haystack'.match(/hay/)
    a.send(@method, b).should be_true
  end

  it "returns false if the operands have different target strings" do
    a = 'hay'.match(/hay/)
    b = 'haystack'.match(/hay/)
    a.send(@method, b).should be_false
  end

  it "returns false if the operands have different patterns" do
    a = 'haystack'.match(/h.y/)
    b = 'haystack'.match(/hay/)
    a.send(@method, b).should be_false
  end

  it "returns false if the argument is not a MatchData object" do
    a = 'haystack'.match(/hay/)
    a.send(@method, Object.new).should be_false
  end
end
