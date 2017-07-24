require File.expand_path('../../spec_helper', __FILE__)

require 'json'

describe "String#to_f" do

  it "resists CVE-2013-4164 by converting very long Strings to a Float" do
    "1.#{'1'*1000000}".to_f.should be_close(1.1111111111111112, TOLERANCE)
  end

end

describe "JSON.parse" do

  it "resists CVE-2013-4164 by converting very long Strings to a Float" do
    JSON.parse("[1.#{'1'*1000000}]").first.should be_close(1.1111111111111112, TOLERANCE)
  end

end
