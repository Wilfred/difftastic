# The complete syntax of Lua

Here is the complete syntax of Lua in extended BNF. As usual in extended BNF, {A} means 0 or more As, and [A] means an optional A.

---

<pre>

chunk ::=
  block

block ::=
  {stat} [retstat]

stat ::=
  <b>';'</b> | varlist <b>'='</b> explist | functioncall | label | <b>break</b> | <b>goto</b> Name |
  <b>do</b> block <b>end</b> |
  <b>while</b> exp <b>do</b> block <b>end</b> |
  <b>repeat</b> block <b>until</b> exp |
  <b>if</b> exp <b>then</b> block {<b>elseif</b> exp <b>then</b> block} [<b>else</b> block] <b>end</b> |
  <b>for</b> Name <b>'='</b> exp <b>','</b> exp [<b>','</b> exp] <b>do</b> block <b>end</b> |
  <b>for</b> namelist <b>in</b> explist <b>do</b> block <b>end</b> |
  <b>function</b> funcname funcbody |
  <b>local</b> <b>function</b> Name funcbody |
  <b>local</b> namelist [<b>'='</b> explist]

retstat ::=
  <b>return</b> [explist] [<b>';'</b>]

label ::=
  <b>'::'</b> Name <b>'::'</b>

funcname ::=
  Name {<b>'.'</b> Name} [<b>':'</b> Name]

varlist ::=
  var {<b>,</b> var}

var ::=
  Name | prefixexp <b>'['</b> exp <b>']'</b> | prefixexp <b>'.'</b> Name

namelist ::=
  Name {<b>','</b> Name}

explist ::=
  exp {<b>','</b> exp}

exp ::=
  <b>nil</b> | <b>false</b> | <b>true</b> | Numeral | LiteralString | <b>'...'</b> | functiondef |
  prefixexp | tableconstructor | exp binop exp | unop exp

prefixexp ::=
  var | functioncall | <b>'('</b> exp <b>')'</b>

functioncall ::=
  prefixexp args | prefixexp <b>':'</b> Name args

args ::=
  <b>'('</b> [explist] <b>')'</b> | tableconstructor | LiteralString

functiondef ::=
  <b>function</b> funcbody

funcbody ::=
  <b>'('</b> [parlist] <b>')'</b> block <b>end</b>

parlist ::=
  namelist [<b>','</b> <b>'...'</b>] | <b>'...'</b>

tableconstructor ::=
  <b>'{'</b> [ fieldlist ] <b>'}'</b>

fieldlist ::=
  field {fieldsep field} [fieldsep]

field ::=
  <b>'['</b> exp <b>']'</b> <b>'='</b> exp | Name <b>'='</b> exp | exp

fieldsep ::=
  <b>','</b> | <b>';'</b>

binop ::=
  <b>'+'</b> | <b>'-'</b> | <b>'*'</b> | <b>'/'</b> | <b>'//'</b> | <b>'^'</b> | <b>'%'</b> |
  <b>'&'</b> | <b>'~'</b> | <b>'|'</b> | <b>'>>'</b> | <b>'<<'</b> | <b>'..'</b> |
  <b>'<'</b> | <b>'<='</b> | <b>'>'</b> | <b>'>='</b> | <b>'=='</b> | <b>'~='</b> |
  <b>not</b> | <b>or</b>

unop ::=
   <b>'-'</b> | <b>not</b> | <b>'#'</b> | <b>'~'</b>

</pre>
