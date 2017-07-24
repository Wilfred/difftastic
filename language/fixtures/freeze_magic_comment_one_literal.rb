# frozen_string_literal: true

ids = Array.new(2) { "abc".object_id }
p ids.first == ids.last
