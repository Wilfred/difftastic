require File.expand_path('../../fixtures/classes', __FILE__)

platform_is :windows do
  require 'win32ole'

  def default_handler(event, *args)
    @event += event
  end

  def alternate_handler(event, *args)
    @event2 = "alternate"
  end

  def handler3(event, *args)
    @event3 += event
  end


  describe "WIN32OLE_EVENT#on_event with no argument" do
    before :each do
      @ie     = WIN32OLESpecs.new_ole('InternetExplorer.Application')
      @ev     = WIN32OLE_EVENT.new(@ie, 'DWebBrowserEvents')
      @event  = ''
      @event2 = ''
      @event3 = ''
      @ie.StatusBar = true
    end

    after :each do
      @ie.Quit
    end

    it "sets event handler properly, and the handler is invoked by event loop" do
      @ev.on_event { |*args| default_handler(*args) }
      @ie.StatusText='hello'
      WIN32OLE_EVENT.message_loop
      @event.should =~ /StatusTextChange/
    end

    it "accepts a String argument, sets event handler properly, and the handler is invoked by event loop" do
      @ev.on_event("StatusTextChange") { |*args| @event = 'foo' }
      @ie.StatusText='hello'
      WIN32OLE_EVENT.message_loop
      @event.should =~ /foo/
    end

    it "registers multiple event handlers for the same event" do
      @ev.on_event("StatusTextChange") { |*args| default_handler(*args) }
      @ev.on_event("StatusTextChange") { |*args| alternate_handler(*args) }
      @ie.StatusText= 'hello'
      WIN32OLE_EVENT.message_loop
      @event2.should == 'alternate'
    end

    it "accepts a Symbol argument, sets event handler properly, and the handler is invoked by event loop" do
      @ev.on_event(:StatusTextChange) { |*args| @event = 'foo' }
      @ie.StatusText='hello'
      WIN32OLE_EVENT.message_loop
      @event.should =~ /foo/
    end
  end
end
