require 'date'
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/commercial', __FILE__)

describe "Date#commercial" do

  it_behaves_like(:date_commercial, :commercial)

end

# reference:
# October 1582 (the Gregorian calendar, Civil Date)
#   S   M  Tu   W  Th   F   S
#       1   2   3   4  15  16
#  17  18  19  20  21  22  23
#  24  25  26  27  28  29  30
#  31

