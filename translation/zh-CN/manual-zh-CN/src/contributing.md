# 贡献

## 构建

用[rustup](https://rustup.rs/)安装Rust，然后克隆代码。

```
$ git clone git@github.com:Wilfred/difftastic.git
$ cd difftastic
```

Difftastic使用[Cargo](https://doc.rust-lang.org/cargo/)进行构建。

```
$ cargo build
```

调试构建的速度明显比发布构建的速度慢。对于超过50行的文件，通常建议使用一个优化的构建。

```
$ cargo build --release
```

## Manual说明书

这个网站是用[mdbook](https://github.com/rust-lang/mdBook/)。mdbook可以用Cargo安装。

```
$ cargo install mdbook
```

然后你可以使用`mdbook`二进制文件来建立和在本地运行网站。

```
$ cd manual
$ mdbook serve
```

## API文档

你可以浏览由rustdoc生成的内部API文档[在这里](https://difftastic.wilfred.me.uk/rustdoc/difft/)。

Difftastic的内部文档在docs.rs上没有提供，因为它[不支持二进制工具箱](https://difftastic.wilfred.me.uk/rustdoc/difft/)。

## 测试

```
$ cargo test
```

在`sample_files/`中也有几个文件你可以使用。

测试difftastic的最好方法是在真实项目查看历史。设置`GIT_EXTERNAL_DIFF`指向你当前的构建。

例如，你可以在自己的源代码上运行Difftastic。
```
$ GIT_EXTERNAL_DIFF=./target/release/difft git log -p --ext-diff -- src
```

## 记录

Difftastic使用`pretty_env_logger`库来记录一些额外的调试信息。

```
$ DFT_LOG=debug cargo run sample_files/old.jsx sample_files/new.jsx
```

请参阅[`env_logger`](https://docs.rs/env_logger/0.9.0/env_logger/)以获得完整的细节。

## 调试

如果你有一个特别慢的文件，你可以使用 [cargo-flamegraph](https://github.com/flamegraph-rs/flamegraph) 来查看是哪些函数慢的。

```
$ CARGO_PROFILE_RELEASE_DEBUG=true cargo flamegraph --bin difft sample_files/slow_1.rs sample_files/slow_2.rs
```

内存的使用情况也是值得关注，因为图的遍历错误会导致巨大的内存消耗。

```
$ /usr/bin/time -v ./target/release/difft sample_files/slow_1.rs sample_files/slow_2.rs
```

如果定时测量有噪音，Linux的`perf`工具将报告 执行的指令，这也是更加稳定的。

```
$ perf stat ./target/release/difft sample_files/slow_1.rs sample_files/slow_2.rs
$ perf stat ./target/release/difft sample_files/typing_1.ml sample_files/typing_2.ml
```

还有很多剖析技术在[The Rust性能手册](https://nnethercote.github.io/perf-book/)中讨论了。

## 发布

使用Cargo创建一个新的版本，并在git中标记它。Difftastic有一个帮助脚本：

```
$ ./scripts/release.sh
```

现在你可以增加Cargo.toml中的版本，并在
CHANGELOG.md加一个新的条目。
