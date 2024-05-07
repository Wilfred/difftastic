"use strict";

// TODO: rename this file fresh-db.js and separate out metawiki file
// loading from 3rd party code loading.

var fs = require("fs");
var async = require("async");
var path = require("path");

var db = require("./db.js");
var models = require("./models.js");

var total = 0;

function createResource(resourcePath, localPath) {
  var MIME_TYPES = {
    ".css": "text/css",
    ".html": "text/html",
    ".js": "application/javascript",
    "": "text/x-markdown",
  };

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
          createResource(
            "codemirror/lib/codemirror.css",
            "node_modules/codemirror/lib/codemirror.css"
          ),
          createResource(
            "codemirror/lib/codemirror.js",
            "node_modules/codemirror/lib/codemirror.js"
          ),

          // Editor conveniences
          createResource(
            "codemirror/addon/edit/closebrackets.js",
            "node_modules/codemirror/addon/edit/closebrackets.js"
          ),
          createResource(
            "codemirror/addon/edit/matchbrackets.js",
            "node_modules/codemirror/addon/edit/matchbrackets.js"
          ),
          createResource(
            "codemirror/addon/selection/active-line.js",
            "node_modules/codemirror/addon/selection/active-line.js"
          ),

          // Linting in editor.
          createResource(
            "codemirror/addon/lint/lint.css",
            "node_modules/codemirror/addon/lint/lint.css"
          ),
          createResource(
            "codemirror/addon/lint/lint.js",
            "node_modules/codemirror/addon/lint/lint.js"
          ),
          createResource(
            "codemirror/addon/lint/javascript-lint.js",
            "node_modules/codemirror/addon/lint/javascript-lint.js"
          ),

          // Basic, dumb completion (dabbrev style).
          createResource(
            "codemirror/addon/hint/show-hint.css",
            "node_modules/codemirror/addon/hint/show-hint.css"
          ),
          createResource(
            "codemirror/addon/hint/show-hint.js",
            "node_modules/codemirror/addon/hint/show-hint.js"
          ),
          createResource(
            "codemirror/addon/hint/anyword-hint.js",
            "node_modules/codemirror/addon/hint/anyword-hint.js"
          ),
          createResource(
            "codemirror/addon/hint/css-hint.js",
            "node_modules/codemirror/addon/hint/css-hint.js"
          ),
          createResource(
            "codemirror/addon/hint/html-hint.js",
            "node_modules/codemirror/addon/hint/html-hint.js"
          ),
          createResource(
            "codemirror/addon/hint/xml-hint.js",
            "node_modules/codemirror/addon/hint/xml-hint.js"
          ),

          // Syntax highlighting
          createResource(
            "codemirror/mode/javascript/javascript.js",
            "node_modules/codemirror/mode/javascript/javascript.js"
          ),
          createResource(
            "codemirror/mode/meta.js",
            "node_modules/codemirror/mode/meta.js"
          ),
          createResource(
            "codemirror/mode/markdown/markdown.js",
            "node_modules/codemirror/mode/markdown/markdown.js"
          ),
          createResource(
            "codemirror/mode/xml/xml.js",
            "node_modules/codemirror/mode/xml/xml.js"
          ),
          createResource(
            "codemirror/mode/css/css.js",
            "node_modules/codemirror/mode/css/css.js"
          ),

          createResource(
            "requirejs/require.js",
            "node_modules/requirejs/require.js"
          ),

          createResource("backbone.js", "node_modules/backbone/backbone.js"),

          createResource(
            "underscore.js",
            "node_modules/underscore/underscore.js"
          ),

          createResource("jquery.js", "node_modules/jquery/dist/jquery.js"),

          createResource(
            "marked/marked.js",
            "node_modules/marked/lib/marked.js"
          ),

          createResource(
            "handlebars/handlebars.js",
            "node_modules/handlebars/dist/handlebars.js"
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

          // TODO: it would be nice to have more systematic naming
          // of our paths, based on the node_modules path.
          createResource("mocha/mocha.js", "node_modules/mocha/mocha.js"),
          createResource("mocha/mocha.css", "node_modules/mocha/mocha.css"),

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
