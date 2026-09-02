# Language Detection

Difftastic guesses the language used based on the file extension, file
name, and the contents of the first few lines.

To see the languages available, and the associated file names, use the
`--list-languages` option.

```bash
$ difft --list-languages
...
XML
 *.ant *.csproj *.plist *.resx *.svg *.ui *.vbproj *.xaml *.xml *.xsd *.xsl *.xslt *.zcml App.config nuget.config packages.config .classpath .cproject .project
YAML
 *.yaml *.yml
Zig
 *.zig
```

## Overriding detection

Difftastic looks at three things, in this order. The first one that
applies wins.

1. `--override` arguments on the command line.
2. A `linguist-language` attribute in `.gitattributes`.
3. Normal detection: the file name, then the contents of the first few
   lines.

### .gitattributes

Difftastic honours the `linguist-language` attribute, the same
attribute that [GitHub's linguist] uses to override its own detection.

```
# .gitattributes
*.props linguist-language=XML
translations/*.ts linguist-language=XML
```

[GitHub's linguist]: https://github.com/github-linguist/linguist/blob/master/docs/overrides.md

The attribute value is matched against difftastic's own language names,
the same names that `--override` and `--list-languages` use, ignoring
case. Git attribute values cannot contain spaces, so multi-word
languages are written with `-` or `_`, e.g. `linguist-language=Emacs-Lisp`.
The value `text` treats the file as plain text.

Linguist knows about many languages that difftastic has no parser for,
so a value difftastic doesn't recognise is ignored and normal detection
is used instead. Run difftastic with `DFT_LOG=debug` to see when this
happens.

This requires `git` on `$PATH`, and only applies to files inside a git
repository.

### --override

You can override language detection for specific file globs using the
`--override` option. This takes precedence over `.gitattributes`.

```bash
$ difft --override=GLOB:NAME FIRST-FILE SECOND-FILE

# For example, treating .h files as C rather than C++:
$ difft --override=*.h:c sample_files/preprocessor_1.h sample_files/preprocessor_2.h
```

See `difft --help` for more examples of `--override` usage.
