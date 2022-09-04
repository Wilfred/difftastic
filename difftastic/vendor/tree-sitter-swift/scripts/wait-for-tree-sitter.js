const fs = require("fs");
const os = require("os");
const path = require("path");
const which = require("which");
const { promisify } = require("util");
const stat = promisify(fs.stat);

async function main() {
  const treeSitterExecutable = await which("tree-sitter");
  if (!treeSitterExecutable.includes("node_modules")) {
    // Not installed through npm, so should be safe.
    return;
  }

  const realTreeSitterDir = path.join(
    treeSitterExecutable,
    "..",
    "..",
    "tree-sitter-cli"
  );
  let timeout = undefined;
  let timeoutResolve = undefined;
  Promise.race([
    waitForOneOf(realTreeSitterDir, ["tree-sitter", "tree-sitter.exe"]).then(
      () => {
        clearTimeout(timeout);
        timeoutResolve();
      }
    ),
    new Promise((resolve) => {
      timeoutResolve = resolve;
      timeout = setTimeout(resolve, 10000);
    }),
  ]);
}

async function waitForOneOf(dir, files) {
  for (const file of files) {
    try {
      if (await canExecute(path.join(dir, file))) {
        return;
      }
    } catch {
      // File doesn't yet exist -- we must wait for it.
    }
  }

  await new Promise((resolve) => {
    try {
      fs.watch(dir, { persistent: false }, (eventType, filename) => {
        if (
          (eventType !== "rename" || os.platform() !== "win32") &&
          files.includes(filename)
        ) {
          let resolved = false;
          canExecute(path.join(dir, filename)).then((canExec) => {
            if (canExec && !resolved) {
              resolve();
              resolved = true;
            }
          });
        }
      });
    } catch (err) {
      if (err.name !== "AbortError") {
        console.error(err);
      }
    }
  });
}

async function canExecute(filePath) {
  const fileStat = await stat(filePath);
  return fileStat.mode & 0111 || os.platform() === "win32";
}

main();
