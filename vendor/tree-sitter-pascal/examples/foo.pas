unit unit1;

interface

type
  TForm1 = class(TForm)
    function Add(a,b: integer): integer;
    function Baz(out Buf; Flag: string = '123'): integer;
  public
    constructor Create;
    destructor Destroy; override;
  end;

  TMyRec = record
  end;

var
  a,b,c: float;

const
  hello = 'world';
  world: string = 'hello';

  complex = not (42 + 3)*123 and $FF + integer(@world);

procedure Write(x: integer = 42);

type

  TFoo1<A> = X;
  TBar2<B,C> = X;
  TBaz3<A: IContract> = X;
  TBaz4<A,B: IContract> = TBar<X,Y>;
  TBaz5<A;B: IContract> = X;
  TFoo6<T> = class end;
  TFoo7 = class(TCustomFoo<T>) end;
  TFoo8<T> = class(TCustomFoo<T<U>>) end;
  TFoo9<A, B; C, D: IContract> = class(TCustomFoo< T, U<W> >) end;
  TFoo10<A, B; C, D: IContract> = TCustomFoo< T, U<W> >;

  TMySet11 = set of Byte;
  TMySet12 = set of (Watermelon, Cucumber);

  TMeta13 = class of TFoo;


  TMyCallback14 = procedure (Sender: TObject<T>); stdcall;
  TMyCallback15 = procedure (Sender: TObject);
  TMyCallback16 = function (Sender: TObject): integer;
  TMyFunc17<T> = function (x,y: T; z: integer): TSomething<T>;

class procedure Foo<T = TObject>(X: T); static;

implementation

function Add(a, b: integer): integer;
var
  c: integer;
begin
  c := a + b;
  Result := c;

  TFoo1.Bar;
end;

class procedure Foo<T = TObject>(X: T); forward;
procedure Foo; forward;

function TFoo<T>.Impl.Add<T>(a, b: T; c: integer): T;
var
  tmp: T;

  procedure nested();
  begin
    tmp := a;
  end;
begin
  tmp := b;
end;

function Add<T>(a, b: T): T;
var
  c: T;
begin
  c.x.y.z := a + b;
  Result := c;
end;

procedure Foo(x: TType);
begin
  a + b + c;
  x.y.z(a,b).w + v and v;
  x.y.z;
  x;
  x + y;
  2.5 + 3.14*4;
  Result := 2.4 + 3.14*4;
  (a+b)*(c+d) and b >= c;
  if a then b;
  if a then b else c;
end;

procedure Foobar(arr: array of integer);
begin
end;

end.
