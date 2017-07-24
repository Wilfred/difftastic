describe :time_xmlschema, shared: true do
  it "parses ISO-8601 strings" do
    t = Time.utc(1985, 4, 12, 23, 20, 50, 520000)
    s = "1985-04-12T23:20:50.52Z"
    t.should == Time.xmlschema(s)
    #s.should == t.xmlschema(2)

    t = Time.utc(1996, 12, 20, 0, 39, 57)
    s = "1996-12-19T16:39:57-08:00"
    t.should == Time.xmlschema(s)
    # There is no way to generate time string with arbitrary timezone.
    s = "1996-12-20T00:39:57Z"
    t.should == Time.xmlschema(s)
    #assert_equal(s, t.xmlschema)

    t = Time.utc(1990, 12, 31, 23, 59, 60)
    s = "1990-12-31T23:59:60Z"
    t.should == Time.xmlschema(s)
    # leap second is representable only if timezone file has it.
    s = "1990-12-31T15:59:60-08:00"
    t.should == Time.xmlschema(s)

    begin
      Time.at(-1)
    rescue ArgumentError
      # ignore
    else
      t = Time.utc(1937, 1, 1, 11, 40, 27, 870000)
      s = "1937-01-01T12:00:27.87+00:20"
      t.should == Time.xmlschema(s)
    end

    # more

    # (Time.utc(1999, 5, 31, 13, 20, 0) + 5 * 3600).should == Time.xmlschema("1999-05-31T13:20:00-05:00")
    # (Time.local(2000, 1, 20, 12, 0, 0)).should == Time.xmlschema("2000-01-20T12:00:00")
    # (Time.utc(2000, 1, 20, 12, 0, 0)).should == Time.xmlschema("2000-01-20T12:00:00Z")
    # (Time.utc(2000, 1, 20, 12, 0, 0) - 12 * 3600).should == Time.xmlschema("2000-01-20T12:00:00+12:00")
    # (Time.utc(2000, 1, 20, 12, 0, 0) + 13 * 3600).should == Time.xmlschema("2000-01-20T12:00:00-13:00")
    # (Time.utc(2000, 3, 4, 23, 0, 0) - 3 * 3600).should == Time.xmlschema("2000-03-04T23:00:00+03:00")
    # (Time.utc(2000, 3, 4, 20, 0, 0)).should == Time.xmlschema("2000-03-04T20:00:00Z")
    # (Time.local(2000, 1, 15, 0, 0, 0)).should == Time.xmlschema("2000-01-15T00:00:00")
    # (Time.local(2000, 2, 15, 0, 0, 0)).should == Time.xmlschema("2000-02-15T00:00:00")
    # (Time.local(2000, 1, 15, 12, 0, 0)).should == Time.xmlschema("2000-01-15T12:00:00")
    # (Time.utc(2000, 1, 16, 12, 0, 0)).should == Time.xmlschema("2000-01-16T12:00:00Z")
    # (Time.local(2000, 1, 1, 12, 0, 0)).should == Time.xmlschema("2000-01-01T12:00:00")
    # (Time.utc(1999, 12, 31, 23, 0, 0)).should == Time.xmlschema("1999-12-31T23:00:00Z")
    # (Time.local(2000, 1, 16, 12, 0, 0)).should == Time.xmlschema("2000-01-16T12:00:00")
    # (Time.local(2000, 1, 16, 0, 0, 0)).should == Time.xmlschema("2000-01-16T00:00:00")
    # (Time.utc(2000, 1, 12, 12, 13, 14)).should == Time.xmlschema("2000-01-12T12:13:14Z")
    # (Time.utc(2001, 4, 17, 19, 23, 17, 300000)).should == Time.xmlschema("2001-04-17T19:23:17.3Z")
  end
end
