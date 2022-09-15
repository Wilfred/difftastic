// This module provides Unicode support for Hare programs.
//
// Programs which deal with basic text manipulation are likely to be served
// sufficiently by the [encoding::utf8], [strings], [ascii], and so on. For
// example, the question of "is this character uppercase?" is often sufficiently
// answered with [ascii::isupper], and matters such as Unicode string
// equivalence are often fraught with error potential - for example, a
// vulnerability was once found in a web login form which used a Unicode
// equivalence comparison on usernames, allowing a malicious actor to register a
// username which was bytewise distinct but uniwise equal to a victim, and then
// use it to log into their account. This module also contains a copy of the
// Unicode Character Database, which is rather large, and linking to it will
// increase the size of your binaries.
//
// The purpose of this module is not to handle every day string manipulation,
// but instead to provide support code for software which is explicitly aware of
// internationalization concerns and seeking out functions which specifically
// address those concerns.
//
// This module makes little attempt to be useful without a broader understanding
// of Unicode. The module is close to a 1:1 implementation of the Unicode
// standard, and it is recommended that any reading of this module's API or
// source code is accompanied by a reading of the Unicode standard. The
// documentation for each type and function makes an effort to direct the reader
// to the appropriate part of the Unicode standard.
//
// See the [i18n] module for a high-level internationalization API.
//
// The present implementation of this module conforms to Unicode 13.0.0, which
// was released on March 11th, 2020.
