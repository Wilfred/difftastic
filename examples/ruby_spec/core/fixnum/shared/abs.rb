describe :fixnum_abs, shared: true do
  it "returns self's absolute value" do
    { 0 => [0, -0, +0], 2 => [2, -2, +2], 100 => [100, -100, +100] }.each do |key, values|
      values.each do |value|
        value.send(@method).should == key
      end
    end
  end
end
