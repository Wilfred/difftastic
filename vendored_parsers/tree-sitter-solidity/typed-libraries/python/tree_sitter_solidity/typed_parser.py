from typing import Union, Any, Optional, List

from tree_sitter_types.parser import load_language, install_parser, parse_node

class TreeSitterNode:
    base_node: Any

    def text(self):
        return self.base_node.text

class AnyPragmaToken(TreeSitterNode):
    field_names = []
    children: List[Union['Identifier', 'PragmaValue']]

class AnySourceType(TreeSitterNode):
    field_names = []
    children: None

class ArrayAccess(TreeSitterNode):
    field_names = ['base', 'index']
    base: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']
    index: Optional[Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']]
    children: None

class AssemblyStatement(TreeSitterNode):
    field_names = []
    children: Optional[List[Union['YulAssignment', 'YulBlock', 'YulBoolean',
        'YulBreak', 'YulContinue', 'YulDecimalNumber', 'YulForStatement',
        'YulFunctionCall', 'YulFunctionDefinition', 'YulHexNumber',
        'YulIfStatement', 'YulLabel', 'YulLeave', 'YulStringLiteral',
        'YulSwitchStatement', 'YulVariableDeclaration']]]

class AssignmentExpression(TreeSitterNode):
    field_names = ['left', 'right']
    left: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']
    right: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']
    children: None

class AugmentedAssignmentExpression(TreeSitterNode):
    field_names = ['left', 'right']
    left: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']
    right: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']
    children: None

class BinaryExpression(TreeSitterNode):
    field_names = ['left', 'operator', 'right']
    left: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']
    operator: Union['str', 'str', 'str', 'str', 'str', 'str', 'str', 'str',
        'str', 'str', 'str', 'str', 'str', 'str', 'str', 'str', 'str',
        'str', 'str', 'str', 'str']
    right: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']
    children: None

class BlockStatement(TreeSitterNode):
    field_names = []
    children: Optional[List[Union['AssemblyStatement', 'BlockStatement',
        'BreakStatement', 'ContinueStatement', 'DoWhileStatement',
        'EmitStatement', 'ExpressionStatement', 'ForStatement',
        'IfStatement', 'ReturnStatement', 'RevertStatement', 'TryStatement',
        'VariableDeclarationStatement', 'WhileStatement']]]

class BooleanLiteral(TreeSitterNode):
    field_names = []
    children: Union['False', 'True']

class BreakStatement(TreeSitterNode):
    field_names = []
    children: None

class CallArgument(TreeSitterNode):
    field_names = []
    children: Optional[List[Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'CallStructArgument',
        'HexStringLiteral', 'Identifier', 'InlineArrayExpression',
        'MemberExpression', 'MetaTypeExpression', 'NewExpression',
        'NumberLiteral', 'ParenthesizedExpression',
        'PayableConversionExpression', 'PrimitiveType', 'SliceAccess',
        'StringLiteral', 'StructExpression', 'TernaryExpression',
        'TupleExpression', 'TypeCastExpression', 'UnaryExpression',
        'UnicodeStringLiteral', 'UpdateExpression', 'UserDefinedType']]]

class CallExpression(TreeSitterNode):
    field_names = ['function']
    function: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']
    children: Optional[List['CallArgument']]

class CallStructArgument(TreeSitterNode):
    field_names = ['name', 'value']
    name: 'Identifier'
    value: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']
    children: None

class CatchClause(TreeSitterNode):
    field_names = ['body']
    body: 'BlockStatement'
    children: Optional[List[Union['Identifier', 'Parameter']]]

class ConstantVariableDeclaration(TreeSitterNode):
    field_names = ['name', 'type', 'value']
    name: 'Identifier'
    type: 'TypeName'
    value: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']
    children: None

class ConstructorDefinition(TreeSitterNode):
    field_names = ['body']
    body: 'FunctionBody'
    children: Optional[List[Union['ModifierInvocation', 'Parameter']]]

class ContinueStatement(TreeSitterNode):
    field_names = []
    children: None

class ContractBody(TreeSitterNode):
    field_names = []
    children: Optional[List[Union['ConstructorDefinition',
        'EnumDeclaration', 'ErrorDeclaration', 'EventDefinition',
        'FallbackReceiveDefinition', 'FunctionDefinition',
        'ModifierDefinition', 'StateVariableDeclaration',
        'StructDeclaration', 'UserDefinedTypeDefinition', 'UsingDirective']]]

class ContractDeclaration(TreeSitterNode):
    field_names = ['body', 'name']
    body: 'ContractBody'
    name: 'Identifier'
    children: Optional[List['InheritanceSpecifier']]

class DoWhileStatement(TreeSitterNode):
    field_names = ['body', 'condition']
    body: Union['AssemblyStatement', 'BlockStatement', 'BreakStatement',
        'ContinueStatement', 'DoWhileStatement', 'EmitStatement',
        'ExpressionStatement', 'ForStatement', 'IfStatement',
        'ReturnStatement', 'RevertStatement', 'TryStatement',
        'VariableDeclarationStatement', 'WhileStatement']
    condition: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']
    children: None

class EmitStatement(TreeSitterNode):
    field_names = ['name']
    name: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']
    children: Optional[List['CallArgument']]

class EnumDeclaration(TreeSitterNode):
    field_names = ['name']
    name: 'Identifier'
    children: Optional[List['EnumValue']]

class ErrorDeclaration(TreeSitterNode):
    field_names = ['name']
    name: 'Identifier'
    children: Optional[List['ErrorParameter']]

class ErrorParameter(TreeSitterNode):
    field_names = ['name', 'type']
    name: Optional['Identifier']
    type: 'TypeName'
    children: None

class EventDefinition(TreeSitterNode):
    field_names = ['name']
    name: 'Identifier'
    children: Optional[List['EventParamater']]

class EventParamater(TreeSitterNode):
    field_names = ['name', 'type']
    name: Optional['Identifier']
    type: 'TypeName'
    children: None

class ExpressionStatement(TreeSitterNode):
    field_names = []
    children: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']

class FallbackReceiveDefinition(TreeSitterNode):
    field_names = ['body']
    body: Optional['FunctionBody']
    children: Optional[List[Union['ModifierInvocation', 'OverrideSpecifier',
        'Parameter', 'StateMutability', 'Virtual', 'Visibility']]]

class FalseBool(TreeSitterNode):
    field_names = []
    children: None

class ForStatement(TreeSitterNode):
    field_names = ['body', 'condition', 'initial', 'update']
    body: Union['AssemblyStatement', 'BlockStatement', 'BreakStatement',
        'ContinueStatement', 'DoWhileStatement', 'EmitStatement',
        'ExpressionStatement', 'ForStatement', 'IfStatement',
        'ReturnStatement', 'RevertStatement', 'TryStatement',
        'VariableDeclarationStatement', 'WhileStatement']
    condition: 'ExpressionStatement'
    initial: Union['ExpressionStatement', 'VariableDeclarationStatement']
    update: Optional[Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']]
    children: None

class FunctionBody(TreeSitterNode):
    field_names = []
    children: Optional[List[Union['AssemblyStatement', 'BlockStatement',
        'BreakStatement', 'ContinueStatement', 'DoWhileStatement',
        'EmitStatement', 'ExpressionStatement', 'ForStatement',
        'IfStatement', 'ReturnStatement', 'RevertStatement', 'TryStatement',
        'VariableDeclarationStatement', 'WhileStatement']]]

class FunctionDefinition(TreeSitterNode):
    field_names = ['body', 'name', 'return_type']
    body: Optional['FunctionBody']
    name: 'Identifier'
    return_type: Optional['ReturnTypeDefinition']
    children: Optional[List[Union['ModifierInvocation', 'OverrideSpecifier',
        'Parameter', 'StateMutability', 'Virtual', 'Visibility']]]

class HexStringLiteral(TreeSitterNode):
    field_names = []
    children: None

class IfStatement(TreeSitterNode):
    field_names = ['body', 'condition', 'else']
    body: List[Union['AssemblyStatement', 'BlockStatement',
        'BreakStatement', 'ContinueStatement', 'DoWhileStatement',
        'EmitStatement', 'ExpressionStatement', 'ForStatement',
        'IfStatement', 'ReturnStatement', 'RevertStatement', 'TryStatement',
        'VariableDeclarationStatement', 'WhileStatement']]
    condition: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']
    _else: Optional['str']
    children: None

class ImportDirective(TreeSitterNode):
    field_names = ['alias', 'import_name', 'source']
    alias: Optional[List['Identifier']]
    import_name: Optional[List['Identifier']]
    source: 'String'
    children: None

class InheritanceSpecifier(TreeSitterNode):
    field_names = ['ancestor', 'ancestor_arguments']
    ancestor: 'UserDefinedType'
    ancestor_arguments: Optional[List[Union['str', 'str', 'str',
        'CallArgument']]]
    children: None

class InlineArrayExpression(TreeSitterNode):
    field_names = []
    children: Optional[List[Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']]]

class InterfaceDeclaration(TreeSitterNode):
    field_names = ['body', 'name']
    body: 'ContractBody'
    name: 'Identifier'
    children: Optional[List['InheritanceSpecifier']]

class LibraryDeclaration(TreeSitterNode):
    field_names = ['body', 'name']
    body: 'ContractBody'
    name: 'Identifier'
    children: None

class MemberExpression(TreeSitterNode):
    field_names = ['object', 'property']
    object: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']
    property: 'Identifier'
    children: None

class MetaTypeExpression(TreeSitterNode):
    field_names = []
    children: 'TypeName'

class ModifierDefinition(TreeSitterNode):
    field_names = ['body', 'name']
    body: Optional['FunctionBody']
    name: 'Identifier'
    children: Optional[List[Union['OverrideSpecifier', 'Parameter', 'Virtual']]
        ]

class ModifierInvocation(TreeSitterNode):
    field_names = []
    children: List[Union['CallArgument', 'Identifier']]

class NewExpression(TreeSitterNode):
    field_names = ['name']
    name: 'TypeName'
    children: Optional[List['CallArgument']]

class NumberLiteral(TreeSitterNode):
    field_names = []
    children: Optional['NumberUnit']

class NumberUnit(TreeSitterNode):
    field_names = []
    children: None

class OverrideSpecifier(TreeSitterNode):
    field_names = []
    children: Optional[List['UserDefinedType']]

class Parameter(TreeSitterNode):
    field_names = ['location', 'name', 'type']
    location: Optional[Union['str', 'str', 'str']]
    name: Optional['Identifier']
    type: 'TypeName'
    children: None

class ParenthesizedExpression(TreeSitterNode):
    field_names = []
    children: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']

class PayableConversionExpression(TreeSitterNode):
    field_names = []
    children: Optional[List['CallArgument']]

class PragmaDirective(TreeSitterNode):
    field_names = []
    children: Union['AnyPragmaToken', 'SolidityPragmaToken']

class PragmaValue(TreeSitterNode):
    field_names = []
    children: None

class PrimitiveType(TreeSitterNode):
    field_names = []
    children: None

class ReturnParameter(TreeSitterNode):
    field_names = ['location', 'type']
    location: Optional[Union['str', 'str', 'str']]
    type: 'TypeName'
    children: None

class ReturnStatement(TreeSitterNode):
    field_names = []
    children: Optional[Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']]

class ReturnTypeDefinition(TreeSitterNode):
    field_names = []
    children: Optional[List['Parameter']]

class RevertArguments(TreeSitterNode):
    field_names = []
    children: Optional[List['CallArgument']]

class RevertStatement(TreeSitterNode):
    field_names = ['error']
    error: Optional[Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']]
    children: Optional['RevertArguments']

class SliceAccess(TreeSitterNode):
    field_names = ['base', 'from', 'to']
    base: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']
    _from: Optional[Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']]
    to: Optional[Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']]
    children: None

class SolidityPragmaToken(TreeSitterNode):
    field_names = ['version_constraint']
    version_constraint: Optional[List[Union['SolidityVersion',
        'SolidityVersionComparisonOperator']]]
    children: None

class SolidityVersionComparisonOperator(TreeSitterNode):
    field_names = []
    children: None

class SourceFile(TreeSitterNode):
    field_names = []
    children: Optional[List[Union['ConstantVariableDeclaration',
        'ContractDeclaration', 'EnumDeclaration', 'ErrorDeclaration',
        'FunctionDefinition', 'ImportDirective', 'InterfaceDeclaration',
        'LibraryDeclaration', 'PragmaDirective', 'StructDeclaration',
        'UserDefinedTypeDefinition']]]

class StateMutability(TreeSitterNode):
    field_names = []
    children: None

class StateVariableDeclaration(TreeSitterNode):
    field_names = ['name', 'type', 'value', 'visibility']
    name: 'Identifier'
    type: 'TypeName'
    value: Optional[Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']]
    visibility: Optional[List['Visibility']]
    children: Optional[List[Union['Immutable', 'OverrideSpecifier']]]

class String(TreeSitterNode):
    field_names = []
    children: None

class StringLiteral(TreeSitterNode):
    field_names = []
    children: List['String']

class StructDeclaration(TreeSitterNode):
    field_names = ['name']
    name: 'Identifier'
    children: List['StructMember']

class StructExpression(TreeSitterNode):
    field_names = ['type']
    type: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']
    children: Optional[List['StructFieldAssignment']]

class StructFieldAssignment(TreeSitterNode):
    field_names = ['name', 'value']
    name: 'Identifier'
    value: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']
    children: None

class StructMember(TreeSitterNode):
    field_names = ['name', 'type']
    name: 'Identifier'
    type: 'TypeName'
    children: None

class TernaryExpression(TreeSitterNode):
    field_names = []
    children: List[Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']]

class TrueBool(TreeSitterNode):
    field_names = []
    children: None

class TryStatement(TreeSitterNode):
    field_names = ['attempt', 'body']
    attempt: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']
    body: 'BlockStatement'
    children: List[Union['CatchClause', 'Parameter']]

class TupleExpression(TreeSitterNode):
    field_names = []
    children: Optional[List[Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']]]

class TypeAlias(TreeSitterNode):
    field_names = []
    children: List['Identifier']

class TypeCastExpression(TreeSitterNode):
    field_names = []
    children: List[Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']]

class TypeName(TreeSitterNode):
    field_names = ['key_type', 'parameters', 'value_type']
    key_type: Optional[Union['PrimitiveType', 'UserDefinedType']]
    parameters: Optional[List[Union['str', 'str', 'str', 'Parameter']]]
    value_type: Optional['TypeName']
    children: Optional[List[Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'ReturnParameter', 'SliceAccess',
        'StateMutability', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'TypeName', 'UnaryExpression', 'UnicodeStringLiteral',
        'UpdateExpression', 'UserDefinedType', 'Visibility']]]

class UnaryExpression(TreeSitterNode):
    field_names = ['argument', 'operator']
    argument: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']
    operator: Union['str', 'str', 'str', 'str', 'str']
    children: None

class UnicodeStringLiteral(TreeSitterNode):
    field_names = []
    children: None

class UpdateExpression(TreeSitterNode):
    field_names = ['argument', 'operator']
    argument: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']
    operator: Union['str', 'str']
    children: None

class UserDefinedType(TreeSitterNode):
    field_names = []
    children: List['Identifier']

class UserDefinedTypeDefinition(TreeSitterNode):
    field_names = ['name']
    name: 'Identifier'
    children: 'PrimitiveType'

class UsingDirective(TreeSitterNode):
    field_names = ['source']
    source: Union['AnySourceType', 'TypeName']
    children: 'TypeAlias'

class VariableDeclaration(TreeSitterNode):
    field_names = ['location', 'name', 'type']
    location: Optional[Union['str', 'str', 'str']]
    name: 'Identifier'
    type: 'TypeName'
    children: None

class VariableDeclarationStatement(TreeSitterNode):
    field_names = ['value']
    value: Optional[Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']]
    children: Union['VariableDeclaration', 'VariableDeclarationTuple']

class VariableDeclarationTuple(TreeSitterNode):
    field_names = []
    children: Optional[List[Union['Identifier', 'VariableDeclaration']]]

class Visibility(TreeSitterNode):
    field_names = []
    children: None

class WhileStatement(TreeSitterNode):
    field_names = ['body', 'condition']
    body: Union['AssemblyStatement', 'BlockStatement', 'BreakStatement',
        'ContinueStatement', 'DoWhileStatement', 'EmitStatement',
        'ExpressionStatement', 'ForStatement', 'IfStatement',
        'ReturnStatement', 'RevertStatement', 'TryStatement',
        'VariableDeclarationStatement', 'WhileStatement']
    condition: Union['ArrayAccess', 'AssignmentExpression',
        'AugmentedAssignmentExpression', 'BinaryExpression',
        'BooleanLiteral', 'CallExpression', 'HexStringLiteral',
        'Identifier', 'InlineArrayExpression', 'MemberExpression',
        'MetaTypeExpression', 'NewExpression', 'NumberLiteral',
        'ParenthesizedExpression', 'PayableConversionExpression',
        'PrimitiveType', 'SliceAccess', 'StringLiteral', 'StructExpression',
        'TernaryExpression', 'TupleExpression', 'TypeCastExpression',
        'UnaryExpression', 'UnicodeStringLiteral', 'UpdateExpression',
        'UserDefinedType']
    children: None

class YulAssignment(TreeSitterNode):
    field_names = []
    children: List[Union['YulBoolean', 'YulDecimalNumber',
        'YulFunctionCall', 'YulHexNumber', 'YulPath', 'YulStringLiteral']]

class YulBlock(TreeSitterNode):
    field_names = []
    children: Optional[List[Union['YulAssignment', 'YulBlock', 'YulBoolean',
        'YulBreak', 'YulContinue', 'YulDecimalNumber', 'YulForStatement',
        'YulFunctionCall', 'YulFunctionDefinition', 'YulHexNumber',
        'YulIfStatement', 'YulLabel', 'YulLeave', 'YulStringLiteral',
        'YulSwitchStatement', 'YulVariableDeclaration']]]

class YulBoolean(TreeSitterNode):
    field_names = []
    children: None

class YulBreak(TreeSitterNode):
    field_names = []
    children: None

class YulContinue(TreeSitterNode):
    field_names = []
    children: None

class YulEvmBuiltin(TreeSitterNode):
    field_names = []
    children: None

class YulForStatement(TreeSitterNode):
    field_names = []
    children: List[Union['YulBlock', 'YulBoolean', 'YulDecimalNumber',
        'YulFunctionCall', 'YulHexNumber', 'YulPath', 'YulStringLiteral']]

class YulFunctionCall(TreeSitterNode):
    field_names = ['function']
    function: Union['YulEvmBuiltin', 'YulIdentifier']
    children: Optional[List[Union['YulBoolean', 'YulDecimalNumber',
        'YulFunctionCall', 'YulHexNumber', 'YulPath', 'YulStringLiteral']]]

class YulFunctionDefinition(TreeSitterNode):
    field_names = []
    children: List[Union['YulBlock', 'YulIdentifier']]

class YulIdentifier(TreeSitterNode):
    field_names = []
    children: 'Identifier'

class YulIfStatement(TreeSitterNode):
    field_names = []
    children: List[Union['YulBlock', 'YulBoolean', 'YulDecimalNumber',
        'YulFunctionCall', 'YulHexNumber', 'YulPath', 'YulStringLiteral']]

class YulLabel(TreeSitterNode):
    field_names = []
    children: 'Identifier'

class YulPath(TreeSitterNode):
    field_names = []
    children: List['YulIdentifier']

class YulStringLiteral(TreeSitterNode):
    field_names = []
    children: 'String'

class YulSwitchStatement(TreeSitterNode):
    field_names = []
    children: List[Union['YulBlock', 'YulBoolean', 'YulDecimalNumber',
        'YulFunctionCall', 'YulHexNumber', 'YulPath', 'YulStringLiteral']]

class YulVariableDeclaration(TreeSitterNode):
    field_names = ['left', 'right']
    left: List[Union['str', 'str', 'str', 'YulIdentifier']]
    right: Optional[Union['YulBoolean', 'YulDecimalNumber',
        'YulFunctionCall', 'YulHexNumber', 'YulPath', 'YulStringLiteral']]
    children: None

class Comment(TreeSitterNode):
    field_names = []
    children: None

class EnumValue(TreeSitterNode):
    field_names = []
    children: None

class Identifier(TreeSitterNode):
    field_names = []
    children: None

class Immutable(TreeSitterNode):
    field_names = []
    children: None

class SolidityVersion(TreeSitterNode):
    field_names = []
    children: None

class Virtual(TreeSitterNode):
    field_names = []
    children: None

class YulDecimalNumber(TreeSitterNode):
    field_names = []
    children: None

class YulHexNumber(TreeSitterNode):
    field_names = []
    children: None

class YulLeave(TreeSitterNode):
    field_names = []
    children: None

type_name_to_class = {'any_pragma_token': AnyPragmaToken, 'any_source_type':
    AnySourceType, 'array_access': ArrayAccess, 'assembly_statement':
    AssemblyStatement, 'assignment_expression': AssignmentExpression,
    'augmented_assignment_expression': AugmentedAssignmentExpression,
    'binary_expression': BinaryExpression, 'block_statement':
    BlockStatement, 'boolean_literal': BooleanLiteral, 'break_statement':
    BreakStatement, 'call_argument': CallArgument, 'call_expression':
    CallExpression, 'call_struct_argument': CallStructArgument,
    'catch_clause': CatchClause, 'constant_variable_declaration':
    ConstantVariableDeclaration, 'constructor_definition':
    ConstructorDefinition, 'continue_statement': ContinueStatement,
    'contract_body': ContractBody, 'contract_declaration':
    ContractDeclaration, 'do_while_statement': DoWhileStatement,
    'emit_statement': EmitStatement, 'enum_declaration': EnumDeclaration,
    'error_declaration': ErrorDeclaration, 'error_parameter':
    ErrorParameter, 'event_definition': EventDefinition, 'event_paramater':
    EventParamater, 'expression_statement': ExpressionStatement,
    'fallback_receive_definition': FallbackReceiveDefinition, 'false':
    False, 'for_statement': ForStatement, 'function_body': FunctionBody,
    'function_definition': FunctionDefinition, 'hex_string_literal':
    HexStringLiteral, 'if_statement': IfStatement, 'import_directive':
    ImportDirective, 'inheritance_specifier': InheritanceSpecifier,
    'inline_array_expression': InlineArrayExpression,
    'interface_declaration': InterfaceDeclaration, 'library_declaration':
    LibraryDeclaration, 'member_expression': MemberExpression,
    'meta_type_expression': MetaTypeExpression, 'modifier_definition':
    ModifierDefinition, 'modifier_invocation': ModifierInvocation,
    'new_expression': NewExpression, 'number_literal': NumberLiteral,
    'number_unit': NumberUnit, 'override_specifier': OverrideSpecifier,
    'parameter': Parameter, 'parenthesized_expression':
    ParenthesizedExpression, 'payable_conversion_expression':
    PayableConversionExpression, 'pragma_directive': PragmaDirective,
    'pragma_value': PragmaValue, 'primitive_type': PrimitiveType,
    'return_parameter': ReturnParameter, 'return_statement':
    ReturnStatement, 'return_type_definition': ReturnTypeDefinition,
    'revert_arguments': RevertArguments, 'revert_statement':
    RevertStatement, 'slice_access': SliceAccess, 'solidity_pragma_token':
    SolidityPragmaToken, 'solidity_version_comparison_operator':
    SolidityVersionComparisonOperator, 'source_file': SourceFile,
    'state_mutability': StateMutability, 'state_variable_declaration':
    StateVariableDeclaration, 'string': String, 'string_literal':
    StringLiteral, 'struct_declaration': StructDeclaration,
    'struct_expression': StructExpression, 'struct_field_assignment':
    StructFieldAssignment, 'struct_member': StructMember,
    'ternary_expression': TernaryExpression, 'true': True, 'try_statement':
    TryStatement, 'tuple_expression': TupleExpression, 'type_alias':
    TypeAlias, 'type_cast_expression': TypeCastExpression, 'type_name':
    TypeName, 'unary_expression': UnaryExpression, 'unicode_string_literal':
    UnicodeStringLiteral, 'update_expression': UpdateExpression,
    'user_defined_type': UserDefinedType, 'user_defined_type_definition':
    UserDefinedTypeDefinition, 'using_directive': UsingDirective,
    'variable_declaration': VariableDeclaration,
    'variable_declaration_statement': VariableDeclarationStatement,
    'variable_declaration_tuple': VariableDeclarationTuple, 'visibility':
    Visibility, 'while_statement': WhileStatement, 'yul_assignment':
    YulAssignment, 'yul_block': YulBlock, 'yul_boolean': YulBoolean,
    'yul_break': YulBreak, 'yul_continue': YulContinue, 'yul_evm_builtin':
    YulEvmBuiltin, 'yul_for_statement': YulForStatement,
    'yul_function_call': YulFunctionCall, 'yul_function_definition':
    YulFunctionDefinition, 'yul_identifier': YulIdentifier,
    'yul_if_statement': YulIfStatement, 'yul_label': YulLabel, 'yul_path':
    YulPath, 'yul_string_literal': YulStringLiteral, 'yul_switch_statement':
    YulSwitchStatement, 'yul_variable_declaration': YulVariableDeclaration,
    'comment': Comment, 'enum_value': EnumValue, 'identifier': Identifier,
    'immutable': Immutable, 'solidity_version': SolidityVersion, 'virtual':
    Virtual, 'yul_decimal_number': YulDecimalNumber, 'yul_hex_number':
    YulHexNumber, 'yul_leave': YulLeave}
