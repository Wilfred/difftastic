require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/valid_commercial', __FILE__)
require 'date'

describe "Date#valid_commercial?" do

  it_behaves_like :date_valid_commercial?, :valid_commercial?
end


