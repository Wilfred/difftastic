"use strict";

// TODO: rename this file fresh-db.js and separate out metawiki file
// loading from 3rd party code loading.

var fs = require("fs");
var async = require("async");
var path = require("path");

var db = require("./db.js");
var models = require("./models.js");

var total = 0;

var MIME_TYPES = {
  ".css": "text/css",
  ".html": "text/html",
  ".js": "application/javascript",
  "": "text/x-markdown",
};

// Write localPath to the database.
//
// If no resourcePath is provided, convert "node_modules/foo/bar.js" to
// "foo/bar.js".
function createNodeModuleResource(localPath, resourcePath) {
  if (resourcePath == null) {
    resourcePath = path.relative("node_modules", localPath);
  }

  return function (cb) {
    total++;
    new models.Resource({
      path: resourcePath,
      mimeType: MIME_TYPES[path.extname(localPath)],
      content: fs.readFileSync(localPath, {
        encoding: "utf8",
      }),
      created: Date.now(),
      bootstrapPath: localPath,
    }).save(cb);
  };
}

function createResource(resourcePath, localPath) {
  return function (cb) {
    total++;
    new models.Resource({
      path: resourcePath,
      mimeType: MIME_TYPES[path.extname(localPath)],
      content: fs.readFileSync(localPath, {
        encoding: "utf8",
      }),
      created: Date.now(),
      bootstrapPath: localPath,
    }).save(cb);
  };
}

function createBinaryResource(opts) {
  return function (cb) {
    total++;
    new models.Resource({
      path: opts.path,
      mimeType: opts.mimeType,
      created: Date.now(),
      localPath: opts.localPath,
    }).save(cb);
  };
}

async.series(
  [
    // Remove all existing resources, install a fresh set, and cleanup.
    db.connect,
    function (cb) {
      models.Resource.remove({}, cb);
    },
    function (_cb) {
      models.Counter.remove({}, _cb);
    },
    function (_cb) {
      new models.Counter({ name: "Resource", value: 1 }).save(_cb);
    },
    function (cb) {
      async.parallel(
        [
          createBinaryResource({
            path: "logo.jpg",
            mimeType: "image/jpeg",
            localPath: "ouroboros.jpg",
          }),

          // Base codemirror
          createNodeModuleResource(
            "node_modules/codemirror/lib/codemirror.css"
          ),
          createNodeModuleResource("node_modules/codemirror/lib/codemirror.js"),

          // Editor conveniences
          createNodeModuleResource(
            "node_modules/codemirror/addon/edit/closebrackets.js"
          ),
          createNodeModuleResource(
            "node_modules/codemirror/addon/edit/matchbrackets.js"
          ),
          createNodeModuleResource(
            "node_modules/codemirror/addon/selection/active-line.js"
          ),

          // Linting in editor.
          createNodeModuleResource(
            "node_modules/codemirror/addon/lint/lint.css"
          ),
          createNodeModuleResource(
            "node_modules/codemirror/addon/lint/lint.js"
          ),
          createNodeModuleResource(
            "node_modules/codemirror/addon/lint/javascript-lint.js"
          ),

          // Basic, dumb completion (dabbrev style).
          createNodeModuleResource(
            "node_modules/codemirror/addon/hint/show-hint.css"
          ),
          createNodeModuleResource(
            "node_modules/codemirror/addon/hint/show-hint.js"
          ),
          createNodeModuleResource(
            "node_modules/codemirror/addon/hint/anyword-hint.js"
          ),
          createNodeModuleResource(
            "node_modules/codemirror/addon/hint/css-hint.js"
          ),
          createNodeModuleResource(
            "node_modules/codemirror/addon/hint/html-hint.js"
          ),
          createNodeModuleResource(
            "node_modules/codemirror/addon/hint/xml-hint.js"
          ),

          // Syntax highlighting
          createNodeModuleResource(
            "node_modules/codemirror/mode/javascript/javascript.js"
          ),
          createNodeModuleResource("node_modules/codemirror/mode/meta.js"),
          createNodeModuleResource(
            "node_modules/codemirror/mode/markdown/markdown.js"
          ),
          createNodeModuleResource("node_modules/codemirror/mode/xml/xml.js"),
          createNodeModuleResource("node_modules/codemirror/mode/css/css.js"),

          createNodeModuleResource("node_modules/requirejs/require.js"),

          createNodeModuleResource(
            "node_modules/backbone/backbone.js",
            "backbone.js"
          ),

          createNodeModuleResource(
            "node_modules/underscore/underscore.js",
            "underscore.js"
          ),

          createNodeModuleResource(
            "node_modules/jquery/dist/jquery.js",
            "jquery.js"
          ),

          createNodeModuleResource(
            "node_modules/marked/lib/marked.js",
            "marked/marked.js"
          ),

          createNodeModuleResource(
            "node_modules/handlebars/dist/handlebars.js",
            "handlebars/handlebars.js"
          ),

          // Notifications
          createResource("push/push.js", "node_modules/push.js/push.js"),

          // Icons.
          createBinaryResource({
            path: "Ok.png",
            mimeType: "image/png",
            localPath: "icons/Ok.png",
          }),
          createBinaryResource({
            path: "Error.png",
            mimeType: "image/png",
            localPath: "icons/Error-48.png",
          }),

          createNodeModuleResource("node_modules/mocha/mocha.js"),
          createNodeModuleResource("node_modules/mocha/mocha.css"),

          createResource("metawiki/index.html", "src/frontend/index.html"),

          // TODO: use globbing rather than spelling this out.
          createResource("metawiki/routing.js", "src/frontend/routing.js"),
          createResource("metawiki/models.js", "src/frontend/models.js"),
          createResource(
            "metawiki/controllers.js",
            "src/frontend/controllers.js"
          ),
          createResource(
            "metawiki/AllPagesController.js",
            "src/frontend/AllPagesController.js"
          ),
          createResource("metawiki/ReadView.js", "src/frontend/ReadView.js"),
          createResource("metawiki/EditView.js", "src/frontend/EditView.js"),
          createResource("metawiki/templates.js", "src/frontend/templates.js"),
          createResource("metawiki/messages.js", "src/frontend/messages.js"),
          createResource("metawiki/editor.js", "src/frontend/editor.js"),
          createResource("metawiki/app.js", "src/frontend/app.js"),

          createResource("metawiki/metawiki.css", "src/frontend/metawiki.css"),

          createResource("page/Home", "src/frontend/Home"),
          createResource("page/Bugs", "src/frontend/Bugs"),
          createResource("page/Challenges", "src/frontend/Challenges"),
          createResource("page/Bugs", "src/frontend/Bugs"),
          createResource("page/Related", "src/frontend/Related"),
          createResource("page/Security", "src/frontend/Security"),
          createResource("page/Design", "src/frontend/Design"),
        ],
        cb
      );
    },
    db.disconnect,
  ],
  function (err) {
    if (err) {
      console.log(["Failed:", err]);
    } else {
      console.log("Created/updated %s resources.", total);
    }
  }
);
