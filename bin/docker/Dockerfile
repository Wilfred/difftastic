FROM hhvm/hhvm:4.68-latest

ENV NODE_VERSION 14.7.0

ENV NVM_DIR /usr/local/nvm
ENV HOST_DIR /host/tree-sitter-hack
ENV TSH_DIR /tree-sitter-hack

RUN mkdir -p ${TSH_DIR} ${HOST_DIR} ${NVM_DIR}

WORKDIR ${TSH_DIR}

RUN \
  apt-get update -y && \
  apt-get install -y build-essential ruby

RUN \
  curl -o- https://raw.githubusercontent.com/nvm-sh/nvm/v0.35.3/install.sh | bash && \
  . ${NVM_DIR}/nvm.sh && \
  nvm install ${NODE_VERSION} && \
  ln -s $(which node) /usr/local/bin && \
  ln -s $(which npm) /usr/local/bin && \
  ln -s $(which npx) /usr/local/bin

COPY copy /usr/local/bin/copy
RUN \
  chmod +x /usr/local/bin/copy && \
  /usr/local/bin/copy

RUN export PATH="$TSH_DIR/bin:$PATH"
