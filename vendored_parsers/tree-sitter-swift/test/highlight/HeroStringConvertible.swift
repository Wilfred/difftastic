// The MIT License (MIT)
//
// Copyright (c) 2016 Luke Zhao <me@lkzhao.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

import Foundation

public protocol HeroStringConvertible {
  static func from(node: ExprNode) -> Self?
// ^ keyword
}

extension String {
  func parse<T: HeroStringConvertible>() -> [T]? {
//            ^ punctuation.delimiter
//              ^ type
    let lexer = Lexer(input: self)
    let parser = Parser(tokens: lexer.tokenize())
//                                   ^ punctuation.delimiter
//                                    ^ function.call
    do {
//  ^ keyword
      let nodes = try parser.parse()
//                ^ operator
      var results = [T]()
//                  ^ punctuation.bracket
      for node in nodes {
        if let modifier = T.from(node: node) {
          results.append(modifier)
        } else {
          print("\(node.name) doesn't exist in \(T.self)")
//              ^ string
        }
      }
      return results
    } catch let error {
//    ^ keyword
//          ^ keyword
//              ^ variable
      print("failed to parse \"\(self)\", error: \(error)")
    }
    return nil
  }

  func parseOne<T: HeroStringConvertible>() -> T? {
    return parse()?.last
  }
}
