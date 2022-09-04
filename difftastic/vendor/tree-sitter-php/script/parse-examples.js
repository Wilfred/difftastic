const fs = require('fs')
const os = require('os')
const util = require('util');
const { exec, execSync } = require('child_process')
const shell = require('shelljs')

function main() {
  checkoutExampleProjects([
    { dir: 'laravel', repository: 'https://github.com/laravel/laravel', sha: '9d0862b3340c8243ee072afc181e315ffa35e110' },
    { dir: 'framework', repository: 'https://github.com/laravel/framework', sha: '45d439e98a6b14afde8911f7d22a265948adbf72' },
    { dir: 'phabricator', repository: 'https://github.com/phacility/phabricator', sha: 'd0b01a41f2498fb2a6487c2d6704dc7acfd4675f' },
    { dir: 'phpunit', repository: 'https://github.com/sebastianbergmann/phpunit', sha: '5e523bdc7dd4d90fed9fb29d1df05347b3e7eaba' },
    { dir: 'WordPress', repository: 'https://github.com/WordPress/WordPress', sha: '45286c5bb3f6fe5005567903ec858d87077eae2c' },
    { dir: 'mediawiki', repository: 'https://github.com/wikimedia/mediawiki', sha: 'b6b88cbf98fb0c7891324709a85eabc290ed28b4' },
  ])

  parseExamples()
}

function parseExamples() {
  const knownFailures = loadKnownFailures().split(/\r\n|\n/).filter(line => line.length > 0)

  let excludeString = knownFailures.join(" !")
  if (knownFailures.length > 0) {
    excludeString = "!" + excludeString
  }

  if (os.platform == 'win32') {
    excludeString = convertToWindowsPath(excludeString)
  }

  exec('"./node_modules/.bin/tree-sitter" parse -q examples/**/*.php ' + excludeString, (err, stdout) => {
    const failures = extractFailureFilePaths(stdout)
    failures.forEach(failure => {
      if (!knownFailures.includes(failure)) {
        console.error(`Unknown failure occurred: ${failure}`)
      }
    })

    const failureCount = failures.length + knownFailures.length
    const exampleCount = countExampleFiles()
    const successCount = exampleCount - failureCount;
    const successPercent = 100 * successCount / exampleCount

    console.log(`Successfully parsed ${successCount} of ${exampleCount} example files (${successPercent.toFixed(2)}%)`)
  })
}

function extractFailureFilePaths(stdout) {
  return stdout.split(/\r\n|\n/).filter(line => line.length > 0).map(line => convertToUnixPath(line.substring(0, line.indexOf(" "))))
}

function convertToUnixPath(filePathString) {
  return filePathString.split("\\").join("/")
}

function convertToWindowsPath(filePathString) {
  return filePathString.split("/").join("\\")
}

function countExampleFiles() {
  return shell.find('./examples').filter((file) => { return file.match(/\.php$/) }).length
}

function createExamplesDirectoryIfNotExists() {
  const dir = './examples'

  if (!fs.existsSync(dir)) {
    fs.mkdirSync(dir)
  }
}

function checkoutExampleProjects(projects) {
  createExamplesDirectoryIfNotExists()

  checkoutPromise = util.promisify(checkoutExampleProject)

  Promise.all(projects.map((project) => checkoutPromise(project)))
}

function checkoutExampleProject(project) {
  const projectDir = './examples/' + project.dir
  if (!fs.existsSync(projectDir)) {
    cloneRepository(project)
  }

  checkoutCommit(project)
}

function cloneRepository(project) {
  execSync('cd examples && git clone --quiet ' + project.repository + ' ' + project.dir + ' && cd ..')
}

function checkoutCommit(project) {
  execSync('cd examples/' + project.dir + ' && git fetch --quiet && git reset --quiet --hard "' + project.sha + '" && cd ../..')
}

function loadKnownFailures() {
  return fs.readFileSync('./script/known-failures.txt').toString()
}

main()