FROM hhvm/hhvm:4.68-latest

ENV NODE_VERSION 14.7.0
ENV NVM_DIR /usr/local/nvm

WORKDIR /tree-sitter-hack

RUN \
  apt-get update -y && \
  apt-get install -y build-essential ruby fd-find

RUN \
  mkdir -p ${NVM_DIR} && \
  curl -o- https://raw.githubusercontent.com/nvm-sh/nvm/v0.35.3/install.sh | bash && \
  . ${NVM_DIR}/nvm.sh && \
  nvm install ${NODE_VERSION} && \
  ln -s $(which node) /usr/local/bin && \
  ln -s $(which npm) /usr/local/bin && \
  ln -s $(which npx) /usr/local/bin && \
  printf "unsafe-perm = true\n" >.npmrc

RUN mkdir -p /mnt/tree-sitter-hack
