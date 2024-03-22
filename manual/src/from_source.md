# From Source

## Install Rust / Cargo

Install Rust / Cargo by following the official instructions [rust-lang.org](https://www.rust-lang.org/tools/install).

### Ubuntu

You can install cargo in Ubuntu via apt

```
sudo apt install cargo
```

## Clone the repository

In some directory of your choice:

```
git clone git@github.com:Wilfred/difftastic.git
```

## Compile and install

```
cd difftastic && cargo install --path .
```

## Update PATH (Linux)

If you installed cargo with the default settings:

```
echo "export PATH=$PATH:~/cargo/bin" >> ~/.bashrc
. ~/.bashrc
```

## Check installation

```
difft --version
```

should output something like

```
Difftastic 0.57.0 (caf8760de 2024-03-22, built with rustc 1.75.0)
```
