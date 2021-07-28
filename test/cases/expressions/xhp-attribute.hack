<frag info={get_str('info')} />;

<frag info={get_str('info')}> </frag>;

<test:attribute_types
        mystring="foo"
        mybool={true}
        myint={123}
        myarray={varray[1, 2, 3]}
        myobject={new stdClass()}
        myenum={'foo'}
        myfloat={1.23}
        myvector={Vector {'1', '2', '3'}}
        mymap={Map {'herp' => 'derp'}}
        myshape={shape('foo' => 'herp', 'bar' => 'derp')}
      />;
