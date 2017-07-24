require File.expand_path('../../../spec_helper', __FILE__)

# MRI magic to use built but not installed ruby
$extmk = false

require 'rbconfig'

OBJDIR ||= File.expand_path("../../../ext/#{RUBY_ENGINE}/#{RUBY_VERSION}", __FILE__)
mkdir_p(OBJDIR)

def extension_path
  File.expand_path("../ext", __FILE__)
end

def object_path
  OBJDIR
end

def compile_extension(name)
  debug = false
  run_mkmf_in_process = RUBY_ENGINE == 'truffleruby'

  ext = "#{name}_spec"
  lib = "#{object_path}/#{ext}.#{RbConfig::CONFIG['DLEXT']}"
  ruby_header = "#{RbConfig::CONFIG['rubyhdrdir']}/ruby.h"

  return lib if File.exist?(lib) and
                File.mtime(lib) > File.mtime("#{extension_path}/rubyspec.h") and
                File.mtime(lib) > File.mtime("#{extension_path}/#{ext}.c") and
                File.mtime(lib) > File.mtime(ruby_header) and
                true            # sentinel

  # Copy needed source files to tmpdir
  tmpdir = tmp("cext_#{name}")
  Dir.mkdir(tmpdir)
  begin
    ["rubyspec.h", "#{ext}.c"].each do |file|
      cp "#{extension_path}/#{file}", "#{tmpdir}/#{file}"
    end

    Dir.chdir(tmpdir) do
      if run_mkmf_in_process
        required = require 'mkmf'
        # Reinitialize mkmf if already required
        init_mkmf unless required
        create_makefile(ext, tmpdir)
      else
        File.write("extconf.rb", "require 'mkmf'\n" +
          "$ruby = ENV.values_at('RUBY_EXE', 'RUBY_FLAGS').join(' ')\n" +
          # MRI magic to consider building non-bundled extensions
          "$extout = nil\n" +
          "create_makefile(#{ext.inspect})\n")
        output = ruby_exe("extconf.rb")
        raise "extconf failed:\n#{output}" unless $?.success?
        $stderr.puts output if debug
      end

      make = ENV['MAKE']
      make ||= (RbConfig::CONFIG['host_os'].include?("mswin") ? "nmake" : "make")
      if File.basename(make, ".*") == "nmake"
        # suppress logo of nmake.exe to stderr
        ENV["MAKEFLAGS"] = "l#{ENV["MAKEFLAGS"]}"
      end

      # Do not capture stderr as we want to show compiler warnings
      output = IO.popen([make, "V=1", "DESTDIR=", close_others: false], &:read)
      raise "#{make} failed:\n#{output}" unless $?.success?
      $stderr.puts output if debug

      cp File.basename(lib), lib
    end
  ensure
    rm_r tmpdir
  end

  File.chmod(0755, lib)
  lib
end

def load_extension(name)
  require compile_extension(name)
rescue LoadError
  if %r{/usr/sbin/execerror ruby "\(ld 3 1 main ([/a-zA-Z0-9_\-.]+_spec\.so)"} =~ $!.message
    system('/usr/sbin/execerror', "#{RbConfig::CONFIG["bindir"]}/ruby", "(ld 3 1 main #{$1}")
  end
  raise
end

# Constants
CAPI_SIZEOF_LONG = [0].pack('l!').size
