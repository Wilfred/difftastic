# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/cover_and_include', __FILE__)
require File.expand_path('../shared/include', __FILE__)
require File.expand_path('../shared/cover', __FILE__)

describe "Range#include?" do
  it_behaves_like :range_cover_and_include, :include?
  it_behaves_like :range_include, :include?
end
