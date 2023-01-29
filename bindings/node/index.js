module.exports = require('node-gyp-build')()

try {
  module.exports.nodeTypeInfo = require("../../src/node-types.json");
} catch (_) {}
