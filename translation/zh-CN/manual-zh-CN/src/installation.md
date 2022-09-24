# 安装

## 从二进制安装

Difftastic以预先编译好的二进制的形式[提供Github realease](https://github.com/Wilfred/difftastic/releases) 。

在以下平台上也可以使用软件包。

[![Packaging status](https://repology.org/badge/vertical-allrepos/difftastic.svg)](https://repology.org/project/difftastic/versions)


## 通过homebrew安装（在macos或者Linux平台）

Difftastic可以用[Homebrew](https://formulae.brew.sh/formula/difftastic)安装在macOS或Linux上。


```
$ brew install difftastic
```

## 从源码安装

### 编译要求

Difftastic是使用Rust编写的，所以你需要安装Rust。我推荐使用[rustup](https://rustup.rs/)来安装Rust。

同时你也需要一个支持C++14的C++编译器。如果你正在使用GCC，则GCC版本至少为8。

### Build编译

你可以下载并通过Cargo（它是Rust的一部分）来编译[difftastic on
crates.io](https://crates.io/crates/difftastic) 。

```
$ cargo install difftastic
```

 Difftastic使用`cc`程序箱来构建C/C++的依赖关系。这使得你可以通过环境变量`CC`和`CXX`来控制使用的编译器（参照see [the cc
docs](https://github.com/alexcrichton/cc-rs#external-configuration-via-environment-variables)）。

参考[contributing](./contributing.md)来查看有关构建的说明。

## （可选）安装MIME数据库

如果有一个MIME数据库，Difftastic将使用它来更准确地检测二进制文件。这个也是使用`file`命令时所调用的同一个数据库，你可能已经安装了它。

MIME数据库的路径[是在XDG的规定下](https://specifications.freedesktop.org/shared-mime-info-spec/0.11/ar01s03.html)：

* `/usr/share/mime/magic`
* `/usr/local/share/mime/magic`
* `$HOME/.local/share/mime/magic`
