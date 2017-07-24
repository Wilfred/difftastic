require 'scanf'

describe :scanf_io_block_scanf, shared: true do
  before :each do
    @data= File.open(File.dirname(__FILE__) + '/../fixtures/date.txt', 'r')
  end

  after :each do
    @data.close unless @data.closed?
  end

  it "passes each match to the block as an array" do
    res = @data.send(@method, "%s%d") { |name, year| "#{name} was born in #{year}." }
    res.should == ["Beethoven was born in 1770.", "Bach was born in 1685.", "Handel was born in 1685."]
  end

  it "keeps scanning the input and cycling back to the beginning of the input string" do
    a = []
    @data.send(@method, "%s"){|w| a << w}
    a.should == [["Beethoven"], ["1770"], ["Bach"], ["1685"], ["Handel"], ["1685"]]
  end

  it "returns an empty array when a wrong specifier is passed" do
    a = []
    @data.send(@method, "%z"){|w| a << w}
    a.empty?.should be_true
  end
end
