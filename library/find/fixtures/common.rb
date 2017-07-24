module FindDirSpecs
  def self.mock_dir(dirs = ['find_specs_mock'])
    @mock_dir ||= tmp("")
    File.join @mock_dir, dirs
  end

  # The names of the fixture directories and files used by
  # various Find specs.
  def self.mock_dir_files
    unless @mock_dir_files
      @mock_dir_files = %w[
        .dotfile
        .dotsubdir/.dotfile
        .dotsubdir/nondotfile

        deeply/.dotfile
        deeply/nested/.dotfile.ext
        deeply/nested/directory/structure/.ext
        deeply/nested/directory/structure/bar
        deeply/nested/directory/structure/baz
        deeply/nested/directory/structure/file_one
        deeply/nested/directory/structure/file_one.ext
        deeply/nested/directory/structure/foo
        deeply/nondotfile

        file_one.ext
        file_two.ext

        dir_filename_ordering
        dir/filename_ordering

        nondotfile

        subdir_one/.dotfile
        subdir_one/nondotfile
        subdir_two/nondotfile
        subdir_two/nondotfile.ext

        brace/a
        brace/a.js
        brace/a.erb
        brace/a.js.rjs
        brace/a.html.erb

        special/+

        special/^
        special/$

        special/(
        special/)
        special/[
        special/]
        special/{
        special/}

        special/test{1}/file[1]
      ]

      platform_is_not :windows do
        @mock_dir_files += %w[
          special/*
          special/?

          special/|
        ]
      end
    end

    @mock_dir_files
  end

  def self.create_mock_dirs
    umask = File.umask 0
    mock_dir_files.each do |name|
      file = File.join mock_dir, name
      mkdir_p File.dirname(file)
      touch file
    end
    File.umask umask
  end

  def self.delete_mock_dirs
    rm_r mock_dir
  end

  def self.expected_paths
    unless @expected_paths
      @expected_paths = %w[
        .dotfile

        .dotsubdir
        .dotsubdir/.dotfile
        .dotsubdir/nondotfile

        deeply
        deeply/.dotfile

        deeply/nested
        deeply/nested/.dotfile.ext

        deeply/nested/directory

        deeply/nested/directory/structure
        deeply/nested/directory/structure/.ext
        deeply/nested/directory/structure/bar
        deeply/nested/directory/structure/baz
        deeply/nested/directory/structure/file_one
        deeply/nested/directory/structure/file_one.ext
        deeply/nested/directory/structure/foo
        deeply/nondotfile

        file_one.ext
        file_two.ext

        dir_filename_ordering

        dir
        dir/filename_ordering

        nondotfile

        subdir_one
        subdir_one/.dotfile
        subdir_one/nondotfile

        subdir_two
        subdir_two/nondotfile
        subdir_two/nondotfile.ext

        brace
        brace/a
        brace/a.js
        brace/a.erb
        brace/a.js.rjs
        brace/a.html.erb

        special
        special/+

        special/^
        special/$

        special/(
        special/)
        special/[
        special/]
        special/{
        special/}

        special/test{1}
        special/test{1}/file[1]
      ]

      platform_is_not :windows do
        @expected_paths += %w[
          special/*
          special/?

          special/|
        ]
      end

      @expected_paths.map! do |file|
        File.join(mock_dir, file)
      end

      @expected_paths << mock_dir
      @expected_paths.sort!
    end

    @expected_paths
  end
end
