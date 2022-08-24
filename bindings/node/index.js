try {
  module.exports = require("../../build/Release/tree_sitter_apex_binding");
} catch (error1) {
  if (error1.code !== "MODULE_NOT_FOUND") {
    throw error1;
  }
  try {
    module.exports = require("../../build/Debug/tree_sitter_apex_binding");
  } catch (error2) {
    if (error2.code !== "MODULE_NOT_FOUND") {
      throw error2;
    }
    throw error1;
  }
}

try {
  module.exports.apex.nodeTypeInfo = require("../../apex/src/node-types.json");
  module.exports.soql.nodeTypeInfo = require("../../soql/src/node-types.json");
  module.exports.sosl.nodeTypeInfo = require("../../sosl/src/node-types.json");
} catch (_) {}
