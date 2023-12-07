let exportedValues = {};
try {
  exportedValues = require("../../build/Release/tree_sitter_sfapex_binding");
} catch (errorA) {
  if (errorA.code !== "MODULE_NOT_FOUND") {
    throw errorA;
  }
  try {
    exportedValues = require("../../build/Debug/tree_sitter_sfapex_binding");
  } catch (errorB) {
    if (errorB.code !== "MODULE_NOT_FOUND") {
      throw errorB;
    }
    // TODO: load WASM instead?? Not sure how to make it hot-swappable
    // but leaving it async load to leave the door open
    // exportedValues = getWasmModules();
    throw errorA;
  }
}

// Eventually, should be able to load the WASM module as a direct swap for the native... life goal
async function getWasmModules() {
  const TreeSitter = require(__dirname +
    "/../../prebuilds/wasm/tree-sitter.js");
  await TreeSitter.init();
  return {
    apex: await TreeSitter.Language.load(
      __dirname + "/../../prebuilds/wasm/tree-sitter-apex.wasm"
    ),
    soql: await TreeSitter.Language.load(
      __dirname + "/../../prebuilds/wasm/tree-sitter-soql.wasm"
    ),
    sosl: await TreeSitter.Language.load(
      __dirname + "/../../prebuilds/wasm/tree-sitter-sosl.wasm"
    ),
  };
}

module.exports = Promise.resolve(exportedValues).then((mod) => {
  try {
    mod.apex.nodeTypeInfo = require("../../apex/src/node-types.json");
    mod.soql.nodeTypeInfo = require("../../soql/src/node-types.json");
    mod.sosl.nodeTypeInfo = require("../../sosl/src/node-types.json");
  } catch (_) {}
  return mod;
});
