# reference:
# October 1582 (the Gregorian calendar, Civil Date)
#   S   M  Tu   W  Th   F   S
#       1   2   3   4  15  16
#  17  18  19  20  21  22  23
#  24  25  26  27  28  29  30
#  31

describe :date_ordinal, shared: true do
  it "constructs a Date object from an ordinal date" do
    # October 1582 (the Gregorian calendar, Ordinal Date)
    #   S   M  Tu   W  Th   F   S
    #     274 275 276 277 278 279
    # 280 281 282 283 284 285 286
    # 287 288 289 290 291 292 293
    # 294
    Date.send(@method, 1582, 274).should == Date.civil(1582, 10,  1)
    Date.send(@method, 1582, 277).should == Date.civil(1582, 10,  4)
    Date.send(@method, 1582, 278).should == Date.civil(1582, 10, 15)
    Date.send(@method, 1582, 287, Date::ENGLAND).should == Date.civil(1582, 10, 14, Date::ENGLAND)
  end
end
