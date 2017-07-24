require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)

describe "Array#pack with format 'P'" do
  it_behaves_like :array_pack_basic_non_float, 'P'
end

describe "Array#pack with format 'p'" do
  it_behaves_like :array_pack_basic_non_float, 'p'
end
