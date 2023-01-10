import Cocoa
// ^ include
import GRDB

@NSApplicationMain
// ^ type
class AppDelegate: NSObject, NSApplicationDelegate {
// ^ keyword
//    ^ type
//               ^ punctuation.delimiter
//                 ^ type
//                         ^ punctuation.delimiter
//                                                 ^ punctuation.bracket
    func applicationDidFinishLaunching(_ aNotification: Notification) {
//  ^ keyword.function
//       ^ method
//                                     ^ parameter
//                                       ^ parameter
        _ = try! DatabaseQueue()
//        ^ operator
//          ^ operator
//               ^ function.call
        _ = FTS5()
        _ = sqlite3_preupdate_new(nil, 0, nil)
//                                ^ variable.builtin
//                                     ^ number
    }
//  ^ punctuation.bracket
}
