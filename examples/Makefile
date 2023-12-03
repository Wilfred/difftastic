GIT = git
GIT_LOG_FLAGS = -p --reverse
QTDECLARATIVE_GIT_ID = f27cb5e3c1cfdf2cb19f3a4d62c72129dfd4f798

.PHONY: all
all: qtdeclarative

.PHONY: qtdeclarative
qtdeclarative:
	[ -d $@ ] || $(GIT) clone git://code.qt.io/qt/qtdeclarative.git $@
	$(GIT) -C $@ fetch
	$(GIT) -C $@ reset --hard $(QTDECLARATIVE_GIT_ID)

.PHONY: review-qtdeclarative
review-qtdeclarative:
	$(GIT) -C qtdeclarative log $(GIT_LOG_FLAGS) \
		$(QTDECLARATIVE_GIT_ID)..origin/dev \
		src/qml/compiler/qqmlirbuilder.cpp \
		src/qml/parser
