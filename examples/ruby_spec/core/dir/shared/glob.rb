# -*- encoding: utf-8 -*-
describe :dir_glob, shared: true do
  before :all do
    DirSpecs.create_mock_dirs
    @cwd = Dir.pwd
    Dir.chdir DirSpecs.mock_dir
  end

  after :all do
    Dir.chdir @cwd
    DirSpecs.delete_mock_dirs
  end

  with_feature :encoding do
    it "raises an Encoding::CompatibilityError if the argument encoding is not compatible with US-ASCII" do
      pattern = "file*".force_encoding Encoding::UTF_16BE
      lambda { Dir.send(@method, pattern) }.should raise_error(Encoding::CompatibilityError)
    end
  end

  it "calls #to_path to convert a pattern" do
    obj = mock('file_one.ext')
    obj.should_receive(:to_path).and_return('file_one.ext')

    Dir.send(@method, obj).should == %w[file_one.ext]
  end

  it "splits the string on \\0 if there is only one string given" do
    Dir.send(@method, "file_o*\0file_t*").should ==
             %w!file_one.ext file_two.ext!
  end

  it "matches non-dotfiles with '*'" do
    expected = %w[
      brace
      deeply
      dir
      dir_filename_ordering
      file_one.ext
      file_two.ext
      nondotfile
      special
      subdir_one
      subdir_two
    ]

    Dir.send(@method,'*').sort.should == expected
  end

  it "returns empty array when empty pattern provided" do
    Dir.send(@method, '').should == []
  end

  it "matches regexp special +" do
    Dir.send(@method, 'special/+').should == ['special/+']
  end

  platform_is_not :windows do
    it "matches regexp special *" do
      Dir.send(@method, 'special/\*').should == ['special/*']
    end

    it "matches regexp special ?" do
      Dir.send(@method, 'special/\?').should == ['special/?']
    end

    it "matches regexp special |" do
      Dir.send(@method, 'special/|').should == ['special/|']
    end
  end

  it "matches regexp special ^" do
    Dir.send(@method, 'special/^').should == ['special/^']
  end

  it "matches regexp special $" do
    Dir.send(@method, 'special/$').should == ['special/$']
  end

  it "matches regexp special (" do
    Dir.send(@method, 'special/(').should == ['special/(']
  end

  it "matches regexp special )" do
    Dir.send(@method, 'special/)').should == ['special/)']
  end

  it "matches regexp special [" do
    Dir.send(@method, 'special/\[').should == ['special/[']
  end

  it "matches regexp special ]" do
    Dir.send(@method, 'special/]').should == ['special/]']
  end

  it "matches regexp special {" do
    Dir.send(@method, 'special/\{').should == ['special/{']
  end

  it "matches regexp special }" do
    Dir.send(@method, 'special/\}').should == ['special/}']
  end

  it "matches paths with glob patterns" do
    Dir.send(@method, 'special/test\{1\}/*').should == ['special/test{1}/file[1]']
  end

  it "matches dotfiles with '.*'" do
    Dir.send(@method, '.*').sort.should == %w|. .. .dotfile .dotsubdir|.sort
  end

  it "matches non-dotfiles with '*<non-special characters>'" do
    Dir.send(@method, '*file').sort.should == %w|nondotfile|.sort
  end

  it "matches dotfiles with '.*<non-special characters>'" do
    Dir.send(@method, '.*file').sort.should == %w|.dotfile|.sort
  end

  it "matches files with any ending with '<non-special characters>*'" do
    Dir.send(@method, 'file*').sort.should == %w|file_one.ext file_two.ext|.sort
  end

  it "matches files with any middle with '<non-special characters>*<non-special characters>'" do
    Dir.send(@method, 'sub*_one').sort.should == %w|subdir_one|.sort
  end

  it "handles directories with globs" do
    Dir.send(@method, 'sub*/*').sort.should == %w!subdir_one/nondotfile subdir_two/nondotfile subdir_two/nondotfile.ext!
  end

  it "matches files with multiple '*' special characters" do
    Dir.send(@method, '*fi*e*').sort.should == %w|dir_filename_ordering nondotfile file_one.ext file_two.ext|.sort
  end

  it "matches non-dotfiles in the current directory with '**'" do
    expected = %w[
      brace
      deeply
      dir
      dir_filename_ordering
      file_one.ext
      file_two.ext
      nondotfile
      special
      subdir_one
      subdir_two
    ]

    Dir.send(@method, '**').sort.should == expected
  end

  it "matches dotfiles in the current directory with '.**'" do
    Dir.send(@method, '.**').sort.should == %w|. .. .dotsubdir .dotfile|.sort
  end

  it "recursively matches any nondot subdirectories with '**/'" do
    expected = %w[
      brace/
      deeply/
      deeply/nested/
      deeply/nested/directory/
      deeply/nested/directory/structure/
      dir/
      special/
      special/test{1}/
      subdir_one/
      subdir_two/
    ]

    Dir.send(@method, '**/').sort.should == expected
  end

  it "recursively matches any subdirectories including ./ and ../ with '.**/'" do
    Dir.chdir("#{DirSpecs.mock_dir}/subdir_one") do
      Dir.send(@method, '.**/').sort.should == %w|./ ../|.sort
    end
  end

  it "matches a single character except leading '.' with '?'" do
    Dir.send(@method, '?ubdir_one').sort.should == %w|subdir_one|.sort
  end

  it "accepts multiple '?' characters in a pattern" do
    Dir.send(@method, 'subdir_???').sort.should == %w|subdir_one subdir_two|.sort
  end

  it "matches any characters in a set with '[<characters>]'" do
    Dir.send(@method, '[stfu]ubdir_one').sort.should == %w|subdir_one|.sort
  end

  it "matches any characters in a range with '[<character>-<character>]'" do
    Dir.send(@method, '[a-zA-Z]ubdir_one').sort.should == %w|subdir_one|.sort
  end

  it "matches any characters except those in a set with '[^<characters>]'" do
    Dir.send(@method, '[^wtf]ubdir_one').sort.should == %w|subdir_one|.sort
  end

  it "matches any characters except those in a range with '[^<character>-<character]'" do
    Dir.send(@method, '[^0-9]ubdir_one').sort.should == %w|subdir_one|.sort
  end

  it "matches any one of the strings in a set with '{<string>,<other>,...}'" do
    Dir.send(@method, 'subdir_{one,two,three}').sort.should == %w|subdir_one subdir_two|.sort
  end

  it "matches a set '{<string>,<other>,...}' which also uses a glob" do
    Dir.send(@method, 'sub*_{one,two,three}').sort.should == %w|subdir_one subdir_two|.sort
  end

  it "accepts string sets with empty strings with {<string>,,<other>}" do
    a = Dir.send(@method, 'deeply/nested/directory/structure/file_one{.ext,}').sort
    a.should == %w|deeply/nested/directory/structure/file_one.ext
                   deeply/nested/directory/structure/file_one|.sort
  end

  it "matches dot or non-dotfiles with '{,.}*'" do
    Dir.send(@method, '{,.}*').sort.should == DirSpecs.expected_paths
  end

  it "respects the order of {} expressions, expanding left most first" do
    files = Dir.send(@method, "brace/a{.js,.html}{.erb,.rjs}")
    files.should == %w!brace/a.js.rjs brace/a.html.erb!
  end

  it "respects the optional nested {} expressions" do
    files = Dir.send(@method, "brace/a{.{js,html},}{.{erb,rjs},}")
    files.should == %w!brace/a.js.rjs brace/a.js brace/a.html.erb brace/a.erb brace/a!
  end

  it "matches special characters by escaping with a backslash with '\\<character>'" do
    Dir.mkdir 'foo^bar'

    begin
      Dir.send(@method, 'foo?bar').should == %w|foo^bar|
      Dir.send(@method, 'foo\?bar').should == []
      Dir.send(@method, 'nond\otfile').should == %w|nondotfile|
    ensure
      Dir.rmdir 'foo^bar'
    end
  end

  it "recursively matches directories with '**/<characters>'" do
    Dir.send(@method, '**/*fil?{,.}*').uniq.sort.should ==
      %w[deeply/nested/directory/structure/file_one
         deeply/nested/directory/structure/file_one.ext
         deeply/nondotfile

         dir/filename_ordering
         dir_filename_ordering

         file_one.ext
         file_two.ext

         nondotfile

         special/test{1}/file[1]

         subdir_one/nondotfile
         subdir_two/nondotfile
         subdir_two/nondotfile.ext]
  end

  it "ignores matching through directories that doen't exist" do
    Dir.send(@method, "deeply/notthere/blah*/whatever").should == []
  end

  it "ignores matching only directories under an nonexistant path" do
    Dir.send(@method, "deeply/notthere/blah/").should == []
  end

  platform_is_not :windows do
    it "matches UTF-8 paths" do
      Dir.send(@method, "special/こんにちは{,.txt}").should == ["special/こんにちは.txt"]
    end
  end
end

describe :dir_glob_recursive, shared: true do
  before :each do
    @cwd = Dir.pwd
    @mock_dir = File.expand_path tmp('dir_glob_mock')

    %w[
      a/x/b/y/e
      a/x/b/y/b/z/e
    ].each do |path|
      file = File.join @mock_dir, path
      mkdir_p File.dirname(file)
      touch file
    end

    Dir.chdir @mock_dir
  end

  after :each do
    Dir.chdir @cwd
    rm_r @mock_dir
  end

  it "matches multiple recursives" do
    expected = %w[
      a/x/b/y/b/z/e
      a/x/b/y/e
    ]

    Dir.send(@method, 'a/**/b/**/e').uniq.sort.should == expected
  end

  platform_is_not :windows do
    it "ignores symlinks" do
      file = File.join @mock_dir, 'b/z/e'
      link = File.join @mock_dir, 'a/y'

      mkdir_p File.dirname(file)
      touch file
      File.symlink(File.dirname(file), link)

      expected = %w[
        a/x/b/y/b/z/e
        a/x/b/y/e
      ]

      Dir.send(@method, 'a/**/e').uniq.sort.should == expected
    end
  end
end
