# -*- encoding: binary -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Regexps with encoding modifiers" do
  it "supports /e (EUC encoding)" do
    match = /./e.match("\303\251".force_encoding(Encoding::EUC_JP))
    match.to_a.should == ["\303\251".force_encoding(Encoding::EUC_JP)]
  end

  it "supports /e (EUC encoding) with interpolation" do
    match = /#{/./}/e.match("\303\251".force_encoding(Encoding::EUC_JP))
    match.to_a.should == ["\303\251".force_encoding(Encoding::EUC_JP)]
  end

  it "supports /e (EUC encoding) with interpolation /o" do
    match = /#{/./}/e.match("\303\251".force_encoding(Encoding::EUC_JP))
    match.to_a.should == ["\303\251".force_encoding(Encoding::EUC_JP)]
  end

  it 'uses EUC-JP as /e encoding' do
    /./e.encoding.should == Encoding::EUC_JP
  end

  it 'preserves EUC-JP as /e encoding through interpolation' do
    /#{/./}/e.encoding.should == Encoding::EUC_JP
  end

  it "supports /n (No encoding)" do
    /./n.match("\303\251").to_a.should == ["\303"]
  end

  it "supports /n (No encoding) with interpolation" do
    /#{/./}/n.match("\303\251").to_a.should == ["\303"]
  end

  it "supports /n (No encoding) with interpolation /o" do
    /#{/./}/n.match("\303\251").to_a.should == ["\303"]
  end

  it 'uses US-ASCII as /n encoding if all chars are 7-bit' do
    /./n.encoding.should == Encoding::US_ASCII
  end

  it 'uses ASCII-8BIT as /n encoding if not all chars are 7-bit' do
    /\xFF/n.encoding.should == Encoding::ASCII_8BIT
  end

  it 'preserves US-ASCII as /n encoding through interpolation if all chars are 7-bit' do
    /.#{/./}/n.encoding.should == Encoding::US_ASCII
  end

  it 'preserves ASCII-8BIT as /n encoding through interpolation if all chars are 7-bit' do
    /\xFF#{/./}/n.encoding.should == Encoding::ASCII_8BIT
  end

  it "supports /s (Windows_31J encoding)" do
    match = /./s.match("\303\251".force_encoding(Encoding::Windows_31J))
    match.to_a.should == ["\303".force_encoding(Encoding::Windows_31J)]
  end

  it "supports /s (Windows_31J encoding) with interpolation" do
    match = /#{/./}/s.match("\303\251".force_encoding(Encoding::Windows_31J))
    match.to_a.should == ["\303".force_encoding(Encoding::Windows_31J)]
  end

  it "supports /s (Windows_31J encoding) with interpolation and /o" do
    match = /#{/./}/s.match("\303\251".force_encoding(Encoding::Windows_31J))
    match.to_a.should == ["\303".force_encoding(Encoding::Windows_31J)]
  end

  it 'uses Windows-31J as /s encoding' do
    /./s.encoding.should == Encoding::Windows_31J
  end

  it 'preserves Windows-31J as /s encoding through interpolation' do
    /#{/./}/s.encoding.should == Encoding::Windows_31J
  end

  it "supports /u (UTF8 encoding)" do
    /./u.match("\303\251".force_encoding('utf-8')).to_a.should == ["\u{e9}"]
  end

  it "supports /u (UTF8 encoding) with interpolation" do
    /#{/./}/u.match("\303\251".force_encoding('utf-8')).to_a.should == ["\u{e9}"]
  end

  it "supports /u (UTF8 encoding) with interpolation and /o" do
    /#{/./}/u.match("\303\251".force_encoding('utf-8')).to_a.should == ["\u{e9}"]
  end

  it 'uses UTF-8 as /u encoding' do
    /./u.encoding.should == Encoding::UTF_8
  end

  it 'preserves UTF-8 as /u encoding through interpolation' do
    /#{/./}/u.encoding.should == Encoding::UTF_8
  end

  it "selects last of multiple encoding specifiers" do
    /foo/ensuensuens.should == /foo/s
  end
end
