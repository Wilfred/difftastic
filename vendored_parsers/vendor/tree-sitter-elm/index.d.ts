export interface Parser {
  parse(input: string | Input, previousTree?: Tree, options?: {bufferSize?: number, includedRanges?: Range[]}): Tree;
  getLanguage(): any;
  setLanguage(language: any): void;
  getLogger(): Logger;
  setLogger(logFunc: Logger): void;
}

export type Point = {
  row: number;
  column: number;
};

export type Range = {
  startIndex: number,
  endIndex: number,
  startPosition: Point,
  endPosition: Point
};

export type Edit = {
  startIndex: number;
  oldEndIndex: number;
  newEndIndex: number;
  startPosition: Point;
  oldEndPosition: Point;
  newEndPosition: Point;
};

export type Logger = (
  message: string,
  params: {[param: string]: string},
  type: "parse" | "lex"
) => void;

export interface Input {
  seek(index: number): void;
  read(): any;
}

interface SyntaxNodeBase {
  tree: Tree;
  type: string;
  isNamed: boolean;
  text: string;
  startPosition: Point;
  endPosition: Point;
  startIndex: number;
  endIndex: number;
  parent: SyntaxNode | null;
  children: Array<SyntaxNode>;
  namedChildren: Array<SyntaxNode>;
  childCount: number;
  namedChildCount: number;
  firstChild: SyntaxNode | null;
  firstNamedChild: SyntaxNode | null;
  lastChild: SyntaxNode | null;
  lastNamedChild: SyntaxNode | null;
  nextSibling: SyntaxNode | null;
  nextNamedSibling: SyntaxNode | null;
  previousSibling: SyntaxNode | null;
  previousNamedSibling: SyntaxNode | null;

  hasChanges(): boolean;
  hasError(): boolean;
  isMissing(): boolean;
  toString(): string;
  child(index: number): SyntaxNode | null;
  namedChild(index: number): SyntaxNode | null;
  firstChildForIndex(index: number): SyntaxNode | null;
  firstNamedChildForIndex(index: number): SyntaxNode | null;

  descendantForIndex(index: number): SyntaxNode;
  descendantForIndex(startIndex: number, endIndex: number): SyntaxNode;
  namedDescendantForIndex(index: number): SyntaxNode;
  namedDescendantForIndex(startIndex: number, endIndex: number): SyntaxNode;
  descendantForPosition(position: Point): SyntaxNode;
  descendantForPosition(startPosition: Point, endPosition: Point): SyntaxNode;
  namedDescendantForPosition(position: Point): SyntaxNode;
  namedDescendantForPosition(startPosition: Point, endPosition: Point): SyntaxNode;
  descendantsOfType<T extends TypeString>(types: T | readonly T[], startPosition?: Point, endPosition?: Point): NodeOfType<T>[];

  closest<T extends SyntaxType>(types: T | readonly T[]): NamedNode<T> | null;
  walk(): TreeCursor;
}

export interface TreeCursor {
  nodeType: string;
  nodeText: string;
  nodeIsNamed: boolean;
  startPosition: Point;
  endPosition: Point;
  startIndex: number;
  endIndex: number;
  readonly currentNode: SyntaxNode

  reset(node: SyntaxNode): void
  gotoParent(): boolean;
  gotoFirstChild(): boolean;
  gotoFirstChildForIndex(index: number): boolean;
  gotoNextSibling(): boolean;
}

export interface Tree {
  readonly rootNode: SyntaxNode;

  edit(delta: Edit): Tree;
  walk(): TreeCursor;
  getChangedRanges(other: Tree): Range[];
  getEditedRange(other: Tree): Range;
}

interface NamedNodeBase extends SyntaxNodeBase {
    isNamed: true;
}

/** An unnamed node with the given type string. */
export interface UnnamedNode<T extends string = string> extends SyntaxNodeBase {
  type: T;
  isNamed: false;
}

type PickNamedType<Node, T extends string> = Node extends { type: T; isNamed: true } ? Node : never;

type PickType<Node, T extends string> = Node extends { type: T } ? Node : never;

/** A named node with the given `type` string. */
export type NamedNode<T extends SyntaxType = SyntaxType> = PickNamedType<SyntaxNode, T>;

/**
 * A node with the given `type` string.
 *
 * Note that this matches both named and unnamed nodes. Use `NamedNode<T>` to pick only named nodes.
 */
export type NodeOfType<T extends string> = PickType<SyntaxNode, T>;

interface TreeCursorOfType<S extends string, T extends SyntaxNodeBase> {
  nodeType: S;
  currentNode: T;
}

type TreeCursorRecord = { [K in TypeString]: TreeCursorOfType<K, NodeOfType<K>> };

/**
 * A tree cursor whose `nodeType` correlates with `currentNode`.
 *
 * The typing becomes invalid once the underlying cursor is mutated.
 *
 * The intention is to cast a `TreeCursor` to `TypedTreeCursor` before
 * switching on `nodeType`.
 *
 * For example:
 * ```ts
 * let cursor = root.walk();
 * while (cursor.gotoNextSibling()) {
 *   const c = cursor as TypedTreeCursor;
 *   switch (c.nodeType) {
 *     case SyntaxType.Foo: {
 *       let node = c.currentNode; // Typed as FooNode.
 *       break;
 *     }
 *   }
 * }
 * ```
 */
export type TypedTreeCursor = TreeCursorRecord[keyof TreeCursorRecord];

export interface ErrorNode extends NamedNodeBase {
    type: SyntaxType.ERROR;
    hasError(): true;
}

export const enum SyntaxType {
  ERROR = "ERROR",
  AnonymousFunctionExpr = "anonymous_function_expr",
  AnythingPattern = "anything_pattern",
  AsClause = "as_clause",
  BinOpExpr = "bin_op_expr",
  BlockComment = "block_comment",
  CaseOfBranch = "case_of_branch",
  CaseOfExpr = "case_of_expr",
  CharConstantExpr = "char_constant_expr",
  ConsPattern = "cons_pattern",
  ExposedOperator = "exposed_operator",
  ExposedType = "exposed_type",
  ExposedUnionConstructors = "exposed_union_constructors",
  ExposedValue = "exposed_value",
  ExposingList = "exposing_list",
  Field = "field",
  FieldAccessExpr = "field_access_expr",
  FieldAccessorFunctionExpr = "field_accessor_function_expr",
  FieldType = "field_type",
  File = "file",
  FunctionCallExpr = "function_call_expr",
  FunctionDeclarationLeft = "function_declaration_left",
  GlslCodeExpr = "glsl_code_expr",
  IfElseExpr = "if_else_expr",
  ImportClause = "import_clause",
  InfixDeclaration = "infix_declaration",
  LetInExpr = "let_in_expr",
  ListExpr = "list_expr",
  ListPattern = "list_pattern",
  LowerPattern = "lower_pattern",
  LowerTypeName = "lower_type_name",
  ModuleDeclaration = "module_declaration",
  NegateExpr = "negate_expr",
  NullaryConstructorArgumentPattern = "nullary_constructor_argument_pattern",
  NumberConstantExpr = "number_constant_expr",
  Operator = "operator",
  OperatorAsFunctionExpr = "operator_as_function_expr",
  OperatorIdentifier = "operator_identifier",
  ParenthesizedExpr = "parenthesized_expr",
  Pattern = "pattern",
  PortAnnotation = "port_annotation",
  RecordBaseIdentifier = "record_base_identifier",
  RecordExpr = "record_expr",
  RecordPattern = "record_pattern",
  RecordType = "record_type",
  StringConstantExpr = "string_constant_expr",
  TupleExpr = "tuple_expr",
  TuplePattern = "tuple_pattern",
  TupleType = "tuple_type",
  TypeAliasDeclaration = "type_alias_declaration",
  TypeAnnotation = "type_annotation",
  TypeDeclaration = "type_declaration",
  TypeExpression = "type_expression",
  TypeRef = "type_ref",
  TypeVariable = "type_variable",
  UnionPattern = "union_pattern",
  UnionVariant = "union_variant",
  UnitExpr = "unit_expr",
  UpperCaseQid = "upper_case_qid",
  ValueDeclaration = "value_declaration",
  ValueExpr = "value_expr",
  ValueQid = "value_qid",
  Alias = "alias",
  Arrow = "arrow",
  As = "as",
  Backslash = "backslash",
  Case = "case",
  CloseChar = "close_char",
  CloseQuote = "close_quote",
  Colon = "colon",
  Dot = "dot",
  DoubleDot = "double_dot",
  Effect = "effect",
  Eq = "eq",
  Exposing = "exposing",
  GlslContent = "glsl_content",
  Import = "import",
  Infix = "infix",
  InvalidStringEscape = "invalid_string_escape",
  LineComment = "line_comment",
  LowerCaseIdentifier = "lower_case_identifier",
  Module = "module",
  NumberLiteral = "number_literal",
  Of = "of",
  OpenChar = "open_char",
  OpenQuote = "open_quote",
  Port = "port",
  RegularStringPart = "regular_string_part",
  StringEscape = "string_escape",
  Type = "type",
  Underscore = "underscore",
  UpperCaseIdentifier = "upper_case_identifier",
  Where = "where",
}

export type UnnamedType =
  | "&&"
  | "("
  | ")"
  | "*"
  | "+"
  | "++"
  | ","
  | "-"
  | "-}"
  | "/"
  | "//"
  | "/="
  | "::"
  | "<"
  | "</>"
  | "<<"
  | "<="
  | "<?>"
  | "<|"
  | "=="
  | ">"
  | ">="
  | ">>"
  | "["
  | "]"
  | "^"
  | "else"
  | "if"
  | "in"
  | "let"
  | "then"
  | "{"
  | "{-"
  | "|"
  | "|."
  | "|="
  | "|>"
  | "||"
  | "}"
  ;

export type TypeString = SyntaxType | UnnamedType;

export type SyntaxNode = 
  | AnonymousFunctionExprNode
  | AnythingPatternNode
  | AsClauseNode
  | BinOpExprNode
  | BlockCommentNode
  | CaseOfBranchNode
  | CaseOfExprNode
  | CharConstantExprNode
  | ConsPatternNode
  | ExposedOperatorNode
  | ExposedTypeNode
  | ExposedUnionConstructorsNode
  | ExposedValueNode
  | ExposingListNode
  | FieldNode
  | FieldAccessExprNode
  | FieldAccessorFunctionExprNode
  | FieldTypeNode
  | FileNode
  | FunctionCallExprNode
  | FunctionDeclarationLeftNode
  | GlslCodeExprNode
  | IfElseExprNode
  | ImportClauseNode
  | InfixDeclarationNode
  | LetInExprNode
  | ListExprNode
  | ListPatternNode
  | LowerPatternNode
  | LowerTypeNameNode
  | ModuleDeclarationNode
  | NegateExprNode
  | NullaryConstructorArgumentPatternNode
  | NumberConstantExprNode
  | OperatorNode
  | OperatorAsFunctionExprNode
  | OperatorIdentifierNode
  | ParenthesizedExprNode
  | PatternNode
  | PortAnnotationNode
  | RecordBaseIdentifierNode
  | RecordExprNode
  | RecordPatternNode
  | RecordTypeNode
  | StringConstantExprNode
  | TupleExprNode
  | TuplePatternNode
  | TupleTypeNode
  | TypeAliasDeclarationNode
  | TypeAnnotationNode
  | TypeDeclarationNode
  | TypeExpressionNode
  | TypeRefNode
  | TypeVariableNode
  | UnionPatternNode
  | UnionVariantNode
  | UnitExprNode
  | UpperCaseQidNode
  | ValueDeclarationNode
  | ValueExprNode
  | ValueQidNode
  | UnnamedNode<"&&">
  | UnnamedNode<"(">
  | UnnamedNode<")">
  | UnnamedNode<"*">
  | UnnamedNode<"+">
  | UnnamedNode<"++">
  | UnnamedNode<",">
  | UnnamedNode<"-">
  | UnnamedNode<"-}">
  | UnnamedNode<"/">
  | UnnamedNode<"//">
  | UnnamedNode<"/=">
  | UnnamedNode<"::">
  | UnnamedNode<"<">
  | UnnamedNode<"</>">
  | UnnamedNode<"<<">
  | UnnamedNode<"<=">
  | UnnamedNode<"<?>">
  | UnnamedNode<"<|">
  | UnnamedNode<"==">
  | UnnamedNode<">">
  | UnnamedNode<">=">
  | UnnamedNode<">>">
  | UnnamedNode<"[">
  | UnnamedNode<"]">
  | UnnamedNode<"^">
  | AliasNode
  | ArrowNode
  | AsNode
  | BackslashNode
  | CaseNode
  | CloseCharNode
  | CloseQuoteNode
  | ColonNode
  | DotNode
  | DoubleDotNode
  | EffectNode
  | UnnamedNode<"else">
  | EqNode
  | ExposingNode
  | GlslContentNode
  | UnnamedNode<"if">
  | ImportNode
  | UnnamedNode<"in">
  | InfixNode
  | InvalidStringEscapeNode
  | UnnamedNode<"let">
  | LineCommentNode
  | LowerCaseIdentifierNode
  | ModuleNode
  | NumberLiteralNode
  | OfNode
  | OpenCharNode
  | OpenQuoteNode
  | PortNode
  | RegularStringPartNode
  | StringEscapeNode
  | UnnamedNode<"then">
  | TypeNode
  | UnderscoreNode
  | UpperCaseIdentifierNode
  | WhereNode
  | UnnamedNode<"{">
  | UnnamedNode<"{-">
  | UnnamedNode<"|">
  | UnnamedNode<"|.">
  | UnnamedNode<"|=">
  | UnnamedNode<"|>">
  | UnnamedNode<"||">
  | UnnamedNode<"}">
  | ErrorNode
  ;

export interface AnonymousFunctionExprNode extends NamedNodeBase {
  type: SyntaxType.AnonymousFunctionExpr;
  exprNode: AnonymousFunctionExprNode | BinOpExprNode | CaseOfExprNode | CharConstantExprNode | FieldAccessExprNode | FieldAccessorFunctionExprNode | FunctionCallExprNode | GlslCodeExprNode | IfElseExprNode | LetInExprNode | ListExprNode | NegateExprNode | NumberConstantExprNode | OperatorAsFunctionExprNode | ParenthesizedExprNode | RecordExprNode | StringConstantExprNode | TupleExprNode | UnitExprNode | ValueExprNode;
  paramNodes: PatternNode[];
}

export interface AnythingPatternNode extends NamedNodeBase {
  type: SyntaxType.AnythingPattern;
}

export interface AsClauseNode extends NamedNodeBase {
  type: SyntaxType.AsClause;
  nameNode: UpperCaseIdentifierNode;
}

export interface BinOpExprNode extends NamedNodeBase {
  type: SyntaxType.BinOpExpr;
  partNodes: (AnonymousFunctionExprNode | CaseOfExprNode | CharConstantExprNode | FieldAccessExprNode | FieldAccessorFunctionExprNode | FunctionCallExprNode | GlslCodeExprNode | IfElseExprNode | LetInExprNode | ListExprNode | NegateExprNode | NumberConstantExprNode | OperatorNode | OperatorAsFunctionExprNode | ParenthesizedExprNode | RecordExprNode | StringConstantExprNode | TupleExprNode | UnitExprNode | ValueExprNode)[];
}

export interface BlockCommentNode extends NamedNodeBase {
  type: SyntaxType.BlockComment;
}

export interface CaseOfBranchNode extends NamedNodeBase {
  type: SyntaxType.CaseOfBranch;
  exprNode: AnonymousFunctionExprNode | BinOpExprNode | CaseOfExprNode | CharConstantExprNode | FieldAccessExprNode | FieldAccessorFunctionExprNode | FunctionCallExprNode | GlslCodeExprNode | IfElseExprNode | LetInExprNode | ListExprNode | NegateExprNode | NumberConstantExprNode | OperatorAsFunctionExprNode | ParenthesizedExprNode | RecordExprNode | StringConstantExprNode | TupleExprNode | UnitExprNode | ValueExprNode;
  patternNode: PatternNode;
}

export interface CaseOfExprNode extends NamedNodeBase {
  type: SyntaxType.CaseOfExpr;
  branchNodes: CaseOfBranchNode[];
  exprNode: AnonymousFunctionExprNode | BinOpExprNode | CaseOfExprNode | CharConstantExprNode | FieldAccessExprNode | FieldAccessorFunctionExprNode | FunctionCallExprNode | GlslCodeExprNode | IfElseExprNode | LetInExprNode | ListExprNode | NegateExprNode | NumberConstantExprNode | OperatorAsFunctionExprNode | ParenthesizedExprNode | RecordExprNode | StringConstantExprNode | TupleExprNode | UnitExprNode | ValueExprNode;
}

export interface CharConstantExprNode extends NamedNodeBase {
  type: SyntaxType.CharConstantExpr;
}

export interface ConsPatternNode extends NamedNodeBase {
  type: SyntaxType.ConsPattern;
  partNodes: (UnnamedNode<"("> | UnnamedNode<")"> | AnythingPatternNode | CharConstantExprNode | ConsPatternNode | ListPatternNode | LowerPatternNode | NumberConstantExprNode | PatternNode | RecordPatternNode | StringConstantExprNode | TuplePatternNode | UnionPatternNode | UnitExprNode)[];
}

export interface ExposedOperatorNode extends NamedNodeBase {
  type: SyntaxType.ExposedOperator;
  operatorNode: OperatorIdentifierNode;
}

export interface ExposedTypeNode extends NamedNodeBase {
  type: SyntaxType.ExposedType;
}

export interface ExposedUnionConstructorsNode extends NamedNodeBase {
  type: SyntaxType.ExposedUnionConstructors;
}

export interface ExposedValueNode extends NamedNodeBase {
  type: SyntaxType.ExposedValue;
}

export interface ExposingListNode extends NamedNodeBase {
  type: SyntaxType.ExposingList;
  doubleDotNode?: DoubleDotNode;
}

export interface FieldNode extends NamedNodeBase {
  type: SyntaxType.Field;
  expressionNode: AnonymousFunctionExprNode | BinOpExprNode | CaseOfExprNode | CharConstantExprNode | FieldAccessExprNode | FieldAccessorFunctionExprNode | FunctionCallExprNode | GlslCodeExprNode | IfElseExprNode | LetInExprNode | ListExprNode | NegateExprNode | NumberConstantExprNode | OperatorAsFunctionExprNode | ParenthesizedExprNode | RecordExprNode | StringConstantExprNode | TupleExprNode | UnitExprNode | ValueExprNode;
  nameNode: LowerCaseIdentifierNode;
}

export interface FieldAccessExprNode extends NamedNodeBase {
  type: SyntaxType.FieldAccessExpr;
  targetNode: FieldAccessExprNode | ParenthesizedExprNode | RecordExprNode | ValueExprNode;
}

export interface FieldAccessorFunctionExprNode extends NamedNodeBase {
  type: SyntaxType.FieldAccessorFunctionExpr;
}

export interface FieldTypeNode extends NamedNodeBase {
  type: SyntaxType.FieldType;
  nameNode: LowerCaseIdentifierNode;
  typeExpressionNode: TypeExpressionNode;
}

export interface FileNode extends NamedNodeBase {
  type: SyntaxType.File;
  moduleDeclarationNode?: ModuleDeclarationNode;
}

export interface FunctionCallExprNode extends NamedNodeBase {
  type: SyntaxType.FunctionCallExpr;
  argNodes: (AnonymousFunctionExprNode | CaseOfExprNode | CharConstantExprNode | FieldAccessExprNode | FieldAccessorFunctionExprNode | GlslCodeExprNode | IfElseExprNode | LetInExprNode | ListExprNode | NegateExprNode | NumberConstantExprNode | OperatorAsFunctionExprNode | ParenthesizedExprNode | RecordExprNode | StringConstantExprNode | TupleExprNode | UnitExprNode | ValueExprNode)[];
  targetNode: FieldAccessExprNode | FieldAccessorFunctionExprNode | OperatorAsFunctionExprNode | ParenthesizedExprNode | ValueExprNode;
}

export interface FunctionDeclarationLeftNode extends NamedNodeBase {
  type: SyntaxType.FunctionDeclarationLeft;
  patternNodes: (UnnamedNode<"("> | UnnamedNode<")"> | AnythingPatternNode | CharConstantExprNode | ListPatternNode | LowerPatternNode | NumberConstantExprNode | PatternNode | RecordPatternNode | StringConstantExprNode | TuplePatternNode | UnitExprNode)[];
}

export interface GlslCodeExprNode extends NamedNodeBase {
  type: SyntaxType.GlslCodeExpr;
  contentNode: GlslContentNode;
}

export interface IfElseExprNode extends NamedNodeBase {
  type: SyntaxType.IfElseExpr;
  exprListNodes: (AnonymousFunctionExprNode | BinOpExprNode | CaseOfExprNode | CharConstantExprNode | FieldAccessExprNode | FieldAccessorFunctionExprNode | FunctionCallExprNode | GlslCodeExprNode | IfElseExprNode | LetInExprNode | ListExprNode | NegateExprNode | NumberConstantExprNode | OperatorAsFunctionExprNode | ParenthesizedExprNode | RecordExprNode | StringConstantExprNode | TupleExprNode | UnitExprNode | ValueExprNode)[];
}

export interface ImportClauseNode extends NamedNodeBase {
  type: SyntaxType.ImportClause;
  asClauseNode?: AsClauseNode;
  exposingNode?: ExposingListNode;
  moduleNameNode: UpperCaseQidNode;
}

export interface InfixDeclarationNode extends NamedNodeBase {
  type: SyntaxType.InfixDeclaration;
  associativityNode: LowerCaseIdentifierNode;
  operatorNode: OperatorIdentifierNode;
  precedenceNode: NumberLiteralNode;
}

export interface LetInExprNode extends NamedNodeBase {
  type: SyntaxType.LetInExpr;
  bodyNode: AnonymousFunctionExprNode | BinOpExprNode | CaseOfExprNode | CharConstantExprNode | FieldAccessExprNode | FieldAccessorFunctionExprNode | FunctionCallExprNode | GlslCodeExprNode | IfElseExprNode | LetInExprNode | ListExprNode | NegateExprNode | NumberConstantExprNode | OperatorAsFunctionExprNode | ParenthesizedExprNode | RecordExprNode | StringConstantExprNode | TupleExprNode | UnitExprNode | ValueExprNode;
  valueDeclarationNodes: ValueDeclarationNode[];
}

export interface ListExprNode extends NamedNodeBase {
  type: SyntaxType.ListExpr;
  exprListNodes: (AnonymousFunctionExprNode | BinOpExprNode | CaseOfExprNode | CharConstantExprNode | FieldAccessExprNode | FieldAccessorFunctionExprNode | FunctionCallExprNode | GlslCodeExprNode | IfElseExprNode | LetInExprNode | ListExprNode | NegateExprNode | NumberConstantExprNode | OperatorAsFunctionExprNode | ParenthesizedExprNode | RecordExprNode | StringConstantExprNode | TupleExprNode | UnitExprNode | ValueExprNode)[];
}

export interface ListPatternNode extends NamedNodeBase {
  type: SyntaxType.ListPattern;
  partNodes: PatternNode[];
}

export interface LowerPatternNode extends NamedNodeBase {
  type: SyntaxType.LowerPattern;
}

export interface LowerTypeNameNode extends NamedNodeBase {
  type: SyntaxType.LowerTypeName;
}

export interface ModuleDeclarationNode extends NamedNodeBase {
  type: SyntaxType.ModuleDeclaration;
  exposingNode: ExposingListNode;
  nameNode: UpperCaseQidNode;
}

export interface NegateExprNode extends NamedNodeBase {
  type: SyntaxType.NegateExpr;
}

export interface NullaryConstructorArgumentPatternNode extends NamedNodeBase {
  type: SyntaxType.NullaryConstructorArgumentPattern;
}

export interface NumberConstantExprNode extends NamedNodeBase {
  type: SyntaxType.NumberConstantExpr;
}

export interface OperatorNode extends NamedNodeBase {
  type: SyntaxType.Operator;
}

export interface OperatorAsFunctionExprNode extends NamedNodeBase {
  type: SyntaxType.OperatorAsFunctionExpr;
  operatorNode: OperatorIdentifierNode;
}

export interface OperatorIdentifierNode extends NamedNodeBase {
  type: SyntaxType.OperatorIdentifier;
}

export interface ParenthesizedExprNode extends NamedNodeBase {
  type: SyntaxType.ParenthesizedExpr;
  expressionNode: AnonymousFunctionExprNode | BinOpExprNode | CaseOfExprNode | CharConstantExprNode | FieldAccessExprNode | FieldAccessorFunctionExprNode | FunctionCallExprNode | GlslCodeExprNode | IfElseExprNode | LetInExprNode | ListExprNode | NegateExprNode | NumberConstantExprNode | OperatorAsFunctionExprNode | ParenthesizedExprNode | RecordExprNode | StringConstantExprNode | TupleExprNode | UnitExprNode | ValueExprNode;
}

export interface PatternNode extends NamedNodeBase {
  type: SyntaxType.Pattern;
  childNode: AnythingPatternNode | CharConstantExprNode | ConsPatternNode | ListPatternNode | LowerPatternNode | NumberConstantExprNode | PatternNode | RecordPatternNode | StringConstantExprNode | TuplePatternNode | UnionPatternNode | UnitExprNode;
  patternAsNode?: LowerPatternNode;
}

export interface PortAnnotationNode extends NamedNodeBase {
  type: SyntaxType.PortAnnotation;
  nameNode: LowerCaseIdentifierNode;
  typeExpressionNode: TypeExpressionNode;
}

export interface RecordBaseIdentifierNode extends NamedNodeBase {
  type: SyntaxType.RecordBaseIdentifier;
}

export interface RecordExprNode extends NamedNodeBase {
  type: SyntaxType.RecordExpr;
  baseRecordNode?: RecordBaseIdentifierNode;
  fieldNodes: FieldNode[];
}

export interface RecordPatternNode extends NamedNodeBase {
  type: SyntaxType.RecordPattern;
  patternListNodes: LowerPatternNode[];
}

export interface RecordTypeNode extends NamedNodeBase {
  type: SyntaxType.RecordType;
  baseRecordNode?: RecordBaseIdentifierNode;
  fieldTypeNodes: FieldTypeNode[];
}

export interface StringConstantExprNode extends NamedNodeBase {
  type: SyntaxType.StringConstantExpr;
}

export interface TupleExprNode extends NamedNodeBase {
  type: SyntaxType.TupleExpr;
  exprNodes: (AnonymousFunctionExprNode | BinOpExprNode | CaseOfExprNode | CharConstantExprNode | FieldAccessExprNode | FieldAccessorFunctionExprNode | FunctionCallExprNode | GlslCodeExprNode | IfElseExprNode | LetInExprNode | ListExprNode | NegateExprNode | NumberConstantExprNode | OperatorAsFunctionExprNode | ParenthesizedExprNode | RecordExprNode | StringConstantExprNode | TupleExprNode | UnitExprNode | ValueExprNode)[];
}

export interface TuplePatternNode extends NamedNodeBase {
  type: SyntaxType.TuplePattern;
  patternNodes: PatternNode[];
}

export interface TupleTypeNode extends NamedNodeBase {
  type: SyntaxType.TupleType;
  typeExpressionNodes: TypeExpressionNode[];
  unitExprNode?: UnitExprNode;
}

export interface TypeAliasDeclarationNode extends NamedNodeBase {
  type: SyntaxType.TypeAliasDeclaration;
  nameNode: UpperCaseIdentifierNode;
  typeExpressionNode: TypeExpressionNode;
  typeVariableNodes: LowerTypeNameNode[];
}

export interface TypeAnnotationNode extends NamedNodeBase {
  type: SyntaxType.TypeAnnotation;
  nameNode: LowerCaseIdentifierNode;
  typeExpressionNode: TypeExpressionNode;
}

export interface TypeDeclarationNode extends NamedNodeBase {
  type: SyntaxType.TypeDeclaration;
  nameNode: UpperCaseIdentifierNode;
  typeNameNodes: LowerTypeNameNode[];
  unionVariantNodes: UnionVariantNode[];
}

export interface TypeExpressionNode extends NamedNodeBase {
  type: SyntaxType.TypeExpression;
  partNodes: (RecordTypeNode | TupleTypeNode | TypeExpressionNode | TypeRefNode | TypeVariableNode)[];
}

export interface TypeRefNode extends NamedNodeBase {
  type: SyntaxType.TypeRef;
  partNodes: (RecordTypeNode | TupleTypeNode | TypeExpressionNode | TypeRefNode | TypeVariableNode)[];
}

export interface TypeVariableNode extends NamedNodeBase {
  type: SyntaxType.TypeVariable;
}

export interface UnionPatternNode extends NamedNodeBase {
  type: SyntaxType.UnionPattern;
  argPatternNodes: (UnnamedNode<"("> | UnnamedNode<")"> | AnythingPatternNode | CharConstantExprNode | ListPatternNode | LowerPatternNode | NullaryConstructorArgumentPatternNode | NumberConstantExprNode | PatternNode | RecordPatternNode | StringConstantExprNode | TuplePatternNode | UnitExprNode)[];
  constructorNode: UpperCaseQidNode;
}

export interface UnionVariantNode extends NamedNodeBase {
  type: SyntaxType.UnionVariant;
  nameNode: UpperCaseIdentifierNode;
  partNodes: (RecordTypeNode | TupleTypeNode | TypeExpressionNode | TypeRefNode | TypeVariableNode)[];
}

export interface UnitExprNode extends NamedNodeBase {
  type: SyntaxType.UnitExpr;
}

export interface UpperCaseQidNode extends NamedNodeBase {
  type: SyntaxType.UpperCaseQid;
}

export interface ValueDeclarationNode extends NamedNodeBase {
  type: SyntaxType.ValueDeclaration;
  bodyNode: AnonymousFunctionExprNode | BinOpExprNode | CaseOfExprNode | CharConstantExprNode | FieldAccessExprNode | FieldAccessorFunctionExprNode | FunctionCallExprNode | GlslCodeExprNode | IfElseExprNode | LetInExprNode | ListExprNode | NegateExprNode | NumberConstantExprNode | OperatorAsFunctionExprNode | ParenthesizedExprNode | RecordExprNode | StringConstantExprNode | TupleExprNode | UnitExprNode | ValueExprNode;
  functionDeclarationLeftNode?: FunctionDeclarationLeftNode;
  patternNode?: PatternNode;
}

export interface ValueExprNode extends NamedNodeBase {
  type: SyntaxType.ValueExpr;
  nameNode: UpperCaseQidNode | ValueQidNode;
}

export interface ValueQidNode extends NamedNodeBase {
  type: SyntaxType.ValueQid;
}

export interface AliasNode extends NamedNodeBase {
  type: SyntaxType.Alias;
}

export interface ArrowNode extends NamedNodeBase {
  type: SyntaxType.Arrow;
}

export interface AsNode extends NamedNodeBase {
  type: SyntaxType.As;
}

export interface BackslashNode extends NamedNodeBase {
  type: SyntaxType.Backslash;
}

export interface CaseNode extends NamedNodeBase {
  type: SyntaxType.Case;
}

export interface CloseCharNode extends NamedNodeBase {
  type: SyntaxType.CloseChar;
}

export interface CloseQuoteNode extends NamedNodeBase {
  type: SyntaxType.CloseQuote;
}

export interface ColonNode extends NamedNodeBase {
  type: SyntaxType.Colon;
}

export interface DotNode extends NamedNodeBase {
  type: SyntaxType.Dot;
}

export interface DoubleDotNode extends NamedNodeBase {
  type: SyntaxType.DoubleDot;
}

export interface EffectNode extends NamedNodeBase {
  type: SyntaxType.Effect;
}

export interface EqNode extends NamedNodeBase {
  type: SyntaxType.Eq;
}

export interface ExposingNode extends NamedNodeBase {
  type: SyntaxType.Exposing;
}

export interface GlslContentNode extends NamedNodeBase {
  type: SyntaxType.GlslContent;
}

export interface ImportNode extends NamedNodeBase {
  type: SyntaxType.Import;
}

export interface InfixNode extends NamedNodeBase {
  type: SyntaxType.Infix;
}

export interface InvalidStringEscapeNode extends NamedNodeBase {
  type: SyntaxType.InvalidStringEscape;
}

export interface LineCommentNode extends NamedNodeBase {
  type: SyntaxType.LineComment;
}

export interface LowerCaseIdentifierNode extends NamedNodeBase {
  type: SyntaxType.LowerCaseIdentifier;
}

export interface ModuleNode extends NamedNodeBase {
  type: SyntaxType.Module;
}

export interface NumberLiteralNode extends NamedNodeBase {
  type: SyntaxType.NumberLiteral;
}

export interface OfNode extends NamedNodeBase {
  type: SyntaxType.Of;
}

export interface OpenCharNode extends NamedNodeBase {
  type: SyntaxType.OpenChar;
}

export interface OpenQuoteNode extends NamedNodeBase {
  type: SyntaxType.OpenQuote;
}

export interface PortNode extends NamedNodeBase {
  type: SyntaxType.Port;
}

export interface RegularStringPartNode extends NamedNodeBase {
  type: SyntaxType.RegularStringPart;
}

export interface StringEscapeNode extends NamedNodeBase {
  type: SyntaxType.StringEscape;
}

export interface TypeNode extends NamedNodeBase {
  type: SyntaxType.Type;
}

export interface UnderscoreNode extends NamedNodeBase {
  type: SyntaxType.Underscore;
}

export interface UpperCaseIdentifierNode extends NamedNodeBase {
  type: SyntaxType.UpperCaseIdentifier;
}

export interface WhereNode extends NamedNodeBase {
  type: SyntaxType.Where;
}

