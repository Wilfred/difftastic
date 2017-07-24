# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/chars', __FILE__)

describe "IO#each_char" do
  it_behaves_like :io_chars, :each_char
end

describe "IO#each_char" do
  it_behaves_like :io_chars_empty, :each_char
end
