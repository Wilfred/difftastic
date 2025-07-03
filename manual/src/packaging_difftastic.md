# Packaging Difftastic

This page contains recommendations for people creating a difftastic
package.

Note that the difftastic author only provides the source code and the
prebuilt binaries on GitHub. Packages have been created by other
people -- thank you!

## Packaging The Binary

Difftastic can be built with `cargo`. The compiled binary will be at
`target/release/difft` when using the following command.

```
$ cargo build --release
```

C library dependencies are built with the `cc` crate, which [has
various environment
variables](https://docs.rs/cc/1.1.30/cc/index.html#external-configuration-via-environment-variables)
to configure the C toolchain (e.g. `CFLAGS`).

### Reproducible Builds

Difftastic's build script (the `build.rs` file) uses Rayon to build C
libraries in parallel, which can lead to minor ordering changes in the
final binary.

You can avoid this by disabling Rayon parallelism.

```bash
$ RAYON_NUM_THREADS=1 cargo build --release
```

### MIME Database

Difftastic depends on
[tree_magic_mini](https://docs.rs/tree_magic_mini/latest/tree_magic_mini/),
which accesses the MIME database on the current system. The MIME
database is used to recognise file types, so difftastic does not try
to compoare binary files as text.

This means that the difftastic package should depend on a MIME
database package, if available.

Difftastic respects the [XDG base
specification](https://specifications.freedesktop.org/basedir-spec/latest/index.html#basics)
to find the MIME database files. These files are typically at
`/usr/share/mime/`, `/usr/local/share/mime/` or
`/opt/homebrew/share/mime/`.

## Man Page

As of difftastic 0.58, a man page is available. See the file
`difft.1`.

This file is generated from `difft.1.md`, but the generated `difft.1`
is included in the repository for convenience.

## The Manual

Please consider including the difftastic manual with your
package. These are HTML files that can be generated with `mdbook`. The
following command generates HTML at `manual/book/`.

```
$ cd manual
$ mdbook build
```

`manual/book.toml` also references a script
`replace_version_placeholder.sh` that replaces occurrences of
`DFT_VERSION_HERE` in the manual. For packaging, it may be easier to
remove the configuration from `book.toml` and replace the text
directly.

```diff
-[preprocessor.replace-version-placeholder]
-command = "./replace_version_placeholder.sh"
```

```
$ export CURRENTVERSION="7.8.9"
$ sed -i "s/DFT_VERSION_HERE/$CURRENTVERSION/g" -i src/introduction.md
```

## Testing

If your packaging tool supports testing, consider running the
difftastic unit tests.

```
# Run the normal tests.
$ cargo test

# Run the tests that depend on the
# MIME database being present.
$ cargo test -- --ignored
```
