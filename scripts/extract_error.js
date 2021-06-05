const { spawn } = require("child_process");
const args = process.argv.slice(2);
const filename = args[0];
const parser = spawn("tree-sitter", ["parse", filename]);
const fs = require("fs");

let output = "";
parser.stdout.on("data", data => {
  output = output + data;
});

parser.on("close", code => {
  console.log("Parse exited code: ", code);
  if (code == 0) return;

  const arr = output.split("\n");
  const test = "(ERROR [32, 29] - [32, 63])";
  const error = output.match(
    /\(ERROR \[(?<start>\d+, \d+)\] - \[(?<end>\d+, \d+)\]\)/,
  );
  const { start, end } = error.groups;
  const [startRow, startCol] = start.split(", ").map(val => parseInt(val, 10));
  const [endRow, endCol] = end.split(", ").map(val => parseInt(val, 10));

  fs.readFile(filename, "utf8", (err, data) => {
    if (err) {
      console.error(err);
      return;
    }
    const offendingLines = data.split("\n").slice(startRow, endRow + 1);
    console.log("Offending lines:");
    for (let line of offendingLines) {
      console.log(line);
      let hlLine = "";
      // TODO: Fix multiline presenation
      for (let i = 0; i < line.length; i++) {
        hlLine += i < startCol ? " " : "^";
      }
      console.log(hlLine);
    }
  });
});
