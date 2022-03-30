const fs = require("fs");
const { orderBy } = require("natural-orderby");
const path = require("path");

const testSuiteDirname = "./yaml-test-suite";
const whitelistForValidTest = [
  "Duplicate YAML directive", // semantic error
  "Missing space in YAML directive", // https://github.com/yaml/yaml-test-suite/issues/38
  "Tag shorthand used in documents but only defined in the first", // semantic error
];

const testCases = {};
const testTagsDirname = path.join(testSuiteDirname, "tags");
for (const tagName of fs.readdirSync(testTagsDirname)) {
  const testTagDirname = path.join(testTagsDirname, tagName);
  for (const testCaseId of fs.readdirSync(testTagDirname)) {
    const dirname = path.join(testSuiteDirname, testCaseId);
    const title = fs.readFileSync(path.join(dirname, "==="), "utf8").trim();
    const content = fs.readFileSync(path.join(dirname, "in.yaml"), "utf8");
    const isInvalid =
      fs.existsSync(path.join(dirname, "error")) &&
      whitelistForValidTest.indexOf(title) === -1;
    testCases[isInvalid ? `${title} [INVALID]` : title] = {
      input: content,
      output: "()",
    };
  }
}

const finalTestCases = {};
for (const title of orderBy(Object.keys(testCases))) {
  finalTestCases[title] = testCases[title];
}

fs.writeFileSync(
  "./corpus/spec.txt",
  Object.entries(finalTestCases)
    .map(([title, { input, output }]) =>
      [
        "=".repeat(80),
        title,
        "=".repeat(80),
        input,
        "-".repeat(80),
        "",
        output.trim(),
        ""
      ].join("\n")
    )
    .join("\n")
);
