require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/valid_civil', __FILE__)
require 'date'

describe "Date#valid_civil?" do

  it_behaves_like :date_valid_civil?, :valid_civil?

end

