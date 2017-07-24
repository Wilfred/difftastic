require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTP::Get" do
  it "is a subclass of Net::HTTPRequest" do
    Net::HTTP::Get.should < Net::HTTPRequest
  end

  it "represents the 'GET'-Request-Method" do
    Net::HTTP::Get::METHOD.should == "GET"
  end

  it "has no Request Body" do
    Net::HTTP::Get::REQUEST_HAS_BODY.should be_false
  end

  it "has a Respone Body" do
    Net::HTTP::Get::RESPONSE_HAS_BODY.should be_true
  end
end

describe "Net::HTTP::Head" do
  it "is a subclass of Net::HTTPRequest" do
    Net::HTTP::Head.should < Net::HTTPRequest
  end

  it "represents the 'HEAD'-Request-Method" do
    Net::HTTP::Head::METHOD.should == "HEAD"
  end

  it "has no Request Body" do
    Net::HTTP::Head::REQUEST_HAS_BODY.should be_false
  end

  it "has no Respone Body" do
    Net::HTTP::Head::RESPONSE_HAS_BODY.should be_false
  end
end

describe "Net::HTTP::Post" do
  it "is a subclass of Net::HTTPRequest" do
    Net::HTTP::Post.should < Net::HTTPRequest
  end

  it "represents the 'POST'-Request-Method" do
    Net::HTTP::Post::METHOD.should == "POST"
  end

  it "has a Request Body" do
    Net::HTTP::Post::REQUEST_HAS_BODY.should be_true
  end

  it "has a Respone Body" do
    Net::HTTP::Post::RESPONSE_HAS_BODY.should be_true
  end
end

describe "Net::HTTP::Put" do
  it "is a subclass of Net::HTTPRequest" do
    Net::HTTP::Put.should < Net::HTTPRequest
  end

  it "represents the 'PUT'-Request-Method" do
    Net::HTTP::Put::METHOD.should == "PUT"
  end

  it "has a Request Body" do
    Net::HTTP::Put::REQUEST_HAS_BODY.should be_true
  end

  it "has a Respone Body" do
    Net::HTTP::Put::RESPONSE_HAS_BODY.should be_true
  end
end

describe "Net::HTTP::Delete" do
  it "is a subclass of Net::HTTPRequest" do
    Net::HTTP::Delete.should < Net::HTTPRequest
  end

  it "represents the 'DELETE'-Request-Method" do
    Net::HTTP::Delete::METHOD.should == "DELETE"
  end

  it "has no Request Body" do
    Net::HTTP::Delete::REQUEST_HAS_BODY.should be_false
  end

  it "has a Respone Body" do
    Net::HTTP::Delete::RESPONSE_HAS_BODY.should be_true
  end
end

describe "Net::HTTP::Options" do
  it "is a subclass of Net::HTTPRequest" do
    Net::HTTP::Options.should < Net::HTTPRequest
  end

  it "represents the 'OPTIONS'-Request-Method" do
    Net::HTTP::Options::METHOD.should == "OPTIONS"
  end

  it "has no Request Body" do
    Net::HTTP::Options::REQUEST_HAS_BODY.should be_false
  end

  it "has no Respone Body" do
    Net::HTTP::Options::RESPONSE_HAS_BODY.should be_true
  end
end

describe "Net::HTTP::Trace" do
  it "is a subclass of Net::HTTPRequest" do
    Net::HTTP::Trace.should < Net::HTTPRequest
  end

  it "represents the 'TRACE'-Request-Method" do
    Net::HTTP::Trace::METHOD.should == "TRACE"
  end

  it "has no Request Body" do
    Net::HTTP::Trace::REQUEST_HAS_BODY.should be_false
  end

  it "has a Respone Body" do
    Net::HTTP::Trace::RESPONSE_HAS_BODY.should be_true
  end
end

describe "Net::HTTP::Propfind" do
  it "is a subclass of Net::HTTPRequest" do
    Net::HTTP::Propfind.should < Net::HTTPRequest
  end

  it "represents the 'PROPFIND'-Request-Method" do
    Net::HTTP::Propfind::METHOD.should == "PROPFIND"
  end

  it "has a Request Body" do
    Net::HTTP::Propfind::REQUEST_HAS_BODY.should be_true
  end

  it "has a Respone Body" do
    Net::HTTP::Propfind::RESPONSE_HAS_BODY.should be_true
  end
end

describe "Net::HTTP::Proppatch" do
  it "is a subclass of Net::HTTPRequest" do
    Net::HTTP::Proppatch.should < Net::HTTPRequest
  end

  it "represents the 'PROPPATCH'-Request-Method" do
    Net::HTTP::Proppatch::METHOD.should == "PROPPATCH"
  end

  it "has a Request Body" do
    Net::HTTP::Proppatch::REQUEST_HAS_BODY.should be_true
  end

  it "has a Respone Body" do
    Net::HTTP::Proppatch::RESPONSE_HAS_BODY.should be_true
  end
end

describe "Net::HTTP::Mkcol" do
  it "is a subclass of Net::HTTPRequest" do
    Net::HTTP::Mkcol.should < Net::HTTPRequest
  end

  it "represents the 'MKCOL'-Request-Method" do
    Net::HTTP::Mkcol::METHOD.should == "MKCOL"
  end

  it "has a Request Body" do
    Net::HTTP::Mkcol::REQUEST_HAS_BODY.should be_true
  end

  it "has a Respone Body" do
    Net::HTTP::Mkcol::RESPONSE_HAS_BODY.should be_true
  end
end

describe "Net::HTTP::Copy" do
  it "is a subclass of Net::HTTPRequest" do
    Net::HTTP::Copy.should < Net::HTTPRequest
  end

  it "represents the 'COPY'-Request-Method" do
    Net::HTTP::Copy::METHOD.should == "COPY"
  end

  it "has no Request Body" do
    Net::HTTP::Copy::REQUEST_HAS_BODY.should be_false
  end

  it "has a Respone Body" do
    Net::HTTP::Copy::RESPONSE_HAS_BODY.should be_true
  end
end

describe "Net::HTTP::Move" do
  it "is a subclass of Net::HTTPRequest" do
    Net::HTTP::Move.should < Net::HTTPRequest
  end

  it "represents the 'MOVE'-Request-Method" do
    Net::HTTP::Move::METHOD.should == "MOVE"
  end

  it "has no Request Body" do
    Net::HTTP::Move::REQUEST_HAS_BODY.should be_false
  end

  it "has a Respone Body" do
    Net::HTTP::Move::RESPONSE_HAS_BODY.should be_true
  end
end

describe "Net::HTTP::Lock" do
  it "is a subclass of Net::HTTPRequest" do
    Net::HTTP::Lock.should < Net::HTTPRequest
  end

  it "represents the 'LOCK'-Request-Method" do
    Net::HTTP::Lock::METHOD.should == "LOCK"
  end

  it "has a Request Body" do
    Net::HTTP::Lock::REQUEST_HAS_BODY.should be_true
  end

  it "has a Respone Body" do
    Net::HTTP::Lock::RESPONSE_HAS_BODY.should be_true
  end
end

describe "Net::HTTP::Unlock" do
  it "is a subclass of Net::HTTPRequest" do
    Net::HTTP::Unlock.should < Net::HTTPRequest
  end

  it "represents the 'UNLOCK'-Request-Method" do
    Net::HTTP::Unlock::METHOD.should == "UNLOCK"
  end

  it "has a Request Body" do
    Net::HTTP::Unlock::REQUEST_HAS_BODY.should be_true
  end

  it "has a Respone Body" do
    Net::HTTP::Unlock::RESPONSE_HAS_BODY.should be_true
  end
end
