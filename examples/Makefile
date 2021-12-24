GIT = git

.PHONY: all
all: qtdeclarative

.PHONY: qtdeclarative
qtdeclarative:
	[ -d $@ ] || $(GIT) clone git://code.qt.io/qt/qtdeclarative.git $@
	$(GIT) -C $@ fetch
	$(GIT) -C $@ reset --hard 3d23912b0e9710dad7ecaf238690e4a7d253534d
