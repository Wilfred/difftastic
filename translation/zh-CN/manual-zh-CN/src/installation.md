# 安装

## 从二进制安装

Difftastic 将预先编译好的二进制文件 [提供到 GitHub releases](https://github.com/Wilfred/difftastic/releases) 。[更新日志](https://github.com/Wilfred/difftastic/blob/master/CHANGELOG.md) 描述了每个发行版的变更。

在以下平台上也可以使用软件包。

[![安装包状态](https://repology.org/badge/vertical-allrepos/difftastic.svg)](https://repology.org/project/difftastic/versions)


## 通过 homebrew 安装（macOS 或 Linux）

Difftastic 可以使用 [Homebrew](https://formulae.brew.sh/formula/difftastic) 安装在 macOS 或 Linux 上。


```
$ brew install difftastic
```

## 从源码构建

### 要求

Difftastic 使用 Rust 编写，所以你需安装 Rust。我推荐使用 [rustup](https://rustup.rs/) 安装 Rust。Difftastic 要求 Rust 版本不低于 1.65。

你也需要一个支持 C++14 的 C++ 编译器。如果你正在使用 GCC，则 GCC 版本至少为 8。

### 构建

你可以下载并使用 Cargo（Rust 的一部分）构建 [Difftastic on
crates.io](https://crates.io/crates/difftastic)。

```
$ cargo install --locked difftastic
```

Difftastic 使用 `cc` 程序箱来构建 C/C++ 的依赖关系，这使你能通过环境变量 `CC` 与 `CXX` 来控制使用的编译器（参照 [cc
文档](https://github.com/alexcrichton/cc-rs#external-configuration-via-environment-variables)）。

参考 [贡献](./contributing.md) 来查看有关构建的说明。

## （可选）安装 MIME 数据库

如果有一个 MIME 数据库，Difftastic 将使用它来更准确地检测二进制文件。MIME 数据库在使用 `file` 命令时也需要被调用，因此你可能已经安装了它。

MIME 数据库的路径 [在 XDG 的规范下](https://specifications.freedesktop.org/shared-mime-info-spec/0.11/ar01s03.html)：

* `/usr/share/mime/magic`
* `/usr/local/share/mime/magic`
* `$HOME/.local/share/mime/magic`
