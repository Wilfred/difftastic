unit anon;

interface

implementation

function MakeAdder(y: Integer): TFuncOfInt;
begin
  Result := 
    function(x: Integer) : Integer
    begin
      Result := x + y;
    end;
  z := x + y;
end;

procedure Test;
begin
  x := procedure begin end;
end;

procedure Foo;
begin
  Call(
    procedure
    var
      x: integer;
    begin
      Inc(x);
    end
  );
end;

const
  Bla = procedure begin WriteLn('Hello'); end;


end.
