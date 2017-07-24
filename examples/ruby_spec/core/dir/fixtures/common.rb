# encoding: utf-8

module DirSpecs
  def self.mock_dir(dirs = ['dir_specs_mock'])
    @mock_dir ||= tmp("")
    File.join @mock_dir, dirs
  end

  def self.nonexistent
    name = File.join mock_dir, "nonexistent00"
    name = name.next while File.exist? name
    name
  end

  # TODO: make these relative to the mock_dir
  def self.clear_dirs
    [ 'nonexisting',
      'default_perms',
      'reduced',
      'always_returns_0',
      '???',
      [0xe9].pack('U')
    ].each do |dir|
      begin
        Dir.rmdir dir
      rescue
      end
    end
  end

  # The names of the fixture directories and files used by
  # various Dir specs.
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

          special/こんにちは.txt
        ]
      end
    end

    @mock_dir_files
  end

  def self.create_mock_dirs
    mock_dir_files.each do |name|
      file = File.join mock_dir, name
      mkdir_p File.dirname(file)
      touch file
    end
  end

  def self.delete_mock_dirs
    begin
      rm_r mock_dir
    rescue Errno::ENOTEMPTY => e
      puts Dir["#{mock_dir}/**/*"]
      raise e
    end
  end

  def self.mock_rmdir(*dirs)
    mock_dir ['rmdir_dirs'].concat(dirs)
  end

  def self.rmdir_dirs(create = true)
    dirs = %w[
      empty
      nonempty
      nonempty/child
      noperm
      noperm/child
    ]

    base_dir = mock_dir ['rmdir_dirs']

    dirs.reverse_each do |d|
      dir = File.join base_dir, d
      if File.exist? dir
        File.chmod 0777, dir
        rm_r dir
      end
    end
    rm_r base_dir

    if create
      dirs.each do |d|
        dir = File.join base_dir, d
        unless File.exist? dir
          mkdir_p dir
          File.chmod 0777, dir
        end
      end
    end
  end

  def self.expected_paths
    %w[
      .
      ..
      .dotfile
      .dotsubdir
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
  end
end
