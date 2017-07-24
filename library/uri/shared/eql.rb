describe :uri_eql, shared: true do
  it "returns false if the normalized forms are different" do
    URISpec::NORMALIZED_FORMS.each do |form|
      normal_uri = URI(form[:normalized])
      form[:different].each do |other|
        URI(other).send(@method, normal_uri).should be_false
      end
    end
  end
end

describe :uri_eql_against_other_types, shared: true do
  it "returns false for when compared to non-uri objects" do
    URI("http://example.com/").send(@method, "http://example.com/").should be_false
    URI("http://example.com/").send(@method, nil).should be_false
  end
end
