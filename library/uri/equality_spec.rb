require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/normalization', __FILE__)
require File.expand_path('../shared/eql', __FILE__)
require 'uri'

describe "URI#==" do
  it "ignores capitalization of host names" do
    URI("http://exAMPLE.cOm").should == URI("http://example.com")
  end

  it "ignores capitalization of scheme" do
    URI("hTTp://example.com").should == URI("http://example.com")
  end

  it "treats a blank path and a path of '/' as the same" do
    URI("http://example.com").should == URI("http://example.com/")
  end

  it "is case sensitive in all components of the URI but the host and scheme" do
    URI("http://example.com/paTH").should_not == URI("http://example.com/path")
    URI("http://uSer@example.com").should_not == URI("http://user@example.com")
    URI("http://example.com/path?quERy").should_not == URI("http://example.com/path?query")
    URI("http://example.com/#fragMENT").should_not == URI("http://example.com/#fragment")
  end

  it "differentiates based on port number" do
    URI("http://example.com:8080").should_not == URI("http://example.com")
  end

  # Note: The previous tests will be included in following ones

  it_behaves_like :uri_eql, :==

  it_behaves_like :uri_eql_against_other_types, :==

  quarantine! do # Quarantined until redmine:2542 is accepted
    it "returns true only if the normalized forms are equivalent" do
      URISpec::NORMALIZED_FORMS.each do |form|
        normal_uri = URI(form[:normalized])
        form[:equivalent].each do |same|
          URI(same).should == normal_uri
        end
      end
    end
  end
end
