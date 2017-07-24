describe :net_http_version_1_1_p, shared: true do
  it "returns the state of net/http 1.1 features" do
    Net::HTTP.version_1_2
    Net::HTTP.send(@method).should be_false
  end
end
