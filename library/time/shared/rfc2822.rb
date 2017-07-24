describe :time_rfc2822, shared: true do
  it "parses RFC-822 strings" do
    t1 = (Time.utc(1976, 8, 26, 14, 30) + 4 * 3600)
    t2 = Time.rfc2822("26 Aug 76 14:30 EDT")
    t1.should == t2

    t3 = Time.utc(1976, 8, 27, 9, 32) + 7 * 3600
    t4 = Time.rfc2822("27 Aug 76 09:32 PDT")
    t3.should == t4
  end

  it "parses RFC-2822 strings" do
    t1 = Time.utc(1997, 11, 21, 9, 55, 6) + 6 * 3600
    t2 = Time.rfc2822("Fri, 21 Nov 1997 09:55:06 -0600")
    t1.should == t2

    t3 = Time.utc(2003, 7, 1, 10, 52, 37) - 2 * 3600
    t4 = Time.rfc2822("Tue, 1 Jul 2003 10:52:37 +0200")
    t3.should == t4

    t5 = Time.utc(1997, 11, 21, 10, 1, 10) + 6 * 3600
    t6 = Time.rfc2822("Fri, 21 Nov 1997 10:01:10 -0600")
    t5.should == t6

    t7 = Time.utc(1997, 11, 21, 11, 0, 0) + 6 * 3600
    t8 = Time.rfc2822("Fri, 21 Nov 1997 11:00:00 -0600")
    t7.should == t8

    t9 = Time.utc(1997, 11, 24, 14, 22, 1) + 8 * 3600
    t10 = Time.rfc2822("Mon, 24 Nov 1997 14:22:01 -0800")
    t9.should == t10

    begin
      Time.at(-1)
    rescue ArgumentError
      # ignore
    else
      t11 = Time.utc(1969, 2, 13, 23, 32, 54) + 3 * 3600 + 30 * 60
      t12 = Time.rfc2822("Thu, 13 Feb 1969 23:32:54 -0330")
      t11.should == t12

      t13 = Time.utc(1969, 2, 13, 23, 32, 0) + 3 * 3600 + 30 * 60
      t14 = Time.rfc2822(" Thu,
      13
        Feb
          1969
      23:32
               -0330 (Newfoundland Time)")
      t13.should == t14
    end

    t15 = Time.utc(1997, 11, 21, 9, 55, 6)
    t16 = Time.rfc2822("21 Nov 97 09:55:06 GMT")
    t15.should == t16

    t17 = Time.utc(1997, 11, 21, 9, 55, 6) + 6 * 3600
    t18 = Time.rfc2822("Fri, 21 Nov 1997 09 :   55  :  06 -0600")
    t17.should == t18

    lambda {
      # inner comment is not supported.
      Time.rfc2822("Fri, 21 Nov 1997 09(comment):   55  :  06 -0600")
    }.should raise_error(ArgumentError)
  end
end
