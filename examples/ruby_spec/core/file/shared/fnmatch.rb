describe :file_fnmatch, shared: true do
  it "matches entire strings" do
    File.send(@method, 'cat', 'cat').should == true
  end

  it "does not match partial strings" do
    File.send(@method, 'cat', 'category').should == false
  end

  it "does not support { } patterns by default" do
    File.send(@method, 'c{at,ub}s', 'cats').should == false
    File.send(@method, 'c{at,ub}s', 'c{at,ub}s').should == true
  end

  it "supports some { } patterns when File::FNM_EXTGLOB is passed" do
    File.send(@method, "{a,b}", "a", File::FNM_EXTGLOB).should == true
    File.send(@method, "{a,b}", "b", File::FNM_EXTGLOB).should == true
    File.send(@method, "c{at,ub}s", "cats", File::FNM_EXTGLOB).should == true
    File.send(@method, "c{at,ub}s", "cubs", File::FNM_EXTGLOB).should == true
    File.send(@method, "-c{at,ub}s-", "-cats-", File::FNM_EXTGLOB).should == true
    File.send(@method, "-c{at,ub}s-", "-cubs-", File::FNM_EXTGLOB).should == true
    File.send(@method, "{a,b,c}{d,e,f}{g,h}", "adg", File::FNM_EXTGLOB).should == true
    File.send(@method, "{a,b,c}{d,e,f}{g,h}", "bdg", File::FNM_EXTGLOB).should == true
    File.send(@method, "{a,b,c}{d,e,f}{g,h}", "ceh", File::FNM_EXTGLOB).should == true
    File.send(@method, "{aa,bb,cc,dd}", "aa", File::FNM_EXTGLOB).should == true
    File.send(@method, "{aa,bb,cc,dd}", "bb", File::FNM_EXTGLOB).should == true
    File.send(@method, "{aa,bb,cc,dd}", "cc", File::FNM_EXTGLOB).should == true
    File.send(@method, "{aa,bb,cc,dd}", "dd", File::FNM_EXTGLOB).should == true
    File.send(@method, "{1,5{a,b{c,d}}}", "1", File::FNM_EXTGLOB).should == true
    File.send(@method, "{1,5{a,b{c,d}}}", "5a", File::FNM_EXTGLOB).should == true
    File.send(@method, "{1,5{a,b{c,d}}}", "5bc", File::FNM_EXTGLOB).should == true
    File.send(@method, "{1,5{a,b{c,d}}}", "5bd", File::FNM_EXTGLOB).should == true
    File.send(@method, "\\\\{a\\,b,b\\}c}", "\\a,b", File::FNM_EXTGLOB).should == true
    File.send(@method, "\\\\{a\\,b,b\\}c}", "\\b}c", File::FNM_EXTGLOB).should == true
  end

  it "doesn't support some { } patterns even when File::FNM_EXTGLOB is passed" do
    File.send(@method, "a{0..3}b", "a0b", File::FNM_EXTGLOB).should == false
    File.send(@method, "a{0..3}b", "a1b", File::FNM_EXTGLOB).should == false
    File.send(@method, "a{0..3}b", "a2b", File::FNM_EXTGLOB).should == false
    File.send(@method, "a{0..3}b", "a3b", File::FNM_EXTGLOB).should == false
    File.send(@method, "{0..12}", "0", File::FNM_EXTGLOB).should == false
    File.send(@method, "{0..12}", "6", File::FNM_EXTGLOB).should == false
    File.send(@method, "{0..12}", "12", File::FNM_EXTGLOB).should == false
    File.send(@method, "{3..-2}", "3", File::FNM_EXTGLOB).should == false
    File.send(@method, "{3..-2}", "0", File::FNM_EXTGLOB).should == false
    File.send(@method, "{3..-2}", "-2", File::FNM_EXTGLOB).should == false
    File.send(@method, "{a..g}", "a", File::FNM_EXTGLOB).should == false
    File.send(@method, "{a..g}", "d", File::FNM_EXTGLOB).should == false
    File.send(@method, "{a..g}", "g", File::FNM_EXTGLOB).should == false
    File.send(@method, "{g..a}", "a", File::FNM_EXTGLOB).should == false
    File.send(@method, "{g..a}", "d", File::FNM_EXTGLOB).should == false
    File.send(@method, "{g..a}", "g", File::FNM_EXTGLOB).should == false
    File.send(@method, "escaping: {{,\\,,\\},\\{}", "escaping: {", File::FNM_EXTGLOB).should == false
    File.send(@method, "escaping: {{,\\,,\\},\\{}", "escaping: ,", File::FNM_EXTGLOB).should == false
    File.send(@method, "escaping: {{,\\,,\\},\\{}", "escaping: }", File::FNM_EXTGLOB).should == false
    File.send(@method, "escaping: {{,\\,,\\},\\{}", "escaping: {", File::FNM_EXTGLOB).should == false
  end

  it "doesn't match an extra } when File::FNM_EXTGLOB is passed" do
    File.send(@method, 'c{at,ub}}s', 'cats', File::FNM_EXTGLOB).should == false
  end

  it "matches when both FNM_EXTGLOB and FNM_PATHNAME are passed" do
    File.send(@method, "?.md", "a.md", File::FNM_EXTGLOB | File::FNM_PATHNAME).should == true
  end

  it "matches a single character for each ? character" do
    File.send(@method, 'c?t', 'cat').should == true
    File.send(@method, 'c??t', 'cat').should == false
  end

  it "matches zero or more characters for each * character" do
    File.send(@method, 'c*', 'cats').should == true
    File.send(@method, 'c*t', 'c/a/b/t').should == true
  end

  it "matches ranges of characters using bracket expresions (e.g. [a-z])" do
    File.send(@method, 'ca[a-z]', 'cat').should == true
  end

  it "matches ranges of characters using bracket expresions, taking case into account" do
    File.send(@method, '[a-z]', 'D').should == false
    File.send(@method, '[^a-z]', 'D').should == true
    File.send(@method, '[A-Z]', 'd').should == false
    File.send(@method, '[^A-Z]', 'd').should == true
    File.send(@method, '[a-z]', 'D', File::FNM_CASEFOLD).should == true
  end

  it "does not match characters outside of the range of the bracket expresion" do
    File.send(@method, 'ca[x-z]', 'cat').should == false
    File.send(@method, '/ca[s][s-t]/rul[a-b]/[z]he/[x-Z]orld', '/cats/rule/the/World').should == false
  end

  it "matches ranges of characters using exclusive bracket expresions (e.g. [^t] or [!t])" do
    File.send(@method, 'ca[^t]', 'cat').should == false
    File.send(@method, 'ca[!t]', 'cat').should == false
  end

  it "matches characters with a case sensitive comparison" do
    File.send(@method, 'cat', 'CAT').should == false
  end

  it "matches characters with case insensitive comparison when flags includes FNM_CASEFOLD" do
    File.send(@method, 'cat', 'CAT', File::FNM_CASEFOLD).should == true
  end

  platform_is_not :windows do
    it "doesn't match case sensitive characters on platfroms with case sensitive paths, when flags include FNM_SYSCASE" do
      File.send(@method, 'cat', 'CAT', File::FNM_SYSCASE).should == false
    end
  end

  platform_is :windows do
    it "matches case sensitive characters on platfroms with case insensitive paths, when flags include FNM_SYSCASE" do
      File.send(@method, 'cat', 'CAT', File::FNM_SYSCASE).should == true
    end
  end

  it "does not match '/' characters with ? or * when flags includes FNM_PATHNAME" do
    File.send(@method, '?', '/', File::FNM_PATHNAME).should == false
    File.send(@method, '*', '/', File::FNM_PATHNAME).should == false
  end

  it "does not match '/' characters inside bracket expressions when flags includes FNM_PATHNAME" do
    File.send(@method, '[/]', '/', File::FNM_PATHNAME).should == false
  end

  it "matches literal ? or * in path when pattern includes \\? or \\*" do
    File.send(@method, '\?', '?').should == true
    File.send(@method, '\?', 'a').should == false

    File.send(@method, '\*', '*').should == true
    File.send(@method, '\*', 'a').should == false
  end

  it "matches literal character (e.g. 'a') in path when pattern includes escaped character (e.g. \\a)" do
    File.send(@method, '\a', 'a').should == true
    File.send(@method, 'this\b', 'thisb').should == true
  end

  it "matches '\\' characters in path when flags includes FNM_NOESACPE" do
    File.send(@method, '\a', '\a', File::FNM_NOESCAPE).should == true
    File.send(@method, '\a', 'a', File::FNM_NOESCAPE).should == false
    File.send(@method, '\[foo\]\[bar\]', '[foo][bar]', File::FNM_NOESCAPE).should == false
  end

  it "escapes special characters inside bracket expression" do
    File.send(@method, '[\?]', '?').should == true
    File.send(@method, '[\*]', '*').should == true
  end

  it "does not match leading periods in filenames with wildcards by default" do
    File.send(@method, '*', '.profile').should == false
    File.send(@method, '*', 'home/.profile').should == true
    File.send(@method, '*/*', 'home/.profile').should == true
    File.send(@method, '*/*', 'dave/.profile', File::FNM_PATHNAME).should == false
  end

  it "matches patterns with leading periods to dotfiles by default" do
    File.send(@method, '.*', '.profile').should == true
    File.send(@method, ".*file", "nondotfile").should == false
  end

  it "matches leading periods in filenames when flags includes FNM_DOTMATCH" do
    File.send(@method, '*', '.profile', File::FNM_DOTMATCH).should == true
    File.send(@method, '*', 'home/.profile', File::FNM_DOTMATCH).should == true
  end

  it "matches multiple directories with ** and *" do
    files = '**/*.rb'
    File.send(@method, files, 'main.rb').should == false
    File.send(@method, files, './main.rb').should == false
    File.send(@method, files, 'lib/song.rb').should == true
    File.send(@method, '**.rb', 'main.rb').should == true
    File.send(@method, '**.rb', './main.rb').should == false
    File.send(@method, '**.rb', 'lib/song.rb').should == true
    File.send(@method, '*',     'dave/.profile').should == true
  end

  it "matches multiple directories with ** when flags includes File::FNM_PATHNAME" do
    files = '**/*.rb'
    flags = File::FNM_PATHNAME

    File.send(@method, files, 'main.rb',               flags).should == true
    File.send(@method, files, 'one/two/three/main.rb', flags).should == true
    File.send(@method, files, './main.rb',             flags).should == false

    flags = File::FNM_PATHNAME | File::FNM_DOTMATCH

    File.send(@method, files, './main.rb',        flags).should == true
    File.send(@method, files, 'one/two/.main.rb', flags).should == true

    File.send(@method, "**/best/*", 'lib/my/best/song.rb').should == true
  end

  it "returns false if '/' in pattern do not match '/' in path when flags includes FNM_PATHNAME" do
    pattern = '*/*'
    File.send(@method, pattern, 'dave/.profile', File::FNM_PATHNAME).should be_false

    pattern = '**/foo'
    File.send(@method, pattern, 'a/.b/c/foo', File::FNM_PATHNAME).should be_false
  end

  it "returns true if '/' in pattern match '/' in path when flags includes FNM_PATHNAME" do
    pattern = '*/*'
    File.send(@method, pattern, 'dave/.profile', File::FNM_PATHNAME | File::FNM_DOTMATCH).should be_true

    pattern = '**/foo'
    File.send(@method, pattern, 'a/b/c/foo', File::FNM_PATHNAME).should be_true
    File.send(@method, pattern, '/a/b/c/foo', File::FNM_PATHNAME).should be_true
    File.send(@method, pattern, 'c:/a/b/c/foo', File::FNM_PATHNAME).should be_true
    File.send(@method, pattern, 'a/.b/c/foo', File::FNM_PATHNAME | File::FNM_DOTMATCH).should be_true
  end

  it "accepts an object that has a #to_path method" do
    File.send(@method, '\*', mock_to_path('a')).should == false
  end

  it "raises a TypeError if the first and second arguments are not string-like" do
    lambda { File.send(@method, nil, nil, 0, 0) }.should raise_error(ArgumentError)
    lambda { File.send(@method, 1, 'some/thing') }.should raise_error(TypeError)
    lambda { File.send(@method, 'some/thing', 1) }.should raise_error(TypeError)
    lambda { File.send(@method, 1, 1) }.should raise_error(TypeError)
  end

  it "raises a TypeError if the third argument is not an Integer" do
    lambda { File.send(@method, "*/place", "path/to/file", "flags") }.should raise_error(TypeError)
    lambda { File.send(@method, "*/place", "path/to/file", nil) }.should raise_error(TypeError)
  end

  it "does not raise a TypeError if the third argument can be coerced to an Integer" do
    flags = mock("flags")
    flags.should_receive(:to_int).and_return(10)
    lambda { File.send(@method, "*/place", "path/to/file", flags) }.should_not raise_error
  end

  it "matches multibyte characters" do
    File.fnmatch("*/ä/ø/ñ", "a/ä/ø/ñ").should == true
  end
end
