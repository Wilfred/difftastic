require File.expand_path('../../spec_helper', __FILE__)

require 'rexml/document'

describe "REXML::Document.new" do

  it "resists CVE-2014-8080 by raising an exception when entity expansion has grown too large" do
    xml = <<XML
    <?xml version="1.0" encoding="UTF-8" ?>
      <!DOCTYPE x [
        <!ENTITY % x0 "xxxxxxxxxx">
        <!ENTITY % x1 "%x0;%x0;%x0;%x0;%x0;%x0;%x0;%x0;%x0;%x0;">
        <!ENTITY % x2 "%x1;%x1;%x1;%x1;%x1;%x1;%x1;%x1;%x1;%x1;">
        <!ENTITY % x3 "%x2;%x2;%x2;%x2;%x2;%x2;%x2;%x2;%x2;%x2;">
        <!ENTITY % x4 "%x3;%x3;%x3;%x3;%x3;%x3;%x3;%x3;%x3;%x3;">
        <!ENTITY % x5 "%x4;%x4;%x4;%x4;%x4;%x4;%x4;%x4;%x4;%x4;">
        <!ENTITY % x6 "%x5;%x5;%x5;%x5;%x5;%x5;%x5;%x5;%x5;%x5;">
        <!ENTITY % x7 "%x6;%x6;%x6;%x6;%x6;%x6;%x6;%x6;%x6;%x6;">
        <!ENTITY % x8 "%x7;%x7;%x7;%x7;%x7;%x7;%x7;%x7;%x7;%x7;">
        <!ENTITY % x9 "%x8;%x8;%x8;%x8;%x8;%x8;%x8;%x8;%x8;%x8;">
      ]>
      <x>
        %x9;%x9;%x9;%x9;%x9;%x9;%x9;%x9;%x9;%x9;
      </x>
XML

    lambda { REXML::Document.new(xml).doctype.entities['x9'].value }.should raise_error(REXML::ParseException) { |e|
      e.message.should =~ /entity expansion has grown too large/
    }
  end

end
