VERSION := 0.19.1

# Repository
SRC_DIR := src

PARSER_REPO_URL := $(shell git -C $(SRC_DIR) remote get-url origin )

ifeq (, $(PARSER_NAME))
	PARSER_NAME := $(shell basename $(PARSER_REPO_URL))
	PARSER_NAME := $(subst tree-sitter-,,$(PARSER_NAME))
	PARSER_NAME := $(subst .git,,$(PARSER_NAME))
endif

ifeq (, $(PARSER_URL))
	PARSER_URL := $(subst :,/,$(PARSER_REPO_URL))
	PARSER_URL := $(subst git@,https://,$(PARSER_URL))
	PARSER_URL := $(subst .git,,$(PARSER_URL))
endif

UPPER_PARSER_NAME := $(shell echo $(PARSER_NAME) | tr a-z A-Z )

# install directory layout
PREFIX ?= /usr/local
INCLUDEDIR ?= $(PREFIX)/include
LIBDIR ?= $(PREFIX)/lib
PCLIBDIR ?= $(LIBDIR)/pkgconfig

# collect C++ sources, and link if necessary
CPPSRC := $(wildcard $(SRC_DIR)/*.cc)

ifeq (, $(CPPSRC))
	ADDITIONALLIBS := 
else
	ADDITIONALLIBS := -lc++
endif

# collect sources
SRC := $(wildcard $(SRC_DIR)/*.c)
SRC += $(CPPSRC)
OBJ := $(addsuffix .o,$(basename $(SRC)))

# ABI versioning
SONAME_MAJOR := 0
SONAME_MINOR := 0

CFLAGS ?= -O3 -Wall -Wextra -I$(SRC_DIR)
CXXFLAGS ?= -O3 -Wall -Wextra -I$(SRC_DIR)
override CFLAGS += -std=gnu99 -fPIC
override CXXFLAGS += -fPIC

# OS-specific bits
ifeq ($(shell uname),Darwin)
	SOEXT = dylib
	SOEXTVER_MAJOR = $(SONAME_MAJOR).dylib
	SOEXTVER = $(SONAME_MAJOR).$(SONAME_MINOR).dylib
	LINKSHARED := $(LINKSHARED)-dynamiclib -Wl,
	ifneq ($(ADDITIONALLIBS),)
	LINKSHARED := $(LINKSHARED)$(ADDITIONALLIBS),
	endif
	LINKSHARED := $(LINKSHARED)-install_name,$(LIBDIR)/libtree-sitter-$(PARSER_NAME).$(SONAME_MAJOR).dylib,-rpath,@executable_path/../Frameworks
else
	SOEXT = so
	SOEXTVER_MAJOR = so.$(SONAME_MAJOR)
	SOEXTVER = so.$(SONAME_MAJOR).$(SONAME_MINOR)
	LINKSHARED := $(LINKSHARED)-shared -Wl,
	ifneq ($(ADDITIONALLIBS),)
	LINKSHARED := $(LINKSHARED)$(ADDITIONALLIBS)
	endif
	LINKSHARED := $(LINKSHARED)-soname,libtree-sitter-$(PARSER_NAME).so.$(SONAME_MAJOR)
endif
ifneq (,$(filter $(shell uname),FreeBSD NetBSD DragonFly))
	PCLIBDIR := $(PREFIX)/libdata/pkgconfig
endif
				
all: libtree-sitter-$(PARSER_NAME).a libtree-sitter-$(PARSER_NAME).$(SOEXTVER) bindings/c/$(PARSER_NAME).h bindings/c/tree-sitter-$(PARSER_NAME).pc

libtree-sitter-$(PARSER_NAME).a: $(OBJ)
	$(AR) rcs $@ $^

libtree-sitter-$(PARSER_NAME).$(SOEXTVER): $(OBJ)
	$(CC) $(LDFLAGS) $(LINKSHARED) $^ $(LDLIBS) -o $@
	ln -sf $@ libtree-sitter-$(PARSER_NAME).$(SOEXT)
	ln -sf $@ libtree-sitter-$(PARSER_NAME).$(SOEXTVER_MAJOR)

bindings/c/$(PARSER_NAME).h:
	sed -e 's|@UPPER_PARSERNAME@|$(UPPER_PARSER_NAME)|' \
		-e 's|@PARSERNAME@|$(PARSER_NAME)|' \
		bindings/c/tree-sitter.h.in > $@

bindings/c/tree-sitter-$(PARSER_NAME).pc:
	sed -e 's|@LIBDIR@|$(LIBDIR)|;s|@INCLUDEDIR@|$(INCLUDEDIR)|;s|@VERSION@|$(VERSION)|' \
		-e 's|=$(PREFIX)|=$${prefix}|' \
		-e 's|@PREFIX@|$(PREFIX)|' \
		-e 's|@ADDITIONALLIBS@|$(ADDITIONALLIBS)|' \
		-e 's|@PARSERNAME@|$(PARSER_NAME)|' \
		-e 's|@PARSERURL@|$(PARSER_URL)|' \
		bindings/c/tree-sitter.pc.in > $@

install: all
	install -d '$(DESTDIR)$(LIBDIR)'
	install -m755 libtree-sitter-$(PARSER_NAME).a '$(DESTDIR)$(LIBDIR)'/libtree-sitter-$(PARSER_NAME).a
	install -m755 libtree-sitter-$(PARSER_NAME).$(SOEXTVER) '$(DESTDIR)$(LIBDIR)'/libtree-sitter-$(PARSER_NAME).$(SOEXTVER)
	ln -sf libtree-sitter-$(PARSER_NAME).$(SOEXTVER) '$(DESTDIR)$(LIBDIR)'/libtree-sitter-$(PARSER_NAME).$(SOEXTVER_MAJOR)
	ln -sf libtree-sitter-$(PARSER_NAME).$(SOEXTVER) '$(DESTDIR)$(LIBDIR)'/libtree-sitter-$(PARSER_NAME).$(SOEXT)
	install -d '$(DESTDIR)$(INCLUDEDIR)'/tree_sitter
	install -m644 bindings/c/$(PARSER_NAME).h '$(DESTDIR)$(INCLUDEDIR)'/tree_sitter/
	install -d '$(DESTDIR)$(PCLIBDIR)'
	install -m644 bindings/c/tree-sitter-$(PARSER_NAME).pc '$(DESTDIR)$(PCLIBDIR)'/

clean:
	rm -f $(OBJ) libtree-sitter-$(PARSER_NAME).a libtree-sitter-$(PARSER_NAME).$(SOEXT) libtree-sitter-$(PARSER_NAME).$(SOEXTVER_MAJOR) libtree-sitter-$(PARSER_NAME).$(SOEXTVER)
	rm -f bindings/c/$(PARSER_NAME).h bindings/c/tree-sitter-$(PARSER_NAME).pc

.PHONY: all install clean
