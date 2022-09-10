# Installation安装

## Installing a binary从二进制安装

Difftastic [provides GitHub
releases](https://github.com/Wilfred/difftastic/releases) with
prebuilt binaries.Difftastic以预先编译好的二进制的形式[提供Github realease](https://github.com/Wilfred/difftastic/releases) 。

Packages are also available on the following platforms.在以下平台上也可以使用软件包。

[![Packaging status](https://repology.org/badge/vertical-allrepos/difftastic.svg)](https://repology.org/project/difftastic/versions)


## Installing via homebrew (on macOS or Linux)通过homebrew安装（在macos或者Linux平台）

Difftastic can be installed with [Homebrew](https://formulae.brew.sh/formula/difftastic) on macOS or Linux.Difftastic可以用[Homebrew](https://formulae.brew.sh/formula/difftastic)安装在macOS或Linux上。


```
$ brew install difftastic
```

## Installing from source从源码安装

### Build Requirements编译要求

Difftastic is written in Rust, so you will need Rust installed. I
recommend [rustup](https://rustup.rs/) to install Rust. Difftastic
requires Rust version 1.57 or later.Difftasitc是使用Rust编写的，所以你需要安装Rust。我推荐使用[rustup](https://rustup.rs/)来安装Rust。

You will also need a C++ compiler that supports C++14. If you're using
GCC, you need at least version 8.同时你也需要一个支持C++14的C++编译器。如果你正在使用GCC，则GCC版本至少为8。

### Build编译

You can download and build [difftastic on
crates.io](https://crates.io/crates/difftastic) with Cargo (which is
part of Rust).你可以下载并通过Cargo（它是Rust的一部分）来编译[difftastic on
crates.io](https://crates.io/crates/difftastic) 。

```
$ cargo install difftastic
```

Difftastic uses the `cc` crate for building C/C++ dependencies. This
allows you to use environment variables `CC` and `CXX` to control the
compiler used (see [the cc
docs](https://github.com/alexcrichton/cc-rs#external-configuration-via-environment-variables)). Difftastic使用`cc`程序箱来构建C/C++的依赖关系。这使得你可以通过环境变量`CC`和`CXX`来控制使用的编译器（参照see [the cc
docs](https://github.com/alexcrichton/cc-rs#external-configuration-via-environment-variables)）。

See [contributing](./contributing.md) for instructions on debug
builds.参考[contributing](./contributing.md)来查看有关构建的说明。

## (Optional) Install MIME Database（可选）安装MINE数据库

If a MIME database is available, difftastic will use it to detect
binary files more accurately. This is the same database used by the
`file` command, so you probably already have it.如果有一个MIME数据库，Difftastic将使用它来更准确地检测二进制文件。这个也是使用`file`命令时所调用的同一个数据库，你可能已经安装了它。

The MIME database path is [specified in the XDG
specification](https://specifications.freedesktop.org/shared-mime-info-spec/0.11/ar01s03.html). The
database should be at one of the following paths:MIME数据库的路径[是在XDG的规定下](https://specifications.freedesktop.org/shared-mime-info-spec/0.11/ar01s03.html)：

* `/usr/share/mime/magic`
* `/usr/local/share/mime/magic`
* `$HOME/.local/share/mime/magic`
