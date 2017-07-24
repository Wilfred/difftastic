require File.expand_path('../../../spec_helper', __FILE__)
require 'uri'

#an alias of URI#merge
describe "URI#+" do
  it "replaces the end of the path of the URI when added to a string that looks like a relative path" do
    (URI('http://foo') + 'bar').should == URI("http://foo/bar")
    (URI('http://foo/baz') + 'bar').should == URI("http://foo/bar")
    (URI('http://foo/baz/') + 'bar').should == URI("http://foo/baz/bar")
    (URI('mailto:foo@example.com') + "#bar").should == URI("mailto:foo@example.com#bar")
  end

  it "replaces the entire path of the URI when added to a string that begins with a /" do
    (URI('http://foo/baz/') + '/bar').should == URI("http://foo/bar")
  end

  it "replaces the entire url when added to a string that looks like a full url" do
    (URI.parse('http://a/b') + 'http://x/y').should == URI("http://x/y")
    (URI.parse('telnet:example.com') + 'http://x/y').should == URI("http://x/y")
  end

  it "canonicalizes the URI's path, removing ../'s" do
    (URI.parse('http://a/b/c/../') + "./").should == URI("http://a/b/")
    (URI.parse('http://a/b/c/../') + ".").should == URI("http://a/b/")
    (URI.parse('http://a/b/c/')   + "../").should == URI("http://a/b/")
    (URI.parse('http://a/b/c/../../') + "./").should == URI("http://a/")
    (URI.parse('http://a/b/c/')   + "../e/").should == URI("http://a/b/e/")
    (URI.parse('http://a/b/c/')   + "../e/../").should == URI("http://a/b/")
    (URI.parse('http://a/b/../c/') + ".").should == URI("http://a/c/")

    (URI.parse('http://a/b/c/../../../') + ".").should == URI("http://a/")
  end

  it "doesn't conconicalize the path when adding to the empty string" do
    (URI.parse('http://a/b/c/../') + "").should == URI("http://a/b/c/../")
  end

  it "raises a URI::BadURIError when adding two relative URIs" do
    lambda {URI.parse('a/b/c') + "d"}.should raise_error(URI::BadURIError)
  end

  #Todo: make more BDD?
  it "conforms to the merge specifications from rfc 2396" do
    @url = 'http://a/b/c/d;p?q'
    @base_url = URI.parse(@url)

#  http://a/b/c/d;p?q
#        g:h           =  g:h
    url = @base_url.merge('g:h')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == 'g:h'
    url = @base_url.route_to('g:h')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == 'g:h'

#  http://a/b/c/d;p?q
#        g             =  http://a/b/c/g
    url = @base_url.merge('g')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/g'
    url = @base_url.route_to('http://a/b/c/g')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == 'g'

#  http://a/b/c/d;p?q
#        ./g           =  http://a/b/c/g
    url = @base_url.merge('./g')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/g'
    url = @base_url.route_to('http://a/b/c/g')
    url.should be_kind_of(URI::Generic)
    url.to_s.should_not == './g' # ok
    url.to_s.should == 'g'

#  http://a/b/c/d;p?q
#        g/            =  http://a/b/c/g/
    url = @base_url.merge('g/')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/g/'
    url = @base_url.route_to('http://a/b/c/g/')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == 'g/'

#  http://a/b/c/d;p?q
#        /g            =  http://a/g
    url = @base_url.merge('/g')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/g'
    url = @base_url.route_to('http://a/g')
    url.should be_kind_of(URI::Generic)
    url.to_s.should_not == '/g' # ok
    url.to_s.should == '../../g'

#  http://a/b/c/d;p?q
#        //g           =  http://g
    url = @base_url.merge('//g')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://g'
    url = @base_url.route_to('http://g')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == '//g'

#  http://a/b/c/d;p?q
#        ?y            =  http://a/b/c/?y
    url = @base_url.merge('?y')
    url.should be_kind_of(URI::HTTP)

    url.to_s.should == 'http://a/b/c/d;p?y'

    url = @base_url.route_to('http://a/b/c/?y')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == '?y'

#  http://a/b/c/d;p?q
#        g?y           =  http://a/b/c/g?y
    url = @base_url.merge('g?y')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/g?y'
    url = @base_url.route_to('http://a/b/c/g?y')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == 'g?y'

#  http://a/b/c/d;p?q
#        #s            =  (current document)#s
    url = @base_url.merge('#s')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == @base_url.to_s + '#s'
    url = @base_url.route_to(@base_url.to_s + '#s')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == '#s'

#  http://a/b/c/d;p?q
#        g#s           =  http://a/b/c/g#s
    url = @base_url.merge('g#s')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/g#s'
    url = @base_url.route_to('http://a/b/c/g#s')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == 'g#s'

#  http://a/b/c/d;p?q
#        g?y#s         =  http://a/b/c/g?y#s
    url = @base_url.merge('g?y#s')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/g?y#s'
    url = @base_url.route_to('http://a/b/c/g?y#s')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == 'g?y#s'

#  http://a/b/c/d;p?q
#        ;x            =  http://a/b/c/;x
    url = @base_url.merge(';x')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/;x'
    url = @base_url.route_to('http://a/b/c/;x')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == ';x'

#  http://a/b/c/d;p?q
#        g;x           =  http://a/b/c/g;x
    url = @base_url.merge('g;x')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/g;x'
    url = @base_url.route_to('http://a/b/c/g;x')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == 'g;x'

#  http://a/b/c/d;p?q
#        g;x?y#s       =  http://a/b/c/g;x?y#s
    url = @base_url.merge('g;x?y#s')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/g;x?y#s'
    url = @base_url.route_to('http://a/b/c/g;x?y#s')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == 'g;x?y#s'

#  http://a/b/c/d;p?q
#        .             =  http://a/b/c/
    url = @base_url.merge('.')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/'
    url = @base_url.route_to('http://a/b/c/')
    url.should be_kind_of(URI::Generic)
    url.to_s.should_not == '.' # ok
    url.to_s.should == './'

#  http://a/b/c/d;p?q
#        ./            =  http://a/b/c/
    url = @base_url.merge('./')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/'
    url = @base_url.route_to('http://a/b/c/')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == './'

#  http://a/b/c/d;p?q
#        ..            =  http://a/b/
    url = @base_url.merge('..')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/'
    url = @base_url.route_to('http://a/b/')
    url.should be_kind_of(URI::Generic)
    url.to_s.should_not == '..' # ok
    url.to_s.should == '../'

#  http://a/b/c/d;p?q
#        ../           =  http://a/b/
    url = @base_url.merge('../')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/'
    url = @base_url.route_to('http://a/b/')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == '../'

#  http://a/b/c/d;p?q
#        ../g          =  http://a/b/g
    url = @base_url.merge('../g')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/g'
    url = @base_url.route_to('http://a/b/g')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == '../g'

#  http://a/b/c/d;p?q
#        ../..         =  http://a/
    url = @base_url.merge('../..')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/'
    url = @base_url.route_to('http://a/')
    url.should be_kind_of(URI::Generic)
    url.to_s.should_not == '../..' # ok
    url.to_s.should == '../../'

#  http://a/b/c/d;p?q
#        ../../        =  http://a/
    url = @base_url.merge('../../')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/'
    url = @base_url.route_to('http://a/')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == '../../'

#  http://a/b/c/d;p?q
#        ../../g       =  http://a/g
    url = @base_url.merge('../../g')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/g'
    url = @base_url.route_to('http://a/g')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == '../../g'

#  http://a/b/c/d;p?q
#        <>            =  (current document)
    url = @base_url.merge('')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/d;p?q'
    url = @base_url.route_to('http://a/b/c/d;p?q')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == ''

#  http://a/b/c/d;p?q
#        /./g          =  http://a/./g
    url = @base_url.merge('/./g')
    url.should be_kind_of(URI::HTTP)

    url.to_s.should == 'http://a/g'

    url = @base_url.route_to('http://a/./g')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == '/./g'

#  http://a/b/c/d;p?q
#        /../g         =  http://a/../g
    url = @base_url.merge('/../g')
    url.should be_kind_of(URI::HTTP)

    url.to_s.should == 'http://a/g'

    url = @base_url.route_to('http://a/../g')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == '/../g'

#  http://a/b/c/d;p?q
#        g.            =  http://a/b/c/g.
    url = @base_url.merge('g.')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/g.'
    url = @base_url.route_to('http://a/b/c/g.')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == 'g.'

#  http://a/b/c/d;p?q
#        .g            =  http://a/b/c/.g
    url = @base_url.merge('.g')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/.g'
    url = @base_url.route_to('http://a/b/c/.g')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == '.g'

#  http://a/b/c/d;p?q
#        g..           =  http://a/b/c/g..
    url = @base_url.merge('g..')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/g..'
    url = @base_url.route_to('http://a/b/c/g..')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == 'g..'

#  http://a/b/c/d;p?q
#        ..g           =  http://a/b/c/..g
    url = @base_url.merge('..g')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/..g'
    url = @base_url.route_to('http://a/b/c/..g')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == '..g'

#  http://a/b/c/d;p?q
#        ../../../g    =  http://a/../g
    url = @base_url.merge('../../../g')
    url.should be_kind_of(URI::HTTP)

    url.to_s.should == 'http://a/g'

    url = @base_url.route_to('http://a/../g')
    url.should be_kind_of(URI::Generic)
    url.to_s.should_not == '../../../g' # ok? yes, it confuses you
    url.to_s.should == '/../g'  # and it is clearly

#  http://a/b/c/d;p?q
#        ../../../../g =  http://a/../../g
    url = @base_url.merge('../../../../g')
    url.should be_kind_of(URI::HTTP)

    url.to_s.should == 'http://a/g'

    url = @base_url.route_to('http://a/../../g')
    url.should be_kind_of(URI::Generic)
    url.to_s.should_not == '../../../../g' # ok? yes, it confuses you
    url.to_s.should == '/../../g'  # and it is clearly

#  http://a/b/c/d;p?q
#        ./../g        =  http://a/b/g
    url = @base_url.merge('./../g')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/g'
    url = @base_url.route_to('http://a/b/g')
    url.should be_kind_of(URI::Generic)
    url.to_s.should_not == './../g' # ok
    url.to_s.should == '../g'

#  http://a/b/c/d;p?q
#        ./g/.         =  http://a/b/c/g/
    url = @base_url.merge('./g/.')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/g/'
    url = @base_url.route_to('http://a/b/c/g/')
    url.should be_kind_of(URI::Generic)
    url.to_s.should_not == './g/.' # ok
    url.to_s.should == 'g/'

#  http://a/b/c/d;p?q
#        g/./h         =  http://a/b/c/g/h
    url = @base_url.merge('g/./h')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/g/h'
    url = @base_url.route_to('http://a/b/c/g/h')
    url.should be_kind_of(URI::Generic)
    url.to_s.should_not == 'g/./h' # ok
    url.to_s.should == 'g/h'

#  http://a/b/c/d;p?q
#        g/../h        =  http://a/b/c/h
    url = @base_url.merge('g/../h')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/h'
    url = @base_url.route_to('http://a/b/c/h')
    url.should be_kind_of(URI::Generic)
    url.to_s.should_not == 'g/../h' # ok
    url.to_s.should == 'h'

#  http://a/b/c/d;p?q
#        g;x=1/./y     =  http://a/b/c/g;x=1/y
    url = @base_url.merge('g;x=1/./y')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/g;x=1/y'
    url = @base_url.route_to('http://a/b/c/g;x=1/y')
    url.should be_kind_of(URI::Generic)
    url.to_s.should_not == 'g;x=1/./y' # ok
    url.to_s.should == 'g;x=1/y'

#  http://a/b/c/d;p?q
#        g;x=1/../y    =  http://a/b/c/y
    url = @base_url.merge('g;x=1/../y')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/y'
    url = @base_url.route_to('http://a/b/c/y')
    url.should be_kind_of(URI::Generic)
    url.to_s.should_not == 'g;x=1/../y' # ok
    url.to_s.should == 'y'

#  http://a/b/c/d;p?q
#        g?y/./x       =  http://a/b/c/g?y/./x
    url = @base_url.merge('g?y/./x')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/g?y/./x'
    url = @base_url.route_to('http://a/b/c/g?y/./x')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == 'g?y/./x'

#  http://a/b/c/d;p?q
#        g?y/../x      =  http://a/b/c/g?y/../x
    url = @base_url.merge('g?y/../x')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/g?y/../x'
    url = @base_url.route_to('http://a/b/c/g?y/../x')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == 'g?y/../x'

#  http://a/b/c/d;p?q
#        g#s/./x       =  http://a/b/c/g#s/./x
    url = @base_url.merge('g#s/./x')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/g#s/./x'
    url = @base_url.route_to('http://a/b/c/g#s/./x')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == 'g#s/./x'

#  http://a/b/c/d;p?q
#        g#s/../x      =  http://a/b/c/g#s/../x
    url = @base_url.merge('g#s/../x')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http://a/b/c/g#s/../x'
    url = @base_url.route_to('http://a/b/c/g#s/../x')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == 'g#s/../x'

#  http://a/b/c/d;p?q
#        http:g        =  http:g           ; for validating parsers
#                      |  http://a/b/c/g   ; for backwards compatibility
    url = @base_url.merge('http:g')
    url.should be_kind_of(URI::HTTP)
    url.to_s.should == 'http:g'
    url = @base_url.route_to('http:g')
    url.should be_kind_of(URI::Generic)
    url.to_s.should == 'http:g'
  end
end

#TODO: incorporate these tests:
#
# u = URI.parse('http://foo/bar/baz')
# assert_equal(nil, u.merge!(""))
# assert_equal(nil, u.merge!(u))
# assert(nil != u.merge!("."))
# assert_equal('http://foo/bar/', u.to_s)
# assert(nil != u.merge!("../baz"))
# assert_equal('http://foo/baz', u.to_s)
