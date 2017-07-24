# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI.unescape" do
  it "url-decodes the passed argument" do
    input    = "+%21%22%23%24%25%26%27%28%29%2A%2B%2C-.%2F0123456789%3A%3B%3C%3D%3E%3F%40ABCDEFGHIJKLMNOPQRSTUVWXYZ%5B%5C%5D%5E_%60abcdefghijklmnopqrstuvwxyz%7B%7C%7D%7E"
    expected = " !\"\#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~"
    CGI.unescape(input).should == expected

    input    = 'http%3A%2F%2Fja.wikipedia.org%2Fwiki%2F%E3%83%AD%E3%83%A0%E3%82%B9%E3%82%AB%E3%83%BB%E3%83%91%E3%83%AD%E3%83%BB%E3%82%A6%E3%83%AB%E3%83%BB%E3%83%A9%E3%83%94%E3%83%A5%E3%82%BF'
    expected = "http://ja.wikipedia.org/wiki/\343\203\255\343\203\240\343\202\271\343\202\253\343\203\273\343\203\221\343\203\255\343\203\273\343\202\246\343\203\253\343\203\273\343\203\251\343\203\224\343\203\245\343\202\277"
    CGI.unescape(input).should == expected
  end
end
