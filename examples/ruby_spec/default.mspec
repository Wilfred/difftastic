# Configuration file for Ruby >= 2.0 implementations.

class MSpecScript
  # Language features specs
  set :language, [ 'language' ]

  # Core library specs
  set :core, [ 'core' ]

  # Standard library specs
  set :library, [ 'library' ]

  # Command line specs
  set :command_line, [ 'command_line' ]

  # Security specs
  set :security, [ 'security' ]

  # C extension API specs
  set :capi, [ 'optional/capi' ]

  # A list of _all_ optional specs
  set :optional, get(:capi)

  # An ordered list of the directories containing specs to run
  set :files, get(:command_line) + get(:language) + get(:core) + get(:library) + get(:security) + get(:optional)

  # This set of files is run by mspec ci
  set :ci_files, get(:files)

  # The default implementation to run the specs.
  # TODO: this needs to be more sophisticated since the
  # executable is not consistently named.
  set :target, 'ruby'

  set :backtrace_filter, /mspec\//

  set :tags_patterns, [
                        [%r(language/),     'tags/1.9/language/'],
                        [%r(core/),         'tags/1.9/core/'],
                        [%r(command_line/), 'tags/1.9/command_line/'],
                        [%r(library/),      'tags/1.9/library/'],
                        [%r(security/),     'tags/1.9/security/'],
                        [/_spec.rb$/,       '_tags.txt']
                      ]

  # Enable features
  MSpec.enable_feature :fiber
  MSpec.enable_feature :fiber_library
  MSpec.enable_feature :fork if respond_to?(:fork, true)
  MSpec.enable_feature :encoding
end
