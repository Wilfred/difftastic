Contributions are much appreciated.
Please open a pull request or add an issue to discuss what you intend to work on.
If the pull requests passes the CI and conforms to the existing style of specs, it will be merged.

### File organization

Spec are grouped in 5 separate top-level groups:

* `command_line`: for the ruby executable command-line flags (`-v`, `-e`, etc)
* `language`: for the language keywords and syntax constructs (`if`, `def`, `A::B`, etc)
* `core`: for the core methods (`Fixnum#+`, `String#upcase`, no need to require anything)
* `library`: for the standard libraries methods (`CSV.new`, `YAML.parse`, need to require the stdlib)
* `optional/capi`: for functions available to the Ruby C-extension API

The exact file for methods is decided by the `#owner` of a method, for instance for `#group_by`:
```ruby
> [].method(:group_by)
=> #<Method: Array(Enumerable)#group_by>
> [].method(:group_by).owner
=> Enumerable
```
Which should therefore be specified in `core/enumerable/group_by_spec.rb`.

### MkSpec - a tool to generate the spec structure

If you want to create new specs, you should use `mkspec`, part of [MSpec](http://github.com/ruby/mspec).

    $ ../mspec/bin/mkspec -h

#### Creating files for unspecified modules or classes

For instance, to create specs for `forwardable`:

    $ ../mspec/bin/mkspec -b library -rforwardable -c Forwardable

Specify `core` or `library` as the `base`.

#### Finding unspecified core methods

This is very easy, just run the command below in your `spec` directory.
`ruby` must be a recent version of MRI.

    $ ruby --disable-gem ../mspec/bin/mkspec

You might also want to search for:

    it "needs to be reviewed for spec completeness"

which indicates the file was generated but the method unspecified.

### Guards

Different guards are available as defined by mspec.
In general, the usage of guards should be minimized as possible.

There are no guards to define implementation-specific behavior because
the Ruby Spec Suite defines common behavior and not implementation details.
Use the implementation test suite for these.

If an implementation does not support some feature, simply tag the related specs as failing instead.

### Style

Do not leave any trailing space and respect the existing style.
