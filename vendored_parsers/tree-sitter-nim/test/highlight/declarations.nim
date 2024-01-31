# SPDX-FileCopyrightText: 2023 Leorize <leorize+oss@disroot.org>
# SPDX-License-Identifier: MPL-2.0

let x, y = 10
# <- keyword
#   ^ variable
#    ^ punctuation.delimiter
#      ^ variable
#        ^ punctuation.delimiter
#          ^ number

proc foo = discard
# <- keyword.function
#    ^ function
#        ^ punctuation.delimiter
#          ^ keyword

method bar = discard
# <- keyword.function
#      ^ method
#          ^ punctuation.delimiter

template foobar = discard
# <- keyword
#        ^ function.macro
#               ^ punctuation.delimiter

proc foo*(x: int): int = discard
# <- keyword.function
#    ^ function
#       ^ type.qualifier
#        ^ punctuation.bracket
#         ^ parameter
#            ^ type
#                ^ punctuation.delimiter
#                  ^ type
