require 'uri'

module URISpec
  def self.components(uri)
    result = {}
    uri.component.each do |component|
      result[component] = uri.send(component)
    end
    result
  end
end
