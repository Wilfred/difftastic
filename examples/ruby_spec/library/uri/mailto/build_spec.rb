require File.expand_path('../../../../spec_helper', __FILE__)
require 'uri'

describe "URI::Mailto.build" do
  it "conforms to the MatzRuby tests" do
    ok = []
    bad = []

    # RFC2368, 6. Examples
    # mailto:chris@example.com
    ok << ["mailto:chris@example.com"]
    ok[-1] << ["chris@example.com", nil]
    ok[-1] << {to: "chris@example.com"}

    # mailto:infobot@example.com?subject=current-issue
    ok << ["mailto:infobot@example.com?subject=current-issue"]
    ok[-1] << ["infobot@example.com", ["subject=current-issue"]]
    ok[-1] << {to: "infobot@example.com",
      headers: ["subject=current-issue"]}

    # mailto:infobot@example.com?body=send%20current-issue
    ok << ["mailto:infobot@example.com?body=send%20current-issue"]
    ok[-1] << ["infobot@example.com", ["body=send%20current-issue"]]
    ok[-1] << {to: "infobot@example.com",
      headers: ["body=send%20current-issue"]}

    # mailto:infobot@example.com?body=send%20current-issue%0D%0Asend%20index
    ok << ["mailto:infobot@example.com?body=send%20current-issue%0D%0Asend%20index"]
    ok[-1] << ["infobot@example.com",
      ["body=send%20current-issue%0D%0Asend%20index"]]
    ok[-1] << {to: "infobot@example.com",
      headers: ["body=send%20current-issue%0D%0Asend%20index"]}

    # mailto:foobar@example.com?In-Reply-To=%3c3469A91.D10AF4C@example.com
    ok << ["mailto:foobar@example.com?In-Reply-To=%3c3469A91.D10AF4C@example.com"]
    ok[-1] << ["foobar@example.com",
      ["In-Reply-To=%3c3469A91.D10AF4C@example.com"]]
    ok[-1] << {to: "foobar@example.com",
      headers: ["In-Reply-To=%3c3469A91.D10AF4C@example.com"]}

    # mailto:majordomo@example.com?body=subscribe%20bamboo-l
    ok << ["mailto:majordomo@example.com?body=subscribe%20bamboo-l"]
    ok[-1] << ["majordomo@example.com", ["body=subscribe%20bamboo-l"]]
    ok[-1] << {to: "majordomo@example.com",
      headers: ["body=subscribe%20bamboo-l"]}

    # mailto:joe@example.com?cc=bob@example.com&body=hello
    ok << ["mailto:joe@example.com?cc=bob@example.com&body=hello"]
    ok[-1] << ["joe@example.com", ["cc=bob@example.com", "body=hello"]]
    ok[-1] << {to: "joe@example.com",
      headers: ["cc=bob@example.com", "body=hello"]}

    # mailto:?to=joe@example.com&cc=bob@example.com&body=hello
    ok << ["mailto:?to=joe@example.com&cc=bob@example.com&body=hello"]
    ok[-1] << [nil,
      ["to=joe@example.com", "cc=bob@example.com", "body=hello"]]
    ok[-1] << {headers: ["to=joe@example.com", "cc=bob@example.com", "body=hello"]}

    # mailto:gorby%25kremvax@example.com
    ok << ["mailto:gorby%25kremvax@example.com"]
    ok[-1] << ["gorby%25kremvax@example.com", nil]
    ok[-1] << {to: "gorby%25kremvax@example.com"}

    # mailto:unlikely%3Faddress@example.com?blat=foop
    ok << ["mailto:unlikely%3Faddress@example.com?blat=foop"]
    ok[-1] << ["unlikely%3Faddress@example.com", ["blat=foop"]]
    ok[-1] << {to: "unlikely%3Faddress@example.com",
      headers: ["blat=foop"]}

    ok_all = ok.flatten.join("\0")

    # mailto:joe@example.com?cc=bob@example.com?body=hello   ; WRONG!
    bad << ["joe@example.com", ["cc=bob@example.com?body=hello"]]

    # mailto:javascript:alert()
    bad << ["javascript:alert()", []]

    # '=' which is in hname or hvalue is wrong.
    bad << ["foo@example.jp?subject=1+1=2", []]

    ok.each do |x|
      URI::MailTo.build(x[1]).to_s.should == x[0]
      URI::MailTo.build(x[2]).to_s.should == x[0]
    end

    bad.each do |x|
      lambda { URI::MailTo.build(x) }.should raise_error(URI::InvalidComponentError)
    end

    ok.flatten.join("\0").should == ok_all
  end
end



describe "URI::MailTo.build" do
  it "needs to be reviewed for spec completeness"
end
