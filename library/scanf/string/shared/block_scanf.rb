require 'scanf'

describe :scanf_string_block_scanf, shared: true do
  it "passes each match to the block as an array" do
    a = []
    "hello world".send(@method, "%s%s"){|w| a << w}
    a.should == [["hello", "world"]]
  end

  it "keeps scanning the input and cycling back to the beginning of the input string" do
    a = []
    "hello world".send(@method, "%s"){|w| a << w}
    a.should == [["hello"], ["world"]]

    string = "123 abc 456 def 789 ghi"
    s = string.send(@method, "%d%s"){|num,str| [num * 2, str.upcase]}
    s.should == [[246, "ABC"], [912, "DEF"], [1578, "GHI"]]
  end

  it "returns an empty array when a wrong specifier is passed" do
    a = []
    "hello world".send(@method, "%z"){|w| a << w}
    a.empty?.should be_true
  end
end
