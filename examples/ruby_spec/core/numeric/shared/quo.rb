describe :numeric_quo_18, shared: true do
  it "returns the result of calling self#/ with other" do
    obj = mock_numeric('numeric')
    obj.should_receive(:/).with(19).and_return(:result)
    obj.send(@method, 19).should == :result
  end
end
