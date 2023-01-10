GIT = git

.PHONY: all
all: qtdeclarative

.PHONY: qtdeclarative
qtdeclarative:
	[ -d $@ ] || $(GIT) clone git://code.qt.io/qt/qtdeclarative.git $@
	$(GIT) -C $@ fetch
	$(GIT) -C $@ reset --hard ba94a296c3ea97c755538ef99efe5d1dd034725c
