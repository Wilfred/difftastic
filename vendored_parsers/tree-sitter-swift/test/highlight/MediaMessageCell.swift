/*
 MIT License

 Copyright (c) 2017-2019 MessageKit

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 */

import UIKit

/// A subclass of `MessageContentCell` used to display video and audio messages.
open class MediaMessageCell: MessageContentCell {
// ^ keyword

    /// The play button view to display on video messages.
    open lazy var playButtonView: PlayButtonView = {
//  ^ keyword
//                                                 ^ punctuation.bracket

        let playButtonView = PlayButtonView()
        return playButtonView
    }()
//  ^ punctuation.bracket
//   ^ punctuation.bracket

    /// The image view display the media content.
    open var imageView: UIImageView = {
        let imageView = UIImageView()
        imageView.contentMode = .scaleAspectFill
        return imageView
    }()

    // MARK: - Methods

    /// Responsible for setting up the constraints of the cell's subviews.
    open func setupConstraints() {
        imageView.fillSuperview()
        playButtonView.centerInSuperview()
        playButtonView.constraint(equalTo: CGSize(width: 35, height: 35))
    }

    open override func setupSubviews() {
        super.setupSubviews()
        messageContainerView.addSubview(imageView)
        messageContainerView.addSubview(playButtonView)
        setupConstraints()
    }
    
    open override func prepareForReuse() {
        super.prepareForReuse()
        self.imageView.image = nil
    }

    open override func configure(with message: MessageType, at indexPath: IndexPath, and messagesCollectionView: MessagesCollectionView) {
        super.configure(with: message, at: indexPath, and: messagesCollectionView)

        guard let displayDelegate = messagesCollectionView.messagesDisplayDelegate else {
//      ^ conditional
//            ^ keyword
//                                                                                 ^ keyword
            fatalError(MessageKitError.nilMessagesDisplayDelegate)
        }

        switch message.kind {
//      ^ conditional
        case .photo(let mediaItem):
//      ^ keyword
//           ^ punctuation.delimiter
//                      ^ variable
            imageView.image = mediaItem.image ?? mediaItem.placeholderImage
//                                            ^ operator
            playButtonView.isHidden = true
//                                    ^ boolean
        case .video(let mediaItem):
            imageView.image = mediaItem.image ?? mediaItem.placeholderImage
            playButtonView.isHidden = false
//                                    ^ boolean
        default:
//      ^ keyword
            break
//          ^ repeat
        }

        displayDelegate.configureMediaMessageImageView(imageView, for: message, at: indexPath, in: messagesCollectionView)
    }
    
    /// Handle tap gesture on contentView and its subviews.
    open override func handleTapGesture(_ gesture: UIGestureRecognizer) {
        let touchLocation = gesture.location(in: imageView)

        guard imageView.frame.contains(touchLocation) else {
            super.handleTapGesture(gesture)
            return
        }
        delegate?.didTapImage(in: self)
    }
    
}
