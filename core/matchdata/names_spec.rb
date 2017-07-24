require File.expand_path('../../../spec_helper', __FILE__)

describe "MatchData#names" do
  it "returns an Array" do
    md = 'haystack'.match(/(?<yellow>hay)/)
    md.names.should be_an_instance_of(Array)
  end

  it "sets each element to a String" do
    'haystack'.match(/(?<yellow>hay)/).names.all? do |e|
      e.should be_an_instance_of(String)
    end
  end

  it "returns the names of the named capture groups" do
    md = 'haystack'.match(/(?<yellow>hay).(?<pin>tack)/)
    md.names.should == ['yellow', 'pin']
  end

  it "returns [] if there were no named captures" do
    'haystack'.match(/(hay).(tack)/).names.should == []
  end

  it "returns each name only once" do
    md = 'haystack'.match(/(?<hay>hay)(?<dot>.)(?<hay>tack)/)
    md.names.should == ['hay', 'dot']
  end

  it "equals Regexp#names" do
    r = /(?<hay>hay)(?<dot>.)(?<hay>tack)/
    'haystack'.match(r).names.should == r.names
  end
end
