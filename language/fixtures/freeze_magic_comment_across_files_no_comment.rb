# frozen_string_literal: true

require_relative 'freeze_magic_comment_required_no_comment'

p "abc".object_id != $second_literal_id
