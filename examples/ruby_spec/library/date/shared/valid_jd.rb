describe :date_valid_jd?, shared: true do
  it "returns true if passed any value other than nil" do
    Date.send(@method, -100).should be_true
    Date.send(@method, :number).should    be_true
    Date.send(@method, Rational(1,2)).should  be_true
  end

  it "returns false if passed nil" do
    Date.send(@method, nil).should be_false
  end

  it "returns true if passed false" do
    Date.send(@method, false).should be_true
  end
end
