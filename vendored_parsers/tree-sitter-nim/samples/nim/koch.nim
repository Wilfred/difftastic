#
#
#         Maintenance program for Nim
#        (c) Copyright 2017 Andreas Rumpf
#
#    See the file "copying.txt", included in this
#    distribution, for details about the copyright.
#
#    See doc/koch.txt for documentation.
#

const
  NimbleStableCommit = "168416290e49023894fc26106799d6f1fc964a2d" # master
  # examples of possible values: #head, #ea82b54, 1.2.3
  FusionStableHash = "#372ee4313827ef9f2ea388840f7d6b46c2b1b014"
  ChecksumsStableCommit = "b4c73320253f78e3a265aec6d9e8feb83f97c77b"
  HeadHash = "#head"
when not defined(windows):
  const
    Z3StableCommit = "65de3f748a6812eecd7db7c478d5fc54424d368b" # the version of Z3 that DrNim uses

when defined(gcc) and defined(windows):
  when defined(x86):
    {.link: "icons/koch.res".}
  else:
    {.link: "icons/koch_icon.o".}

when defined(amd64) and defined(windows) and defined(vcc):
  {.link: "icons/koch-amd64-windows-vcc.res".}
when defined(i386) and defined(windows) and defined(vcc):
  {.link: "icons/koch-i386-windows-vcc.res".}

import std/[os, strutils, parseopt, osproc]
  # Using `std/os` instead of `os` to fail early if config isn't set up properly.
  # If this fails with: `Error: cannot open file: std/os`, see
  # https://github.com/nim-lang/Nim/pull/14291 for explanation + how to fix.

when defined(nimPreviewSlimSystem):
  import std/[assertions, syncio]

import tools / kochdocs
import tools / deps

const VersionAsString = system.NimVersion

const
  HelpText = """
+-----------------------------------------------------------------+
|         Maintenance program for Nim                             |
|             Version $1|
|             (c) 2017 Andreas Rumpf                              |
+-----------------------------------------------------------------+
Build time: $2, $3

Usage:
  koch [options] command [options for command]
Options:
  --help, -h               shows this help and quits
  --latest                 bundle the installers with bleeding edge versions of
                           external components.
  --stable                 bundle the installers with stable versions of
                           external components (default).
  --nim:path               use specified path for nim binary
  --localdocs[:path]       only build local documentations. If a path is not
                           specified (or empty), the default is used.
  --skipIntegrityCheck     skips integrity check when booting the compiler
Possible Commands:
  boot [options]           bootstraps with given command line options
  distrohelper [bindir]    helper for distro packagers
  tools                    builds Nim related tools
  toolsNoExternal          builds Nim related tools (except external tools,
                           e.g. nimble)
                           doesn't require network connectivity
  nimble                   builds the Nimble tool
  fusion                   installs fusion via Nimble

Boot options:
  -d:release               produce a release version of the compiler
  -d:nimUseLinenoise       use the linenoise library for interactive mode
                           `nim secret` (not needed on Windows)
  -d:leanCompiler          produce a compiler without JS codegen or
                           documentation generator in order to use less RAM
                           for bootstrapping

Commands for core developers:
  runCI                    runs continuous integration (CI), e.g. from Github Actions
  docs [options]           generates the full documentation
  csource -d:danger        builds the C sources for installation
  pdf                      builds the PDF documentation
  zip                      builds the installation zip package
  xz                       builds the installation tar.xz package
  testinstall              test tar.xz package; Unix only!
  installdeps [options]    installs external dependency (e.g. tinyc) to dist/
  tests [options]          run the testsuite (run a subset of tests by
                           specifying a category, e.g. `tests cat async`)
  temp options             creates a temporary compiler for testing
"""

let kochExe* = when isMainModule: os.getAppFilename() # always correct when koch is main program, even if `koch` exe renamed e.g.: `nim c -o:koch_debug koch.nim`
               else: getAppDir() / "koch".exe # works for winrelease

proc kochExec*(cmd: string) =
  exec kochExe.quoteShell & " " & cmd

proc kochExecFold*(desc, cmd: string) =
  execFold(desc, kochExe.quoteShell & " " & cmd)

template withDir(dir, body) =
  let old = getCurrentDir()
  try:
    setCurrentDir(dir)
    body
  finally:
    setCurrentDir(old)

let origDir = getCurrentDir()
setCurrentDir(getAppDir())

proc tryExec(cmd: string): bool =
  echo(cmd)
  result = execShellCmd(cmd) == 0

proc safeRemove(filename: string) =
  if fileExists(filename): removeFile(filename)

proc overwriteFile(source, dest: string) =
  safeRemove(dest)
  moveFile(source, dest)

proc copyExe(source, dest: string) =
  safeRemove(dest)
  copyFile(dest=dest, source=source)
  inclFilePermissions(dest, {fpUserExec, fpGroupExec, fpOthersExec})

const
  compileNimInst = "tools/niminst/niminst"
  distDir = "dist"

proc csource(args: string) =
  nimexec(("cc $1 -r $3 --var:version=$2 --var:mingw=none csource " &
           "--main:compiler/nim.nim compiler/installer.ini $1") %
       [args, VersionAsString, compileNimInst])

proc bundleC2nim(args: string) =
  cloneDependency(distDir, "https://github.com/nim-lang/c2nim.git")
  nimCompile("dist/c2nim/c2nim",
             options = "--noNimblePath --path:. " & args)

proc bundleNimbleExe(latest: bool, args: string) =
  let commit = if latest: "HEAD" else: NimbleStableCommit
  cloneDependency(distDir, "https://github.com/nim-lang/nimble.git",
                  commit = commit, allowBundled = true)
  cloneDependency(distDir / "nimble" / distDir, "https://github.com/nim-lang/checksums.git",
                commit = ChecksumsStableCommit, allowBundled = true) # or copy it from dist?
  # installer.ini expects it under $nim/bin
  nimCompile("dist/nimble/src/nimble.nim",
             options = "-d:release --mm:refc --noNimblePath " & args)

proc bundleNimsuggest(args: string) =
  nimCompileFold("Compile nimsuggest", "nimsuggest/nimsuggest.nim",
                 options = "-d:danger " & args)

proc buildVccTool(args: string) =
  let input = "tools/vccexe/vccexe.nim"
  if contains(args, "--cc:vcc"):
    nimCompileFold("Compile Vcc", input, "build", options = args)
    let fileName = input.splitFile.name
    moveFile(exe("build" / fileName), exe("bin" / fileName))
  else:
    nimCompileFold("Compile Vcc", input, options = args)

proc bundleNimpretty(args: string) =
  nimCompileFold("Compile nimpretty", "nimpretty/nimpretty.nim",
                 options = "-d:release " & args)

proc bundleWinTools(args: string) =
  nimCompile("tools/finish.nim", outputDir = "", options = args)

  buildVccTool(args)
  nimCompile("tools/nimgrab.nim", options = "-d:ssl " & args)
  nimCompile("tools/nimgrep.nim", options = args)
  nimCompile("testament/testament.nim", options = args)
  when false:
    # not yet a tool worth including
    nimCompile(r"tools\downloader.nim",
               options = r"--cc:vcc --app:gui -d:ssl --noNimblePath --path:..\ui " & args)

proc bundleChecksums(latest: bool) =
  let commit = if latest: "HEAD" else: ChecksumsStableCommit
  cloneDependency(distDir, "https://github.com/nim-lang/checksums.git", commit, allowBundled = true)

proc zip(latest: bool; args: string) =
  bundleChecksums(latest)
  bundleNimbleExe(latest, args)
  bundleNimsuggest(args)
  bundleNimpretty(args)
  bundleWinTools(args)
  nimexec("cc -r $2 --var:version=$1 --var:mingw=none --main:compiler/nim.nim scripts compiler/installer.ini" %
       [VersionAsString, compileNimInst])
  exec("$# --var:version=$# --var:mingw=none --main:compiler/nim.nim zip compiler/installer.ini" %
       ["tools/niminst/niminst".exe, VersionAsString])

proc ensureCleanGit() =
  let (outp, status) = osproc.execCmdEx("git diff")
  if outp.len != 0:
    quit "Not a clean git repository; 'git diff' not empty!"
  if status != 0:
    quit "Not a clean git repository; 'git diff' returned non-zero!"

proc xz(latest: bool; args: string) =
  ensureCleanGit()
  nimexec("cc -r $2 --var:version=$1 --var:mingw=none --main:compiler/nim.nim scripts compiler/installer.ini" %
       [VersionAsString, compileNimInst])
  exec("$# --var:version=$# --var:mingw=none --main:compiler/nim.nim xz compiler/installer.ini" %
       ["tools" / "niminst" / "niminst".exe, VersionAsString])

proc buildTool(toolname, args: string) =
  nimexec("cc $# $#" % [args, toolname])
  copyFile(dest="bin" / splitFile(toolname).name.exe, source=toolname.exe)

proc buildTools(args: string = "") =
  bundleNimsuggest(args)
  nimCompileFold("Compile nimgrep", "tools/nimgrep.nim",
                 options = "-d:release " & args)
  when defined(windows): buildVccTool(args)
  bundleNimpretty(args)
  nimCompileFold("Compile testament", "testament/testament.nim", options = "-d:release " & args)

  # pre-packages a debug version of nim which can help in many cases investigate issuses
  # withouth having to rebuild compiler.
  # `-d:nimDebugUtils` only makes sense when temporarily editing/debugging compiler
  # `-d:debug` should be changed to a flag that doesn't require re-compiling nim
  # `--opt:speed` is a sensible default even for a debug build, it doesn't affect nim stacktraces
  nimCompileFold("Compile nim_dbg", "compiler/nim.nim", options =
      "--opt:speed --stacktrace -d:debug --stacktraceMsgs -d:nimCompilerStacktraceHints " & args,
      outputName = "nim_dbg")

  nimCompileFold("Compile atlas", "tools/atlas/atlas.nim", options = "-d:release " & args,
      outputName = "atlas")

proc testTools(args: string = "") =
  nimCompileFold("Compile nimgrep", "tools/nimgrep.nim",
                 options = "-d:release " & args)
  when defined(windows): buildVccTool(args)
  bundleNimpretty(args)
  nimCompileFold("Compile testament", "testament/testament.nim", options = "-d:release " & args)
  nimCompileFold("Compile atlas", "tools/atlas/atlas.nim", options = "-d:release " & args,
      outputName = "atlas")

proc nsis(latest: bool; args: string) =
  bundleChecksums(latest)
  bundleNimbleExe(latest, args)
  bundleNimsuggest(args)
  bundleWinTools(args)
  # make sure we have generated the niminst executables:
  buildTool("tools/niminst/niminst", args)
  #buildTool("tools/nimgrep", args)
  # produce 'nim_debug.exe':
  #exec "nim c compiler" / "nim.nim"
  #copyExe("compiler/nim".exe, "bin/nim_debug".exe)
  exec(("tools" / "niminst" / "niminst --var:version=$# --var:mingw=mingw$#" &
        " nsis compiler/installer.ini") % [VersionAsString, $(sizeof(pointer)*8)])

proc geninstall(args="") =
  nimexec("cc -r $# --var:version=$# --var:mingw=none --main:compiler/nim.nim scripts compiler/installer.ini $#" %
       [compileNimInst, VersionAsString, args])

proc install(args: string) =
  geninstall()
  exec("sh ./install.sh $#" % args)

# -------------- boot ---------------------------------------------------------

proc findStartNim: string =
  # we try several things before giving up:
  # * nimExe
  # * bin/nim
  # * $PATH/nim
  # If these fail, we try to build nim with the "build.(sh|bat)" script.
  let (nim, ok) = findNimImpl()
  if ok: return nim
  when defined(posix):
    const buildScript = "build.sh"
    if fileExists(buildScript):
      if tryExec("./" & buildScript): return "bin" / nim
  else:
    const buildScript = "build.bat"
    if fileExists(buildScript):
      if tryExec(buildScript): return "bin" / nim

  echo("Found no nim compiler and every attempt to build one failed!")
  quit("FAILURE")

proc thVersion(i: int): string =
  result = ("compiler" / "nim" & $i).exe

template doUseCpp(): bool = getEnv("NIM_COMPILE_TO_CPP", "false") == "true"

proc boot(args: string, skipIntegrityCheck: bool) =
  ## bootstrapping is a process that involves 3 steps:
  ## 1. use csourcesAny to produce nim1.exe. This nim1.exe is buggy but
  ## rock solid for building a Nim compiler. It shouldn't be used for anything else.
  ## 2. use nim1.exe to produce nim2.exe. nim2.exe is the one you really need.
  ## 3. We use nim2.exe to build nim3.exe. nim3.exe is equal to nim2.exe except for timestamps.
  ## This step ensures a minimum amount of quality. We know that nim2.exe can be used
  ## for Nim compiler development.
  var output = "compiler" / "nim".exe
  var finalDest = "bin" / "nim".exe
  # default to use the 'c' command:
  let useCpp = doUseCpp()
  let smartNimcache = (if "release" in args or "danger" in args: "nimcache/r_" else: "nimcache/d_") &
                      hostOS & "_" & hostCPU

  if not dirExists("dist/checksums"):
    bundleChecksums(false)

  let nimStart = findStartNim().quoteShell()
  let times = 2 - ord(skipIntegrityCheck)
  for i in 0..times:
    let defaultCommand = if useCpp: "cpp" else: "c"
    let bootOptions = if args.len == 0 or args.startsWith("-"): defaultCommand else: ""
    echo "iteration: ", i+1
    var extraOption = ""
    var nimi = i.thVersion
    if i == 0:
      nimi = nimStart
      extraOption.add " --skipUserCfg --skipParentCfg -d:nimKochBootstrap"
        # The configs are skipped for bootstrap
        # (1st iteration) to prevent newer flags from breaking bootstrap phase.
      let ret = execCmdEx(nimStart & " --version")
      doAssert ret.exitCode == 0
      let version = ret.output.splitLines[0]
      if version.startsWith "Nim Compiler Version 0.20.0":
        extraOption.add " --lib:lib" # see https://github.com/nim-lang/Nim/pull/14291

    # in order to use less memory, we split the build into two steps:
    # --compileOnly produces a $project.json file and does not run GCC/Clang.
    # jsonbuild then uses the $project.json file to build the Nim binary.
    exec "$# $# $# --nimcache:$# $# --noNimblePath --compileOnly compiler" / "nim.nim" %
      [nimi, bootOptions, extraOption, smartNimcache, args]
    exec "$# jsonscript --noNimblePath --nimcache:$# $# compiler" / "nim.nim" %
      [nimi, smartNimcache, args]

    if sameFileContent(output, i.thVersion):
      copyExe(output, finalDest)
      echo "executables are equal: SUCCESS!"
      return
    copyExe(output, (i+1).thVersion)
  copyExe(output, finalDest)
  when not defined(windows):
    if not skipIntegrityCheck:
      echo "[Warning] executables are still not equal"

# -------------- clean --------------------------------------------------------

const
  cleanExt = [
    ".ppu", ".o", ".obj", ".dcu", ".~pas", ".~inc", ".~dsk", ".~dpr",
    ".map", ".tds", ".err", ".bak", ".pyc", ".exe", ".rod", ".pdb", ".idb",
    ".idx", ".ilk"
  ]
  ignore = [
    ".bzrignore", "nim", "nim.exe", "koch", "koch.exe", ".gitignore"
  ]

proc cleanAux(dir: string) =
  for kind, path in walkDir(dir):
    case kind
    of pcFile:
      var (_, name, ext) = splitFile(path)
      if ext == "" or cleanExt.contains(ext):
        if not ignore.contains(name):
          echo "removing: ", path
          removeFile(path)
    of pcDir:
      case splitPath(path).tail
      of "nimcache":
        echo "removing dir: ", path
        removeDir(path)
      of "dist", ".git", "icons": discard
      else: cleanAux(path)
    else: discard

proc removePattern(pattern: string) =
  for f in walkFiles(pattern):
    echo "removing: ", f
    removeFile(f)

proc clean(args: string) =
  removePattern("web/*.html")
  removePattern("doc/*.html")
  cleanAux(getCurrentDir())
  for kind, path in walkDir(getCurrentDir() / "build"):
    if kind == pcDir:
      echo "removing dir: ", path
      removeDir(path)

# -------------- builds a release ---------------------------------------------

proc winReleaseArch(arch: string) =
  doAssert arch in ["32", "64"]
  let cpu = if arch == "32": "i386" else: "amd64"

  template withMingw(path, body) =
    let prevPath = getEnv("PATH")
    putEnv("PATH", (if path.len > 0: path & PathSep else: "") & prevPath)
    try:
      body
    finally:
      putEnv("PATH", prevPath)

  withMingw r"..\mingw" & arch & r"\bin":
    # Rebuilding koch is necessary because it uses its pointer size to
    # determine which mingw link to put in the NSIS installer.
    inFold "winrelease koch":
      nimexec "c --cpu:$# koch" % cpu
    kochExecFold("winrelease boot", "boot -d:release --cpu:$#" % cpu)
    kochExecFold("winrelease zip", "zip -d:release")
    overwriteFile r"build\nim-$#.zip" % VersionAsString,
             r"web\upload\download\nim-$#_x$#.zip" % [VersionAsString, arch]

proc winRelease*() =
  # Now used from "tools/winrelease" and not directly supported by koch
  # anymore!
  # Build -docs file:
  when true:
    inFold "winrelease buildDocs":
      buildDocs(gaCode)
    withDir "web/upload/" & VersionAsString:
      inFold "winrelease zipdocs":
        exec "7z a -tzip docs-$#.zip *.html" % VersionAsString
    overwriteFile "web/upload/$1/docs-$1.zip" % VersionAsString,
                  "web/upload/download/docs-$1.zip" % VersionAsString
  when true:
    inFold "winrelease csource":
      csource("-d:danger")
  when sizeof(pointer) == 4:
    winReleaseArch "32"
  when sizeof(pointer) == 8:
    winReleaseArch "64"

# -------------- tests --------------------------------------------------------

template `|`(a, b): string = (if a.len > 0: a else: b)

proc tests(args: string) =
  nimexec "cc --opt:speed testament/testament"
  var testCmd = quoteShell(getCurrentDir() / "testament/testament".exe)
  testCmd.add " " & quoteShell("--nim:" & findNim())
  testCmd.add " " & (args|"all")
  let success = tryExec testCmd
  if not success:
    quit("tests failed", QuitFailure)

proc temp(args: string) =
  proc splitArgs(a: string): (string, string) =
    # every --options before the command (indicated by starting
    # with not a dash) is part of the bootArgs, the rest is part
    # of the programArgs:
    let args = os.parseCmdLine a
    result = ("", "")
    var i = 0
    while i < args.len and args[i][0] == '-':
      result[0].add " " & quoteShell(args[i])
      inc i
    while i < args.len:
      result[1].add " " & quoteShell(args[i])
      inc i

  if not dirExists("dist/checksums"):
    bundleChecksums(false)

  let d = getAppDir()
  let output = d / "compiler" / "nim".exe
  let finalDest = d / "bin" / "nim_temp".exe
  # 125 is the magic number to tell git bisect to skip the current commit.
  var (bootArgs, programArgs) = splitArgs(args)
  if "doc" notin programArgs and
      "threads" notin programArgs and
      "js" notin programArgs and "rst2html" notin programArgs:
    bootArgs = " -d:leanCompiler" & bootArgs
  let nimexec = findNim().quoteShell()
  exec(nimexec & " c -d:debug --debugger:native -d:nimBetterRun " & bootArgs & " " & (d / "compiler" / "nim"), 125)
  copyExe(output, finalDest)
  setCurrentDir(origDir)
  if programArgs.len > 0: exec(finalDest & " " & programArgs)

proc xtemp(cmd: string) =
  let d = getAppDir()
  copyExe(d / "bin" / "nim".exe, d / "bin" / "nim_backup".exe)
  try:
    withDir(d):
      temp""
    copyExe(d / "bin" / "nim_temp".exe, d / "bin" / "nim".exe)
    exec(cmd)
  finally:
    copyExe(d / "bin" / "nim_backup".exe, d / "bin" / "nim".exe)

proc icTest(args: string) =
  temp("")
  let inp = os.parseCmdLine(args)[0]
  let content = readFile(inp)
  let nimExe = getAppDir() / "bin" / "nim_temp".exe
  var i = 0
  for fragment in content.split("#!EDIT!#"):
    let file = inp.replace(".nim", "_temp.nim")
    writeFile(file, fragment)
    var cmd = nimExe & " cpp --ic:on -d:nimIcIntegrityChecks --listcmd "
    if i == 0:
      cmd.add "-f "
    cmd.add quoteShell(file)
    exec(cmd)
    inc i

proc buildDrNim(args: string) =
  if not dirExists("dist/nimz3"):
    exec("git clone https://github.com/zevv/nimz3.git dist/nimz3")
  when defined(windows):
    if not dirExists("dist/dlls"):
      exec("git clone -q https://github.com/nim-lang/dlls.git dist/dlls")
    copyExe("dist/dlls/libz3.dll", "bin/libz3.dll")
    execFold("build drnim", "nim c -o:$1 $2 drnim/drnim" % ["bin/drnim".exe, args])
  else:
    if not dirExists("dist/z3"):
      exec("git clone -q https://github.com/Z3Prover/z3.git dist/z3")
      withDir("dist/z3"):
        exec("git fetch")
        exec("git checkout " & Z3StableCommit)
        createDir("build")
        withDir("build"):
          exec("""cmake -DZ3_BUILD_LIBZ3_SHARED=FALSE -G "Unix Makefiles" ../""")
          exec("make -j4")
    execFold("build drnim", "nim cpp --dynlibOverride=libz3 -o:$1 $2 drnim/drnim" % ["bin/drnim".exe, args])
  # always run the tests for now:
  exec("testament/testament".exe & " --nim:" & "drnim".exe & " pat drnim/tests")


proc hostInfo(): string =
  "hostOS: $1, hostCPU: $2, int: $3, float: $4, cpuEndian: $5, cwd: $6" %
    [hostOS, hostCPU, $int.sizeof, $float.sizeof, $cpuEndian, getCurrentDir()]

proc installDeps(dep: string, commit = "") =
  # the hashes/urls are version controlled here, so can be changed seamlessly
  # and tied to a nim release (mimicking git submodules)
  var commit = commit
  case dep
  of "tinyc":
    if commit.len == 0: commit = "916cc2f94818a8a382dd8d4b8420978816c1dfb3"
    cloneDependency(distDir, "https://github.com/timotheecour/nim-tinyc-archive", commit)
  else: doAssert false, "unsupported: " & dep
  # xxx: also add linenoise, niminst etc, refs https://github.com/nim-lang/RFCs/issues/206

proc runCI(cmd: string) =
  doAssert cmd.len == 0, cmd # avoid silently ignoring
  echo "runCI: ", cmd
  echo hostInfo()
  # boot without -d:nimHasLibFFI to make sure this still works
  # `--lib:lib` is needed for bootstrap on openbsd, for reasons described in
  # https://github.com/nim-lang/Nim/pull/14291 (`getAppFilename` bugsfor older nim on openbsd).
  kochExecFold("Boot Nim ORC", "boot -d:release -d:nimStrictMode --lib:lib")

  when false: # debugging: when you need to run only 1 test in CI, use something like this:
    execFold("debugging test", "nim r tests/stdlib/tosproc.nim")
    doAssert false, "debugging only"

  ## build nimble early on to enable remainder to depend on it if needed
  kochExecFold("Build Nimble", "nimble")

  execFold("Install smtp", "nimble install smtp -y")

  let batchParam = "--batch:$1" % "NIM_TESTAMENT_BATCH".getEnv("_")
  if getEnv("NIM_TEST_PACKAGES", "0") == "1":
    nimCompileFold("Compile testament", "testament/testament.nim", options = "-d:release")
    execFold("Test selected Nimble packages", "testament $# pcat nimble-packages" % batchParam)
  else:
    testTools()

    for a in "zip opengl sdl1 jester@#head".split:
      let buildDeps = "build"/"deps" # xxx factor pending https://github.com/timotheecour/Nim/issues/616
      # if this gives `Additional info: "build/deps" [OSError]`, make sure nimble is >= v0.12.0,
      # otherwise `absolutePath` is needed, refs https://github.com/nim-lang/nimble/issues/901
      execFold("", "nimble install -y --nimbleDir:$# $#" % [buildDeps.quoteShell, a])

    ## run tests
    execFold("Test nimscript", "nim e tests/test_nimscript.nims")
    when defined(windows):
      execFold("Compile tester", "nim c --usenimcache -d:nimCoroutines --os:genode -d:posix --compileOnly testament/testament")

    # main bottleneck here
    # xxx: even though this is the main bottleneck, we could speedup the rest via batching with `--batch`.
    # BUG: with initOptParser, `--batch:'' all` interprets `all` as the argument of --batch, pending bug #14343
    execFold("Run tester", "nim c -r --putenv:NIM_TESTAMENT_REMOTE_NETWORKING:1 -d:nimStrictMode testament/testament $# all -d:nimCoroutines" % batchParam)

    block: # nimHasLibFFI:
      when defined(posix): # windows can be handled in future PR's
        execFold("nimble install -y libffi", "nimble install -y libffi")
        const nimFFI = "bin/nim.ctffi"
        # no need to bootstrap with koch boot (would be slower)
        let backend = if doUseCpp(): "cpp" else: "c"
        execFold("build with -d:nimHasLibFFI", "nim $1 -d:release -d:nimHasLibFFI -o:$2 compiler/nim.nim" % [backend, nimFFI])
        execFold("test with -d:nimHasLibFFI", "$1 $2 -r testament/testament --nim:$1 r tests/misc/trunner.nim -d:nimTrunnerFfi" % [nimFFI, backend])

    execFold("Run nimdoc tests", "nim r nimdoc/tester")
    execFold("Run rst2html tests", "nim r nimdoc/rsttester")
    execFold("Run nimpretty tests", "nim r nimpretty/tester.nim")
    when defined(posix):
      # refs #18385, build with -d:release instead of -d:danger for testing
      # We could also skip building nimsuggest in buildTools, or build it with -d:release
      # in bundleNimsuggest depending on some environment variable when we are in CI. One advantage
      # of rebuilding is this won't affect bin/nimsuggest when running runCI locally
      execFold("build nimsuggest_testing", "nim c -o:bin/nimsuggest_testing -d:release nimsuggest/nimsuggest")
      execFold("Run nimsuggest tests", "nim r nimsuggest/tester")

    execFold("Run atlas tests", "nim c -r -d:atlasTests tools/atlas/atlas.nim clone https://github.com/disruptek/balls")

    kochExecFold("Testing booting in refc", "boot -d:release --mm:refc -d:nimStrictMode --lib:lib")


proc testUnixInstall(cmdLineRest: string) =
  csource("-d:danger" & cmdLineRest)
  xz(false, cmdLineRest)
  let oldCurrentDir = getCurrentDir()
  try:
    let destDir = getTempDir()
    copyFile("build/nim-$1.tar.xz" % VersionAsString,
             destDir / "nim-$1.tar.xz" % VersionAsString)
    setCurrentDir(destDir)
    execCleanPath("tar -xJf nim-$1.tar.xz" % VersionAsString)
    setCurrentDir("nim-$1" % VersionAsString)
    execCleanPath("sh build.sh")
    # first test: try if './bin/nim --version' outputs something sane:
    let output = execProcess("./bin/nim --version").splitLines
    if output.len > 0 and output[0].contains(VersionAsString):
      echo "Version check: success"
      execCleanPath("./bin/nim c koch.nim")
      execCleanPath("./koch boot -d:release", destDir / "bin")
      # check the docs build:
      execCleanPath("./koch docs", destDir / "bin")
      # check nimble builds:
      execCleanPath("./koch tools")
      # check the tests work:
      putEnv("NIM_EXE_NOT_IN_PATH", "NOT_IN_PATH")
      execCleanPath("./koch tests --nim:bin/nim cat megatest", destDir / "bin")
    else:
      echo "Version check: failure"
  finally:
    setCurrentDir oldCurrentDir

proc valgrind(cmd: string) =
  # somewhat hacky: '=' sign means "pass to valgrind" else "pass to Nim"
  let args = parseCmdLine(cmd)
  var nimcmd = ""
  var valcmd = ""
  for i, a in args:
    if i == args.len-1:
      # last element is the filename:
      valcmd.add ' '
      valcmd.add changeFileExt(a, ExeExt)
      nimcmd.add ' '
      nimcmd.add a
    elif '=' in a:
      valcmd.add ' '
      valcmd.add a
    else:
      nimcmd.add ' '
      nimcmd.add a
  exec("nim c" & nimcmd)
  let supp = getAppDir() / "tools" / "nimgrind.supp"
  exec("valgrind --suppressions=" & supp & valcmd)

proc showHelp(success: bool) =
  quit(HelpText % [VersionAsString & spaces(44-len(VersionAsString)),
                   CompileDate, CompileTime], if success: QuitSuccess else: QuitFailure)

proc branchDone() =
  let thisBranch = execProcess("git symbolic-ref --short HEAD").strip()
  if thisBranch != "devel" and thisBranch != "":
    exec("git checkout devel")
    exec("git branch -D " & thisBranch)
    exec("git pull --rebase")

when isMainModule:
  var op = initOptParser()
  var
    latest = false
    localDocsOnly = false
    localDocsOut = ""
    skipIntegrityCheck = false
  while true:
    op.next()
    case op.kind
    of cmdLongOption, cmdShortOption:
      case normalize(op.key)
      of "help", "h": showHelp(success = true)
      of "latest": latest = true
      of "stable": latest = false
      of "nim": nimExe = op.val.absolutePath # absolute so still works with changeDir
      of "localdocs":
        localDocsOnly = true
        if op.val.len > 0:
          localDocsOut = op.val.absolutePath
      of "skipintegritycheck":
        skipIntegrityCheck = true
      else: showHelp(success = false)
    of cmdArgument:
      case normalize(op.key)
      of "boot": boot(op.cmdLineRest, skipIntegrityCheck)
      of "clean": clean(op.cmdLineRest)
      of "doc", "docs": buildDocs(op.cmdLineRest & " --d:nimPreviewSlimSystem " & paCode, localDocsOnly, localDocsOut)
      of "doc0", "docs0":
        # undocumented command for Araq-the-merciful:
        buildDocs(op.cmdLineRest & gaCode)
      of "pdf": buildPdfDoc(op.cmdLineRest, "doc/pdf")
      of "csource", "csources": csource(op.cmdLineRest)
      of "zip": zip(latest, op.cmdLineRest)
      of "xz": xz(latest, op.cmdLineRest)
      of "nsis": nsis(latest, op.cmdLineRest)
      of "geninstall": geninstall(op.cmdLineRest)
      of "distrohelper": geninstall()
      of "install": install(op.cmdLineRest)
      of "testinstall": testUnixInstall(op.cmdLineRest)
      of "installdeps": installDeps(op.cmdLineRest)
      of "runci": runCI(op.cmdLineRest)
      of "test", "tests": tests(op.cmdLineRest)
      of "temp": temp(op.cmdLineRest)
      of "xtemp": xtemp(op.cmdLineRest)
      of "wintools": bundleWinTools(op.cmdLineRest)
      of "nimble": bundleNimbleExe(latest, op.cmdLineRest)
      of "nimsuggest": bundleNimsuggest(op.cmdLineRest)
      # toolsNoNimble is kept for backward compatibility with build scripts
      of "toolsnonimble", "toolsnoexternal":
        buildTools(op.cmdLineRest)
      of "tools":
        buildTools(op.cmdLineRest)
        bundleNimbleExe(latest, op.cmdLineRest)
      of "checksums":
        bundleChecksums(latest)
      of "pushcsource":
        quit "use this instead: https://github.com/nim-lang/csources_v1/blob/master/push_c_code.nim"
      of "valgrind": valgrind(op.cmdLineRest)
      of "c2nim": bundleC2nim(op.cmdLineRest)
      of "drnim": buildDrNim(op.cmdLineRest)
      of "fusion":
        let suffix = if latest: HeadHash else: FusionStableHash
        exec("nimble install -y fusion@$#" % suffix)
      of "ic": icTest(op.cmdLineRest)
      of "branchdone": branchDone()
      else: showHelp(success = false)
      break
    of cmdEnd:
      showHelp(success = false)
