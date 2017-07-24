# The Ruby Spec Suite

[![Build Status](https://travis-ci.org/ruby/spec.svg)](https://travis-ci.org/ruby/spec)
[![Build Status](https://ci.appveyor.com/api/projects/status/1gs6f399320o44b1?svg=true)](https://ci.appveyor.com/project/eregon/spec-x948i)

The Ruby Spec Suite is a test suite for the behavior of the Ruby programming language.

It is not a standardized specification like the ISO one, and does not aim to become one.
Instead, it is a practical tool to describe and test the behavior of Ruby with code.

Every example code has a textual description, which presents several advantages:

* It is easier to understand the intent of the author
* It documents how recent versions of Ruby should behave
* It helps Ruby implementations to agree on a common behavior

The specs are written with syntax similar to RSpec 2.
They are run with MSpec, the purpose-built framework for running the Ruby Spec Suite.
For more information, see the [MSpec](http://github.com/ruby/mspec) project.

The specs describe the [language syntax](language/), the [core library](core/), the [standard library](library/), the [C API for extensions](optional/capi) and the [command line flags](command_line/).
The language specs are grouped by keyword while the core and standard library specs are grouped by class and method.

ruby/spec is known to be tested in these implementations for every commit:
* [MRI](http://rubyci.org/) on 30 platforms and 4 versions
* [JRuby](https://github.com/jruby/jruby/tree/master/spec/ruby) on Travis for both 1.7 and 9.x
* [TruffleRuby](https://github.com/graalvm/truffleruby) on Travis
* [Opal](https://github.com/opal/opal/tree/master/spec) on Travis

### Running the specs

First, clone this repository:

    $ git clone https://github.com/ruby/spec.git

Then move to it:

    $ cd spec

Clone [MSpec](http://github.com/ruby/mspec):

    $ git clone https://github.com/ruby/mspec.git ../mspec

And run the spec suite:

    $ ../mspec/bin/mspec

This will execute all the specs using the executable named `ruby` on your current PATH.

### Running Specs with a Specific Ruby Implementation

Use the `-t` option to specify the Ruby implementation with which to run the specs.
The argument may be a full path to the Ruby binary.

    $ ../mspec/bin/mspec -t /path/to/some/bin/ruby

### Running Selected Specs

To run a single spec file, pass the filename to `mspec`:

    $ ../mspec/bin/mspec core/kernel/kind_of_spec.rb

You can also pass a directory, in which case all specs in that directories will be run:

    $ ../mspec/bin/mspec core/kernel

Finally, you can also run them per group as defined in `default.mspec`.
The following command will run all language specs:

    $ ../mspec/bin/mspec :language

In similar fashion, the following commands run the respective specs:

    $ ../mspec/bin/mspec :core
    $ ../mspec/bin/mspec :library
    $ ../mspec/bin/mspec :capi

### Contributing

See [CONTRIBUTING.md](https://github.com/ruby/spec/blob/master/CONTRIBUTING.md).

### History and RubySpec

This project was originally born from [Rubinius](https://github.com/rubinius/rubinius) tests being converted to the spec style.
These specs were later extracted to their own project, RubySpec, with a specific vision and principles.
At the end of 2014, Brian Shirai, the creator of RubySpec, decided to [end RubySpec](http://rubinius.com/2014/12/31/matz-s-ruby-developers-don-t-use-rubyspec/).
A couple months later, the different repositories were merged and [the project was revived](http://eregon.github.io/rubyspec/2015/07/29/rubyspec-is-reborn.html).
On 12 January 2016, the name was changed to "The Ruby Spec Suite" for clarity and to let the RubySpec ideology rest in peace.
