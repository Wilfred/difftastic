require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/valid_jd', __FILE__)
require 'date'

describe "Date.valid_jd?" do

  it_behaves_like :date_valid_jd?, :valid_jd?

end

