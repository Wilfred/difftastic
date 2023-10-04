const Parser = require("web-tree-sitter");
const fs = require("fs");

function getApexParser() {
  return getParser(__dirname + "/tree-sitter-apex.wasm");
}
function getSoqlParser() {
  return getParser(__dirname + "/tree-sitter-soql.wasm");
}
function getSoslParser() {
  return getParser(__dirname + "/tree-sitter-sosl.wasm");
}

/**
 * @param {string} wasmLangFile
 * @returns {Promise<Parser>}
 */
async function getParser(wasmLangFile) {
  return new Promise(async (resolve, reject) => {
    await Parser.init();
    // make loadable on NodeJS to enable testing, should be smarter later
    const parser = new Parser();
    fs.readFile(wasmLangFile, async (err, data) => {
      if (err) {
        reject(err);
      }
      try {
        const lang = await Parser.Language.load(data);
        parser.setLanguage(lang);
        resolve(parser);
      } catch (err2) {
        reject(err2);
      }
    });
  });
}

module.exports = {
  getApexParser,
  getSoqlParser,
  getSoslParser,
};
