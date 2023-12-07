const dialects = { SOQL: "soql", SOSL: "sosl", APEX: "apex" };

function createCaseInsensitiveRegex(word) {
  return new RegExp(
    word
      .split("")
      .map((letter) => `[${letter.toLowerCase()}${letter.toUpperCase()}]`)
      .join("")
  );
}

function ci(keyword) {
  const words = keyword.split(" ");
  const regExps = words.map(createCaseInsensitiveRegex);

  return regExps.length == 1
    ? alias(regExps[0], keyword)
    : alias(seq(...regExps), keyword.replace(/ /g, "_"));
}

function commaJoined(expression) {
  return optional(commaJoined1(expression));
}

function commaJoined1(expression) {
  return joined(",", expression);
}

function joined(joinedBy, expression) {
  return seq(expression, repeat(seq(joinedBy, expression)));
}

module.exports = { ci, commaJoined, commaJoined1, joined, dialects };
