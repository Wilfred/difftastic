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

You can override language detection for specific file globs using the
`--override` option.

```bash
$ difft --override=GLOB:NAME FIRST-FILE SECOND-FILE

# For example, treating .h files as C rather than C++:
$ difft --override=*.h:c sample_files/preprocessor_1.h sample_files/preprocessor_2.h
```

See `difft --help` for more examples of `--override` usage.
