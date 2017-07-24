require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/valid_ordinal', __FILE__)
require 'date'

describe "Date.valid_ordinal?" do

  it_behaves_like :date_valid_ordinal?, :valid_ordinal?

end

