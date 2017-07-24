require File.expand_path('../../../spec_helper', __FILE__)

describe "Enumerator#inspect" do
  describe "shows a representation of the Enumerator" do
    it "including receiver and method" do
      (1..3).each.inspect.should == "#<Enumerator: 1..3:each>"
    end

    it "including receiver and method and arguments" do
      (1..3).each_slice(2).inspect.should == "#<Enumerator: 1..3:each_slice(2)>"
    end

    it "including the nested Enumerator" do
      (1..3).each.each_slice(2).inspect.should == "#<Enumerator: #<Enumerator: 1..3:each>:each_slice(2)>"
    end
  end
end
