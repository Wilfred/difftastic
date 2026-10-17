# This file is under the GPLv2 license, as it is part of git source code.
# https://github.com/git/git/commit/56550ea718091e5868fdb241b5dfa882923db70c

# The default target of this Makefile is...
all::

config-list.h: Documentation/*config.txt Documentation/config/*.txt
	$(QUIET_GEN)$(SHELL_PATH) ./generate-configlist.sh \
		>$@+ && mv $@+ $@

command-list.h: generate-cmdlist.sh command-list.txt

command-list.h: $(wildcard Documentation/git*.txt)
	$(QUIET_GEN)$(SHELL_PATH) ./generate-cmdlist.sh \
		$(patsubst %,--exclude-program %,$(EXCLUDED_PROGRAMS)) \
		command-list.txt >$@+ && mv $@+ $@

SCRIPT_DEFINES = $(SHELL_PATH_SQ):$(DIFF_SQ):$(GIT_VERSION):\
	$(localedir_SQ):$(NO_CURL):$(USE_GETTEXT_SCHEME):$(SANE_TOOL_PATH_SQ):\
	$(gitwebdir_SQ):$(PERL_PATH_SQ):$(SANE_TEXT_GREP):$(PAGER_ENV):\
	$(perllibdir_SQ)
define cmd_munge_script
$(RM) $@ $@+ && \
sed -e '1s|#!.*/sh|#!$(SHELL_PATH_SQ)|' \
    -e 's|@SHELL_PATH@|$(SHELL_PATH_SQ)|' \
    -e 's|@@DIFF@@|$(DIFF_SQ)|' \
    -e 's|@@LOCALEDIR@@|$(localedir_SQ)|g' \
    -e 's/@@NO_CURL@@/$(NO_CURL)/g' \
    -e 's/@@USE_GETTEXT_SCHEME@@/$(USE_GETTEXT_SCHEME)/g' \
    -e $(BROKEN_PATH_FIX) \
    -e 's|@@GITWEBDIR@@|$(gitwebdir_SQ)|g' \
    -e 's|@@PERL@@|$(PERL_PATH_SQ)|g' \
    -e 's|@@SANE_TEXT_GREP@@|$(SANE_TEXT_GREP)|g' \
    -e 's|@@PAGER_ENV@@|$(PAGER_ENV_SQ)|g' \
    $@.sh >$@+
endef

GIT-SCRIPT-DEFINES: FORCE
	@FLAGS='$(SCRIPT_DEFINES)'; \
	    if test x"$$FLAGS" != x"`cat $@ 2>/dev/null`" ; then \
		echo >&2 "    * new script parameters"; \
		echo "$$FLAGS" >$@; \
            fi


$(SCRIPT_SH_GEN) : % : %.sh GIT-SCRIPT-DEFINES
	$(QUIET_GEN)$(cmd_munge_script) && \
	chmod +x $@+ && \
	mv $@+ $@

$(SCRIPT_LIB) : % : %.sh GIT-SCRIPT-DEFINES
	$(QUIET_GEN)$(cmd_munge_script) && \
	mv $@+ $@

git.res: git.rc GIT-VERSION-FILE GIT-PREFIX
	$(QUIET_RC)$(RC) \
	  $(join -DMAJOR= -DMINOR= -DMICRO= -DPATCHLEVEL=, $(wordlist 1, 4, \
	    $(shell echo $(GIT_VERSION) 0 0 0 0 | tr '.a-zA-Z-' ' '))) \
	  -DGIT_VERSION="\\\"$(GIT_VERSION)\\\"" -i $< -o $@

# This makes sure we depend on the NO_PERL setting itself.
$(SCRIPT_PERL_GEN): GIT-BUILD-OPTIONS

# Used for substitution in Perl modules. Disabled when using RUNTIME_PREFIX
# since the locale directory is injected.
perl_localedir_SQ = $(localedir_SQ)

ifndef NO_PERL
PERL_HEADER_TEMPLATE = perl/header_templates/fixed_prefix.template.pl
PERL_DEFINES = $(PERL_PATH_SQ):$(PERLLIB_EXTRA_SQ):$(perllibdir_SQ)

PERL_DEFINES := $(PERL_PATH_SQ) $(PERLLIB_EXTRA_SQ) $(perllibdir_SQ)
PERL_DEFINES += $(RUNTIME_PREFIX)

# Support Perl runtime prefix. In this mode, a different header is installed
# into Perl scripts.
ifdef RUNTIME_PREFIX

PERL_HEADER_TEMPLATE = perl/header_templates/runtime_prefix.template.pl

# Don't export a fixed $(localedir) path; it will be resolved by the Perl header
# at runtime.
perl_localedir_SQ =

endif

PERL_DEFINES += $(gitexecdir) $(perllibdir) $(localedir)

$(SCRIPT_PERL_GEN): % : %.perl GIT-PERL-DEFINES GIT-PERL-HEADER GIT-VERSION-FILE
	$(QUIET_GEN)$(RM) $@ $@+ && \
	sed -e '1{' \
	    -e '	s|#!.*perl|#!$(PERL_PATH_SQ)|' \
	    -e '	r GIT-PERL-HEADER' \
	    -e '	G' \
	    -e '}' \
	    -e 's/@@GIT_VERSION@@/$(GIT_VERSION)/g' \
	    $< >$@+ && \
	chmod +x $@+ && \
	mv $@+ $@

PERL_DEFINES := $(subst $(space),:,$(PERL_DEFINES))
GIT-PERL-DEFINES: FORCE
	@FLAGS='$(PERL_DEFINES)'; \
	    if test x"$$FLAGS" != x"`cat $@ 2>/dev/null`" ; then \
		echo >&2 "    * new perl-specific parameters"; \
		echo "$$FLAGS" >$@; \
	    fi

GIT-PERL-HEADER: $(PERL_HEADER_TEMPLATE) GIT-PERL-DEFINES Makefile
	$(QUIET_GEN)$(RM) $@ && \
	INSTLIBDIR='$(perllibdir_SQ)' && \
	INSTLIBDIR_EXTRA='$(PERLLIB_EXTRA_SQ)' && \
	INSTLIBDIR="$$INSTLIBDIR$${INSTLIBDIR_EXTRA:+:$$INSTLIBDIR_EXTRA}" && \
	sed -e 's=@@PATHSEP@@=$(pathsep)=g' \
	    -e "s=@@INSTLIBDIR@@=$$INSTLIBDIR=g" \
	    -e 's=@@PERLLIBDIR_REL@@=$(perllibdir_relative_SQ)=g' \
	    -e 's=@@GITEXECDIR_REL@@=$(gitexecdir_relative_SQ)=g' \
	    -e 's=@@LOCALEDIR_REL@@=$(localedir_relative_SQ)=g' \
	    $< >$@+ && \
	mv $@+ $@

.PHONY: perllibdir
perllibdir:
	@echo '$(perllibdir_SQ)'

.PHONY: gitweb
gitweb:
	$(QUIET_SUBDIR0)gitweb $(QUIET_SUBDIR1) all

git-instaweb: git-instaweb.sh GIT-SCRIPT-DEFINES
	$(QUIET_GEN)$(cmd_munge_script) && \
	chmod +x $@+ && \
	mv $@+ $@
else # NO_PERL
$(SCRIPT_PERL_GEN) git-instaweb: % : unimplemented.sh
	$(QUIET_GEN)$(RM) $@ $@+ && \
	sed -e '1s|#!.*/sh|#!$(SHELL_PATH_SQ)|' \
	    -e 's|@@REASON@@|NO_PERL=$(NO_PERL)|g' \
	    unimplemented.sh >$@+ && \
	chmod +x $@+ && \
	mv $@+ $@
endif # NO_PERL

# This makes sure we depend on the NO_PYTHON setting itself.
$(SCRIPT_PYTHON_GEN): GIT-BUILD-OPTIONS

ifndef NO_PYTHON
$(SCRIPT_PYTHON_GEN): GIT-CFLAGS GIT-PREFIX GIT-PYTHON-VARS
$(SCRIPT_PYTHON_GEN): % : %.py
	$(QUIET_GEN)$(RM) $@ $@+ && \
	sed -e '1s|#!.*python|#!$(PYTHON_PATH_SQ)|' \
	    $< >$@+ && \
	chmod +x $@+ && \
	mv $@+ $@
else # NO_PYTHON
$(SCRIPT_PYTHON_GEN): % : unimplemented.sh
	$(QUIET_GEN)$(RM) $@ $@+ && \
	sed -e '1s|#!.*/sh|#!$(SHELL_PATH_SQ)|' \
	    -e 's|@@REASON@@|NO_PYTHON=$(NO_PYTHON)|g' \
	    unimplemented.sh >$@+ && \
	chmod +x $@+ && \
	mv $@+ $@
endif # NO_PYTHON

CONFIGURE_RECIPE = $(RM) configure configure.ac+ && \
		   sed -e 's/@@GIT_VERSION@@/$(GIT_VERSION)/g' \
			configure.ac >configure.ac+ && \
		   autoconf -o configure configure.ac+ && \
		   $(RM) configure.ac+

configure: configure.ac GIT-VERSION-FILE
	$(QUIET_GEN)$(CONFIGURE_RECIPE)

ifdef AUTOCONFIGURED
# We avoid depending on 'configure' here, because it gets rebuilt
# every time GIT-VERSION-FILE is modified, only to update the embedded
# version number string, which config.status does not care about.  We
# do want to recheck when the platform/environment detection logic
# changes, hence this depends on configure.ac.
config.status: configure.ac
	$(QUIET_GEN)$(CONFIGURE_RECIPE) && \
	if test -f config.status; then \
	  ./config.status --recheck; \
	else \
	  ./configure; \
	fi
reconfigure config.mak.autogen: config.status
	$(QUIET_GEN)./config.status
.PHONY: reconfigure # This is a convenience target.
endif

XDIFF_OBJS += xdiff/xdiffi.o
XDIFF_OBJS += xdiff/xemit.o
XDIFF_OBJS += xdiff/xhistogram.o
XDIFF_OBJS += xdiff/xmerge.o
XDIFF_OBJS += xdiff/xpatience.o
XDIFF_OBJS += xdiff/xprepare.o
XDIFF_OBJS += xdiff/xutils.o

TEST_OBJS := $(patsubst %$X,%.o,$(TEST_PROGRAMS)) $(patsubst %,t/helper/%,$(TEST_BUILTINS_OBJS))
OBJECTS := $(LIB_OBJS) $(BUILTIN_OBJS) $(PROGRAM_OBJS) $(TEST_OBJS) \
	$(XDIFF_OBJS) \
	$(FUZZ_OBJS) \
	common-main.o \
	git.o
ifndef NO_CURL
	OBJECTS += http.o http-walker.o remote-curl.o
endif

dep_files := $(foreach f,$(OBJECTS),$(dir $f).depend/$(notdir $f).d)
dep_dirs := $(addsuffix .depend,$(sort $(dir $(OBJECTS))))

ifeq ($(COMPUTE_HEADER_DEPENDENCIES),yes)
$(dep_dirs):
	@mkdir -p $@

missing_dep_dirs := $(filter-out $(wildcard $(dep_dirs)),$(dep_dirs))
dep_file = $(dir $@).depend/$(notdir $@).d
dep_args = -MF $(dep_file) -MQ $@ -MMD -MP
endif

ifneq ($(COMPUTE_HEADER_DEPENDENCIES),yes)
dep_dirs =
missing_dep_dirs =
dep_args =
endif

compdb_dir = compile_commands

ifeq ($(GENERATE_COMPILATION_DATABASE),yes)
missing_compdb_dir = $(compdb_dir)
$(missing_compdb_dir):
	@mkdir -p $@

compdb_file = $(compdb_dir)/$(subst /,-,$@.json)
compdb_args = -MJ $(compdb_file)
else
missing_compdb_dir =
compdb_args =
endif

ASM_SRC := $(wildcard $(OBJECTS:o=S))
ASM_OBJ := $(ASM_SRC:S=o)
C_OBJ := $(filter-out $(ASM_OBJ),$(OBJECTS))

.SUFFIXES:

$(C_OBJ): %.o: %.c GIT-CFLAGS $(missing_dep_dirs) $(missing_compdb_dir)
	$(QUIET_CC)$(CC) -o $*.o -c $(dep_args) $(compdb_args) $(ALL_CFLAGS) $(EXTRA_CPPFLAGS) $<
$(ASM_OBJ): %.o: %.S GIT-CFLAGS $(missing_dep_dirs) $(missing_compdb_dir)
	$(QUIET_CC)$(CC) -o $*.o -c $(dep_args) $(compdb_args) $(ALL_CFLAGS) $(EXTRA_CPPFLAGS) $<

%.s: %.c GIT-CFLAGS FORCE
	$(QUIET_CC)$(CC) -o $@ -S $(ALL_CFLAGS) $(EXTRA_CPPFLAGS) $<

ifdef USE_COMPUTED_HEADER_DEPENDENCIES
# Take advantage of gcc's on-the-fly dependency generation
# See <http://gcc.gnu.org/gcc-3.0/features.html>.
dep_files_present := $(wildcard $(dep_files))
ifneq ($(dep_files_present),)
include $(dep_files_present)
endif
else
# Dependencies on header files, for platforms that do not support
# the gcc -MMD option.
#
# Dependencies on automatically generated headers such as command-list.h
# should _not_ be included here, since they are necessary even when
# building an object for the first time.

$(OBJECTS): $(LIB_H) $(GENERATED_H)
endif

ifeq ($(GENERATE_COMPILATION_DATABASE),yes)
all:: compile_commands.json
compile_commands.json:
	@$(RM) $@
	$(QUIET_GEN)sed -e '1s/^/[/' -e '$$s/,$$/]/' $(compdb_dir)/*.o.json > $@+
	@if test -s $@+; then mv $@+ $@; else $(RM) $@+; fi
endif

exec-cmd.sp exec-cmd.s exec-cmd.o: GIT-PREFIX
exec-cmd.sp exec-cmd.s exec-cmd.o: EXTRA_CPPFLAGS = \
	'-DGIT_EXEC_PATH="$(gitexecdir_SQ)"' \
	'-DGIT_LOCALE_PATH="$(localedir_relative_SQ)"' \
	'-DBINDIR="$(bindir_relative_SQ)"' \
	'-DFALLBACK_RUNTIME_PREFIX="$(prefix_SQ)"'

builtin/init-db.sp builtin/init-db.s builtin/init-db.o: GIT-PREFIX
builtin/init-db.sp builtin/init-db.s builtin/init-db.o: EXTRA_CPPFLAGS = \
	-DDEFAULT_GIT_TEMPLATE_DIR='"$(template_dir_SQ)"'

config.sp config.s config.o: GIT-PREFIX
config.sp config.s config.o: EXTRA_CPPFLAGS = \
	-DETC_GITCONFIG='"$(ETC_GITCONFIG_SQ)"'

attr.sp attr.s attr.o: GIT-PREFIX
attr.sp attr.s attr.o: EXTRA_CPPFLAGS = \
	-DETC_GITATTRIBUTES='"$(ETC_GITATTRIBUTES_SQ)"'

gettext.sp gettext.s gettext.o: GIT-PREFIX
gettext.sp gettext.s gettext.o: EXTRA_CPPFLAGS = \
	-DGIT_LOCALE_PATH='"$(localedir_relative_SQ)"'

http-push.sp http.sp http-walker.sp remote-curl.sp imap-send.sp: SP_EXTRA_FLAGS += \
	-DCURL_DISABLE_TYPECHECK

pack-revindex.sp: SP_EXTRA_FLAGS += -Wno-memcpy-max-count

ifdef NO_EXPAT
http-walker.sp http-walker.s http-walker.o: EXTRA_CPPFLAGS = -DNO_EXPAT
endif

ifdef NO_REGEX
compat/regex/regex.sp compat/regex/regex.o: EXTRA_CPPFLAGS = \
	-DGAWK -DNO_MBSUPPORT
endif

ifdef USE_NED_ALLOCATOR
compat/nedmalloc/nedmalloc.sp compat/nedmalloc/nedmalloc.o: EXTRA_CPPFLAGS = \
	-DNDEBUG -DREPLACE_SYSTEM_ALLOCATOR
compat/nedmalloc/nedmalloc.sp: SP_EXTRA_FLAGS += -Wno-non-pointer-null
endif

git-%$X: %.o GIT-LDFLAGS $(GITLIBS)
	$(QUIET_LINK)$(CC) $(ALL_CFLAGS) -o $@ $(ALL_LDFLAGS) $(filter %.o,$^) $(LIBS)

git-imap-send$X: imap-send.o $(IMAP_SEND_BUILDDEPS) GIT-LDFLAGS $(GITLIBS)
	$(QUIET_LINK)$(CC) $(ALL_CFLAGS) -o $@ $(ALL_LDFLAGS) $(filter %.o,$^) \
		$(IMAP_SEND_LDFLAGS) $(LIBS)

git-http-fetch$X: http.o http-walker.o http-fetch.o GIT-LDFLAGS $(GITLIBS)
	$(QUIET_LINK)$(CC) $(ALL_CFLAGS) -o $@ $(ALL_LDFLAGS) $(filter %.o,$^) \
		$(CURL_LIBCURL) $(LIBS)
git-http-push$X: http.o http-push.o GIT-LDFLAGS $(GITLIBS)
	$(QUIET_LINK)$(CC) $(ALL_CFLAGS) -o $@ $(ALL_LDFLAGS) $(filter %.o,$^) \
		$(CURL_LIBCURL) $(EXPAT_LIBEXPAT) $(LIBS)

$(REMOTE_CURL_ALIASES): $(REMOTE_CURL_PRIMARY)
	$(QUIET_LNCP)$(RM) $@ && \
	ln $< $@ 2>/dev/null || \
	ln -s $< $@ 2>/dev/null || \
	cp $< $@

$(REMOTE_CURL_PRIMARY): remote-curl.o http.o http-walker.o GIT-LDFLAGS $(GITLIBS)
	$(QUIET_LINK)$(CC) $(ALL_CFLAGS) -o $@ $(ALL_LDFLAGS) $(filter %.o,$^) \
		$(CURL_LIBCURL) $(EXPAT_LIBEXPAT) $(LIBS)

$(LIB_FILE): $(LIB_OBJS)
	$(QUIET_AR)$(RM) $@ && $(AR) $(ARFLAGS) $@ $^

$(XDIFF_LIB): $(XDIFF_OBJS)
	$(QUIET_AR)$(RM) $@ && $(AR) $(ARFLAGS) $@ $^

export DEFAULT_EDITOR DEFAULT_PAGER

Documentation/GIT-EXCLUDED-PROGRAMS: FORCE
	@EXCLUDED='EXCLUDED_PROGRAMS := $(EXCLUDED_PROGRAMS)'; \
	    if test x"$$EXCLUDED" != \
		x"`cat Documentation/GIT-EXCLUDED-PROGRAMS 2>/dev/null`" ; then \
		echo >&2 "    * new documentation flags"; \
		echo "$$EXCLUDED" >Documentation/GIT-EXCLUDED-PROGRAMS; \
            fi

.PHONY: doc man man-perl html info pdf
doc: man-perl
	$(MAKE) -C Documentation all

man: man-perl
	$(MAKE) -C Documentation man

man-perl: perl/build/man/man3/Git.3pm

html:
	$(MAKE) -C Documentation html

info:
	$(MAKE) -C Documentation info

pdf:
	$(MAKE) -C Documentation pdf

XGETTEXT_FLAGS = \
	--force-po \
	--add-comments=TRANSLATORS: \
	--msgid-bugs-address="Git Mailing List <git@vger.kernel.org>" \
	--from-code=UTF-8
XGETTEXT_FLAGS_C = $(XGETTEXT_FLAGS) --language=C \
	--keyword=_ --keyword=N_ --keyword="Q_:1,2"
XGETTEXT_FLAGS_SH = $(XGETTEXT_FLAGS) --language=Shell \
	--keyword=gettextln --keyword=eval_gettextln
XGETTEXT_FLAGS_PERL = $(XGETTEXT_FLAGS) --language=Perl \
	--keyword=__ --keyword=N__ --keyword="__n:1,2"
LOCALIZED_C = $(C_OBJ:o=c) $(LIB_H) $(GENERATED_H)
LOCALIZED_SH = $(SCRIPT_SH)
LOCALIZED_SH += git-rebase--preserve-merges.sh
LOCALIZED_SH += git-sh-setup.sh
LOCALIZED_PERL = $(SCRIPT_PERL)

ifdef XGETTEXT_INCLUDE_TESTS
LOCALIZED_C += t/t0200/test.c
LOCALIZED_SH += t/t0200/test.sh
LOCALIZED_PERL += t/t0200/test.perl
endif

## Note that this is meant to be run only by the localization coordinator
## under a very controlled condition, i.e. (1) it is to be run in a
## Git repository (not a tarball extract), (2) any local modifications
## will be lost.
## Gettext tools cannot work with our own custom PRItime type, so
## we replace PRItime with PRIuMAX.  We need to update this to
## PRIdMAX if we switch to a signed type later.

po/git.pot: $(GENERATED_H) FORCE
	# All modifications will be reverted at the end, so we do not
	# want to have any local change.
	git diff --quiet HEAD && git diff --quiet --cached

	@for s in $(LOCALIZED_C) $(LOCALIZED_SH) $(LOCALIZED_PERL); \
	do \
		sed -e 's|PRItime|PRIuMAX|g' <"$$s" >"$$s+" && \
		cat "$$s+" >"$$s" && rm "$$s+"; \
	done

	$(QUIET_XGETTEXT)$(XGETTEXT) -o$@+ $(XGETTEXT_FLAGS_C) $(LOCALIZED_C)
	$(QUIET_XGETTEXT)$(XGETTEXT) -o$@+ --join-existing $(XGETTEXT_FLAGS_SH) \
		$(LOCALIZED_SH)
	$(QUIET_XGETTEXT)$(XGETTEXT) -o$@+ --join-existing $(XGETTEXT_FLAGS_PERL) \
		$(LOCALIZED_PERL)

	# Reverting the munged source, leaving only the updated $@
	git reset --hard
	mv $@+ $@

.PHONY: pot
pot: po/git.pot

POFILES := $(wildcard po/*.po)
MOFILES := $(patsubst po/%.po,po/build/locale/%/LC_MESSAGES/git.mo,$(POFILES))

ifndef NO_GETTEXT
all:: $(MOFILES)
endif

po/build/locale/%/LC_MESSAGES/git.mo: po/%.po
	$(QUIET_MSGFMT)mkdir -p $(dir $@) && $(MSGFMT) -o $@ $<

LIB_PERL := $(wildcard perl/Git.pm perl/Git/*.pm perl/Git/*/*.pm perl/Git/*/*/*.pm)
LIB_PERL_GEN := $(patsubst perl/%.pm,perl/build/lib/%.pm,$(LIB_PERL))
LIB_CPAN := $(wildcard perl/FromCPAN/*.pm perl/FromCPAN/*/*.pm)
LIB_CPAN_GEN := $(patsubst perl/%.pm,perl/build/lib/%.pm,$(LIB_CPAN))

perl/build/lib/%.pm: perl/%.pm
	$(QUIET_GEN)mkdir -p $(dir $@) && \
	sed -e 's|@@LOCALEDIR@@|$(perl_localedir_SQ)|g' \
	    -e 's|@@NO_PERL_CPAN_FALLBACKS@@|$(NO_PERL_CPAN_FALLBACKS_SQ)|g' \
	< $< > $@

perl/build/man/man3/Git.3pm: perl/Git.pm
	$(QUIET_GEN)mkdir -p $(dir $@) && \
	pod2man $< $@

