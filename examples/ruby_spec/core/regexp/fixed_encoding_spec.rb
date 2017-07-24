# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)

describe "Regexp#fixed_encoding?" do
  it "returns false by default" do
    /needle/.fixed_encoding?.should be_false
  end

  it "returns false if the 'n' modifier was supplied to the Regexp" do
    /needle/n.fixed_encoding?.should be_false
  end

  it "returns true if the 'u' modifier was supplied to the Regexp" do
    /needle/u.fixed_encoding?.should be_true
  end

  it "returns true if the 's' modifier was supplied to the Regexp" do
    /needle/s.fixed_encoding?.should be_true
  end

  it "returns true if the 'e' modifier was supplied to the Regexp" do
    /needle/e.fixed_encoding?.should be_true
  end

  it "returns true if the Regexp contains a \\u escape" do
    /needle \u{8768}/.fixed_encoding?.should be_true
  end

  it "returns true if the Regexp contains a UTF-8 literal" do
    /文字化け/.fixed_encoding?.should be_true
  end

  it "returns true if the Regexp was created with the Regexp::FIXEDENCODING option" do
    Regexp.new("", Regexp::FIXEDENCODING).fixed_encoding?.should be_true
  end
end
