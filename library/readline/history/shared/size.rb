describe :readline_history_size, shared: true do
  it "returns the size of the history" do
    Readline::HISTORY.send(@method).should == 0
    Readline::HISTORY.push("1", "2", "")
    Readline::HISTORY.send(@method).should == 3

    Readline::HISTORY.pop
    Readline::HISTORY.send(@method).should == 2

    Readline::HISTORY.pop
    Readline::HISTORY.pop
    Readline::HISTORY.send(@method).should == 0
  end
end
