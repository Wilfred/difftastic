module.exports = {
  'env': {
    'commonjs': true,
    'es2021': true,
  },
  'extends': 'google',
  'overrides': [
  ],
  'parserOptions': {
    'ecmaVersion': 'latest',
    'sourceType': 'module',
  },
  'rules': {
    'indent': ['error', 2, {'SwitchCase': 1}],
    'max-len': [
      'error',
      {'code': 160, 'ignoreComments': true, 'ignoreUrls': true, 'ignoreStrings': true},
    ],
    'one-var': ['error', 'consecutive'],
  },
};
