const fs = require("fs");
const path = require("path");
const getStdin = require("get-stdin");

const STATE_FREEZE = -1;

getStdin().then(stdin => {
  const cases = extractCases(stdin);
  const enums = ["RS_STR"];
  const content = "switch (sch_stt) " + block([
    `case ${STATE_FREEZE}:\n  break;`,
    cases
      .map(([key, { content }]) => `${(key === "default" ? "default:" : `case ${key}:`)}\n${indent(content)}`)
      .join("\n  END_STATE();\n")
      .replace(/ADVANCE\((\d+)\);/g, (_, state) => {
        const stateCase = cases.find(([key]) => key === state);
        if (stateCase) {
          const [, { acceptToken }] = stateCase;
          if (acceptToken) {
            return `{${acceptToken} return ${state};}`;
          }
        }
        return `{*rlt_sch = RS_STR; return ${state};}`;
      })
      .replace("ACCEPT_TOKEN(ts_builtin_sym_end);", "assert(false);")
      .replace(/ACCEPT_TOKEN\((\w+)\);/g, (_, name) => {
        const newName = "RS_" + name.replace("sym_", "").toUpperCase();
        if (!enums.includes(newName)) {
          enums.push(newName);
        }
        return `*rlt_sch = ${newName};`;
      })
      .replace(/END_STATE\(\);/g, `break;`)
      .replace("return false;", `*rlt_sch = RS_STR;\n  return ${STATE_FREEZE};`)
      .replace(/lookahead/g, "cur_chr"),
  ]);
  fs.writeFileSync(
    path.resolve(__dirname, "../src/schema.generated.cc"),
    [
      `#include <cassert>`,
      `namespace tree_sitter_yaml {`,
      `const int8_t SCH_STT_FRZ = ${STATE_FREEZE};`,
      `enum ResultSchema ${block(enums.map((k) => `${k},`))};`,
      `int8_t adv_sch_stt(int8_t sch_stt, int32_t cur_chr, ResultSchema *rlt_sch) ${block([
        content,
        `if (cur_chr != '\\r' && cur_chr != '\\n' && cur_chr != ' ' && cur_chr != 0) *rlt_sch = RS_STR;`,
        `return ${STATE_FREEZE};`,
      ])}`,
      `}`,
    ].join("\n\n"),
  );
});

function extractCases(stdin) {
  const MAIN_SIGNATURE = "static bool ts_lex(TSLexer *lexer, TSStateId state) {";
  const SWITCH_CASE = "switch (state) {\n";
  const startIndex = stdin.indexOf(SWITCH_CASE, stdin.indexOf(MAIN_SIGNATURE)) + SWITCH_CASE.length;
  const endIndex = stdin.indexOf("}\n}", startIndex);
  const content = stdin.slice(startIndex, endIndex).replace(/^\s*if \(eof\).+\n/mg, "").trimEnd();
  return dedent(dedent(content)).split("END_STATE();").map(text => {
    const index = text.indexOf(":\n");
    const key = text.slice(0, index).trim().replace(/^case /, "");
    const content = dedent(text.slice(index + 2)).trim();
    const matchAcceptToken = content.match(/^ACCEPT_TOKEN\(\w+\);/);
    const acceptToken = matchAcceptToken && matchAcceptToken[0];
    const hasAcceptTokenOnly = acceptToken && acceptToken.length === content.length;
    return [key, { content, acceptToken, hasAcceptTokenOnly }];
  });
}

function block(contents) {
  return `{\n${indent(contents)}\n}`;
}

function lines(contents) {
  return [].concat(contents).join("\n").split("\n");
}

function indent(contents) {
  return lines(contents).map(x => " ".repeat(2) + x).join("\n");
}

function dedent(contents) {
  return lines(contents).map(x => x.replace(/^  /mg, "")).join("\n");
}
