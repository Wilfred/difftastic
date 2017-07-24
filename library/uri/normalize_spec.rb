require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/normalization', __FILE__)
require 'uri'

describe "URI#normalize" do
  it "adds a / onto the end of the URI if the path is blank" do
    no_path = URI("http://example.com")
    no_path.to_s.should_not == "http://example.com/"
    no_path.normalize.to_s.should == "http://example.com/"
  end

  it "downcases the host of the URI" do
    uri = URI("http://exAMPLE.cOm/")
    uri.to_s.should_not == "http://example.com/"
    uri.normalize.to_s.should == "http://example.com/"
  end

  # The previous tests are included by the one below

  quarantine! do # Quarantined until redmine:2542 is accepted
    it "respects RFC 3986" do
      URISpec::NORMALIZED_FORMS.each do |form|
        normal_uri = URI(form[:normalized])
        normalized = normal_uri.normalize.to_s
        normal_uri.to_s.should == normalized
        form[:equivalent].each do |same|
          URI(same).normalize.to_s.should == normalized
        end
        form[:different].each do |other|
          URI(other).normalize.to_s.should_not == normalized
        end
      end
    end
  end
end
