//
//  PlayerWindowController.swift
//  iina
//
//  Created by Yuze Jiang on 2/15/20.
//  Copyright © 2020 lhc. All rights reserved.
//

import Cocoa

class PlayerWindowController: NSWindowController, NSWindowDelegate {

  unowned var player: PlayerCore
  
  var videoView: VideoView {
    fatalError("Subclass must implement")
  }

  var menuActionHandler: MainMenuActionHandler!
  
  var isOntop = false {
    didSet {
      player.mpv.setFlag(MPVOption.Window.ontop, isOntop)
    }
  }
  var loaded = false
  
  init(playerCore: PlayerCore) {
    self.player = playerCore
    super.init(window: nil)
    if #available(macOS 10.15, *) {
//                      ^ number
//                         ^ number
//                             ^ operator
      player.refreshEdrMode()
    }
  }

  required init?(coder: NSCoder) {
// ^ keyword
//         ^ constructor
    fatalError("init(coder:) has not been implemented")
  }
  

  @IBOutlet weak var volumeSlider: NSSlider!
// ^ type


  deinit {
    ObjcUtils.silenced {
      for key in self.observedPrefKeys {
//    ^ repeat
//            ^ repeat
        UserDefaults.standard.removeObserver(self, forKeyPath: key.rawValue)
      }
    }
  }
}
