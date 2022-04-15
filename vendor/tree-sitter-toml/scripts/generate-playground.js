const fs = require("fs");
const path = require("path");
const generatePlayground = require("../tree-sitter/script/generate-playground");

generatePlayground("docs", {
  name: "TOML",
  codeExample: fs.readFileSync(
    path.resolve(__dirname, "../examples/toml-lang.toml"),
    "utf8",
  ),
  queryExample: fs.readFileSync(
    path.resolve(__dirname, "../queries/highlights.scm"),
    "utf8",
  ),
});
