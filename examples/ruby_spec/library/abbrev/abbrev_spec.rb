require File.expand_path('../../../spec_helper', __FILE__)
require 'abbrev'

#test both Abbrev.abbrev and Array#abbrev in
#the same manner, as they're more or less aliases
#of one another

[["Abbrev.abbrev", lambda {|a| Abbrev.abbrev(a)}],
 ["Array#abbrev", lambda {|a| a.abbrev}]
].each do |(name, func)|

  describe name do
    it "returns a hash of all unambiguous abbreviations of the array of strings passed in" do
      func.call(['ruby', 'rules']).should == {"rub" => "ruby",
                                       "ruby" => "ruby",
                                       "rul" => "rules",
                                       "rule" => "rules",
                                       "rules" => "rules"}

      func.call(["car", "cone"]).should == {"ca" => "car",
                                       "car" => "car",
                                       "co" => "cone",
                                       "con" => "cone",
                                       "cone" => "cone"}
    end

    it "returns an empty hash when called on an empty array" do
      func.call([]).should == {}
    end
  end
end
