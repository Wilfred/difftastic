// Example file with all(?) possible components from the syntax

local object = {
  'null': null,
  'true': true,
  'false': false,
  string: 'string',
  number: 5,
  array: [
    null,
    true,
    false,
    'string',
    1.5,
  ],

  forloop: [
    i
    for i in std.range(0, 9)
  ],

  objforloop: {
    ['index' + i]: i
    for i in std.range(0, 9)
    if (i % 2) == 0  // binaryop: multiplicative and equality
  },

  fieldaccess: self.string,
  indexing: self.forloop[self.number],
  indexing_obj: self.objforloop['index' + '0'],
  indexing_slice: self.forloop[2:8:2],

  binaryop_equality: self.string == 'string',
  conditional_in_parenthesis:
    (if self.binaryop_equality && true  // binaryop: AND
     then 'condition true'
     else 'condition false'),

  local objlocal = false || true,  // binaryop: OR
  unaryop: !objlocal,

  anonymous_function:: function(arg, default='v') arg + default,
  regular_func(arg):: $.string + ' ' + arg,

  assert true : 'assert instide object',

  'import':: import 'file.json',
  'importstr':: import 'file.txt',
  err:: error 'message',
};

assert true : 'assert outside object';

object + {
  fieldaccess_super: super.number,
  indexing_super: super.array[2 * 2],  // binaryop: multiplicative

  functioncall_1: super.anonymous_function('echo 1'),

  functioncall_2: self.regular_func(arg='echo 2') tailstrict,

  local localfunc(arg) = {
    local notarg = 'value',
    a: notarg,  // not a parameter reference
    b: arg,  // parameter reference
    [arg]: arg,  // parameter reference in fieldname
  },
  functioncall_3: localfunc('echo 3'),  // function reference

  in_super: 'keynotfound' in super,

  array+: ['another item'],
  objforloop+: { another: 'item' },

  ['fieldname_expr' + (5 - object.objforloop.index2)]: 'value',
  [if object.string == 'string' then 'conditional_key']: 'value',
}
