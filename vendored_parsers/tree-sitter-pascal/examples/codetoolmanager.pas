{
 ***************************************************************************
 *                                                                         *
 *   This source is free software; you can redistribute it and/or modify   *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This code is distributed in the hope that it will be useful, but      *
 *   WITHOUT ANY WARRANTY; without even the implied warranty of            *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   General Public License for more details.                              *
 *                                                                         *
 *   A copy of the GNU General Public License is available on the World    *
 *   Wide Web at <http://www.gnu.org/copyleft/gpl.html>. You can also      *
 *   obtain it by writing to the Free Software Foundation,                 *
 *   Inc., 51 Franklin Street - Fifth Floor, Boston, MA 02110-1335, USA.   *
 *                                                                         *
 ***************************************************************************

  Author: Mattias Gaertner

  Abstract:
    TCodeToolManager gathers all tools in one single Object
    to easily use the code tools in a program.

}
unit CodeToolManager;

{$ifdef fpc}{$mode objfpc}{$endif}{$H+}

interface

{$I codetools.inc}

{.$DEFINE CTDEBUG}
{ $DEFINE DoNotHandleFindDeclException}

uses
  {$IFDEF MEM_CHECK}
  MemCheck,
  {$ENDIF}
  Classes, SysUtils, contnrs, TypInfo, types, Laz_AVL_Tree,
  // LazUtils
  LazFileUtils, LazFileCache, LazMethodList, LazDbgLog, AvgLvlTree,
  LazStringUtils,
  // Codetools
  FileProcs, BasicCodeTools, CodeToolsStrConsts,
  EventCodeTool, CodeTree, CodeAtom, SourceChanger, DefineTemplates, CodeCache,
  ExprEval, LinkScanner, KeywordFuncLists, FindOverloads, CodeBeautifier,
  FindDeclarationCache, DirectoryCacher,
  PPUCodeTools, LFMTrees, DirectivesTree, CodeCompletionTemplater,
  PascalParserTool, CodeToolsConfig, CustomCodeTool, FindDeclarationTool,
  IdentCompletionTool, StdCodeTools, ResourceCodeTool, CodeToolsStructs,
  CTUnitGraph, ExtractProcTool;

type
  TCodeToolManager = class;
  TCodeTool = TEventsCodeTool;
  TDirectivesTool = TCompilerDirectivesTree;

  TOnBeforeApplyCTChanges = procedure(Manager: TCodeToolManager;
                                    var Abort: boolean) of object;
  TOnAfterApplyCTChanges = procedure(Manager: TCodeToolManager) of object;
  TOnGatherExternalChanges = procedure(Manager: TCodeToolManager;
                                       var Abort: boolean) of object;
  TOnSearchUsedUnit = function(const SrcFilename: string;
                               const TheUnitName, TheUnitInFilename: string
                               ): TCodeBuffer of object;
  TOnCodeToolCheckAbort = function: boolean of object;
  TOnFindDefineProperty = procedure(Sender: TObject;
    const PersistentClassName, AncestorClassName, Identifier: string;
    var IsDefined: boolean) of object;
  TOnFindFPCMangledSource = procedure(Sender: TObject; SrcType: TCodeTreeNodeDesc;
    const SrcName: string; out SrcFilename: string) of object;

  { ECodeToolManagerError }

  ECodeToolManagerError = class(Exception)
  public
    Id: int64;
    constructor Create(TheID: int64; const Msg: string);
    constructor CreateFmt(TheID: int64; const Msg: string; const Args: array of const);
  end;

  TCodeToolManagerHandler = (
    ctmOnToolTreeChanging
    );
  TCodeToolManagerHandlers = set of TCodeToolManagerHandler;
  TOnToolTreeChanging = TCodeTreeChangeEvent;
  TOnScannerInit = procedure(Self: TCodeToolManager; Scanner: TLinkScanner) of object;

  { TCodeToolManager }

  TCodeToolManager = class(TPersistent)
  private
    FAbortable: boolean;
    FAddInheritedCodeToOverrideMethod: boolean;
    FAdjustTopLineDueToComment: boolean;
    FCatchExceptions: boolean;
    FChangeStep: integer;
    FCheckFilesOnDisk: boolean;
    FCodeCompletionTemplateFileName: String;
    FCodeNodeTreeChangeStep: integer;
    FCompleteProperties: boolean;
    FCurCodeTool: TCodeTool; // current codetool
    FCurDirectivesTool: TDirectivesTool;
    FCursorBeyondEOL: boolean;
    FDirectivesTools: TAVLTree; // tree of TDirectivesTool sorted for Code (TCodeBuffer)
    FErrorCode: TCodeBuffer;
    FErrorColumn: integer;
    FErrorId: int64;
    FErrorLine: integer;
    FErrorMsg: string;
    FErrorTopLine: integer;
    FCodeTreeNodesDeletedStep: integer;
    FIndentSize: integer;
    FJumpSingleLinePos: integer;
    FJumpCodeBlockPos: integer;
    FIdentifierListUpdating: boolean;
    FOnAfterApplyChanges: TOnAfterApplyCTChanges;
    FOnBeforeApplyChanges: TOnBeforeApplyCTChanges;
    FOnCheckAbort: TOnCodeToolCheckAbort;
    FOnFindFPCMangledSource: TOnFindFPCMangledSource;
    FOnGatherExternalChanges: TOnGatherExternalChanges;
    FOnFindDefinePropertyForContext: TOnFindDefinePropertyForContext;
    FOnFindDefineProperty: TOnFindDefineProperty;
    FOnGatherUserIdentifiers: TOnGatherUserIdentifiers;
    FOnGetIndenterExamples: TOnGetFABExamples;
    FOnGetMethodName: TOnGetMethodname;
    FOnRescanFPCDirectoryCache: TNotifyEvent;
    FOnScannerInit: TOnScannerInit;
    FOnSearchUsedUnit: TOnSearchUsedUnit;
    FResourceTool: TResourceCodeTool;
    FSetPropertyVariablename: string;
    FSetPropertyVariableIsPrefix: Boolean;
    FSetPropertyVariableUseConst: Boolean;
    FSourceExtensions: string; // default is '.pp;.pas;.lpr;.dpr;.dpk'
    FPascalTools: TAVLTree; // tree of TCustomCodeTool sorted TCustomCodeTool(Data).Scanner.MainCode
    FTabWidth: integer;
    FUseTabs: boolean;
    FVisibleEditorLines: integer;
    FWriteExceptions: boolean;
    FWriteLockCount: integer;// Set/Unset counter
    FWriteLockStep: integer; // current write lock ID
    FHandlers: array[TCodeToolManagerHandler] of TMethodList;
    FErrorDbgMsg: string;
    procedure DoOnGatherUserIdentifiers(Sender: TIdentCompletionTool;
      const ContextFlags: TIdentifierListContextFlags);
    procedure DoOnRescanFPCDirectoryCache(Sender: TObject);
    function GetBeautifier: TBeautifyCodeOptions; inline;
    function DoOnScannerGetInitValues(Scanner: TLinkScanner; Code: Pointer;
      out AChangeStep: integer): TExpressionEvaluator;
    procedure DoOnDefineTreeReadValue(Sender: TObject; const VariableName: string;
                                    var Value: string; var Handled: boolean);
    procedure DoOnGlobalValuesChanged;
    function DoOnFindUsedUnit(SrcTool: TFindDeclarationTool; const TheUnitName,
          TheUnitInFilename: string): TCodeBuffer;
    function DoOnGetSrcPathForCompiledUnit(Sender: TObject;
          const AFilename: string): string;
    function DoOnInternalGetMethodName(const AMethod: TMethod;
                                     CheckOwner: TObject): string;
    function FindCodeOfMainUnitHint(Code: TCodeBuffer): TCodeBuffer;
    procedure CreateScanner(Code: TCodeBuffer);
    procedure SetAbortable(const AValue: boolean);
    procedure SetAddInheritedCodeToOverrideMethod(const AValue: boolean);
    procedure SetCheckFilesOnDisk(NewValue: boolean);
    procedure SetCodeCompletionTemplateFileName(AValue: String);
    procedure SetCompleteProperties(const AValue: boolean);
    procedure SetIndentSize(NewValue: integer);
    procedure SetSetPropertyVariableIsPrefix(aValue: Boolean);
    procedure SetSetPropertyVariablename(AValue: string);
    procedure SetSetPropertyVariableUseConst(aValue: Boolean);
    procedure SetTabWidth(const AValue: integer);
    procedure SetUseTabs(AValue: boolean);
    procedure SetVisibleEditorLines(NewValue: integer);
    procedure SetJumpSingleLinePos(NewValue: integer);
    procedure SetJumpCodeBlockPos(NewValue: integer);
    procedure SetCursorBeyondEOL(NewValue: boolean);
    procedure BeforeApplyingChanges(var Abort: boolean);
    procedure AfterApplyingChanges;
    procedure AdjustErrorTopLine;
    procedure WriteError;
    procedure DoOnFABGetNestedComments(Sender: TObject; Code: TCodeBuffer; out
                                     NestedComments: boolean);
    procedure DoOnFABGetExamples(Sender: TObject; Code: TCodeBuffer;
      Step: integer; var CodeBuffers: TFPList; var ExpandedFilenames: TStrings);
    procedure DoOnLoadFileForTool(Sender: TObject; const ExpandedFilename: string;
                                out Code: TCodeBuffer; var {%H-}Abort: boolean);
    function DoOnGetCodeToolForBuffer(Sender: TObject;
      Code: TCodeBuffer; GoToMainCode: boolean): TFindDeclarationTool;
    function DoOnGetDirectoryCache(const ADirectory: string): TCTDirectoryCache;
    procedure DoOnToolSetWriteLock(Lock: boolean);
    procedure DoOnToolGetChangeSteps(out SourcesChangeStep, FilesChangeStep: int64;
                                   out InitValuesChangeStep: integer);
    function DoOnParserProgress({%H-}Tool: TCustomCodeTool): boolean;
    procedure DoOnToolTreeChange(Tool: TCustomCodeTool; NodesDeleting: boolean);
    function DoOnScannerProgress(Sender: TLinkScanner): boolean;
    function GetResourceTool: TResourceCodeTool;
    function GetOwnerForCodeTreeNode(ANode: TCodeTreeNode): TObject;
    function DirectoryCachePoolGetString(const ADirectory: string;
                                  const AStringType: TCTDirCacheString): string;
    function DirectoryCachePoolFindVirtualFile(const Filename: string): string;
    function DirectoryCachePoolGetUnitFromSet(const UnitSet, AnUnitName: string;
                                              SrcSearchRequiresPPU: boolean): string;
    function DirectoryCachePoolGetCompiledUnitFromSet(
                                     const UnitSet, AnUnitName: string): string;
    procedure DirectoryCachePoolIterateFPCUnitsFromSet(const UnitSet: string;
                                              const Iterate: TCTOnIterateFile);
    procedure AddHandler(HandlerType: TCodeToolManagerHandler; const Handler: TMethod);
    procedure RemoveHandler(HandlerType: TCodeToolManagerHandler; const Handler: TMethod);
  public
    DefinePool: TDefinePool; // definition templates (rules)
    DefineTree: TDefineTree; // cache for defines (e.g. initial compiler values)
    SourceCache: TCodeCache; // cache for source (units, include files, ...)
    SourceChangeCache: TSourceChangeCache; // cache for write accesses
    PPUCache: TPPUTools;
    GlobalValues: TExpressionEvaluator;
    DirectoryCachePool: TCTDirectoryCachePool;
    CompilerDefinesCache: TCompilerDefinesCache;
    IdentifierList: TIdentifierList;
    IdentifierHistory: TIdentifierHistoryList;
    Positions: TCodeXYPositions;
    Indenter: TFullyAutomaticBeautifier;
    property FPCDefinesCache: TCompilerDefinesCache read CompilerDefinesCache; deprecated 'use CompilerDefinesCache'; // 1.9
    property Beautifier: TBeautifyCodeOptions read GetBeautifier;

    constructor Create;
    destructor Destroy; override;
    
    procedure Init(Config: TCodeToolsOptions);
    procedure SimpleInit(const ConfigFilename: string);

    procedure ActivateWriteLock;
    procedure DeactivateWriteLock;
    property ChangeStep: integer read FChangeStep; // code changes
    procedure IncreaseChangeStep;
    property CodeNodeTreeChangeStep: integer read FCodeNodeTreeChangeStep;// nodes altered, added, deleted
    property CodeTreeNodesDeletedStep: integer read FCodeTreeNodesDeletedStep;// nodes deleted
    procedure GetCodeTreeNodesDeletedStep(out NodesDeletedStep: integer);// use this for events
    procedure AddHandlerToolTreeChanging(const OnToolTreeChanging: TOnToolTreeChanging);
    procedure RemoveHandlerToolTreeChanging(const OnToolTreeChanging: TOnToolTreeChanging);

    // file handling
    property SourceExtensions: string
                                 read FSourceExtensions write FSourceExtensions;
    function FindFile(const ExpandedFilename: string): TCodeBuffer;
    function LoadFile(const ExpandedFilename: string;
                      UpdateFromDisk, Revert: boolean): TCodeBuffer;
    function CreateFile(const AFilename: string): TCodeBuffer;
    function CreateTempFile(const AFilename: string): TCodeBuffer;
    procedure ReleaseTempFile(Buffer: TCodeBuffer);
    function SaveBufferAs(OldBuffer: TCodeBuffer; const ExpandedFilename: string;
                          out NewBuffer: TCodeBuffer): boolean;
    function FilenameHasSourceExt(const AFilename: string): boolean;
    function GetMainCode(Code: TCodeBuffer): TCodeBuffer;
    function GetIncludeCodeChain(Code: TCodeBuffer;
                                 RemoveFirstCodesWithoutTool: boolean;
                                 out ListOfCodeBuffer: TFPList): boolean;
    property OnSearchUsedUnit: TOnSearchUsedUnit
                                 read FOnSearchUsedUnit write FOnSearchUsedUnit;
    property OnRescanFPCDirectoryCache: TNotifyEvent read FOnRescanFPCDirectoryCache write FOnRescanFPCDirectoryCache;

    // initializing single scanner
    property OnScannerInit: TOnScannerInit read FOnScannerInit write FOnScannerInit;

    // initializing single codetool
    function GetCodeToolForSource(Code: TCodeBuffer;
                      GoToMainCode, ExceptionOnError: boolean): TCustomCodeTool;
    function FindCodeToolForSource(Code: TCodeBuffer): TCustomCodeTool;
    property CurCodeTool: TCodeTool read FCurCodeTool;
    procedure ClearCurCodeTool;
    function InitCurCodeTool(Code: TCodeBuffer): boolean;
    function InitResourceTool: boolean;
    procedure ClearPositions;

    // initializing single compilerdirectivestree
    function GetDirectivesToolForSource(Code: TCodeBuffer;
                            ExceptionOnError: boolean): TCompilerDirectivesTree;
    property CurDirectivesTool: TDirectivesTool read FCurDirectivesTool;
    procedure ClearCurDirectivesTool;
    function InitCurDirectivesTool(Code: TCodeBuffer): boolean;
    function FindDirectivesToolForSource(Code: TCodeBuffer): TDirectivesTool;

    // exception handling
    procedure ClearError;
    function HandleException(AnException: Exception): boolean;
    procedure SetError(Id: int64; Code: TCodeBuffer; Line, Column: integer;
                       const TheMessage: string);
    property CatchExceptions: boolean
                                   read FCatchExceptions write FCatchExceptions;
    property WriteExceptions: boolean
                                   read FWriteExceptions write FWriteExceptions;
    property ErrorCode: TCodeBuffer read fErrorCode;
    property ErrorColumn: integer read fErrorColumn;
    property ErrorLine: integer read fErrorLine;
    property ErrorMessage: string read fErrorMsg;
    property ErrorId: int64 read FErrorId;
    property ErrorTopLine: integer read fErrorTopLine;
    property ErrorDbgMsg: string read FErrorDbgMsg;
    property Abortable: boolean read FAbortable write SetAbortable;
    property OnCheckAbort: TOnCodeToolCheckAbort
                                         read FOnCheckAbort write FOnCheckAbort;

    // tool settings
    property AdjustTopLineDueToComment: boolean read FAdjustTopLineDueToComment
                                               write FAdjustTopLineDueToComment;
    property CheckFilesOnDisk: boolean read FCheckFilesOnDisk
                                       write SetCheckFilesOnDisk;
    property CursorBeyondEOL: boolean read FCursorBeyondEOL
                                      write SetCursorBeyondEOL;
    property IndentSize: integer read FIndentSize write SetIndentSize;
    property JumpSingleLinePos: integer read FJumpSingleLinePos write SetJumpSingleLinePos;
    property JumpCodeBlockPos: integer read FJumpCodeBlockPos write SetJumpCodeBlockPos;
    property SetPropertyVariablename: string
                   read FSetPropertyVariablename write SetSetPropertyVariablename;
    property SetPropertyVariableIsPrefix: Boolean
                   read FSetPropertyVariableIsPrefix write SetSetPropertyVariableIsPrefix;
    property SetPropertyVariableUseConst: Boolean
                   read FSetPropertyVariableUseConst write SetSetPropertyVariableUseConst;
    property VisibleEditorLines: integer
                           read FVisibleEditorLines write SetVisibleEditorLines;
    property TabWidth: integer read FTabWidth write SetTabWidth;
    property UseTabs: boolean read FUseTabs write SetUseTabs;
    property CompleteProperties: boolean
                           read FCompleteProperties write SetCompleteProperties;
    property AddInheritedCodeToOverrideMethod: boolean
                                      read FAddInheritedCodeToOverrideMethod
                                      write SetAddInheritedCodeToOverrideMethod;

    // code completion templates
    property CodeCompletionTemplateFileName : String read FCodeCompletionTemplateFileName
                                                     write SetCodeCompletionTemplateFileName;

    // source changing
    procedure BeginUpdate;
    function EndUpdate: boolean;
    function GatherExternalChanges: boolean;
    property OnGatherExternalChanges: TOnGatherExternalChanges
                   read FOnGatherExternalChanges write FOnGatherExternalChanges;
    function ApplyChanges: boolean;
    property OnBeforeApplyChanges: TOnBeforeApplyCTChanges
                         read FOnBeforeApplyChanges write FOnBeforeApplyChanges;
    property OnAfterApplyChanges: TOnAfterApplyCTChanges
                           read FOnAfterApplyChanges write FOnAfterApplyChanges;
          
    // defines
    function SetGlobalValue(const VariableName, VariableValue: string): boolean;
    function GetUnitPathForDirectory(const Directory: string;
                                     UseCache: boolean = true): string;
    function GetIncludePathForDirectory(const Directory: string;
                                        UseCache: boolean = true): string;
    function GetSrcPathForDirectory(const Directory: string;
                                    UseCache: boolean = true): string;
    function GetCompleteSrcPathForDirectory(const Directory: string;
                                            UseCache: boolean = true): string;
    function GetPPUSrcPathForDirectory(const Directory: string): string;
    function GetDCUSrcPathForDirectory(const Directory: string): string;
    function GetCompiledSrcPathForDirectory(const Directory: string;
                                            {%H-}UseCache: boolean = true): string;
    function GetNestedCommentsFlagForFile(const Filename: string): boolean;
    function GetPascalCompilerForDirectory(const Directory: string): TPascalCompiler;
    function GetCompilerModeForDirectory(const Directory: string): TCompilerMode;
    function GetCompiledSrcExtForDirectory(const {%H-}Directory: string): string;
    function FindUnitInUnitLinks(const Directory, AUnitName: string): string;
    function GetUnitLinksForDirectory(const Directory: string;
                                      UseCache: boolean = false): string;
    function FindUnitInUnitSet(const Directory, AUnitName: string): string;
    function GetUnitSetIDForDirectory(const Directory: string;
                                      UseCache: boolean = true): string;
    function GetUnitSetForDirectory(const Directory: string): TFPCUnitSetCache;
    function GetFPCUnitPathForDirectory(const Directory: string;
                                        UseCache: boolean = true): string;// value of macro #FPCUnitPath
    procedure GetFPCVersionForDirectory(const Directory: string;
                                 out FPCVersion, FPCRelease, FPCPatch: integer);
    function GetPCVersionForDirectory(const Directory: string): integer; deprecated 'use below'; // 2.0.1
    function GetPCVersionForDirectory(const Directory: string; out Kind: TPascalCompiler): integer;
    function GetNamespacesForDirectory(const Directory: string;
                          UseCache: boolean = true): string;// value of macro #Namespaces

    // miscellaneous
    property OnGetMethodName: TOnGetMethodname read FOnGetMethodName
                                               write FOnGetMethodName;
    property OnGetIndenterExamples: TOnGetFABExamples
                       read FOnGetIndenterExamples write FOnGetIndenterExamples;
    property OnGatherUserIdentifiers: TOnGatherUserIdentifiers
      read FOnGatherUserIdentifiers write FOnGatherUserIdentifiers;

    // data function
    procedure FreeListOfPCodeXYPosition(var List: TFPList);
    procedure FreeTreeOfPCodeXYPosition(var Tree: TAVLTree);
    function CreateTreeOfPCodeXYPosition: TAVLTree;
    procedure AddListToTreeOfPCodeXYPosition(SrcList: TFPList;
          DestTree: TAVLTree; ClearList, CreateCopies: boolean);

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    
    // code exploring
    function Explore(Code: TCodeBuffer; out ACodeTool: TCodeTool;
          WithStatements: boolean; OnlyInterface: boolean = false): boolean;
    function CheckSyntax(Code: TCodeBuffer; out NewCode: TCodeBuffer;
          out NewX, NewY, NewTopLine: integer; out ErrorMsg: string): boolean;
    function ExploreDirectives(Code: TCodeBuffer;
          out ADirectivesTool: TDirectivesTool): boolean;
    function ExploreUnitDirectives(Code: TCodeBuffer;
          out aScanner: TLinkScanner): boolean;

    // compiler directives
    function GuessMisplacedIfdefEndif(Code: TCodeBuffer; X,Y: integer;
          out NewCode: TCodeBuffer;
          out NewX, NewY, NewTopLine: integer): boolean;
    // find include directive of include file at position X,Y
    function FindEnclosingIncludeDirective(Code: TCodeBuffer; X,Y: integer;
          out NewCode: TCodeBuffer;
          out NewX, NewY, NewTopLine: integer): boolean;
    function FindResourceDirective(Code: TCodeBuffer; StartX, StartY: integer;
          out NewCode: TCodeBuffer; out NewX, NewY, NewTopLine: integer;
          const Filename: string = ''; SearchInCleanSrc: boolean = true): boolean;
    function AddResourceDirective(Code: TCodeBuffer; const Filename: string;
          SearchInCleanSrc: boolean = true; const NewSrc: string = ''): boolean;
    function FindIncludeDirective(Code: TCodeBuffer; StartX, StartY: integer;
          out NewCode: TCodeBuffer; out NewX, NewY, NewTopLine: integer;
          const Filename: string = ''; SearchInCleanSrc: boolean = true): boolean;
    function AddIncludeDirectiveForInit(Code: TCodeBuffer; const Filename: string;
          const NewSrc: string = ''): boolean;
    function AddUnitWarnDirective(Code: TCodeBuffer; WarnID, Comment: string;
          TurnOn: boolean): boolean;
    function RemoveDirective(Code: TCodeBuffer; NewX, NewY: integer;
          RemoveEmptyIFs: boolean): boolean;
    function FixIncludeFilenames(Code: TCodeBuffer; Recursive: boolean;
          out MissingIncludeFilesCodeXYPos: TFPList): boolean;
    function FixMissingH2PasDirectives(Code: TCodeBuffer;
          var Changed: boolean): boolean;
    function ReduceCompilerDirectives(Code: TCodeBuffer;
          Undefines, Defines: TStrings; var Changed: boolean): boolean;

    // keywords and comments
    function IsKeyword(Code: TCodeBuffer; const KeyWord: string): boolean;
    function ExtractCodeWithoutComments(Code: TCodeBuffer;
          KeepDirectives: boolean = false;
          KeepVerbosityDirectives: boolean = false): string;
    function GetPasDocComments(Code: TCodeBuffer; X, Y: integer;
          out ListOfPCodeXYPosition: TFPList): boolean;

    // blocks (e.g. begin..end, case..end, try..finally..end, repeat..until)
    function FindBlockCounterPart(Code: TCodeBuffer; X,Y: integer;
          out NewCode: TCodeBuffer;
          out NewX, NewY, NewTopLine: integer): boolean;
    function FindBlockStart(Code: TCodeBuffer; X,Y: integer;
          out NewCode: TCodeBuffer;
          out NewX, NewY, NewTopLine: integer;
          SkipStart: boolean = false): boolean;
    function GuessUnclosedBlock(Code: TCodeBuffer; X,Y: integer;
          out NewCode: TCodeBuffer;
          out NewX, NewY, NewTopLine: integer): boolean;
    function CompleteBlock(Code: TCodeBuffer; X,Y: integer;
          OnlyIfCursorBlockIndented: boolean): boolean;
    function CompleteBlock(Code: TCodeBuffer; X,Y: integer;
          OnlyIfCursorBlockIndented: boolean;
          out NewCode: TCodeBuffer;
          out NewX, NewY, NewTopLine: integer): boolean;

    // method jumping
    function JumpToMethod(Code: TCodeBuffer; X,Y: integer;
          out NewCode: TCodeBuffer;
          out NewX, NewY, NewTopLine, BlockTopLine, BlockBottomLine: integer;
          out RevertableJump: boolean): boolean;
    function FindProcDeclaration(Code: TCodeBuffer; CleanDef: string;
          out Tool: TCodeTool; out Node: TCodeTreeNode;
          Attr: TProcHeadAttributes = [phpWithoutSemicolon]): boolean;

    // find declaration
    function FindDeclaration(Code: TCodeBuffer; X,Y: integer;
          out NewCode: TCodeBuffer;
          out NewX, NewY, NewTopLine, BlockTopLine, BlockBottomLine: integer;
          Flags: TFindSmartFlags = DefaultFindSmartFlags): boolean;
    function FindDeclarationOfIdentifier(Code: TCodeBuffer; X,Y: integer;
          Identifier: PChar;
          out NewCode: TCodeBuffer;
          out NewX, NewY, NewTopLine: integer): boolean;
    function FindSmartHint(Code: TCodeBuffer; X,Y: integer;
          Flags: TFindSmartFlags = DefaultFindSmartHintFlags): string;
    function FindDeclarationInInterface(Code: TCodeBuffer;
          const Identifier: string; out NewCode: TCodeBuffer;
          out NewX, NewY, NewTopLine: integer): boolean;
    function FindDeclarationInInterface(Code: TCodeBuffer;
          const Identifier: string; out NewCode: TCodeBuffer;
          out NewX, NewY, NewTopLine, BlockTopLine, BlockBottomLine: integer): boolean;
    function FindDeclarationWithMainUsesSection(Code: TCodeBuffer;
          const Identifier: string;
          out NewCode: TCodeBuffer;
          out NewX, NewY, NewTopLine: integer): Boolean;
    function FindDeclarationAndOverload(Code: TCodeBuffer; X,Y: integer;
          out ListOfPCodeXYPosition: TFPList;
          Flags: TFindDeclarationListFlags): boolean;
    function FindMainDeclaration(Code: TCodeBuffer; X,Y: integer;
          out NewCode: TCodeBuffer;
          out NewX, NewY, NewTopLine: integer): boolean;
    function FindDeclarationOfPropertyPath(Code: TCodeBuffer;
          const PropertyPath: string; out NewCode: TCodeBuffer;
          out NewX, NewY, NewTopLine: integer): Boolean;
    function FindFileAtCursor(Code: TCodeBuffer; X,Y: integer;
      out Found: TFindFileAtCursorFlag; out FoundFilename: string;
      Allowed: TFindFileAtCursorFlags = DefaultFindFileAtCursorAllowed;
      StartPos: PCodeXYPosition = nil): boolean;

    // get code context (aka parameter hints)
    function FindCodeContext(Code: TCodeBuffer; X,Y: integer;
          out CodeContexts: TCodeContextInfo): boolean;
    function ExtractProcedureHeader(Code: TCodeBuffer; X,Y: integer;
          Attributes: TProcHeadAttributes; out ProcHead: string): boolean;
    function HasInterfaceRegisterProc(Code: TCodeBuffer;
          out HasRegisterProc: boolean): boolean;

    // gather identifiers (i.e. all visible)
    function GatherUnitNames(Code: TCodeBuffer): Boolean;
    function GatherIdentifiers(Code: TCodeBuffer; X,Y: integer): boolean;
    function GetIdentifierAt(Code: TCodeBuffer; X,Y: integer;
          out Identifier: string): boolean;
    function IdentItemCheckHasChilds(IdentItem: TIdentifierListItem): boolean;
    function FindAbstractMethods(Code: TCodeBuffer; X,Y: integer;
          out ListOfPCodeXYPosition: TFPList;
          SkipAbstractsInStartClass: boolean = false): boolean;
    function GetValuesOfCaseVariable(Code: TCodeBuffer; X,Y: integer;
          List: TStrings; WithTypeDefIfScoped: boolean = true): boolean;
    function GatherOverloads(Code: TCodeBuffer; X,Y: integer;
          out Graph: TDeclarationOverloadsGraph): boolean;

    // find references, rename identifier, remove identifier
    function FindReferences(IdentifierCode: TCodeBuffer;
          X, Y: integer; SearchInCode: TCodeBuffer; SkipComments: boolean;
          var ListOfPCodeXYPosition: TFPList;
          var Cache: TFindIdentifierReferenceCache  // you must free Cache
          ): boolean;
    function FindUnitReferences(UnitCode, TargetCode: TCodeBuffer;
          SkipComments: boolean; var ListOfPCodeXYPosition: TFPList): boolean;
    function FindUsedUnitReferences(Code: TCodeBuffer; X, Y: integer;
          SkipComments: boolean; out UsedUnitFilename: string;
          var ListOfPCodeXYPosition: TFPList): boolean;
    function RenameIdentifier(TreeOfPCodeXYPosition: TAVLTree;
          const OldIdentifier, NewIdentifier: string;
          DeclarationCode: TCodeBuffer = nil; DeclarationCaretXY: PPoint = nil): boolean;
    function ReplaceWord(Code: TCodeBuffer; const OldWord, NewWord: string;
          ChangeStrings: boolean): boolean;
    function RemoveIdentifierDefinition(Code: TCodeBuffer; X, Y: integer
          ): boolean; // e.g. remove the variable definition at X,Y
    function RemoveWithBlock(Code: TCodeBuffer; X, Y: integer): boolean;
    function AddWithBlock(Code: TCodeBuffer; X1, Y1, X2, Y2: integer;
          const WithExpr: string; // if empty: collect Candidates
          Candidates: TStrings): boolean;
    function ChangeParamList(Code: TCodeBuffer;
       Changes: TObjectList; // list of TChangeParamListItem
       var ProcPos: TCodeXYPosition; // if it is in this unit the proc declaration is changed and this position is cleared
       TreeOfPCodeXYPosition: TAVLTree // positions in this unit are processed and removed from the tree
       ): boolean;

    // resourcestring sections
    function GatherResourceStringSections(
          Code: TCodeBuffer; X,Y: integer;
          CodePositions: TCodeXYPositions): boolean;
    function IdentifierExistsInResourceStringSection(Code: TCodeBuffer;
          X,Y: integer; const ResStrIdentifier: string): boolean;
    function CreateIdentifierFromStringConst(
          StartCode: TCodeBuffer; StartX, StartY: integer;
          EndCode: TCodeBuffer;   EndX, EndY: integer;
          out Identifier: string; MaxLen: integer): boolean;
    function StringConstToFormatString(
          StartCode: TCodeBuffer; StartX, StartY: integer;
          EndCode: TCodeBuffer;   EndX, EndY: integer;
          out FormatStringConstant, FormatParameters: string;
          out StartInStringConst, EndInStringConst: boolean): boolean;
    function GatherResourceStringsWithValue(SectionCode: TCodeBuffer;
          SectionX, SectionY: integer; const StringValue: string;
          CodePositions: TCodeXYPositions): boolean;
    function AddResourcestring(CursorCode: TCodeBuffer; X,Y: integer;
          SectionCode: TCodeBuffer; SectionX, SectionY: integer;
          const NewIdentifier, NewValue: string;
          InsertPolicy: TResourcestringInsertPolicy): boolean;

    // expressions
    function GetStringConstBounds(Code: TCodeBuffer; X,Y: integer;
          out StartCode: TCodeBuffer; out StartX, StartY: integer;
          out EndCode: TCodeBuffer; out EndX, EndY: integer;
          ResolveComments: boolean): boolean;
    procedure ImproveStringConstantStart(const ACode: string; var StartPos: integer);
    procedure ImproveStringConstantEnd(const ACode: string; var EndPos: integer);
    function ExtractOperand(Code: TCodeBuffer; X,Y: integer;
          out Operand: string; WithPostTokens, WithAsOperator,
          WithoutTrailingPoints: boolean): boolean;
    function GetExpandedOperand(Code: TCodeBuffer; X, Y: Integer;
          out Operand: string; ResolveProperty: Boolean): Boolean;

    // code completion = auto class completion, auto forward proc completion,
    //             (local) var assignment completion, event assignment completion
    function CompleteCode(Code: TCodeBuffer; X,Y,TopLine: integer;
          out NewCode: TCodeBuffer;
          out NewX, NewY, NewTopLine, BlockTopLine, BlockBottomLine: integer;Interactive: Boolean): boolean;
    function CreateVariableForIdentifier(Code: TCodeBuffer; X,Y,TopLine: integer;
          out NewCode: TCodeBuffer;
          out NewX, NewY, NewTopLine: integer; Interactive: Boolean): boolean;
    function AddMethods(Code: TCodeBuffer; X,Y, TopLine: integer;
          ListOfPCodeXYPosition: TFPList;
          const VirtualToOverride: boolean;
          out NewCode: TCodeBuffer;
          out NewX, NewY, NewTopLine, BlockTopLine, BlockBottomLine: integer): boolean;
    function GuessTypeOfIdentifier(Code: TCodeBuffer; X,Y: integer;
          out ItsAKeyword, IsSubIdentifier: boolean;
          out ExistingDefinition: TFindContext; // next existing definition
          out ListOfPFindContext: TFPList; // possible classes
          out NewExprType: TExpressionType; out NewType: string): boolean; // false = not at an identifier or syntax error
    function GetPossibleInitsForVariable(Code: TCodeBuffer; X,Y: integer;
          out Statements: TStrings; out InsertPositions: TObjectList // e.g. [use unit1, unit2;]i:=0;
          ): boolean;
    function DeclareVariableNearBy(Code: TCodeBuffer; X,Y: integer;
          const VariableName, NewType, NewUnitName: string;
          Visibility: TCodeTreeNodeDesc;
          LvlPosCode: TCodeBuffer = nil; LvlPosX: integer = 0; LvlPosY: integer = 0
          ): boolean;
    function DeclareVariableAt(Code: TCodeBuffer; X,Y: integer;
          const VariableName, NewType, NewUnitName: string): boolean;

    // simplifications
    function FindRedefinitions(Code: TCodeBuffer;
          out TreeOfCodeTreeNodeExt: TAVLTree; WithEnums: boolean): boolean;
    function RemoveRedefinitions(Code: TCodeBuffer;
          TreeOfCodeTreeNodeExt: TAVLTree): boolean;
    function RemoveAllRedefinitions(Code: TCodeBuffer): boolean;
    function FindAliasDefinitions(Code: TCodeBuffer;
          out TreeOfCodeTreeNodeExt: TAVLTree; OnlyWrongType: boolean): boolean;
    function FixAliasDefinitions(Code: TCodeBuffer;
          TreeOfCodeTreeNodeExt: TAVLTree): boolean;
    function FixAllAliasDefinitions(Code: TCodeBuffer): boolean;
    function FindConstFunctions(Code: TCodeBuffer;
                                out TreeOfCodeTreeNodeExt: TAVLTree): boolean;
    function ReplaceConstFunctions(Code: TCodeBuffer;
                                   TreeOfCodeTreeNodeExt: TAVLTree): boolean;
    function ReplaceAllConstFunctions(Code: TCodeBuffer): boolean;
    function FindTypeCastFunctions(Code: TCodeBuffer;
                                  out TreeOfCodeTreeNodeExt: TAVLTree): boolean;
    function ReplaceTypeCastFunctions(Code: TCodeBuffer;
                                      TreeOfCodeTreeNodeExt: TAVLTree): boolean;
    function ReplaceAllTypeCastFunctions(Code: TCodeBuffer): boolean;
    function FixForwardDefinitions(Code: TCodeBuffer): boolean;
    function FindEmptyMethods(Code: TCodeBuffer;
                              const AClassName: string; // can be ''
                              X,Y: integer;
                              const Sections: TPascalClassSections;
                              ListOfPCodeXYPosition: TFPList;
                              out AllEmpty: boolean): boolean;
    function RemoveEmptyMethods(Code: TCodeBuffer;
                                const AClassName: string; X,Y: integer;
                                const Sections: TPascalClassSections;
                                out AllRemoved: boolean;
                                const Attr: TProcHeadAttributes;
                                out RemovedProcHeads: TStrings): boolean;

    // custom class completion
    function InitClassCompletion(Code: TCodeBuffer;
                const AClassName: string; out CodeTool: TCodeTool): boolean;

    // insert/replace
    function InsertStatements(InsertPos: TInsertStatementPosDescription;
          const Statements: string): boolean;

    // alter proc
    function AddProcModifier(Code: TCodeBuffer;  X, Y: integer;
          const aModifier: string): boolean;

    // extract proc (creates a new procedure from code in selection)
    function CheckExtractProc(Code: TCodeBuffer;
          const StartPoint, EndPoint: TPoint;
          out MethodPossible, SubProcPossible, SubProcSameLvlPossible: boolean;
          out MissingIdentifiers: TAVLTree; // tree of PCodeXYPosition
          VarTree: TAVLTree = nil  // tree of TExtractedProcVariable
          ): boolean;
    function ExtractProc(Code: TCodeBuffer; const StartPoint, EndPoint: TPoint;
          ProcType: TExtractProcType; const ProcName: string;
          IgnoreIdentifiers: TAVLTree; // tree of PCodeXYPosition
          var NewCode: TCodeBuffer; var NewX, NewY, NewTopLine, BlockTopLine, BlockBottomLine: integer;
          FunctionResultVariableStartPos: integer = 0
          ): boolean;

    // 'Assign' method
    function FindAssignMethod(Code: TCodeBuffer; X, Y: integer;
          out Tool: TCodeTool; out ClassNode: TCodeTreeNode;
          out AssignDeclNode: TCodeTreeNode;
          var MemberNodeExts: TAVLTree; // tree of TCodeTreeNodeExtension, Node=var or property, Data=write property
          out AssignBodyNode: TCodeTreeNode;
          out InheritedDeclContext: TFindContext;
          ProcName: string = '' // default: Assign
          ): boolean;

    // source name  e.g. 'unit AUnitName;'
    function GetSourceName(Code: TCodeBuffer; SearchMainCode: boolean): string;
    function GetCachedSourceName(Code: TCodeBuffer): string;
    function RenameSource(Code: TCodeBuffer; const NewName: string): boolean;
    function GetSourceType(Code: TCodeBuffer; SearchMainCode: boolean): string;

    // uses sections
    function FindUnitInAllUsesSections(Code: TCodeBuffer;
          const AnUnitName: string; out NamePos, InPos: integer;
          const IgnoreMissingIncludeFiles: Boolean = False): boolean;
    function RenameUsedUnit(Code: TCodeBuffer;
          const OldUnitName, NewUnitName, NewUnitInFile: string): boolean;
    function ReplaceUsedUnits(Code: TCodeBuffer;
          UnitNamePairs: TStringToStringTree): boolean;
    function AddUnitToMainUsesSection(Code: TCodeBuffer;
          const NewUnitName, NewUnitInFile: string;
          AsLast: boolean = false; CheckSpecialUnits: boolean = true): boolean;
    function AddUnitToMainUsesSectionIfNeeded(Code: TCodeBuffer;
          const NewUnitName, NewUnitInFile: string;
          AsLast: boolean = false; CheckSpecialUnits: boolean = true): boolean;
    function AddUnitToImplementationUsesSection(Code: TCodeBuffer;
          const NewUnitName, NewUnitInFile: string;
          AsLast: boolean = false; CheckSpecialUnits: boolean = true): boolean;
    function RemoveUnitFromAllUsesSections(Code: TCodeBuffer;
          const AnUnitName: string): boolean;
    function FindUsedUnitFiles(Code: TCodeBuffer; var MainUsesSection: TStrings
          ): boolean; // only main uses section, if unit not found, returns "unitname" or "unitname in 'filename'"
    function FindUsedUnitFiles(Code: TCodeBuffer; var MainUsesSection,
          ImplementationUsesSection: TStrings): boolean;
    function FindUsedUnitNames(Code: TCodeBuffer; var MainUsesSection,
          ImplementationUsesSection: TStrings): boolean; // ignoring 'in'
    function FindMissingUnits(Code: TCodeBuffer; var MissingUnits: TStrings;
          FixCase: boolean = false; SearchImplementation: boolean = true): boolean;
    function FindDelphiProjectUnits(Code: TCodeBuffer;
          out FoundInUnits, MissingInUnits, NormalUnits: TStrings;
          IgnoreNormalUnits: boolean = false): boolean;
    function FindDelphiPackageUnits(Code: TCodeBuffer;
          var FoundInUnits, MissingInUnits, NormalUnits: TStrings;
          IgnoreNormalUnits: boolean = false): boolean;
    function CommentUnitsInUsesSections(Code: TCodeBuffer;
          MissingUnits: TStrings): boolean;
    function FindUnitCaseInsensitive(Code: TCodeBuffer;
                              var AnUnitName, AnUnitInFilename: string): string;
    function FindUnitSource(Code: TCodeBuffer;
                       const AnUnitName, AnUnitInFilename: string): TCodeBuffer;
    function CreateUsesGraph: TUsesGraph;
    function FindUnusedUnits(Code: TCodeBuffer; Units: TStrings): boolean;

    // resources
    property OnFindDefinePropertyForContext: TOnFindDefinePropertyForContext
                                          read FOnFindDefinePropertyForContext
                                          write FOnFindDefinePropertyForContext;
    property OnFindDefineProperty: TOnFindDefineProperty
                                           read FOnFindDefineProperty
                                           write FOnFindDefineProperty;
    function FindLFMFileName(Code: TCodeBuffer): string;
    function CheckLFM(UnitCode, LFMBuf: TCodeBuffer; out LFMTree: TLFMTree;
          RootMustBeClassInUnit, RootMustBeClassInIntf,
          ObjectsMustExist: boolean): boolean;
    function FindNextResourceFile(Code: TCodeBuffer;
          var LinkIndex: integer): TCodeBuffer;
    function AddLazarusResourceHeaderComment(Code: TCodeBuffer;
          const CommentText: string): boolean;
    function FindLazarusResource(Code: TCodeBuffer;
          const ResourceName: string): TAtomPosition;
    function AddLazarusResource(Code: TCodeBuffer;
          const ResourceName, ResourceData: string): boolean;
    function RemoveLazarusResource(Code: TCodeBuffer;
          const ResourceName: string): boolean;
    function RenameMainInclude(Code: TCodeBuffer; const NewFilename: string;
          KeepPath: boolean): boolean;
    function RenameIncludeDirective(Code: TCodeBuffer; LinkIndex: integer;
          const NewFilename: string; KeepPath: boolean): boolean;// in cleaned source
    procedure DefaultFindDefinePropertyForContext(Sender: TObject;
                       const ClassContext, AncestorClassContext: TFindContext;
                       {%H-}LFMNode: TLFMTreeNode;
                       const IdentName: string; var IsDefined: boolean);

    // Delphi to Lazarus conversion
    function ConvertDelphiToLazarusSource(Code: TCodeBuffer;
          AddLRSCode: boolean): boolean;
          
    // Application.Createform(ClassName,VarName) statements in program source
    function FindCreateFormStatement(Code: TCodeBuffer; StartPos: integer;
          const AClassName, AVarName: string;
          out Position: integer): integer; // 0=found, -1=not found, 1=found, but wrong classname
    function AddCreateFormStatement(Code: TCodeBuffer;
          const AClassName, AVarName: string): boolean;
    function RemoveCreateFormStatement(Code: TCodeBuffer;
          const AVarName: string): boolean;
    function ChangeCreateFormStatement(Code: TCodeBuffer;
          const OldClassName, OldVarName: string;
          const NewClassName, NewVarName: string;
          OnlyIfExists: boolean): boolean;
    function ListAllCreateFormStatements(Code: TCodeBuffer): TStrings;
    function SetAllCreateFromStatements(Code: TCodeBuffer; 
          List: TStrings): boolean;
          
    // Application.Title:= statements in program source
    function GetApplicationTitleStatement(Code: TCodeBuffer;
          var Title: string): boolean;
    function SetApplicationTitleStatement(Code: TCodeBuffer;
          const NewTitle: string): boolean;
    function RemoveApplicationTitleStatement(Code: TCodeBuffer): boolean;

    // Application.Scaled:= statements in program source
    function GetApplicationScaledStatement(Code: TCodeBuffer;
          var AScaled: Boolean): boolean;
    function SetApplicationScaledStatement(Code: TCodeBuffer;
          const NewScaled: Boolean): boolean;
    function RemoveApplicationScaledStatement(Code: TCodeBuffer): boolean;

    // forms
    // Hint: to find the class use FindDeclarationInInterface
    function RenameForm(Code: TCodeBuffer;
      const OldFormName, OldFormClassName: string;
      const NewFormName, NewFormClassName: string): boolean;
    function FindFormAncestor(Code: TCodeBuffer; const FormClassName: string;
      var AncestorClassName: string; DirtySearch: boolean): boolean;

    // form components
    function CompleteComponent(Code: TCodeBuffer;
          AComponent, AncestorComponent: TComponent): boolean;
    function PublishedVariableExists(Code: TCodeBuffer;
          const AClassName, AVarName: string;
          ErrorOnClassNotFound: boolean): boolean;
    function AddPublishedVariable(Code: TCodeBuffer;
          const AClassName,VarName, VarType: string): boolean;
    function RemovePublishedVariable(Code: TCodeBuffer;
          const AClassName, AVarName: string;
          ErrorOnClassNotFound: boolean): boolean;
    function RenamePublishedVariable(Code: TCodeBuffer;
          const AClassName, OldVariableName, NewVarName,
          VarType: shortstring; ErrorOnClassNotFound: boolean): boolean;
    function RetypeClassVariables(Code: TCodeBuffer; const AClassName: string;
          ListOfReTypes: TStringToStringTree;
          ErrorOnClassNotFound: boolean;
          SearchImplementationToo: boolean = false): boolean;
    function FindDanglingComponentEvents(Code: TCodeBuffer;
          const AClassName: string;
          RootComponent: TComponent; ExceptionOnClassNotFound,
          SearchInAncestors: boolean;
          out ListOfPInstancePropInfo: TFPList;
          const OverrideGetMethodName: TOnGetMethodname = nil): boolean;

    // utilities for the object inspector
    function GetCompatiblePublishedMethods(Code: TCodeBuffer;
          const AClassName: string;
          PropInstance: TPersistent; const PropName: string;
          const Proc: TGetStrProc): boolean;
    function GetCompatiblePublishedMethods(Code: TCodeBuffer;
          const AClassName: string; TypeData: PTypeData;
          const Proc: TGetStrProc): boolean;
    function PublishedMethodExists(Code:TCodeBuffer;
          const AClassName, AMethodName: string;
          PropInstance: TPersistent; const PropName: string;
          out MethodIsCompatible, MethodIsPublished, IdentIsMethod: boolean
          ): boolean;
    function PublishedMethodExists(Code:TCodeBuffer; const AClassName,
          AMethodName: string; TypeData: PTypeData;
          out MethodIsCompatible, MethodIsPublished, IdentIsMethod: boolean
          ): boolean;
    function JumpToPublishedMethodBody(Code: TCodeBuffer;
          const AClassName, AMethodName: string;
          out NewCode: TCodeBuffer;
          out NewX, NewY, NewTopLine, BlockTopLine, BlockBottomLine: integer): boolean;
    function RenamePublishedMethod(Code: TCodeBuffer;
          const AClassName, OldMethodName,
          NewMethodName: string): boolean;
    function CreatePublishedMethod(Code: TCodeBuffer; const AClassName,
          NewMethodName: string; ATypeInfo: PTypeInfo;
          UseTypeInfoForParameters: boolean = false;
          const APropertyUnitName: string = ''; const APropertyPath: string = '';
          const CallAncestorMethod: string = ''; AddOverride: boolean = false
          ): boolean;

    // private class parts
    function CreatePrivateMethod(Code: TCodeBuffer; const AClassName,
          NewMethodName: string; ATypeInfo: PTypeInfo;
          UseTypeInfoForParameters: boolean = false;
          const APropertyUnitName: string = '';
          const APropertyPath: string = ''): boolean;

    // IDE % directives
    function GetIDEDirectives(Code: TCodeBuffer; DirectiveList: TStrings;
          const Filter: TOnIDEDirectiveFilter = nil): boolean;
    function SetIDEDirectives(Code: TCodeBuffer; DirectiveList: TStrings;
          const Filter: TOnIDEDirectiveFilter = nil): boolean;
          
    // linker jumping
    function JumpToLinkerIdentifier(Code: TCodeBuffer;
          const SourceFilename: string; SourceLine: integer;
          const MangledFunction, Identifier: string;
          out NewCode: TCodeBuffer;
          out NewX, NewY, NewTopLine: integer): boolean;

    // gdb stacktraces
    function FindFPCMangledIdentifier(GDBIdentifier: string; out aComplete: boolean;
          out aMessage: string; const OnFindSource: TOnFindFPCMangledSource;
          out NewCode: TCodeBuffer;
          out NewX, NewY, NewTopLine: integer): boolean;
    property OnFindFPCMangledSource: TOnFindFPCMangledSource
                     read FOnFindFPCMangledSource write FOnFindFPCMangledSource;

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    procedure ConsistencyCheck;
    procedure WriteDebugReport(WriteTool,
          WriteDefPool, WriteDefTree, WriteCache, WriteGlobalValues,
          WriteMemStats: boolean);
    procedure WriteMemoryStats;
  end;


var CodeToolBoss: TCodeToolManager;


function CreateDefinesForFPCMode(const Name: string;
                                 CompilerMode: TCompilerMode): TDefineTemplate;


implementation


function CompareCodeToolMainSources(Data1, Data2: Pointer): integer;
var
  Src1, Src2: Pointer;
begin
  Src1:=TCustomCodeTool(Data1).Scanner.MainCode;
  Src2:=TCustomCodeTool(Data2).Scanner.MainCode;
  if Src1<Src2 then
    Result:=-1
  else if Src1>Src2 then
    Result:=+1
  else
    Result:=0;
end;

function CompareDirectivesTreeSources(Data1, Data2: Pointer): integer;
var
  Src1, Src2: Pointer;
begin
  Src1:=TCompilerDirectivesTree(Data1).Code;
  Src2:=TCompilerDirectivesTree(Data2).Code;
  if Src1<Src2 then
    Result:=-1
  else if Src1>Src2 then
    Result:=+1
  else
    Result:=0;
end;

function GetOwnerForCodeTreeNode(ANode: TCodeTreeNode): TObject;
begin
  Result:=CodeToolBoss.GetOwnerForCodeTreeNode(ANode);
end;

procedure DumpExceptionBackTrace;
var
  FrameCount: integer;
  Frames: PPointer;
  FrameNumber:Integer;
begin
  DebugLn('Codetools  Stack trace:');
  DebugLn(BackTraceStrFunc(ExceptAddr));
  FrameCount:=ExceptFrameCount;
  Frames:=ExceptFrames;
  for FrameNumber := 0 to FrameCount-1 do
    DebugLn(BackTraceStrFunc(Frames[FrameNumber]));
end;

function CreateDefinesForFPCMode(const Name: string; CompilerMode: TCompilerMode
  ): TDefineTemplate;
var
  cm: TCompilerMode;
  NewMode: String;
begin
  Result:=TDefineTemplate.Create(Name,'set FPC compiler mode',
                                 '','',da_Block);
  for cm:=Low(TCompilerMode) to High(TCompilerMode) do begin
    Result.AddChild(TDefineTemplate.Create(CompilerModeVars[cm],
      CompilerModeVars[cm],CompilerModeVars[cm],'',da_Undefine));
  end;
  NewMode:=CompilerModeVars[CompilerMode];
  Result.AddChild(TDefineTemplate.Create(NewMode,
    NewMode,NewMode,'1',da_Define));
end;

{ ECodeToolManagerError }

constructor ECodeToolManagerError.Create(TheID: int64; const Msg: string);
begin
  Id:=TheID;
  inherited Create(Msg);
end;

constructor ECodeToolManagerError.CreateFmt(TheID: int64; const Msg: string;
  const Args: array of const);
begin
  Id:=TheID;
  inherited CreateFmt(Msg,Args);
end;

{ TCodeToolManager }

// inline
function TCodeToolManager.GetBeautifier: TBeautifyCodeOptions;
begin
  Result:=SourceChangeCache.BeautifyCodeOptions;
end;

constructor TCodeToolManager.Create;
begin
  inherited Create;
  FCheckFilesOnDisk:=true;
  FOnFindDefinePropertyForContext:=@DefaultFindDefinePropertyForContext;
  DirectoryCachePool:=TCTDirectoryCachePool.Create;
  DirectoryCachePool.OnGetString:=@DirectoryCachePoolGetString;
  DirectoryCachePool.OnFindVirtualFile:=@DirectoryCachePoolFindVirtualFile;
  DirectoryCachePool.OnGetUnitFromSet:=@DirectoryCachePoolGetUnitFromSet;
  DirectoryCachePool.OnGetCompiledUnitFromSet:=@DirectoryCachePoolGetCompiledUnitFromSet;
  DirectoryCachePool.OnIterateFPCUnitsFromSet:=@DirectoryCachePoolIterateFPCUnitsFromSet;
  DefineTree:=TDefineTree.Create;
  DefineTree.OnReadValue:=@DoOnDefineTreeReadValue;
  DefinePool:=TDefinePool.Create;
  SourceCache:=TCodeCache.Create;
  SourceCache.DirectoryCachePool:=DirectoryCachePool;
  if DefaultConfigCodeCache=nil then
    DefaultConfigCodeCache:=SourceCache;
  SourceChangeCache:=TSourceChangeCache.Create;
  SourceChangeCache.OnBeforeApplyChanges:=@BeforeApplyingChanges;
  SourceChangeCache.OnAfterApplyChanges:=@AfterApplyingChanges;
  Indenter:=TFullyAutomaticBeautifier.Create;
  Indenter.OnGetNestedComments:=@DoOnFABGetNestedComments;
  Indenter.OnGetExamples:=@DoOnFABGetExamples;
  Indenter.OnLoadFile:=@DoOnLoadFileForTool;
  GlobalValues:=TExpressionEvaluator.Create;
  OnFileExistsCached:=@DirectoryCachePool.FileExists;
  OnFileAgeCached:=@DirectoryCachePool.FileAge;
  DefineTree.DirectoryCachePool:=DirectoryCachePool;
  CompilerDefinesCache:=TCompilerDefinesCache.Create(nil);
  PPUCache:=TPPUTools.Create;
  FAddInheritedCodeToOverrideMethod:=true;
  FAdjustTopLineDueToComment:=true;
  FCatchExceptions:=true;

  FCompleteProperties:=true;
  FSetPropertyVariablename:='AValue';
  FSetPropertyVariableIsPrefix := false;
  FSetPropertyVariableUseConst := false;
  FAddInheritedCodeToOverrideMethod := true;

  FCursorBeyondEOL:=true;
  FIndentSize:=2;
  FJumpSingleLinePos:=50;
  FJumpSingleLinePos:=0;
  FSourceExtensions:='.pp;.pas;.p;.lpr;.lpk;.dpr;.dpk';
  FVisibleEditorLines:=20;
  FWriteExceptions:=true;
  FPascalTools:=TAVLTree.Create(@CompareCodeToolMainSources);
  FDirectivesTools:=TAVLTree.Create(@CompareDirectivesTreeSources);
  IdentifierList:=TIdentifierList.Create;
  IdentifierHistory:=TIdentifierHistoryList.Create;
  IdentifierList.History:=IdentifierHistory;
  DefaultLFMTrees:=TLFMTrees.Create;
end;

destructor TCodeToolManager.Destroy;
var
  e: TCodeToolManagerHandler;
begin
  {$IFDEF CTDEBUG}
  DebugLn('[TCodeToolManager.Destroy] A');
  {$ENDIF}
  FreeAndNil(GlobalValues);
  {$IFDEF CTDEBUG}
  DebugLn('[TCodeToolManager.Destroy] B');
  {$ENDIF}
  FreeAndNil(DefaultLFMTrees);
  FreeAndNil(Positions);
  FreeAndNil(IdentifierHistory);
  FreeAndNil(IdentifierList);
  FPascalTools.FreeAndClear;
  FreeAndNil(FPascalTools);
  FDirectivesTools.FreeAndClear;
  FreeAndNil(FDirectivesTools);
  FreeAndNil(PPUCache);
  FreeAndNil(FResourceTool);
  {$IFDEF CTDEBUG}
  DebugLn('[TCodeToolManager.Destroy] C');
  {$ENDIF}
  FreeAndNil(DefineTree);
  FreeAndNil(DefinePool);
  {$IFDEF CTDEBUG}
  DebugLn('[TCodeToolManager.Destroy] D');
  {$ENDIF}
  FreeAndNil(Indenter);
  FreeAndNil(SourceChangeCache);
  {$IFDEF CTDEBUG}
  DebugLn('[TCodeToolManager.Destroy] E');
  {$ENDIF}
  if DefaultConfigCodeCache=SourceCache then
    DefaultConfigCodeCache:=nil;
  FreeAndNil(SourceCache);
  if OnFileExistsCached=@DirectoryCachePool.FileExists then
    OnFileExistsCached:=nil;
  if OnFileAgeCached=@DirectoryCachePool.FileAge then
    OnFileAgeCached:=nil;
  FreeAndNil(DirectoryCachePool);
  FreeAndNil(CompilerDefinesCache);
  for e:=low(FHandlers) to high(FHandlers) do
    FreeAndNil(FHandlers[e]);
  {$IFDEF CTDEBUG}
  DebugLn('[TCodeToolManager.Destroy] F');
  {$ENDIF}
  inherited Destroy;
  {$IFDEF CTDEBUG}
  DebugLn('[TCodeToolManager.Destroy] END');
  {$ENDIF}
  {$IFDEF MEM_CHECK}
  CheckHeap('TCodeToolManager.Destroy END');
  {$ENDIF}
end;

procedure TCodeToolManager.Init(Config: TCodeToolsOptions);
var
  FPCDefines: TDefineTemplate;
  FPCSrcDefines: TDefineTemplate;
  LazarusSrcDefines: TDefineTemplate;
  CurFPCOptions: String;
  UnitSetCache: TFPCUnitSetCache;
  //CfgCache: TPCTargetConfigCache;

  procedure AddFPCOption(s: string);
  begin
    if s='' then exit;
    if CurFPCOptions<>'' then
      CurFPCOptions:=CurFPCOptions+' ';
    CurFPCOptions:=CurFPCOptions+s;
  end;

begin
  // set global values
  with GlobalValues do begin
    Variables[ExternalMacroStart+'LazarusSrcDir']:=Config.LazarusSrcDir;
    Variables[ExternalMacroStart+'FPCSrcDir']:=Config.FPCSrcDir;
    Variables[ExternalMacroStart+'LCLWidgetType']:=Config.LCLWidgetType;
    Variables[ExternalMacroStart+'ProjectDir']:=Config.ProjectDir;
  end;

  CompilerDefinesCache.ConfigCaches.Assign(Config.ConfigCaches);
  CompilerDefinesCache.SourceCaches.Assign(Config.SourceCaches);
  CompilerDefinesCache.TestFilename:=Config.TestPascalFile;
  if CompilerDefinesCache.TestFilename='' then
    CompilerDefinesCache.TestFilename:=GetTempFilename('fpctest.pas','');

  UnitSetCache:=CompilerDefinesCache.FindUnitSet(Config.FPCPath,
    Config.TargetOS,Config.TargetProcessor,Config.FPCOptions,Config.FPCSrcDir,
    true);
  // parse compiler settings, fpc sources
  UnitSetCache.Init;
  //CfgCache:=UnitSetCache.GetConfigCache(false);
  //if CfgCache.TargetOS<>CfgCache.RealTargetOS then
  //  debugln(['TCodeToolManager.Init TargetOS=',CfgCache.TargetOS,' RealTargetOS=',CfgCache.RealTargetOS]);
  //if CfgCache.TargetCPU<>CfgCache.RealTargetCPU then
  //  debugln(['TCodeToolManager.Init TargetCPU=',CfgCache.TargetCPU,' RealTargetCPU=',CfgCache.RealTargetCPU]);

  // save
  Config.ConfigCaches.Assign(CompilerDefinesCache.ConfigCaches);
  Config.SourceCaches.Assign(CompilerDefinesCache.SourceCaches);

  // create template for FPC settings
  FPCDefines:=CreateFPCTemplate(UnitSetCache,nil);
  DefineTree.Add(FPCDefines);

  // create template for FPC source directory
  FPCSrcDefines:=CreateFPCSourceTemplate(UnitSetCache,nil);
  DefineTree.Add(FPCSrcDefines);

  // create template for lazarus source directory
  LazarusSrcDefines:=DefinePool.CreateLazarusSrcTemplate('$(#LazarusSrcDir)',
                              '$(#LCLWidgetType)',Config.LazarusSrcOptions,nil);
  DefineTree.Add(LazarusSrcDefines);

  // create template for LCL project
  DefineTree.Add(DefinePool.CreateLCLProjectTemplate(
                 '$(#LazarusSrcDir)','$(#LCLWidgetType)','$(#ProjectDir)',nil));

  //debugln(['TCodeToolManager.Init defines: ',DefineTree.GetDefinesForVirtualDirectory.AsString]);
  //debugln(['TCodeToolManager.Init inc path rtl/system: ',GetIncludePathForDirectory(UnitSetCache.FPCSourceDirectory+'/rtl/bsd')]);
end;

procedure TCodeToolManager.SimpleInit(const ConfigFilename: string);
var
  Options: TCodeToolsOptions;
begin
  // setup the Options
  Options:=TCodeToolsOptions.Create;
  try
    // To not parse the FPC sources every time, the options are saved to a file.
    DebugLn(['TCodeToolManager.SimpleInit Config=',ConfigFilename]);
    if FileExistsUTF8(ConfigFilename) then
      Options.LoadFromFile(ConfigFilename);
    // use environment variables
    Options.InitWithEnvironmentVariables;
    // apply defaults
    if Options.FPCSrcDir='' then
      Options.FPCSrcDir:=ExpandFileNameUTF8('~/freepascal/fpc');
    if Options.LazarusSrcDir='' then
      Options.LazarusSrcDir:=ExpandFileNameUTF8('~/pascal/lazarus');
    DebugLn(['TCodeToolManager.SimpleInit PP=',Options.FPCPath,' FPCDIR=',Options.FPCSrcDir,' LAZARUSDIR=',Options.LazarusSrcDir,' FPCTARGET=',Options.TargetOS]);
    // init the codetools
    if not Options.UnitLinkListValid then
      debugln('Scanning FPC sources may take a while ...');
    Init(Options);

    // save the options and the FPC unit links results.
    Options.SaveToFile(ConfigFilename);
  finally
    Options.Free;
  end;
end;

procedure TCodeToolManager.BeginUpdate;
begin
  SourceChangeCache.BeginUpdate;
end;

function TCodeToolManager.EndUpdate: boolean;
begin
  Result:=SourceChangeCache.EndUpdate;
end;

function TCodeToolManager.GatherExternalChanges: boolean;
var
  Abort: Boolean;
begin
  Result:=true;
  if Assigned(OnGatherExternalChanges) then begin
    Abort:=false;
    OnGatherExternalChanges(Self,Abort);
    Result:=not Abort;
  end;
end;

function TCodeToolManager.FindFile(const ExpandedFilename: string): TCodeBuffer;
begin
  Result:=SourceCache.FindFile(ExpandedFilename);
end;

function TCodeToolManager.LoadFile(const ExpandedFilename: string;
  UpdateFromDisk, Revert: boolean): TCodeBuffer;
begin
  {$IFDEF CTDEBUG}
  DebugLn('>>>>>> [TCodeToolManager.LoadFile] ',ExpandedFilename,' Update=',dbgs(UpdateFromDisk),' Revert=',dbgs(Revert));
  {$ENDIF}
  if (not UpdateFromDisk) and (not Revert) then begin
    Result:=SourceCache.FindFile(ExpandedFilename);
    if (Result<>nil) and (not Result.IsDeleted) then exit;
  end;
  Result:=SourceCache.LoadFile(ExpandedFilename);
  if Result<>nil then begin
    if Revert then begin
      if not Result.Revert then
        Result:=nil;
    end else if UpdateFromDisk and Result.AutoRevertFromDisk
    and Result.FileNeedsUpdate then begin
      //debugln(['TCodeToolManager.LoadFile ',ExpandedFilename,' AutoRevert=',Result.AutoRevertFromDisk,' Modified=',Result.Modified,' NeedLoad=',Result.FileNeedsUpdate]);
      Result.Reload;
    end;
  end;
end;

function TCodeToolManager.CreateFile(const AFilename: string): TCodeBuffer;
begin
  Result:=SourceCache.CreateFile(AFilename);
  DirectoryCachePool.IncreaseFileTimeStamp;
  {$IFDEF CTDEBUG}
  DebugLn('****** TCodeToolManager.CreateFile "',AFilename,'" ',dbgs(Result<>nil));
  {$ENDIF}
end;

function TCodeToolManager.CreateTempFile(const AFilename: string): TCodeBuffer;
var
  i: Integer;
  TempFilename: string;
  CurName: String;
  CurExt: String;
begin
  TempFilename:=VirtualTempDir+PathDelim+AFilename;
  Result:=FindFile(TempFilename);
  if (Result<>nil) and (Result.ReferenceCount=0) then exit;
  CurName:=ExtractFileNameOnly(AFilename);
  CurExt:=ExtractFileExt(AFilename);
  i:=1;
  repeat
    TempFilename:=VirtualTempDir+PathDelim+CurName+IntToStr(i)+CurExt;
    Result:=FindFile(TempFilename);
    if (Result<>nil) and (Result.ReferenceCount=0) then exit;
    inc(i);
  until Result=nil;
  Result:=SourceCache.CreateFile(TempFilename);
  Result.IncrementRefCount;
end;

procedure TCodeToolManager.ReleaseTempFile(Buffer: TCodeBuffer);
begin
  Buffer.ReleaseRefCount;
end;

function TCodeToolManager.SaveBufferAs(OldBuffer: TCodeBuffer;
  const ExpandedFilename: string; out NewBuffer: TCodeBuffer): boolean;
begin
  Result:=SourceCache.SaveBufferAs(OldBuffer,ExpandedFilename,NewBuffer);
end;

function TCodeToolManager.FilenameHasSourceExt(
  const AFilename: string): boolean;
var i, CurExtStart, CurExtEnd, ExtStart, ExtLen: integer;
begin
  ExtStart:=length(AFilename);
  while (ExtStart>0) and (AFilename[ExtStart]<>'.')
  and (AFilename[ExtStart]<>PathDelim) do
    dec(ExtStart);
  if (ExtStart<1) or (AFilename[ExtStart]<>'.') then begin
    Result:=false;
    exit;
  end;
  ExtLen:=length(AFilename)-ExtStart+1;
  CurExtStart:=1;
  CurExtEnd:=CurExtStart;
  while CurExtEnd<=length(FSourceExtensions)+1 do begin
    if (CurExtEnd>length(FSourceExtensions))
    or (FSourceExtensions[CurExtEnd] in [':',';']) then begin
      // compare current extension with filename-extension
      if ExtLen=CurExtEnd-CurExtStart then begin
        i:=0;
        while (i<ExtLen) 
        and (UpChars[AFilename[i+ExtStart]]
            =UpChars[FSourceExtensions[CurExtStart+i]]) do
          inc(i);
        if i=ExtLen then begin
          Result:=true;
          exit;
        end;
      end;
      inc(CurExtEnd);
      CurExtStart:=CurExtEnd;
    end else
      inc(CurExtEnd);
  end;
  Result:=false;
end;

function TCodeToolManager.GetMainCode(Code: TCodeBuffer): TCodeBuffer;
var
  NewFile: TCodeBuffer;
begin
  // find MainCode (= the start source, e.g. a unit/program/package source)
  Result:=Code;
  if Result=nil then exit;
  // if this is an include file, find the top level source
  while (Result.LastIncludedByFile<>'') do begin
    NewFile:=SourceCache.LoadFile(Result.LastIncludedByFile);
    if (NewFile=nil) then begin
      Result.LastIncludedByFile:='';
      break;
    end;
    Result:=NewFile;
  end;
  if (not FilenameHasSourceExt(Result.Filename)) then begin
    NewFile:=FindCodeOfMainUnitHint(Result);
    if NewFile<>nil then Result:=NewFile;
  end;
  CreateScanner(Result);
end;

function TCodeToolManager.GetIncludeCodeChain(Code: TCodeBuffer;
  RemoveFirstCodesWithoutTool: boolean; out ListOfCodeBuffer: TFPList): boolean;
var
  OldCode: TCodeBuffer;
  NewCode: TCodeBuffer;
begin
  // find MainCode (= the start source, e.g. a unit/program/package source)
  Result:=false;
  ListOfCodeBuffer:=nil;
  if Code=nil then exit;
  
  Result:=true;
  ListOfCodeBuffer:=TFPList.Create;
  ListOfCodeBuffer.Add(Code);
  
  // if this is an include file, find the top level source
  while (Code.LastIncludedByFile<>'') do begin
    NewCode:=SourceCache.LoadFile(Code.LastIncludedByFile);
    if NewCode=nil then begin
      NewCode.LastIncludedByFile:='';
      break;
    end;
    Code:=NewCode;
    ListOfCodeBuffer.Insert(0,Code);
  end;

  if (not FilenameHasSourceExt(Code.Filename)) then begin
    OldCode:=Code;
    Code:=FindCodeOfMainUnitHint(OldCode);
    if Code<>OldCode then
      ListOfCodeBuffer.Insert(0,Code);
  end;

  if RemoveFirstCodesWithoutTool then begin
    while ListOfCodeBuffer.Count>0 do begin
      Code:=TCodeBuffer(ListOfCodeBuffer[0]);
      if FindCodeToolForSource(Code)<>nil then break;
      ListOfCodeBuffer.Delete(0);
    end;
    if ListOfCodeBuffer.Count=0 then begin
      ListOfCodeBuffer.Free;
      ListOfCodeBuffer:=nil;
      Result:=false;
      exit;
    end;
  end;
end;

function TCodeToolManager.FindCodeOfMainUnitHint(Code: TCodeBuffer
  ): TCodeBuffer;
var
  MainUnitFilename: string;
begin
  Result:=nil;
  if Code=nil then exit;
  //DebugLn('TCodeToolManager.FindCodeOfMainUnitHint ',Code.Filename);
  if not FindMainUnitHint(Code.Source,MainUnitFilename) then exit;
  if MainUnitFilename='' then exit;
  MainUnitFilename:=TrimFilename(MainUnitFilename);
  if (not FilenameIsAbsolute(MainUnitFilename))
  and (not Code.IsVirtual) then
    MainUnitFilename:=TrimFilename(ExtractFilePath(Code.Filename)+PathDelim
                                   +MainUnitFilename);
  //DebugLn('TCodeToolManager.FindCodeOfMainUnitHint B ');
  Result:=SourceCache.LoadFile(MainUnitFilename);
end;

procedure TCodeToolManager.CreateScanner(Code: TCodeBuffer);
begin
  if FilenameHasSourceExt(Code.Filename) and (Code.Scanner=nil) then begin
    // create a scanner for the unit/program
    Code.Scanner:=TLinkScanner.Create;
    Code.Scanner.OnGetInitValues:=@DoOnScannerGetInitValues;
    Code.Scanner.OnSetGlobalWriteLock:=@DoOnToolSetWriteLock;
    Code.Scanner.OnGetGlobalChangeSteps:=@DoOnToolGetChangeSteps;
    Code.Scanner.OnProgress:=@DoOnScannerProgress;
  end;
end;

procedure TCodeToolManager.ClearError;
begin
  fErrorMsg:='';
  fErrorCode:=nil;
  fErrorLine:=-1;
  fErrorTopLine:=0;
  FErrorId:=0;
  FErrorMsg := '';
  FErrorDbgMsg := '';
end;

procedure TCodeToolManager.ClearCurCodeTool;
begin
  ClearError;
  FCurCodeTool:=nil;
end;

function TCodeToolManager.ApplyChanges: boolean;
begin
  Result:=SourceChangeCache.Apply;
end;

function TCodeToolManager.SetGlobalValue(const VariableName,
  VariableValue: string): boolean;
var
  OldValue: string;
begin
  OldValue:=GlobalValues[VariableName];
  Result:=(OldValue<>VariableValue);
  if not Result then exit;
  GlobalValues[VariableName]:=VariableValue;
  DefineTree.ClearCache;
end;

function TCodeToolManager.GetUnitPathForDirectory(const Directory: string;
  UseCache: boolean): string;
begin
  if UseCache then
    Result:=DirectoryCachePool.GetString(Directory,ctdcsUnitPath,true)
  else
    Result:=DefineTree.GetUnitPathForDirectory(Directory);
end;

function TCodeToolManager.GetIncludePathForDirectory(const Directory: string;
  UseCache: boolean): string;
begin
  if UseCache then
    Result:=DirectoryCachePool.GetString(Directory,ctdcsIncludePath,true)
  else
    Result:=DefineTree.GetIncludePathForDirectory(Directory);
end;

function TCodeToolManager.GetSrcPathForDirectory(const Directory: string;
  UseCache: boolean): string;
begin
  if UseCache then
    Result:=DirectoryCachePool.GetString(Directory,ctdcsSrcPath,true)
  else
    Result:=DefineTree.GetSrcPathForDirectory(Directory);
end;

function TCodeToolManager.GetCompleteSrcPathForDirectory(
  const Directory: string; UseCache: boolean): string;
// returns the SrcPath + UnitPath + any CompiledSrcPath
var
  CurUnitPath: String;
  StartPos: Integer;
  EndPos: LongInt;
  CurSrcPath: String;
  CurUnitDir: String;
  CurCompiledSrcPath: String;
begin
  if UseCache then
    Result:=DirectoryCachePool.GetString(Directory,ctdcsCompleteSrcPath,true)
  else begin
    CurUnitPath:='.;'+GetUnitPathForDirectory(Directory);
    CurSrcPath:=GetSrcPathForDirectory(Directory);
    // for every unit path, get the CompiledSrcPath
    StartPos:=1;
    while StartPos<=length(CurUnitPath) do begin
      EndPos:=StartPos;
      while (EndPos<=length(CurUnitPath)) and (CurUnitPath[EndPos]<>';') do
        inc(EndPos);
      if EndPos>StartPos then begin
        CurUnitDir:=TrimFilename(copy(CurUnitPath,StartPos,EndPos-StartPos));
        if not FilenameIsAbsolute(CurUnitDir) then
          CurUnitDir:=TrimFilename(AppendPathDelim(Directory)+CurUnitDir);
        CurCompiledSrcPath:=CreateAbsoluteSearchPath(
                         GetCompiledSrcPathForDirectory(CurUnitDir),CurUnitDir);
        if CurCompiledSrcPath<>'' then
          CurSrcPath:=CurSrcPath+';'+CurCompiledSrcPath;
      end;
      StartPos:=EndPos+1;
    end;
    // combine unit, src and compiledsrc search path
    Result:=CurUnitPath+';'+CurSrcPath;
    // make it absolute, so the user need less string concatenations
    if FilenameIsAbsolute(Directory) then
      Result:=CreateAbsoluteSearchPath(Result,Directory);
    // trim the paths, remove doubles and empty paths
    Result:=MinimizeSearchPath(Result);
  end;
end;

function TCodeToolManager.GetPPUSrcPathForDirectory(const Directory: string
  ): string;
begin
  Result:=DefineTree.GetPPUSrcPathForDirectory(Directory);
end;

function TCodeToolManager.GetDCUSrcPathForDirectory(const Directory: string
  ): string;
begin
  Result:=DefineTree.GetDCUSrcPathForDirectory(Directory);
end;

function TCodeToolManager.GetCompiledSrcPathForDirectory(
  const Directory: string; UseCache: boolean): string;
begin
  Result:=DefineTree.GetCompiledSrcPathForDirectory(Directory);
end;

function TCodeToolManager.GetNestedCommentsFlagForFile(
  const Filename: string): boolean;
var
  Directory: String;
begin
  Result:=false;
  Directory:=ExtractFilePath(Filename);
  // check pascal compiler is FPC and mode is FPC or OBJFPC
  if GetPascalCompilerForDirectory(Directory)<>pcFPC then exit;
  if not (GetCompilerModeForDirectory(Directory) in [cmFPC,cmOBJFPC]) then exit;
  Result:=true;
end;

function TCodeToolManager.GetPascalCompilerForDirectory(const Directory: string
  ): TPascalCompiler;
var
  Evaluator: TExpressionEvaluator;
begin
  Result:=pcFPC;
  Evaluator:=DefineTree.GetDefinesForDirectory(Directory,true);
  if Evaluator=nil then exit;
  Result:=TLinkScanner.GetPascalCompiler(Evaluator);
end;

function TCodeToolManager.GetCompilerModeForDirectory(const Directory: string
  ): TCompilerMode;
var
  Evaluator: TExpressionEvaluator;
  cm: TCompilerMode;
begin
  Result:=cmFPC;
  Evaluator:=DefineTree.GetDefinesForDirectory(Directory,true);
  if Evaluator=nil then exit;
  for cm:=Succ(Low(TCompilerMode)) to High(TCompilerMode) do
    if Evaluator.IsDefined(CompilerModeVars[cm]) then
      Result:=cm;
end;

function TCodeToolManager.GetCompiledSrcExtForDirectory(const Directory: string
  ): string;
begin
  Result:='.ppu';
end;

function TCodeToolManager.FindUnitInUnitLinks(const Directory, AUnitName: string
  ): string;
begin
  Result:=DirectoryCachePool.FindUnitInUnitLinks(Directory,AUnitName);
end;

function TCodeToolManager.GetUnitLinksForDirectory(const Directory: string;
  UseCache: boolean): string;
var
  Evaluator: TExpressionEvaluator;
begin
  if UseCache then begin
    Result:=DirectoryCachePool.GetString(Directory,ctdcsUnitLinks,true)
  end else begin
    Result:='';
    Evaluator:=DefineTree.GetDefinesForDirectory(Directory,true);
    if Evaluator=nil then exit;
    Result:=Evaluator[UnitLinksMacroName];
  end;
end;

function TCodeToolManager.FindUnitInUnitSet(const Directory, AUnitName: string
  ): string;
begin
  Result:=DirectoryCachePool.FindUnitInUnitSet(Directory,AUnitName);
end;

function TCodeToolManager.GetUnitSetIDForDirectory(const Directory: string;
  UseCache: boolean): string;
var
  Evaluator: TExpressionEvaluator;
begin
  if UseCache then begin
    Result:=DirectoryCachePool.GetString(Directory,ctdcsUnitSet,true)
  end else begin
    Result:='';
    Evaluator:=DefineTree.GetDefinesForDirectory(Directory,true);
    if Evaluator=nil then exit;
    Result:=Evaluator[UnitSetMacroName];
  end;
end;

function TCodeToolManager.GetUnitSetForDirectory(const Directory: string
  ): TFPCUnitSetCache;
var
  ID: String;
  Changed: boolean;
begin
  Result:=nil;
  ID:=GetUnitSetIDForDirectory(Directory,true);
  if ID='' then exit;
  Changed:=false;
  Result:=CompilerDefinesCache.FindUnitSetWithID(ID,Changed,false);
  if Changed then Result:=nil;
end;

function TCodeToolManager.GetFPCUnitPathForDirectory(const Directory: string;
  UseCache: boolean): string;
var
  Evaluator: TExpressionEvaluator;
begin
  if UseCache then begin
    Result:=DirectoryCachePool.GetString(Directory,ctdcsFPCUnitPath,true)
  end else begin
    Result:='';
    Evaluator:=DefineTree.GetDefinesForDirectory(Directory,true);
    if Evaluator=nil then exit;
    Result:=Evaluator[FPCUnitPathMacroName];
  end;
end;

procedure TCodeToolManager.GetFPCVersionForDirectory(const Directory: string;
  out FPCVersion, FPCRelease, FPCPatch: integer);
var
  Evaluator: TExpressionEvaluator;
  FPCFullVersion: LongInt;
begin
  FPCVersion:=0;
  FPCRelease:=0;
  FPCPatch:=0;
  Evaluator:=DefineTree.GetDefinesForDirectory(Directory,true);
  if Evaluator=nil then exit;
  FPCFullVersion:=StrToIntDef(Evaluator['FPC_FULLVERSION'],0);
  FPCVersion:=FPCFullVersion div 10000;
  FPCRelease:=(FPCFullVersion div 100) mod 100;
  FPCPatch:=FPCFullVersion mod 100;
end;

function TCodeToolManager.GetPCVersionForDirectory(const Directory: string
  ): integer;
var
  Kind: TPascalCompiler;
begin
  Result:=GetPCVersionForDirectory(Directory,Kind);
  if Kind=pcFPC then ;
end;

function TCodeToolManager.GetPCVersionForDirectory(const Directory: string; out
  Kind: TPascalCompiler): integer;
var
  Evaluator: TExpressionEvaluator;
  s: String;
begin
  Result:=0;
  Kind:=pcFPC;
  Evaluator:=DefineTree.GetDefinesForDirectory(Directory,true);
  if Evaluator=nil then
    exit;
  s:=Evaluator['FPC_FULLVERSION'];
  if s<>'' then
    exit(StrToIntDef(s,0));
  s:=Evaluator['PAS2JS_FULLVERSION'];
  if s<>'' then begin
    Kind:=pcPas2js;
    exit(StrToIntDef(s,0));
  end;
end;

function TCodeToolManager.GetNamespacesForDirectory(const Directory: string;
  UseCache: boolean): string;
var
  Evaluator: TExpressionEvaluator;
  FPCFullVersion: LongInt;
  UnitSet: TFPCUnitSetCache;
begin
  if UseCache then begin
    Result:=DirectoryCachePool.GetString(Directory,ctdcsNamespaces,true)
  end else begin
    Result:='';
    Evaluator:=DefineTree.GetDefinesForDirectory(Directory,true);
    if Evaluator=nil then exit;
    if Evaluator.IsDefined('PAS2JS') then
      Result:=Evaluator[NamespacesMacroName]
    else begin
      FPCFullVersion:=StrToIntDef(Evaluator['FPC_FULLVERSION'],0);
      if FPCFullVersion>=30101 then
        Result:=Evaluator[NamespacesMacroName];
    end;
    // add default unit scopes from compiler cfg
    UnitSet:=GetUnitSetForDirectory(Directory);
    if UnitSet<>nil then
      Result:=MergeWithDelimiter(Result,UnitSet.GetUnitScopes,';');
  end;
end;

procedure TCodeToolManager.FreeListOfPCodeXYPosition(var List: TFPList);
begin
  CodeCache.FreeListOfPCodeXYPosition(List);
  List:=nil;
end;

procedure TCodeToolManager.FreeTreeOfPCodeXYPosition(var Tree: TAVLTree);
begin
  CodeCache.FreeTreeOfPCodeXYPosition(Tree);
  Tree:=nil;
end;

function TCodeToolManager.CreateTreeOfPCodeXYPosition: TAVLTree;
begin
  Result:=CodeCache.CreateTreeOfPCodeXYPosition;
end;

procedure TCodeToolManager.AddListToTreeOfPCodeXYPosition(SrcList: TFPList;
  DestTree: TAVLTree; ClearList, CreateCopies: boolean);
begin
  CodeCache.AddListToTreeOfPCodeXYPosition(SrcList,DestTree,ClearList,CreateCopies);
end;

function TCodeToolManager.Explore(Code: TCodeBuffer;
  out ACodeTool: TCodeTool; WithStatements: boolean; OnlyInterface: boolean
  ): boolean;
begin
  Result:=false;
  ACodeTool:=nil;
  try
    if InitCurCodeTool(Code) then begin
      ACodeTool:=FCurCodeTool;
      FCurCodeTool.Explore(WithStatements,OnlyInterface);
      Result:=true;
    end;
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.InitCurCodeTool(Code: TCodeBuffer): boolean;
var MainCode: TCodeBuffer;
begin
  Result:=false;
  ClearCurCodeTool;
  MainCode:=GetMainCode(Code);
  if MainCode=nil then begin
    ClearError;
    FErrorLine:=1;
    FErrorColumn:=1;
    fErrorCode:=Code;
    if Code = nil then
    begin
      fErrorMsg:='TCodeToolManager.InitCurCodeTool Code=nil'
    end
    else begin
      fErrorMsg:='unit of include file is not known (hint: open and explore unit first)';
    end;
    exit;
  end;
  if MainCode.Scanner=nil then begin
    FErrorMsg:=Format(ctsNoScannerFound,[MainCode.Filename]);
    exit;
  end;
  FCurCodeTool:=TCodeTool(GetCodeToolForSource(MainCode,false,true));
  FCurCodeTool.ErrorPosition.Code:=nil;
  {$IFDEF CTDEBUG}
  DebugLn('[TCodeToolManager.InitCurCodeTool] ',Code.Filename,' ',dbgs(Code.SourceLength));
  {$ENDIF}
  Result:=(FCurCodeTool.Scanner<>nil);
  if not Result then begin
    fErrorCode:=MainCode;
    fErrorMsg:=ctsNoScannerAvailable;
  end;
end;

function TCodeToolManager.InitResourceTool: boolean;
begin
  ClearError;
  Result:=true;
end;

procedure TCodeToolManager.ClearPositions;
begin
  if Positions=nil then
    Positions:=TCodeXYPositions.Create
  else
    Positions.Clear;
end;

function TCodeToolManager.HandleException(AnException: Exception): boolean;
var
  ErrorSrcTool: TCustomCodeTool;
  DirtyPos: Integer;
  ErrorDirTool: TCompilerDirectivesTree;
begin
  ClearError;
  fErrorMsg:=AnException.Message;
  if (AnException is ELinkScannerError) then begin
    // link scanner error
    FErrorId:=ELinkScannerError(AnException).Id;
    if AnException is ELinkScannerConsistency then
      DumpExceptionBackTrace;
    DirtyPos:=0;
    if AnException is ELinkScannerEditError then begin
      fErrorCode:=TCodeBuffer(ELinkScannerEditError(AnException).Buffer);
      if fErrorCode<>nil then
        DirtyPos:=ELinkScannerEditError(AnException).BufferPos;
    end else begin
      fErrorCode:=TCodeBuffer(ELinkScannerError(AnException).Sender.Code);
      DirtyPos:=ELinkScannerError(AnException).Sender.SrcPos;
    end;
    if (fErrorCode<>nil) and (DirtyPos>0) then begin
      fErrorCode.AbsoluteToLineCol(DirtyPos,fErrorLine,fErrorColumn);
    end;
  end else if (AnException is ECodeToolError) then begin
    // codetool error
    ErrorSrcTool:=ECodeToolError(AnException).Sender;
    FErrorId:=ECodeToolError(AnException).Id;
    if ErrorSrcTool.ErrorNicePosition.Code<>nil then begin
      fErrorCode:=ErrorSrcTool.ErrorNicePosition.Code;
      fErrorColumn:=ErrorSrcTool.ErrorNicePosition.X;
      fErrorLine:=ErrorSrcTool.ErrorNicePosition.Y;
    end else begin
      fErrorCode:=ErrorSrcTool.ErrorPosition.Code;
      fErrorColumn:=ErrorSrcTool.ErrorPosition.X;
      fErrorLine:=ErrorSrcTool.ErrorPosition.Y;
    end;
  end else if (AnException is ECDirectiveParserException) then begin
    // Compiler directive parser error
    FErrorId:=ECDirectiveParserException(AnException).Id;
    ErrorDirTool:=ECDirectiveParserException(AnException).Sender;
    fErrorCode:=ErrorDirTool.Code;
  end else if (AnException is ESourceChangeCacheError) then begin
    // SourceChangeCache error
    FErrorId:=ESourceChangeCacheError(AnException).Id;
  end else if (AnException is ECodeToolManagerError) then begin
    // CodeToolManager error
    FErrorId:=ECodeToolManagerError(AnException).Id;
  end else begin
    // unknown exception
    DumpExceptionBackTrace;
    FErrorMsg:=AnException.ClassName+': '+FErrorMsg;
    if FCurCodeTool<>nil then begin
      fErrorCode:=FCurCodeTool.ErrorPosition.Code;
      fErrorColumn:=FCurCodeTool.ErrorPosition.X;
      fErrorLine:=FCurCodeTool.ErrorPosition.Y;
    end;
    FErrorId:=20170421202914;
  end;

  SourceChangeCache.Clear;

  // adjust error topline
  AdjustErrorTopLine;
  // write error
  WriteError;
  // raise or catch
  if not FCatchExceptions then raise AnException;
  Result:=false;
end;

procedure TCodeToolManager.AdjustErrorTopLine;
begin
  // adjust error topline
  if (fErrorCode<>nil) and (fErrorTopLine<1) then begin
    fErrorTopLine:=fErrorLine;
    if (fErrorTopLine>0) and (JumpSingleLinePos>0) then begin
      dec(fErrorTopLine,VisibleEditorLines*JumpSingleLinePos div 100);
      if fErrorTopLine<1 then fErrorTopLine:=1;
    end;
  end;
end;

procedure TCodeToolManager.WriteError;
begin
  if FWriteExceptions then begin
    FErrorDbgMsg:='### TCodeToolManager.HandleException: ['+IntToStr(FErrorId)+'] "'+ErrorMessage+'"';
    if ErrorLine>0 then FErrorDbgMsg+=' at Line='+DbgS(ErrorLine);
    if ErrorColumn>0 then FErrorDbgMsg+=' Col='+DbgS(ErrorColumn);
    if ErrorCode<>nil then FErrorDbgMsg+=' in "'+ErrorCode.Filename+'"';
    Debugln(FErrorDbgMsg);
    {$IFDEF CTDEBUG}
    WriteDebugReport(true,false,false,false,false,false);
    {$ENDIF}
  end;
end;

function TCodeToolManager.CheckSyntax(Code: TCodeBuffer;
  out NewCode: TCodeBuffer; out NewX, NewY, NewTopLine: integer;
  out ErrorMsg: string): boolean;
// returns true on syntax correct
var
  ACodeTool: TCodeTool;
begin
  Result:=Explore(Code,ACodeTool,true);
  if ACodeTool=nil then ;
  NewCode:=ErrorCode;
  NewX:=ErrorColumn;
  NewY:=ErrorLine;
  NewTopLine:=ErrorTopLine;
  ErrorMsg:=ErrorMessage;
end;

function TCodeToolManager.ExploreDirectives(Code: TCodeBuffer; out
  ADirectivesTool: TDirectivesTool): boolean;
begin
  Result:=false;
  ADirectivesTool:=nil;
  try
    if InitCurDirectivesTool(Code) then begin
      ADirectivesTool:=FCurDirectivesTool;
      FCurDirectivesTool.Parse;
      Result:=true;
    end;
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.ExploreUnitDirectives(Code: TCodeBuffer; out
  aScanner: TLinkScanner): boolean;
begin
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.ExploreUnitDirectives A ',dbgs(FCurCodeTool.Scanner<>nil));
  {$ENDIF}
  try
    aScanner:=FCurCodeTool.Scanner;
    if not aScanner.StoreDirectives then
      aScanner.DemandStoreDirectives;
    aScanner.Scan(lsrEnd,true);
    Result:=true;
  except
    on e: Exception do Result:=HandleException(e);
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.ExploreUnitDirectives END ');
  {$ENDIF}
end;

function TCodeToolManager.JumpToMethod(Code: TCodeBuffer; X, Y: integer; out
  NewCode: TCodeBuffer; out NewX, NewY, NewTopLine, BlockTopLine,
  BlockBottomLine: integer; out RevertableJump: boolean): boolean;
var
  CursorPos: TCodeXYPosition;
  NewPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.JumpToMethod A ',Code.Filename,' x=',dbgs(x),' y=',dbgs(y));
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.JumpToMethod B ',dbgs(FCurCodeTool.Scanner<>nil));
  {$ENDIF}
  try
    Result:=FCurCodeTool.FindJumpPoint(CursorPos,NewPos,NewTopLine,
                                       BlockTopLine,BlockBottomLine,RevertableJump);
    if Result then begin
      NewX:=NewPos.X;
      NewY:=NewPos.Y;
      NewCode:=NewPos.Code;
    end;
  except
    on e: Exception do Result:=HandleException(e);
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.JumpToMethod END ');
  {$ENDIF}
end;

function TCodeToolManager.FindProcDeclaration(Code: TCodeBuffer;
  CleanDef: string; out Tool: TCodeTool; out Node: TCodeTreeNode;
  Attr: TProcHeadAttributes): boolean;
var
  Paths: TStringList;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn(['TCodeToolManager.FindProcDeclaration A ',Code.Filename,' CleanDef=',CleanDef]);
  {$ENDIF}
  Tool:=nil;
  Node:=nil;
  if not InitCurCodeTool(Code) then exit;
  Tool:=FCurCodeTool;
  Paths:=TStringList.Create;
  try
    Paths.Add(CleanDef);
    try
      FCurCodeTool.BuildTree(lsrInitializationStart);
      Node:=FCurCodeTool.FindSubProcPath(Paths,Attr,false);
      Result:=Node<>nil;
    except
      on e: Exception do Result:=HandleException(e);
    end;
  finally
    Paths.Free;
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindProcDeclaration END ');
  {$ENDIF}
end;

function TCodeToolManager.FindDeclaration(Code: TCodeBuffer; X, Y: integer; out
  NewCode: TCodeBuffer; out NewX, NewY, NewTopLine, BlockTopLine,
  BlockBottomLine: integer; Flags: TFindSmartFlags): boolean;
var
  CursorPos: TCodeXYPosition;
  NewPos: TCodeXYPosition;
  NewTool: TFindDeclarationTool;
  NewNode: TCodeTreeNode;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn(['TCodeToolManager.FindDeclaration A ',Code.Filename,' x=',x,' y=',y]);
  {$ENDIF}
  if not InitCurCodeTool(Code) then begin
    {$IFDEF VerboseFindDeclarationFail}
    debugln(['TCodeToolManager.FindDeclaration InitCurCodeTool failed']);
    {$ENDIF}
    exit;
  end;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindDeclaration B ',dbgs(FCurCodeTool.Scanner<>nil));
  {$ENDIF}
  try
    {$IFDEF DoNotHandleFindDeclException}
    DebugLn('TCodeToolManager.FindDeclaration NOT HANDLING EXCEPTIONS');
    RaiseUnhandableExceptions:=true;
    {$ENDIF}
    Result:=FCurCodeTool.FindDeclaration(CursorPos,Flags,NewTool,NewNode,
                                         NewPos,NewTopLine,BlockTopLine,BlockBottomLine);
    if Result then begin
      NewX:=NewPos.X;
      NewY:=NewPos.Y;
      NewCode:=NewPos.Code;
      if (NewTool=nil) and (NewNode<>nil) then ;
      {$IFDEF CTDEBUG}
      debugln(['TCodeToolManager.FindDeclaration ',Dbgs(NewPos)]);
      {$ENDIF}
    end;
  {$IFDEF DoNotHandleFindDeclException}
 // finally
 //   RaiseUnhandableExceptions:=false;
 // end;
  {$ELSE}
  except
    on e: Exception do begin
      Result:=HandleException(e);
      {$IFDEF VerboseFindDeclarationFail}
      if not Result then
        debugln(['TCodeToolManager.FindDeclaration Exception=',e.Message]);
      {$ENDIF}
    end;
  end;
  {$ENDIF}
  {$IFDEF VerboseFindDeclarationFail}
  if not Result then begin
    debugln(['TCodeToolManager.FindDeclaration FAILED at ',dbgs(CursorPos)]);
  end;
  {$ENDIF}
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindDeclaration END ');
  {$ENDIF}
end;

function TCodeToolManager.FindDeclarationOfIdentifier(Code: TCodeBuffer;
  X,Y: integer; Identifier: PChar; out NewCode: TCodeBuffer; out NewX, NewY,
  NewTopLine: integer): boolean;
var
  CursorPos: TCodeXYPosition;
  NewPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn(['TCodeToolManager.FindDeclarationOfIdentifier A ',Code.Filename,' x=',x,' y=',y,' Identifier=',GetIdentifier(Identifier)]);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindDeclarationOfIdentifier B ',dbgs(FCurCodeTool.Scanner<>nil));
  {$ENDIF}
  try
    {$IFDEF DoNotHandleFindDeclException}
    DebugLn('TCodeToolManager.FindDeclarationOfIdentifier NOT HANDLING EXCEPTIONS');
    RaiseUnhandableExceptions:=true;
    {$ENDIF}
    Result:=FCurCodeTool.FindDeclarationOfIdentifier(CursorPos,Identifier,NewPos,NewTopLine);
    if Result then begin
      NewX:=NewPos.X;
      NewY:=NewPos.Y;
      NewCode:=NewPos.Code;
    end;
 // {$IFDEF DoNotHandleFindDeclException}
 // finally
 //   RaiseUnhandableExceptions:=false;
 // end;
 // {$ELSE}
  except
    on e: Exception do Result:=HandleException(e);
  end;
  {$ENDIF}
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindDeclarationOfIdentifier END ');
  {$ENDIF}
end;

function TCodeToolManager.FindSmartHint(Code: TCodeBuffer; X, Y: integer;
  Flags: TFindSmartFlags): string;
var
  CursorPos: TCodeXYPosition;
begin
  Result:='';
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindSmartHint A ',Code.Filename,' x=',dbgs(x),' y=',dbgs(y));
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindSmartHint B ',dbgs(FCurCodeTool.Scanner<>nil));
  {$ENDIF}
  try
    Result:=FCurCodeTool.FindSmartHint(CursorPos,Flags);
  except
    on e: Exception do HandleException(e);
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindSmartHint END ');
  {$ENDIF}
end;

function TCodeToolManager.FindDeclarationInInterface(Code: TCodeBuffer;
  const Identifier: string; out NewCode: TCodeBuffer; out NewX, NewY,
  NewTopLine, BlockTopLine, BlockBottomLine: integer): boolean;
var
  NewPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindDeclarationInInterface A ',Code.Filename,' Identifier=',Identifier);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindDeclarationInInterface B ',dbgs(FCurCodeTool.Scanner<>nil));
  {$ENDIF}
  try
    Result:=FCurCodeTool.FindDeclarationInInterface(Identifier,NewPos,
                                                    NewTopLine,BlockTopLine,BlockBottomLine);
    if Result then begin
      NewX:=NewPos.X;
      NewY:=NewPos.Y;
      NewCode:=NewPos.Code;
    end;
  except
    on e: Exception do HandleException(e);
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindDeclarationInInterface END ');
  {$ENDIF}
end;

function TCodeToolManager.FindDeclarationInInterface(Code: TCodeBuffer;
  const Identifier: string; out NewCode: TCodeBuffer; out NewX, NewY,
  NewTopLine: integer): boolean;
var
  BlockTopLine, BlockBottomLine: integer;
begin
  Result := FindDeclarationInInterface(Code, Identifier, NewCode, NewX, NewY, NewTopLine,
    BlockTopLine, BlockBottomLine);
end;

function TCodeToolManager.FindDeclarationWithMainUsesSection(Code: TCodeBuffer;
  const Identifier: string; out NewCode: TCodeBuffer;
  out NewX, NewY, NewTopLine: integer): Boolean;
var
  NewPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindDeclarationWithMainUsesSection A ',Code.Filename,' Identifier=',Identifier);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindDeclarationWithMainUsesSection(Identifier,NewPos,
                                                            NewTopLine);
    if Result then begin
      NewX:=NewPos.X;
      NewY:=NewPos.Y;
      NewCode:=NewPos.Code;
    end;
  except
    on e: Exception do HandleException(e);
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindDeclarationInInterface END ');
  {$ENDIF}
end;

function TCodeToolManager.FindDeclarationAndOverload(Code: TCodeBuffer; X,
  Y: integer; out ListOfPCodeXYPosition: TFPList;
  Flags: TFindDeclarationListFlags): boolean;
var
  CursorPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindDeclarationAndOverload A ',Code.Filename,' x=',dbgs(x),' y=',dbgs(y));
  {$ENDIF}
  ListOfPCodeXYPosition:=nil;
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindDeclarationAndOverload B ',dbgs(FCurCodeTool.Scanner<>nil));
  {$ENDIF}
  try
    Result:=FCurCodeTool.FindDeclarationAndOverload(CursorPos,
                                                    ListOfPCodeXYPosition,Flags);
  except
    on e: Exception do Result:=HandleException(e);
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindDeclarationAndOverload END ');
  {$ENDIF}
end;

function TCodeToolManager.FindMainDeclaration(Code: TCodeBuffer; X, Y: integer;
  out NewCode: TCodeBuffer; out NewX, NewY, NewTopLine: integer): boolean;
var
  CursorPos: TCodeXYPosition;
  NewPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindMainDeclaration A ',Code.Filename,' x=',dbgs(x),' y=',dbgs(y));
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    Result:=FCurCodeTool.FindMainDeclaration(CursorPos,NewPos,NewTopLine);
    if Result then begin
      NewX:=NewPos.X;
      NewY:=NewPos.Y;
      NewCode:=NewPos.Code;
    end;
  except
    on e: Exception do Result:=HandleException(e);
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindMainDeclaration END ');
  {$ENDIF}
end;

function TCodeToolManager.FindDeclarationOfPropertyPath(Code: TCodeBuffer;
  const PropertyPath: string; out NewCode: TCodeBuffer; out NewX, NewY,
  NewTopLine: integer): Boolean;
var
  NewPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindDeclarationOfPropertyPath A ',Code.Filename,' Path="',PropertyPath,'"');
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindDeclarationOfPropertyPath(PropertyPath,
                                                       NewPos,NewTopLine);
    if Result then begin
      NewX:=NewPos.X;
      NewY:=NewPos.Y;
      NewCode:=NewPos.Code;
    end;
  except
    on e: Exception do Result:=HandleException(e);
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindDeclarationOfPropertyPath END ');
  {$ENDIF}
end;

function TCodeToolManager.FindFileAtCursor(Code: TCodeBuffer; X, Y: integer;
  out Found: TFindFileAtCursorFlag; out FoundFilename: string;
  Allowed: TFindFileAtCursorFlags; StartPos: PCodeXYPosition): boolean;
var
  CursorPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindFileAtCursor A ',Code.Filename,' x=',dbgs(x),' y=',dbgs(y));
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    Result:=FCurCodeTool.FindFileAtCursor(CursorPos,Found,FoundFilename,
      Allowed,StartPos);
  except
    on e: Exception do HandleException(e);
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindFileAtCursor END ');
  {$ENDIF}
end;

function TCodeToolManager.FindCodeContext(Code: TCodeBuffer; X, Y: integer; out
  CodeContexts: TCodeContextInfo): boolean;
var
  CursorPos: TCodeXYPosition;
begin
  Result:=false;
  CodeContexts:=nil;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindCodeContext A ',Code.Filename,' x=',dbgs(x),' y=',dbgs(y));
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    Result:=FCurCodeTool.FindCodeContext(CursorPos,CodeContexts);
  except
    on e: Exception do HandleException(e);
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindCodeContext END ');
  {$ENDIF}
end;

function TCodeToolManager.ExtractProcedureHeader(Code: TCodeBuffer; X,
  Y: integer; Attributes: TProcHeadAttributes; out ProcHead: string): boolean;
var
  CursorPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.ExtractProcedureHeader A ',Code.Filename,' x=',dbgs(x),' y=',dbgs(y));
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    Result:=FCurCodeTool.ExtractProcedureHeader(CursorPos,Attributes,ProcHead);
  except
    on e: Exception do HandleException(e);
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.ExtractProcedureHeader END ');
  {$ENDIF}
end;

function TCodeToolManager.HasInterfaceRegisterProc(Code: TCodeBuffer;
  out HasRegisterProc: boolean): boolean;
begin
  Result:=false;
  HasRegisterProc:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.HasInterfaceRegisterProc A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.HasInterfaceRegisterProc(HasRegisterProc);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.GatherUnitNames(Code: TCodeBuffer): Boolean;
var
  CursorPos: TCodeXYPosition;
begin
  Result := False;
  if not InitCurCodeTool(Code) then exit;
  if IdentifierList<>nil then IdentifierList.Clear;
  CursorPos.X := 0;
  CursorPos.Y := 0;
  CursorPos.Code := Code;
  try
    Result := FCurCodeTool.GatherAvailableUnitNames(CursorPos, IdentifierList);
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.GetApplicationScaledStatement(Code: TCodeBuffer;
  var AScaled: Boolean): boolean;
var
  StartPos, BooleanConstStartPos, EndPos: integer;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GetApplicationScaledStatement A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindApplicationScaledStatement(StartPos,
                                                    BooleanConstStartPos,EndPos);

    Result:=FCurCodeTool.GetApplicationScaledStatement(BooleanConstStartPos,
                                                      EndPos,AScaled);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.GatherIdentifiers(Code: TCodeBuffer; X, Y: integer
  ): boolean;
var
  CursorPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GatherIdentifiers A ',Code.Filename,' x=',dbgs(x),' y=',dbgs(y));
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  if IdentifierList<>nil then IdentifierList.Clear;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GatherIdentifiers B ',dbgs(FCurCodeTool.Scanner<>nil));
  {$ENDIF}
  try
    FIdentifierListUpdating:=true;
    try
      Result:=FCurCodeTool.GatherIdentifiers(CursorPos,IdentifierList);
    finally
      FIdentifierListUpdating:=false;
    end;
  except
    on e: Exception do HandleException(e);
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GatherIdentifiers END ');
  {$ENDIF}
end;

function TCodeToolManager.GetIdentifierAt(Code: TCodeBuffer; X, Y: integer; out
  Identifier: string): boolean;
var
  CleanPos: integer;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GetIdentifierAt A ',Code.Filename,' x=',dbgs(x),' y=',dbgs(y));
  {$ENDIF}
  Code.LineColToPosition(Y,X,CleanPos);
  if (CleanPos>0) and (CleanPos<=Code.SourceLength) then begin
    Identifier:=GetIdentifier(@Code.Source[CleanPos]);
    Result:=true;
  end else begin
    Identifier:='';
    Result:=false;
  end;
end;

function TCodeToolManager.IdentItemCheckHasChilds(IdentItem: TIdentifierListItem
  ): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.IdentItemCheckHasChilds A ');
  {$ENDIF}
  try
    IdentItem.CheckHasChilds;
    Result:=true;
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.FindAbstractMethods(Code: TCodeBuffer; X, Y: integer;
  out ListOfPCodeXYPosition: TFPList; SkipAbstractsInStartClass: boolean): boolean;
var
  CursorPos: TCodeXYPosition;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindRedefinitions A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  ListOfPCodeXYPosition:=nil;
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    Result:=FCurCodeTool.FindAbstractMethods(CursorPos,ListOfPCodeXYPosition,
                                             SkipAbstractsInStartClass);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.GetValuesOfCaseVariable(Code: TCodeBuffer; X,
  Y: integer; List: TStrings; WithTypeDefIfScoped: boolean): boolean;
var
  CursorPos: TCodeXYPosition;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GetValuesOfCaseVariable A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    Result:=FCurCodeTool.GetValuesOfCaseVariable(CursorPos,List,WithTypeDefIfScoped);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.GatherOverloads(Code: TCodeBuffer; X, Y: integer; out
  Graph: TDeclarationOverloadsGraph): boolean;
var
  NewCode: TCodeBuffer;
  NewX, NewY, NewTopLine: integer;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GatherOverloads A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  Graph:=nil;
  if not FindMainDeclaration(Code,X,Y,NewCode,NewX,NewY,NewTopLine)
  then begin
    DebugLn('TCodeToolManager.GatherOverloads unable to FindMainDeclaration ',Code.Filename,' x=',dbgs(x),' y=',dbgs(y));
    exit;
  end;
  if NewTopLine=0 then ;
  if not InitCurCodeTool(Code) then exit;
  try
    Graph:=TDeclarationOverloadsGraph.Create;
    Graph.OnGetCodeToolForBuffer:=@DoOnGetCodeToolForBuffer;
    Result:=Graph.Init(NewCode,NewX,NewY);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FindReferences(IdentifierCode: TCodeBuffer; X,
  Y: integer; SearchInCode: TCodeBuffer; SkipComments: boolean;
  var ListOfPCodeXYPosition: TFPList; var Cache: TFindIdentifierReferenceCache
  ): boolean;
var
  CursorPos: TCodeXYPosition;
  NewTopLine: integer;
  ImplementationNode: TCodeTreeNode;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  if Cache=nil then
    DebugLn('TCodeToolManager.FindReferences A ',IdentifierCode.Filename,' x=',dbgs(x),' y=',dbgs(y),' SearchInCode=',SearchInCode.Filename)
  else
    debugln(['TCodeToolManager.FindReferences A SearchInCode=',SearchInCode.Filename]);
  {$ENDIF}
  ListOfPCodeXYPosition:=nil;
  if Cache=nil then
    Cache:=TFindIdentifierReferenceCache.Create;
  if (Cache.SourcesChangeStep=SourceCache.ChangeStamp)
  and (Cache.SourcesChangeStep<>CTInvalidChangeStamp64)
  and (Cache.FilesChangeStep=FileStateCache.TimeStamp)
  and (Cache.FilesChangeStep<>CTInvalidChangeStamp64)
  and (Cache.InitValuesChangeStep=DefineTree.ChangeStep)
  and (Cache.InitValuesChangeStep<>CTInvalidChangeStamp)
  and (Cache.IdentifierCode=IdentifierCode) and (Cache.X=X) and (Cache.Y=Y)
  then begin
    //debugln(['TCodeToolManager.FindReferences cache valid']);
    // all sources and values are the same => use cache
    Result:=true;
  end else begin
    //debugln(['TCodeToolManager.FindReferences cache not valid']);
    {debugln(['TCodeToolManager.FindReferences IdentifierCode=',Cache.IdentifierCode=IdentifierCode,
      ' X=',Cache.X=X,' Y=',Cache.Y=Y,
      ' SourcesChangeStep=',Cache.SourcesChangeStep=SourceCache.ChangeStamp,',',Cache.SourcesChangeStep=CTInvalidChangeStamp64,
      ' FilesChangeStep=',Cache.FilesChangeStep=FileStateCache.TimeStamp,',',Cache.FilesChangeStep=CTInvalidChangeStamp64,
      ' InitValuesChangeStep=',Cache.InitValuesChangeStep=DefineTree.ChangeStep,',',Cache.InitValuesChangeStep=CTInvalidChangeStamp,
      '']);}
    Cache.Clear;
    Cache.IdentifierCode:=IdentifierCode;
    Cache.X:=X;
    Cache.Y:=Y;
    Cache.SourcesChangeStep:=SourceCache.ChangeStamp;
    Cache.FilesChangeStep:=FileStateCache.TimeStamp;
    Cache.InitValuesChangeStep:=DefineTree.ChangeStep;

    if not InitCurCodeTool(IdentifierCode) then exit;
    CursorPos.X:=X;
    CursorPos.Y:=Y;
    CursorPos.Code:=IdentifierCode;
    try
      Result:=FCurCodeTool.FindDeclaration(CursorPos,[fsfFindMainDeclaration],
                       Cache.NewTool,Cache.NewNode,Cache.NewPos,NewTopLine);
    except
      on e: Exception do HandleException(e);
    end;
    if not Result then begin
      debugln(['TCodeToolManager.FindReferences FCurCodeTool.FindDeclaration failed']);
      exit;
    end;
    // check if scope can be limited
    if Cache.NewTool<>nil then begin
      Cache.IsPrivate:=(Cache.NewTool.GetSourceType in [ctnLibrary,ctnProgram]);
      if not Cache.IsPrivate then begin
        ImplementationNode:=Cache.NewTool.FindImplementationNode;
        if (ImplementationNode<>nil)
        and (Cache.NewNode.StartPos>=ImplementationNode.StartPos) then
          Cache.IsPrivate:=true;
      end;
      if not Cache.IsPrivate then begin
        if (Cache.NewNode.GetNodeOfTypes([ctnParameterList,ctnClassPrivate])<>nil) then
          Cache.IsPrivate:=true;
      end;
    end;
  end;
  if (not Result) or (Cache.NewNode=nil) then begin
    DebugLn('TCodeToolManager.FindReferences unable to FindDeclaration ',IdentifierCode.Filename,' x=',dbgs(x),' y=',dbgs(y));
    exit;
  end;
  Result:=true;
  if NewTopLine=0 then ;
  if not InitCurCodeTool(SearchInCode) then exit;
  if Cache.IsPrivate and (FCurCodeTool<>Cache.NewTool) then begin
    //debugln(['TCodeToolManager.FindReferences identifier is not reachable from this unit => skipping search']);
    exit(true);
  end;

  CursorPos:=Cache.NewPos;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindReferences Searching ',dbgs(FCurCodeTool.Scanner<>nil),' for reference to x=',dbgs(CursorPos.X),' y=',dbgs(CursorPos.Y),' ',CursorPos.Code.Filename);
  {$ENDIF}
  try
    Result:=FCurCodeTool.FindReferences(CursorPos,SkipComments,
                                        ListOfPCodeXYPosition);
  except
    on e: Exception do HandleException(e);
  end;
  {$IFDEF CTDEBUG}
  DebugLn(['TCodeToolManager.FindReferences END ',Result]);
  {$ENDIF}
end;

function TCodeToolManager.FindUnitReferences(UnitCode, TargetCode: TCodeBuffer;
  SkipComments: boolean; var ListOfPCodeXYPosition: TFPList): boolean;
// finds unit name of UnitCode in unit of TargetCode
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindUnitReferences A ',UnitCode.Filename,' Target=',TargetCode.Filename);
  {$ENDIF}
  ListOfPCodeXYPosition:=nil;
  if not InitCurCodeTool(TargetCode) then exit;
  try
    Result:=FCurCodeTool.FindUnitReferences(UnitCode,SkipComments,
                                            ListOfPCodeXYPosition);
  except
    on e: Exception do HandleException(e);
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindUnitReferences END ');
  {$ENDIF}
end;

function TCodeToolManager.FindUsedUnitReferences(Code: TCodeBuffer; X,
  Y: integer; SkipComments: boolean; out UsedUnitFilename: string;
  var ListOfPCodeXYPosition: TFPList): boolean;
// finds in unit of Code all references of the unit at the uses clause at X,Y
var
  CursorPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindUsedUnitReferences A ',Code.Filename,' X=',X,' Y=',Y,' SkipComments=',SkipComments);
  {$ENDIF}
  ListOfPCodeXYPosition:=nil;
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    FCurCodeTool.FindUsedUnitReferences(CursorPos,SkipComments,UsedUnitFilename,
                                                ListOfPCodeXYPosition);
    Result:=true;
  except
    on e: Exception do HandleException(e);
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindUnitReferences END ');
  {$ENDIF}
end;

(*
function TCodeToolManager.RenameIdentifier(TreeOfPCodeXYPosition: TAVLTree;
  const OldIdentifier, NewIdentifier: string; DeclarationCode: TCodeBuffer;
  DeclarationCaretXY: PPoint): boolean;
var
  ANode, ANode2: TAVLTreeNode;
  CurCodePos, LastCodePos: PCodeXYPosition;
  IdentStartPos: integer;
  IdentLen, IdentLenDiff: Integer;
  SameLineCount: Integer;
  i: Integer;
  Code: TCodeBuffer;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.RenameIdentifier A Old=',OldIdentifier,' New=',NewIdentifier,' ',dbgs(TreeOfPCodeXYPosition<>nil));
  {$ENDIF}
  if TreeOfPCodeXYPosition=nil then begin
    Result:=true;
    exit;
  end;
  if not IsValidIdent(NewIdentifier) then exit;

  ClearCurCodeTool;
  SourceChangeCache.Clear;
  CurCodePos := nil;
  LastCodePos := nil;
  SameLineCount := 0;
  IdentLen:=length(OldIdentifier);
  IdentLenDiff := length(NewIdentifier) - IdentLen;
  if DeclarationCode = nil then
    DeclarationCaretXY := nil;;
  if DeclarationCaretXY = nil then
    DeclarationCode := nil;;

  // the tree is sorted for descending line code positions
  // -> go from end of source to start of source, so that replacing does not
  // change any CodeXYPosition not yet processed
  ANode:=TreeOfPCodeXYPosition.FindLowest;
  while ANode<>nil do begin
    // next position
    CurCodePos:=PCodeXYPosition(ANode.Data);
    Code:=CurCodePos^.Code;
    Code.LineColToPosition(CurCodePos^.Y,CurCodePos^.X,IdentStartPos);
    DebugLn('TCodeToolManager.RenameIdentifier File ',Code.Filename,' Line=',dbgs(CurCodePos^.Y),' Col=',dbgs(CurCodePos^.X),' Identifier=',GetIdentifier(@Code.Source[IdentStartPos]));
    // search absolute position in source
    if IdentStartPos<1 then begin
      SetError(20170421203205,Code, CurCodePos^.Y, CurCodePos^.X, ctsPositionNotInSource);
      exit;
    end;
    // check if old identifier is there
    if CompareIdentifiers(@Code.Source[IdentStartPos],PChar(Pointer(OldIdentifier)))<>0
    then begin
      debugln(['TCodeToolManager.RenameIdentifier CONSISTENCY ERROR ',Dbgs(CurCodePos^),' ']);
      SetError(20170421203210,CurCodePos^.Code,CurCodePos^.Y,CurCodePos^.X,
        Format(ctsStrExpectedButAtomFound,[OldIdentifier,
                                   GetIdentifier(@Code.Source[IdentStartPos])])
        );
      exit;
    end;
    // change if needed
    if CompareIdentifiersCaseSensitive(@Code.Source[IdentStartPos],
       PChar(Pointer(NewIdentifier)))<>0
    then begin
      DebugLn('TCodeToolManager.RenameIdentifier Change ');
      SourceChangeCache.ReplaceEx(gtNone,gtNone,1,1,Code,
         IdentStartPos,IdentStartPos+IdentLen,NewIdentifier);

      if (DeclarationCode = Code) and (CurCodePos^.Y = DeclarationCaretXY^.Y) and
         (CurCodePos^.X < DeclarationCaretXY^.X)
      then
        DeclarationCaretXY^.X := DeclarationCaretXY^.X + IdentLenDiff;

      if (LastCodePos <> nil) and (CurCodePos^.Y = LastCodePos^.Y) and
         (CurCodePos^.Code = LastCodePos^.Code)
      then
        inc(SameLineCount);

    end else begin
      DebugLn('TCodeToolManager.RenameIdentifier KEPT ',GetIdentifier(@Code.Source[IdentStartPos]));
    end;

    LastCodePos := CurCodePos;
    ANode2 := ANode;
    ANode:=TreeOfPCodeXYPosition.FindSuccessor(ANode);

    if (ANode = nil) or (PCodeXYPosition(ANode.Data)^.Code <> LastCodePos^.Code) or
       (PCodeXYPosition(ANode.Data)^.Y <> LastCodePos^.Y)
    then begin
      if (SameLineCount > 0) then begin
        for i := 1 to SameLineCount do begin
          ANode2 := TreeOfPCodeXYPosition.FindPrecessor(ANode2);
          PCodeXYPosition(ANode2.Data)^.X := PCodeXYPosition(ANode2.Data)^.X + i * IdentLenDiff;
        end;
      end;
      SameLineCount := 0;
    end;
  end;
  // apply
  DebugLn('TCodeToolManager.RenameIdentifier Apply');
  if not SourceChangeCache.Apply then exit;

  //DebugLn('TCodeToolManager.RenameIdentifier Success');
  Result:=true;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.RenameIdentifier END ');
  {$ENDIF}
end;
*)

function TCodeToolManager.ReplaceWord(Code: TCodeBuffer; const OldWord,
  NewWord: string; ChangeStrings: boolean): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.ReplaceWord A ',Code.Filename,' OldWord="',OldWord,'" NewWord="',NewWord,'"');
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.ReplaceWord(OldWord, NewWord, ChangeStrings,
                       SourceChangeCache);
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.RemoveIdentifierDefinition(Code: TCodeBuffer; X,
  Y: integer): boolean;
var
  CursorPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn(['TCodeToolManager.RemoveIdentifierDefinition A ',Code.Filename,' X=',X,' Y=',Y]);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    Result:=FCurCodeTool.RemoveIdentifierDefinition(CursorPos,SourceChangeCache);
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.RemoveWithBlock(Code: TCodeBuffer; X, Y: integer
  ): boolean;
var
  CursorPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn(['TCodeToolManager.RemoveWithBlock A ',Code.Filename,' X=',X,' Y=',Y]);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    Result:=FCurCodeTool.RemoveWithBlock(CursorPos,SourceChangeCache);
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.AddWithBlock(Code: TCodeBuffer; X1, Y1, X2,
  Y2: integer; const WithExpr: string; Candidates: TStrings): boolean;
var
  StartPos, EndPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn(['TCodeToolManager.AddWithBlock A ',Code.Filename,' X1=',X1,' Y1=',Y1,' X2=',X2,' Y2=',Y2,' WithExpr="',WithExpr,'"']);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  StartPos.X:=X1;
  StartPos.Y:=Y1;
  StartPos.Code:=Code;
  EndPos.X:=X2;
  EndPos.Y:=Y2;
  EndPos.Code:=Code;
  try
    Result:=FCurCodeTool.AddWithBlock(StartPos,EndPos,WithExpr,Candidates,
                                      SourceChangeCache);
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.ChangeParamList(Code: TCodeBuffer;
  Changes: TObjectList; var ProcPos: TCodeXYPosition;
  TreeOfPCodeXYPosition: TAVLTree): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.ChangeParamList A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.ChangeParamList(Changes,ProcPos,TreeOfPCodeXYPosition,
                      SourceChangeCache);
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.GatherResourceStringSections(Code: TCodeBuffer;
  X, Y: integer; CodePositions: TCodeXYPositions): boolean;
var
  CursorPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GatherResourceStringSections A ',Code.Filename,' x=',dbgs(x),' y=',dbgs(y));
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  if CodePositions=nil then begin
    ClearPositions;
    CodePositions:=Positions;
  end;
  try
    Result:=FCurCodeTool.GatherResourceStringSections(CursorPos,CodePositions);
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.IdentifierExistsInResourceStringSection(
  Code: TCodeBuffer; X, Y: integer; const ResStrIdentifier: string): boolean;
var
  CursorPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.IdentifierExistsInResourceStringSection A ',Code.Filename,' x=',dbgs(x),' y=',dbgs(y));
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    Result:=FCurCodeTool.IdentifierExistsInResourceStringSection(CursorPos,
                                                              ResStrIdentifier);
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.CreateIdentifierFromStringConst(
  StartCode: TCodeBuffer; StartX, StartY: integer;
  EndCode: TCodeBuffer; EndX, EndY: integer;
  out Identifier: string; MaxLen: integer): boolean;
var
  StartCursorPos, EndCursorPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.CreateIdentifierFromStringConst A ',StartCode.Filename,' x=',dbgs(StartX),' y=',dbgs(StartY));
  {$ENDIF}
  if not InitCurCodeTool(StartCode) then exit;
  StartCursorPos.X:=StartX;
  StartCursorPos.Y:=StartY;
  StartCursorPos.Code:=StartCode;
  EndCursorPos.X:=EndX;
  EndCursorPos.Y:=EndY;
  EndCursorPos.Code:=EndCode;
  Identifier:='';
  try
    Result:=FCurCodeTool.CreateIdentifierFromStringConst(
                                 StartCursorPos,EndCursorPos,Identifier,MaxLen);
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.StringConstToFormatString(
  StartCode: TCodeBuffer; StartX, StartY: integer;
  EndCode: TCodeBuffer; EndX, EndY: integer;
  out FormatStringConstant, FormatParameters: string;
  out StartInStringConst, EndInStringConst: boolean): boolean;
var
  StartCursorPos, EndCursorPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.StringConstToFormatString A ',StartCode.Filename,' x=',dbgs(StartX),' y=',dbgs(StartY));
  {$ENDIF}
  if not InitCurCodeTool(StartCode) then exit;
  StartCursorPos.X:=StartX;
  StartCursorPos.Y:=StartY;
  StartCursorPos.Code:=StartCode;
  EndCursorPos.X:=EndX;
  EndCursorPos.Y:=EndY;
  EndCursorPos.Code:=EndCode;
  try
    Result:=FCurCodeTool.StringConstToFormatString(
             StartCursorPos,EndCursorPos,FormatStringConstant,FormatParameters,
             StartInStringConst,EndInStringConst);
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.GatherResourceStringsWithValue(
  SectionCode: TCodeBuffer; SectionX, SectionY: integer;
  const StringValue: string; CodePositions: TCodeXYPositions): boolean;
var
  CursorPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GatherResourceStringsWithValue A ',SectionCode.Filename,' x=',dbgs(SectionX),' y=',dbgs(SectionY));
  {$ENDIF}
  if not InitCurCodeTool(SectionCode) then exit;
  CursorPos.X:=SectionX;
  CursorPos.Y:=SectionY;
  CursorPos.Code:=SectionCode;
  if CodePositions=nil then begin
    ClearPositions;
    CodePositions:=Positions;
  end;
  try
    Result:=FCurCodeTool.GatherResourceStringsWithValue(CursorPos,StringValue,
                                                        CodePositions);
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.AddResourcestring(
  CursorCode: TCodeBuffer; X,Y: integer;
  SectionCode: TCodeBuffer; SectionX, SectionY: integer;
  const NewIdentifier, NewValue: string;
  InsertPolicy: TResourcestringInsertPolicy): boolean;
var
  CursorPos, SectionPos, NearestPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.AddResourcestring A ',SectionCode.Filename,' x=',dbgs(SectionX),' y=',dbgs(SectionY));
  {$ENDIF}
  if not InitCurCodeTool(SectionCode) then exit;
  SectionPos.X:=SectionX;
  SectionPos.Y:=SectionY;
  SectionPos.Code:=SectionCode;
  try
    NearestPos.Code:=nil;
    if InsertPolicy=rsipContext then begin
      CursorPos.X:=X;
      CursorPos.Y:=Y;
      CursorPos.Code:=CursorCode;
      Result:=FCurCodeTool.FindNearestResourceString(CursorPos, SectionPos,
                                                     NearestPos);
      if not Result then exit;
    end;
    Result:=FCurCodeTool.AddResourcestring(SectionPos, NewIdentifier, NewValue,
                                     InsertPolicy,NearestPos,SourceChangeCache);
  except
    on e: Exception do HandleException(e);
  end;
end;

procedure TCodeToolManager.ImproveStringConstantStart(const ACode: string;
  var StartPos: integer);
begin
  BasicCodeTools.ImproveStringConstantStart(ACode,StartPos);
end;

procedure TCodeToolManager.ImproveStringConstantEnd(const ACode: string;
  var EndPos: integer);
begin
  BasicCodeTools.ImproveStringConstantEnd(ACode,EndPos);
end;

function TCodeToolManager.GetStringConstBounds(Code: TCodeBuffer; X,
  Y: integer; out StartCode: TCodeBuffer; out StartX, StartY: integer; out
  EndCode: TCodeBuffer; out EndX, EndY: integer; ResolveComments: boolean
  ): boolean;
var
  CursorPos, StartPos, EndPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GetStringConstBounds A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    Result:=FCurCodeTool.GetStringConstBounds(CursorPos,StartPos,EndPos,
                                              ResolveComments);
    if Result then begin
      StartCode:=StartPos.Code;
      StartX:=StartPos.X;
      StartY:=StartPos.Y;
      EndCode:=EndPos.Code;
      EndX:=EndPos.X;
      EndY:=EndPos.Y;
    end;
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.InsertStatements(
  InsertPos: TInsertStatementPosDescription; const Statements: string): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.InsertStatements A ',Code.Filename,' Line=',Y,',Col=',X);
  {$ENDIF}
  if not InitCurCodeTool(InsertPos.CodeXYPos.Code) then exit;
  try
    Result:=FCurCodeTool.InsertStatements(InsertPos,Statements,SourceChangeCache);
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.AddProcModifier(Code: TCodeBuffer; X, Y: integer;
  const aModifier: string): boolean;
var
  CursorPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.ExtractOperand A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    Result:=FCurCodeTool.AddProcModifier(CursorPos,aModifier,SourceChangeCache);
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.ExtractOperand(Code: TCodeBuffer; X, Y: integer; out
  Operand: string; WithPostTokens, WithAsOperator,
  WithoutTrailingPoints: boolean): boolean;
var
  CursorPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.ExtractOperand A ',Code.Filename);
  {$ENDIF}
  Operand:='';
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    Result:=FCurCodeTool.ExtractOperand(CursorPos,Operand,
                           WithPostTokens,WithAsOperator,WithoutTrailingPoints);
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.GetExpandedOperand(Code: TCodeBuffer; X, Y: Integer;
  out Operand: string; ResolveProperty: Boolean): Boolean;
var
  CursorPos: TCodeXYPosition;
begin
  Result := False;
  Operand := '';
  if not InitCurCodeTool(Code) then Exit;
  CursorPos.X := X;
  CursorPos.Y := Y;
  CursorPos.Code := Code;
  try
    Result := FCurCodeTool.GetExpandedOperand(CursorPos, Operand, ResolveProperty);
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.GuessMisplacedIfdefEndif(Code: TCodeBuffer; X,
  Y: integer; out NewCode: TCodeBuffer; out NewX, NewY, NewTopLine: integer
  ): boolean;
var
  CursorPos: TCodeXYPosition;
  NewPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GuessMisplacedIfdefEndif A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    Result:=FCurCodeTool.GuessMisplacedIfdefEndif(CursorPos,NewPos,NewTopLine);
    if Result then begin
      NewX:=NewPos.X;
      NewY:=NewPos.Y;
      NewCode:=NewPos.Code;
    end;
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FindEnclosingIncludeDirective(Code: TCodeBuffer; X,
  Y: integer; out NewCode: TCodeBuffer; out NewX, NewY, NewTopLine: integer
  ): boolean;
var
  CursorPos: TCodeXYPosition;
  NewPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindEnclosingIncludeDirective A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    Result:=FCurCodeTool.FindEnclosingIncludeDirective(CursorPos,
                                                       NewPos,NewTopLine);
    if Result then begin
      NewX:=NewPos.X;
      NewY:=NewPos.Y;
      NewCode:=NewPos.Code;
    end;
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FindResourceDirective(Code: TCodeBuffer; StartX,
  StartY: integer;
  out NewCode: TCodeBuffer; out NewX, NewY, NewTopLine: integer;
  const Filename: string; SearchInCleanSrc: boolean): boolean;
var
  CursorPos: TCodeXYPosition;
  NewPos: TCodeXYPosition;
  p: integer;
  ADirectivesTool: TDirectivesTool;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindResourceDirective A ',Code.Filename);
  {$ENDIF}
  NewCode:=nil;
  NewX:=0;
  NewY:=0;
  NewTopLine:=0;
  if SearchInCleanSrc then begin
    if not InitCurCodeTool(Code) then exit;
    CursorPos.X:=StartX;
    CursorPos.Y:=StartY;
    CursorPos.Code:=Code;
    try
      Result:=FCurCodeTool.FindResourceDirective(CursorPos,NewPos,NewTopLine,
                                                 Filename);
      if Result then begin
        NewX:=NewPos.X;
        NewY:=NewPos.Y;
        NewCode:=NewPos.Code;
      end;
    except
      on e: Exception do Result:=HandleException(e);
    end;
  end else begin
    try
      if not InitCurDirectivesTool(Code) then exit;
      ADirectivesTool:=FCurDirectivesTool;
      FCurDirectivesTool.Parse;
      Code.LineColToPosition(StartY,StartX,p);
      Result:=ADirectivesTool.NodeStartToCodePos(
                        ADirectivesTool.FindResourceDirective(Filename,p),
                        CursorPos);
      NewCode:=CursorPos.Code;
      NewX:=CursorPos.X;
      NewY:=CursorPos.Y;
      NewTopLine:=NewY;
    except
      on e: Exception do Result:=HandleException(e);
    end;
  end;
end;

function TCodeToolManager.AddResourceDirective(Code: TCodeBuffer;
  const Filename: string; SearchInCleanSrc: boolean; const NewSrc: string
  ): boolean;
var
  Tree: TCompilerDirectivesTree;
  Node: TCodeTreeNode;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.AddResourceDirective A ',Code.Filename,' Filename=',Filename);
  {$ENDIF}
  if SearchInCleanSrc then begin
    if not InitCurCodeTool(Code) then exit;
    try
      Result:=FCurCodeTool.AddResourceDirective(Filename,SourceChangeCache,NewSrc);
    except
      on e: Exception do Result:=HandleException(e);
    end;
  end else begin
    try
      Tree:=TCompilerDirectivesTree.Create;
      try
        Tree.Parse(Code,GetNestedCommentsFlagForFile(Code.Filename));
        Node:=Tree.FindResourceDirective(Filename);
        if Node=nil then
          Result:=AddResourceDirective(Code,Filename,true,NewSrc)
        else
          Result:=true;
      finally
        Tree.Free;
      end;
    except
      on e: Exception do Result:=HandleException(e);
    end;
  end;
end;

function TCodeToolManager.FindIncludeDirective(Code: TCodeBuffer; StartX,
  StartY: integer; out NewCode: TCodeBuffer; out NewX, NewY,
  NewTopLine: integer; const Filename: string; SearchInCleanSrc: boolean
  ): boolean;
var
  CursorPos: TCodeXYPosition;
  NewPos: TCodeXYPosition;
  Tree: TCompilerDirectivesTree;
  p: integer;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindIncludeDirective A ',Code.Filename);
  {$ENDIF}
  NewCode:=nil;
  NewX:=0;
  NewY:=0;
  NewTopLine:=0;
  if SearchInCleanSrc then begin
    if not InitCurCodeTool(Code) then exit;
    CursorPos.X:=StartX;
    CursorPos.Y:=StartY;
    CursorPos.Code:=Code;
    try
      Result:=FCurCodeTool.FindIncludeDirective(CursorPos,NewPos,NewTopLine,
                                                Filename);
      if Result then begin
        NewX:=NewPos.X;
        NewY:=NewPos.Y;
        NewCode:=NewPos.Code;
      end;
    except
      on e: Exception do Result:=HandleException(e);
    end;
  end else begin
    try
      Tree:=TCompilerDirectivesTree.Create;
      try
        Tree.Parse(Code,GetNestedCommentsFlagForFile(Code.Filename));
        Code.LineColToPosition(StartY,StartX,p);
        Result:=Tree.NodeStartToCodePos(Tree.FindIncludeDirective(Filename,p),
                                        CursorPos);
        NewCode:=CursorPos.Code;
        NewX:=CursorPos.X;
        NewY:=CursorPos.Y;
        NewTopLine:=NewY;
      finally
        Tree.Free;
      end;
    except
      on e: Exception do Result:=HandleException(e);
    end;
  end;
end;

function TCodeToolManager.AddIncludeDirectiveForInit(Code: TCodeBuffer;
  const Filename: string; const NewSrc: string): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.AddIncludeDirectiveForInit A ',Code.Filename,' Filename=',Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.AddIncludeDirectiveForInit(Filename,SourceChangeCache,NewSrc);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.AddUnitWarnDirective(Code: TCodeBuffer; WarnID,
  Comment: string; TurnOn: boolean): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn(['TCodeToolManager.AddUnitWarnDirective A ',Code.Filename,' aParam="',aParam,'" TurnOn=',TurnOn]);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.AddUnitWarnDirective(WarnID,Comment,TurnOn,SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.RemoveDirective(Code: TCodeBuffer; NewX,
  NewY: integer; RemoveEmptyIFs: boolean): boolean;
var
  Tree: TCompilerDirectivesTree;
  p: integer;
  Node: TCodeTreeNode;
  Changed: boolean;
  ParentNode: TCodeTreeNode;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.RemoveDirective A ',Code.Filename);
  {$ENDIF}
  try
    Code.LineColToPosition(NewY,NewX,p);
    if (p<1) or (p>Code.SourceLength) then exit;
    Tree:=TCompilerDirectivesTree.Create;
    try
      Tree.Parse(Code,GetNestedCommentsFlagForFile(Code.Filename));
      Node:=Tree.FindNodeAtPos(p);
      if Node=nil then exit;
      ParentNode:=Node.Parent;
      Changed:=false;
      Tree.DisableNode(Node,Changed,true);
      if RemoveEmptyIFs and (ParentNode<>nil) and Tree.NodeIsEmpty(ParentNode) then
        Tree.DisableNode(ParentNode,Changed,true);
      Result:=Changed;
    finally
      Tree.Free;
    end;
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FixIncludeFilenames(Code: TCodeBuffer;
  Recursive: boolean; out MissingIncludeFilesCodeXYPos: TFPList): boolean;
  
  procedure CreateErrorForMissingIncludeFile;
  var
    CodePos: PCodeXYPosition;
  begin
    ClearError;
    CodePos:=PCodeXYPosition(MissingIncludeFilesCodeXYPos[0]);
    fErrorCode:=CodePos^.Code;
    fErrorLine:=CodePos^.Y;
    fErrorColumn:=CodePos^.X;
    FErrorId:=20170421202903;
    FErrorMsg:='missing include file';
  end;
  
var
  FoundIncludeFiles: TStrings;
  i: Integer;
  AFilename: string;
  ToFixIncludeFiles: TStringList;
  FixedIncludeFiles: TStringList;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FixIncludeFilenames A ',Code.Filename,' Recursive=', DbgS(Recursive));
  {$ENDIF}
  MissingIncludeFilesCodeXYPos:=nil;
  if not InitCurCodeTool(Code) then exit;
  try
    FixedIncludeFiles:=nil;
    ToFixIncludeFiles:=TStringList.Create;
    try
      ToFixIncludeFiles.Add(Code.Filename);
      while ToFixIncludeFiles.Count>0 do begin
        // get next include file
        AFilename:=ToFixIncludeFiles[ToFixIncludeFiles.Count-1];
        ToFixIncludeFiles.Delete(ToFixIncludeFiles.Count-1);
        Code:=LoadFile(AFilename,false,false);
        if Code=nil then begin
          raise ECodeToolError.Create(FCurCodeTool,20170421202139,
                                      'unable to read file "'+AFilename+'"');
        end;
        // fix file
        FoundIncludeFiles:=nil;
        try
          Result:=FCurCodeTool.FixIncludeFilenames(Code,SourceChangeCache,
                                FoundIncludeFiles,MissingIncludeFilesCodeXYPos);
          if (MissingIncludeFilesCodeXYPos<>nil)
          and (MissingIncludeFilesCodeXYPos.Count>0) then begin
            DebugLn('TCodeToolManager.FixIncludeFilenames Missing: ',dbgs(MissingIncludeFilesCodeXYPos.Count));
            Result:=false;
            CreateErrorForMissingIncludeFile;
            exit;
          end;
          if not Recursive then begin
            // check only main file -> stop
            exit;
          end;
          // remember, that the file has been fixed to avoid cycles
          if FixedIncludeFiles=nil then
            FixedIncludeFiles:=TStringList.Create;
          FixedIncludeFiles.Add(Code.Filename);
          // add new include files to stack
          if FoundIncludeFiles<>nil then begin
            for i:=0 to FoundIncludeFiles.Count-1 do begin
              AFilename:=FoundIncludeFiles[i];
              if ((FixedIncludeFiles=nil)
              or (FixedIncludeFiles.IndexOf(AFilename)<0))
              and (ToFixIncludeFiles.IndexOf(AFilename)<0) then begin
                ToFixIncludeFiles.Add(AFilename);
              end;
            end;
          end;
          //DebugLn('TCodeToolManager.FixIncludeFilenames FixedIncludeFiles=',FixedIncludeFiles.Text,' ToFixIncludeFiles=',ToFixIncludeFiles.Text);
        finally
          FoundIncludeFiles.Free;
        end;
      end;
    finally
      FixedIncludeFiles.Free;
      ToFixIncludeFiles.Free;
    end;
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FixMissingH2PasDirectives(Code: TCodeBuffer;
  var Changed: boolean): boolean;
begin
  Result:=false;
  try
    if InitCurDirectivesTool(Code) then begin
      FCurDirectivesTool.Parse;
      FCurDirectivesTool.FixMissingH2PasDirectives(Changed);
      Result:=true;
    end;
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.ReduceCompilerDirectives(Code: TCodeBuffer;
  Undefines, Defines: TStrings; var Changed: boolean): boolean;
begin
  Result:=false;
  try
    if InitCurDirectivesTool(Code) then begin
      FCurDirectivesTool.Parse;
      FCurDirectivesTool.ReduceCompilerDirectives(Undefines,Defines,Changed);
      Result:=true;
    end;
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.IsKeyword(Code: TCodeBuffer; const KeyWord: string
  ): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.IsKeyword A ',Code.Filename,' Keyword=',KeyWord);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.StringIsKeyWord(KeyWord);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.ExtractCodeWithoutComments(Code: TCodeBuffer;
  KeepDirectives: boolean; KeepVerbosityDirectives: boolean): string;
begin
  Result:=CleanCodeFromComments(Code.Source,
          GetNestedCommentsFlagForFile(Code.Filename),KeepDirectives,
          KeepVerbosityDirectives);
end;

function TCodeToolManager.GetPasDocComments(Code: TCodeBuffer; X, Y: integer;
  out ListOfPCodeXYPosition: TFPList): boolean;
var
  CursorPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GetPasDocComments A ',Code.Filename);
  {$ENDIF}
  ListOfPCodeXYPosition:=nil;
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GetPasDocComments B ',dbgs(FCurCodeTool.Scanner<>nil));
  {$ENDIF}
  try
    Result:=FCurCodeTool.GetPasDocComments(CursorPos,true,ListOfPCodeXYPosition);
  except
    on e: Exception do Result:=HandleException(e);
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GetPasDocComments END ');
  {$ENDIF}
end;

function TCodeToolManager.FindBlockCounterPart(Code: TCodeBuffer;
  X, Y: integer; out NewCode: TCodeBuffer; out NewX, NewY, NewTopLine: integer
  ): boolean;
var
  CursorPos: TCodeXYPosition;
  NewPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindBlockCounterPart A ',Code.Filename);
  {$ENDIF}
  NewCode:=nil;
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindBlockCounterPart B ',dbgs(FCurCodeTool.Scanner<>nil));
  {$ENDIF}
  try
    Result:=FCurCodeTool.FindBlockCounterPart(CursorPos,NewPos,NewTopLine);
    if Result then begin
      NewX:=NewPos.X;
      NewY:=NewPos.Y;
      NewCode:=NewPos.Code;
    end;
  except
    on e: Exception do Result:=HandleException(e);
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindBlockCounterPart END ');
  {$ENDIF}
end;

function TCodeToolManager.FindBlockStart(Code: TCodeBuffer; X, Y: integer; out
  NewCode: TCodeBuffer; out NewX, NewY, NewTopLine: integer; SkipStart: boolean
  ): boolean;
var
  CursorPos: TCodeXYPosition;
  NewPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindBlockStart A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindBlockStart B ',dbgs(FCurCodeTool.Scanner<>nil));
  {$ENDIF}
  try
    Result:=FCurCodeTool.FindBlockStart(CursorPos,NewPos,NewTopLine,SkipStart);
    if Result then begin
      NewX:=NewPos.X;
      NewY:=NewPos.Y;
      NewCode:=NewPos.Code;
    end;
  except
    on e: Exception do Result:=HandleException(e);
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindBlockStart END ');
  {$ENDIF}
end;

function TCodeToolManager.GuessUnclosedBlock(Code: TCodeBuffer; X, Y: integer;
  out NewCode: TCodeBuffer; out NewX, NewY, NewTopLine: integer): boolean;
var
  CursorPos: TCodeXYPosition;
  NewPos: TCodeXYPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GuessUnclosedBlock A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GuessUnclosedBlock B ',dbgs(FCurCodeTool.Scanner<>nil));
  {$ENDIF}
  try
    Result:=FCurCodeTool.GuessUnclosedBlock(CursorPos,NewPos,NewTopLine);
    if Result then begin
      NewX:=NewPos.X;
      NewY:=NewPos.Y;
      NewCode:=NewPos.Code;
    end;
  except
    on e: Exception do Result:=HandleException(e);
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GuessUnclosedBlock END ');
  {$ENDIF}
end;

function TCodeToolManager.CompleteBlock(Code: TCodeBuffer; X, Y: integer;
  OnlyIfCursorBlockIndented: boolean): boolean;
var
  NewCode: TCodeBuffer;
  NewX, NewY, NewTopLine: integer;
begin
  Result:=CompleteBlock(Code,X,Y,OnlyIfCursorBlockIndented,
                        NewCode,NewX,NewY,NewTopLine);
  if (NewCode=nil) and (NewX<0) and (NewY<0) and (NewTopLine<1) then ;
end;

function TCodeToolManager.CompleteBlock(Code: TCodeBuffer; X, Y: integer;
  OnlyIfCursorBlockIndented: boolean;
  out NewCode: TCodeBuffer; out NewX, NewY, NewTopLine: integer): boolean;
var
  CursorPos, NewPos: TCodeXYPosition;
begin
  Result:=false;
  NewCode:=Code;
  NewX:=X;
  NewY:=Y;
  NewTopLine:=-1;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.CompleteBlock A ',Code.Filename,' x=',dbgs(X),' y=',dbgs(Y));
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    Result:=FCurCodeTool.CompleteBlock(CursorPos,SourceChangeCache,
                                   OnlyIfCursorBlockIndented,NewPos,NewTopLine);
    if Result then begin
      NewCode:=NewPos.Code;
      NewX:=NewPos.X;
      NewY:=NewPos.Y;
    end;
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.GetCompatiblePublishedMethods(Code: TCodeBuffer;
  const AClassName: string; PropInstance: TPersistent; const PropName: string;
  const Proc: TGetStrProc): boolean;
begin
  {$IFDEF CTDEBUG}
  DebugLn(['TCodeToolManager.GetCompatiblePublishedMethods A ',Code.Filename,' Classname=',AClassname,' Instance=',DbgSName(PropInstance),' PropName=',PropName]);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.GetCompatiblePublishedMethods(AClassName,
                                            PropInstance,PropName,Proc);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.GetCompatiblePublishedMethods(Code: TCodeBuffer;
  const AClassName: string; TypeData: PTypeData; const Proc: TGetStrProc): boolean;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GetCompatiblePublishedMethods A ',Code.Filename,' Classname=',AClassname);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.GetCompatiblePublishedMethods(AClassName,TypeData,Proc);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.PublishedMethodExists(Code: TCodeBuffer;
  const AClassName, AMethodName: string; PropInstance: TPersistent;
  const PropName: string; out MethodIsCompatible, MethodIsPublished,
  IdentIsMethod: boolean): boolean;
begin
  {$IFDEF CTDEBUG}
  DebugLn(['TCodeToolManager.PublishedMethodExists A ',Code.Filename,' ',AClassName,':',AMethodName,' Porperty=',DbgSName(PropInstance),'.',PropName]);
  {$ENDIF}
  Result:=InitCurCodeTool(Code);
  if not Result then exit;
  try
    Result:=FCurCodeTool.PublishedMethodExists(AClassName,
              AMethodName,PropInstance,PropName,
              MethodIsCompatible,MethodIsPublished,IdentIsMethod);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.PublishedMethodExists(Code:TCodeBuffer;
  const AClassName, AMethodName: string; TypeData: PTypeData;
  out MethodIsCompatible, MethodIsPublished, IdentIsMethod: boolean): boolean;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.PublishedMethodExists A ',Code.Filename,' ',AClassName,':',AMethodName);
  {$ENDIF}
  Result:=InitCurCodeTool(Code);
  if not Result then exit;
  try
    Result:=FCurCodeTool.PublishedMethodExists(AClassName,
              AMethodName,TypeData,
              MethodIsCompatible,MethodIsPublished,IdentIsMethod);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.JumpToPublishedMethodBody(Code: TCodeBuffer;
  const AClassName, AMethodName: string; out NewCode: TCodeBuffer; out NewX,
  NewY, NewTopLine, BlockTopLine, BlockBottomLine: integer): boolean;
var NewPos: TCodeXYPosition;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.JumpToPublishedMethodBody A ',Code.Filename,' ',AClassName,':',AMethodName);
  {$ENDIF}
  Result:=InitCurCodeTool(Code);
  if not Result then exit;
  try
    Result:=FCurCodeTool.JumpToPublishedMethodBody(AClassName,
              AMethodName,NewPos,NewTopLine,BlockTopLine,BlockBottomLine,true);
    if Result then begin
      NewCode:=NewPos.Code;
      NewX:=NewPos.X;
      NewY:=NewPos.Y;
    end;
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.RenamePublishedMethod(Code: TCodeBuffer;
  const AClassName, OldMethodName, NewMethodName: string): boolean;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.RenamePublishedMethod A');
  {$ENDIF}
  Result:=InitCurCodeTool(Code);
  if not Result then exit;
  try
    SourceChangeCache.Clear;
    Result:=FCurCodeTool.RenamePublishedMethod(AClassName,
              OldMethodName,NewMethodName,SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.CreatePublishedMethod(Code: TCodeBuffer;
  const AClassName, NewMethodName: string; ATypeInfo: PTypeInfo;
  UseTypeInfoForParameters: boolean; const APropertyUnitName: string;
  const APropertyPath: string; const CallAncestorMethod: string;
  AddOverride: boolean): boolean;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.CreatePublishedMethod A');
  {$ENDIF}
  Result:=InitCurCodeTool(Code);
  if not Result then exit;
  try
    SourceChangeCache.Clear;
    Result:=FCurCodeTool.CreateMethod(AClassName,
            NewMethodName,ATypeInfo,APropertyUnitName,APropertyPath,
            SourceChangeCache,UseTypeInfoForParameters,pcsPublished,
            CallAncestorMethod,AddOverride);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.CreatePrivateMethod(Code: TCodeBuffer;
  const AClassName, NewMethodName: string; ATypeInfo: PTypeInfo;
  UseTypeInfoForParameters: boolean; const APropertyUnitName: string;
  const APropertyPath: string): boolean;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.CreatePrivateMethod A');
  {$ENDIF}
  Result:=InitCurCodeTool(Code);
  if not Result then exit;
  try
    SourceChangeCache.Clear;
    Result:=FCurCodeTool.CreateMethod(AClassName,
            NewMethodName,ATypeInfo,APropertyUnitName,APropertyPath,
            SourceChangeCache,UseTypeInfoForParameters,pcsPrivate);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.GetIDEDirectives(Code: TCodeBuffer;
  DirectiveList: TStrings; const Filter: TOnIDEDirectiveFilter): boolean;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GetIDEDirectives A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.GetIDEDirectives(DirectiveList,Filter);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.SetIDEDirectives(Code: TCodeBuffer;
  DirectiveList: TStrings; const Filter: TOnIDEDirectiveFilter): boolean;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GetIDEDirectives A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.SetIDEDirectives(DirectiveList,SourceChangeCache,Filter);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.JumpToLinkerIdentifier(Code: TCodeBuffer;
  const SourceFilename: string; SourceLine: integer;
  const MangledFunction, Identifier: string; out NewCode: TCodeBuffer; out
  NewX, NewY, NewTopLine: integer): boolean;
var
  NewPos: TCodeXYPosition;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.JumpToLinkerIdentifier A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindJumpPointForLinkerPos(
                        SourceFilename, SourceLine, MangledFunction, Identifier,
                        NewPos,NewTopLine);
    if Result then begin
      NewX:=NewPos.X;
      NewY:=NewPos.Y;
      NewCode:=NewPos.Code;
    end;
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FindFPCMangledIdentifier(GDBIdentifier: string; out
  aComplete: boolean; out aMessage: string;
  const OnFindSource: TOnFindFPCMangledSource; out NewCode: TCodeBuffer; out NewX,
  NewY, NewTopLine: integer): boolean;
{ Examples:
  compiler built-in
    fpc_raiseexception
    ??
    PASCALMAIN
    SYSTEM_FPC_SYSTEMMAIN$LONGINT$PPCHAR$PPCHAR

  unit:
    procedure
      SYSUTILS_RUNERRORTOEXCEPT$LONGINT$POINTER$POINTER
      SYSTEM_HANDLEERRORADDRFRAME$LONGINT$POINTER$POINTER
    method
      EXTTOOLEDITDLG_TEXTERNALTOOLMENUITEMS_$__LOAD$TCONFIGSTORAGE$$TMODALRESULT
      EXTTOOLEDITDLG_TEXTERNALTOOLMENUITEMS_$__LOAD$TCONFIGSTORAGE$ANSISTRING$$TMODALRESULT
      ENVIRONMENTOPTS_TENVIRONMENTOPTIONS_$__LOAD$BOOLEAN
      MAIN_TMAINIDE_$__LOADGLOBALOPTIONS
      MAIN_TMAINIDE_$__CREATE$TCOMPONENT$$TMAINIDE

  program:
    P$TESTPROJECT1_DOTEST
    P$TESTPROJECT1_DOTEST_SUBTEST
    P$TESTPROJECT1_DOTEST$CHAR_SUBTEST$LONGINT
    P$TESTSTACKTRACE1_TMAINCLASS_$_TSUBCLASS_$__RAISESOMETHING$ANSISTRING
}
var
  p: PChar;
  TheSrcName: string;
  Code: TCodeBuffer;
  CurIdentifier: string;
  Tool: TCodeTool;
  Node: TCodeTreeNode;
  SubNode: TCodeTreeNode;
  ClassNode: TCodeTreeNode;
  ProcNode: TCodeTreeNode;
  SectionNode: TCodeTreeNode;
  SrcFilename: string;
  NewPos: TCodeXYPosition;

  procedure ReadIdentifier(out Identifier: string);
  var
    StartP: PChar;
  begin
    StartP:=p;
    while p^ in ['A'..'Z','0'..'9'] do inc(p);
    Identifier:=copy(GDBIdentifier,StartP-PChar(GDBIdentifier)+1,p-StartP);
  end;

  procedure ReadParamList;
  begin
    if p^='$' then begin
      // parameter list => skip
      while (p^ in ['$','A'..'Z','0'..'9']) do inc(p);
    end;
  end;

  function FindUnit(TheUnitName: string; out aFilename: string): boolean;
  var
    InFilename: string;
  begin
    // search in main search path
    InFilename:='';
    aFilename:=CodeToolBoss.DirectoryCachePool.FindUnitSourceInCompletePath(
                               '',TheUnitName,InFilename,true);
    if aFilename='' then begin
      // user search
      if Assigned(OnFindSource) then
        OnFindSource(Self,ctnUnit,TheUnitName,aFilename)
      else if Assigned(OnFindFPCMangledSource) then
        OnFindFPCMangledSource(Self,ctnUnit,TheUnitName,aFilename)
    end;
    Result:=aFilename<>'';
  end;

  function FindProgram(TheSrcName: string; out aFilename: string): boolean;
  begin
    aFilename:='';
    // user search
    if Assigned(OnFindSource) then begin
      OnFindSource(Self,ctnProgram,TheSrcName,aFilename);
    end;
    Result:=aFilename<>'';
  end;

begin
  Result:=false;
  aComplete:=false;
  aMessage:='';
  NewCode:=nil;
  NewTopLine:=-1;
  NewX:=-1;
  NewY:=-1;

  if GDBIdentifier='' then begin
    aMessage:='missing identifier';
    exit;
  end;
  p:=PChar(GDBIdentifier);
  if p^ in ['a'..'z'] then begin
    // lower case unit name means compiler built in function
    aMessage:='the function "'+GDBIdentifier+'" is a compiler special function without source';
    exit;
  end;
  TheSrcName:='';
  if p^ in ['A'..'Z'] then begin
    ReadIdentifier(TheSrcName);
    //debugln(['TCodeToolManager.FindGBDIdentifier first identifier=',TheSrcName,' ...']);
    if (TheSrcName='P') and (p^='$') then begin
      // P$programname
      inc(p);
      if IsIdentStartChar[p^] then
        ReadIdentifier(TheSrcName);
      //debugln(['TCodeToolManager.FindGBDIdentifier search source of program "',TheSrcName,'" ...']);
      if not FindProgram(TheSrcName,SrcFilename) then begin
        aMessage:='can''t find program "'+TheSrcName+'"';
        exit;
      end;
    end else if p^='_' then begin
      // a unit name
      // => search unit
      if not FindUnit(TheSrcName,SrcFilename) then begin
        aMessage:='can''t find unit '+TheSrcName;
        exit;
      end;
    end else if p^<>'_' then begin
      // only one uppercase identifier, e.g. PASCALMAIN
      aMessage:='compiler built in function "'+GDBIdentifier+'"';
      exit;
    end;
    // load unit source
    Code:=LoadFile(SrcFilename,true,false);
    if Code=nil then begin
      aMessage:='unable to read file "'+SrcFilename+'"';
      exit;
    end;

    inc(p);
    if p^ in ['A'..'Z'] then begin
      ReadIdentifier(CurIdentifier);
      //debugln(['TCodeToolManager.FindGBDIdentifier Identifier="',CurIdentifier,'"']);

      if not Explore(Code,Tool,false,true) then begin
        //debugln(['TCodeToolManager.FindGBDIdentifier parse error']);
        aMessage:=CodeToolBoss.ErrorMessage;
        exit;
      end;

      ReadParamList;

      Node:=nil;
      if Tool.GetSourceType=ctnUnit then begin
        // a unit => first search in interface, then in implementation
        SectionNode:=Tool.FindInterfaceNode;
        if SectionNode<>nil then begin
          Node:=Tool.FindSubDeclaration(CurIdentifier,SectionNode);
        end;
        if Node=nil then begin
          // search in implementation
          try
            Node:=Tool.FindDeclarationNodeInImplementation(CurIdentifier,true);
          except
            on E: Exception do begin
              HandleException(E);
              //debugln(['TCodeToolManager.FindGBDIdentifier FindDeclarationNodeInImplementation parse error in "',Code.Filename,'": ',E.Message]);
              aMessage:=ErrorMessage;
              exit;
            end;
          end;
        end;
      end else begin
        // not a unit, e.g. a program
        SectionNode:=Tool.Tree.Root;
        if SectionNode<>nil then begin
          Node:=Tool.FindSubDeclaration(CurIdentifier,SectionNode);
        end;
      end;
      if Node=nil then begin
        // identifier not found => use only SrcFilename
        //debugln(['TCodeToolManager.FindGBDIdentifier identifier "',CurIdentifier,'" not found in "',Code.Filename,'"']);
        aMessage:='identifier "'+CurIdentifier+'" not found in "'+Code.Filename+'"';
        exit;
      end;

      repeat
        if (p^='_') and (p[1]='$') and (p[2]='_') and (p[3]='_') then begin
          // sub identifier is method or member
          inc(p,4);
        end else if (p^='_') and (p[1] in ['A'..'Z']) then begin
          // sub identifier is proc
          inc(p);
        end else
          break;
        if not (p^ in ['A'..'Z']) then begin
          break;
        end;
        // _$__identifier => sub identifier
        ReadIdentifier(CurIdentifier);
        ReadParamList;
        // find sub identifier
        SubNode:=Tool.FindSubDeclaration(CurIdentifier,Node);
        if SubNode=nil then begin
          //debugln(['TCodeToolManager.FindGBDIdentifier SubIdentifier="',CurIdentifier,'" not found']);
          break;
        end;
        //debugln(['TCodeToolManager.FindGBDIdentifier SubIdentifier="',CurIdentifier,'" found']);
        Node:=SubNode;
      until false;

      if Node.Desc=ctnProcedure then begin
        // proc node => find body
        ClassNode:=Tool.FindClassOrInterfaceNode(Node);
        if ClassNode<>nil then begin
          try
            Tool.BuildTree(lsrInitializationStart);
          except
            on E: Exception do begin
              // ignore
            end;
          end;
          ProcNode:=Tool.FindCorrespondingProcNode(Node,[phpAddClassName]);
          if ProcNode<>nil then
            Node:=ProcNode;
        end;
      end;

      aComplete:=p^ in [#0,#9,#10,#13,' '];
      Result:=Tool.JumpToCleanPos(Node.StartPos,-1,-1,NewPos,NewTopLine,false);
      NewCode:=NewPos.Code;
      NewX:=NewPos.X;
      NewY:=NewPos.Y;
    end;
    // unknown operator => use only SrcFilename
    //debugln(['TCodeToolManager.FindGBDIdentifier operator not yet supported: ',dbgstr(p^)]);
    aMessage:='operator not supported: '+dbgstr(p^);
    exit;
  end else begin
    // example: ??
  end;

  aMessage:='unknown identifier "'+GDBIdentifier+'"';
end;

function TCodeToolManager.CompleteCode(Code: TCodeBuffer; X, Y,
  TopLine: integer; out NewCode: TCodeBuffer; out NewX, NewY, NewTopLine,
  BlockTopLine, BlockBottomLine: integer; Interactive: Boolean): boolean;
var
  CursorPos: TCodeXYPosition;
  NewPos: TCodeXYPosition;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.CompleteCode A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  NewX := 0;
  NewY := 0;
  NewTopLine := 0;
  NewCode := NIL;
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    Result:=FCurCodeTool.CompleteCode(CursorPos,TopLine,
      NewPos,NewTopLine, BlockTopLine, BlockBottomLine,SourceChangeCache,Interactive);
    if Result then begin
      NewX:=NewPos.X;
      NewY:=NewPos.Y;
      NewCode:=NewPos.Code;
    end;
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.CreateVariableForIdentifier(Code: TCodeBuffer; X, Y,
  TopLine: integer; out NewCode: TCodeBuffer; out NewX, NewY,
  NewTopLine: integer; Interactive: Boolean): boolean;
var
  CursorPos: TCodeXYPosition;
  NewPos: TCodeXYPosition;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.CreateVariableForIdentifier A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    Result:=FCurCodeTool.CreateVariableForIdentifier(CursorPos,TopLine,
      NewPos,NewTopLine,SourceChangeCache,Interactive);
    if Result then begin
      NewX:=NewPos.X;
      NewY:=NewPos.Y;
      NewCode:=NewPos.Code;
    end;
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.AddMethods(Code: TCodeBuffer; X, Y, TopLine: integer;
  ListOfPCodeXYPosition: TFPList; const VirtualToOverride: boolean; out
  NewCode: TCodeBuffer; out NewX, NewY, NewTopLine, BlockTopLine,
  BlockBottomLine: integer): boolean;
var
  CursorPos, NewPos: TCodeXYPosition;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.AddMethods A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  NewCode:=nil;
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    Result:=FCurCodeTool.AddMethods(CursorPos,TopLine,ListOfPCodeXYPosition,
              VirtualToOverride,NewPos,NewTopLine,BlockTopLine,BlockBottomLine,SourceChangeCache);
    NewCode:=NewPos.Code;
    NewX:=NewPos.X;
    NewY:=NewPos.Y;
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.GuessTypeOfIdentifier(Code: TCodeBuffer; X,
  Y: integer; out ItsAKeyword, IsSubIdentifier: boolean;
  out ExistingDefinition: TFindContext;
  out ListOfPFindContext: TFPList; out NewExprType: TExpressionType;
  out NewType: string): boolean;
var
  CursorPos: TCodeXYPosition;
begin
  {$IFDEF CTDEBUG}
  DebugLn(['TCodeToolManager.GuessTypeOfIdentifier A ',Code.Filename,' X=',X,' Y=',Y]);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    Result:=FCurCodeTool.GuessTypeOfIdentifier(CursorPos,ItsAKeyword,
              IsSubIdentifier,ExistingDefinition,ListOfPFindContext,
              NewExprType,NewType);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.GetPossibleInitsForVariable(Code: TCodeBuffer; X,
  Y: integer; out Statements: TStrings; out InsertPositions: TObjectList
  ): boolean;
var
  CursorPos: TCodeXYPosition;
begin
  {$IFDEF CTDEBUG}
  DebugLn(['TCodeToolManager.GetPossibleInitsForVariable A ',Code.Filename,' X=',X,' Y=',Y]);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  CursorPos.Code:=Code;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  try
    Result:=FCurCodeTool.GetPossibleInitsForVariable(CursorPos,Statements,
      InsertPositions,SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.DeclareVariableNearBy(Code: TCodeBuffer; X,
  Y: integer; const VariableName, NewType, NewUnitName: string;
  Visibility: TCodeTreeNodeDesc; LvlPosCode: TCodeBuffer; LvlPosX: integer;
  LvlPosY: integer): boolean;
var
  CursorPos, LvlPos: TCodeXYPosition;
begin
  {$IFDEF CTDEBUG}
  DebugLn(['TCodeToolManager.DeclareVariableNearBy A ',Code.Filename,' X=',X,' Y=',Y]);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  CursorPos.Code:=Code;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  LvlPos.Code:=LvlPosCode;
  LvlPos.X:=LvlPosX;
  LvlPos.Y:=LvlPosY;
  try
    Result:=FCurCodeTool.DeclareVariableNearBy(CursorPos,VariableName,
                       NewType,NewUnitName,Visibility,SourceChangeCache,LvlPos);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.DeclareVariableAt(Code: TCodeBuffer; X, Y: integer;
  const VariableName, NewType, NewUnitName: string): boolean;
var
  CursorPos: TCodeXYPosition;
begin
  {$IFDEF CTDEBUG}
  DebugLn(['TCodeToolManager.DeclareVariableNearBy A ',Code.Filename,' X=',X,' Y=',Y]);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  CursorPos.Code:=Code;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  try
    Result:=FCurCodeTool.DeclareVariableAt(CursorPos,VariableName,
                                         NewType,NewUnitName,SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FindRedefinitions(Code: TCodeBuffer; out
  TreeOfCodeTreeNodeExt: TAVLTree; WithEnums: boolean): boolean;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindRedefinitions A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  TreeOfCodeTreeNodeExt:=nil;
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindRedefinitions(TreeOfCodeTreeNodeExt,WithEnums);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.RemoveRedefinitions(Code: TCodeBuffer;
  TreeOfCodeTreeNodeExt: TAVLTree): boolean;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.RemoveRedefinitions A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.RemoveRedefinitions(TreeOfCodeTreeNodeExt,
                                             SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.RemoveAllRedefinitions(Code: TCodeBuffer): boolean;
var
  TreeOfCodeTreeNodeExt: TAVLTree;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.RemoveAllRedefinitions A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  TreeOfCodeTreeNodeExt:=nil;
  try
    TreeOfCodeTreeNodeExt:=nil;
    if not InitCurCodeTool(Code) then exit;
    try
      Result:=FCurCodeTool.FindRedefinitions(TreeOfCodeTreeNodeExt,false);
      if not Result then exit;
      Result:=FCurCodeTool.RemoveRedefinitions(TreeOfCodeTreeNodeExt,
                                               SourceChangeCache);
    except
      on e: Exception do Result:=HandleException(e);
    end;
  finally
    DisposeAVLTree(TreeOfCodeTreeNodeExt);
  end;
end;

function TCodeToolManager.RemoveApplicationScaledStatement(Code: TCodeBuffer
  ): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.RemoveApplicationScaledStatement A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.RemoveApplicationScaledStatement(SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FindAliasDefinitions(Code: TCodeBuffer; out
  TreeOfCodeTreeNodeExt: TAVLTree; OnlyWrongType: boolean): boolean;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindAliasDefinitions A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  TreeOfCodeTreeNodeExt:=nil;
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindAliasDefinitions(TreeOfCodeTreeNodeExt,
                                              OnlyWrongType);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FixAliasDefinitions(Code: TCodeBuffer;
  TreeOfCodeTreeNodeExt: TAVLTree): boolean;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FixAliasDefinitions A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FixAliasDefinitions(TreeOfCodeTreeNodeExt,
                                             SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FixAllAliasDefinitions(Code: TCodeBuffer): boolean;
var
  TreeOfCodeTreeNodeExt: TAVLTree;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FixAllAliasDefinitions A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  TreeOfCodeTreeNodeExt:=nil;
  try
    TreeOfCodeTreeNodeExt:=nil;
    if not InitCurCodeTool(Code) then exit;
    try
      Result:=FCurCodeTool.FindAliasDefinitions(TreeOfCodeTreeNodeExt,true);
      if not Result then exit;
      Result:=FCurCodeTool.FixAliasDefinitions(TreeOfCodeTreeNodeExt,
                                               SourceChangeCache);
    except
      on e: Exception do Result:=HandleException(e);
    end;
  finally
    DisposeAVLTree(TreeOfCodeTreeNodeExt);
  end;
end;

function TCodeToolManager.FindConstFunctions(Code: TCodeBuffer; out
  TreeOfCodeTreeNodeExt: TAVLTree): boolean;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindConstFunctions A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  TreeOfCodeTreeNodeExt:=nil;
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindConstFunctions(TreeOfCodeTreeNodeExt);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.ReplaceConstFunctions(Code: TCodeBuffer;
  TreeOfCodeTreeNodeExt: TAVLTree): boolean;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.ReplaceConstFunctions A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.ReplaceConstFunctions(TreeOfCodeTreeNodeExt,
                                               SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.ReplaceAllConstFunctions(Code: TCodeBuffer): boolean;
var
  TreeOfCodeTreeNodeExt: TAVLTree;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.ReplaceAllConstFunctions A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  try
    repeat
      TreeOfCodeTreeNodeExt:=nil;
      try
        Result:=FCurCodeTool.FindConstFunctions(TreeOfCodeTreeNodeExt);
        if (not Result) or (TreeOfCodeTreeNodeExt=nil)
        or (TreeOfCodeTreeNodeExt.Count=0) then
          break;
        Result:=FCurCodeTool.ReplaceConstFunctions(TreeOfCodeTreeNodeExt,
                                                   SourceChangeCache);
      finally
        DisposeAVLTree(TreeOfCodeTreeNodeExt);
      end;
    until not Result;
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FindTypeCastFunctions(Code: TCodeBuffer; out
  TreeOfCodeTreeNodeExt: TAVLTree): boolean;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindTypeCastFunctions A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  TreeOfCodeTreeNodeExt:=nil;
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindTypeCastFunctions(TreeOfCodeTreeNodeExt);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.ReplaceTypeCastFunctions(Code: TCodeBuffer;
  TreeOfCodeTreeNodeExt: TAVLTree): boolean;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.ReplaceTypeCastFunctions A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.ReplaceTypeCastFunctions(TreeOfCodeTreeNodeExt,
                                                  SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.ReplaceAllTypeCastFunctions(Code: TCodeBuffer
  ): boolean;
var
  TreeOfCodeTreeNodeExt: TAVLTree;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.ReplaceAllTypeCastFunctions A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  try
    repeat
      TreeOfCodeTreeNodeExt:=nil;
      try
        Result:=FCurCodeTool.FindTypeCastFunctions(TreeOfCodeTreeNodeExt);
        if (not Result) or (TreeOfCodeTreeNodeExt=nil)
        or (TreeOfCodeTreeNodeExt.Count=0) then
          break;
        Result:=FCurCodeTool.ReplaceTypeCastFunctions(TreeOfCodeTreeNodeExt,
                                                      SourceChangeCache);
      finally
        DisposeAVLTree(TreeOfCodeTreeNodeExt);
      end;
    until not Result;
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FixForwardDefinitions(Code: TCodeBuffer): boolean;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FixForwardDefinitions A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FixForwardDefinitions(SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FindEmptyMethods(Code: TCodeBuffer;
  const AClassName: string; X, Y: integer;
  const Sections: TPascalClassSections; ListOfPCodeXYPosition: TFPList;
  out AllEmpty: boolean): boolean;
var
  CursorPos: TCodeXYPosition;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindEmptyMethods A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    Result:=FCurCodeTool.FindEmptyMethods(CursorPos,AClassName,Sections,
                                          ListOfPCodeXYPosition,AllEmpty);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.RemoveEmptyMethods(Code: TCodeBuffer;
  const AClassName: string; X,Y: integer;
  const Sections: TPascalClassSections; out AllRemoved: boolean;
  const Attr: TProcHeadAttributes; out RemovedProcHeads: TStrings): boolean;
var
  CursorPos: TCodeXYPosition;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.RemoveEmptyMethods A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  CursorPos.X:=X;
  CursorPos.Y:=Y;
  CursorPos.Code:=Code;
  try
    Result:=FCurCodeTool.RemoveEmptyMethods(CursorPos,AClassName,Sections,
                            SourceChangeCache,AllRemoved,Attr,RemovedProcHeads);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FindUnusedUnits(Code: TCodeBuffer; Units: TStrings
  ): boolean;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindEmptyMethods A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindUnusedUnits(Units);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.InitClassCompletion(Code: TCodeBuffer;
  const AClassName: string; out CodeTool: TCodeTool): boolean;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.InitClassCompletion A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  CodeTool:=nil;
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.InitClassCompletion(AClassName,SourceChangeCache);
    CodeTool:=FCurCodeTool;
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.CheckExtractProc(Code: TCodeBuffer; const StartPoint,
  EndPoint: TPoint; out MethodPossible, SubProcPossible,
  SubProcSameLvlPossible: boolean; out MissingIdentifiers: TAVLTree;
  VarTree: TAVLTree): boolean;
var
  StartPos, EndPos: TCodeXYPosition;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.CheckExtractProc A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  StartPos.X:=StartPoint.X;
  StartPos.Y:=StartPoint.Y;
  StartPos.Code:=Code;
  EndPos.X:=EndPoint.X;
  EndPos.Y:=EndPoint.Y;
  EndPos.Code:=Code;
  try
    Result:=FCurCodeTool.CheckExtractProc(StartPos,EndPos,MethodPossible,
                      SubProcPossible,SubProcSameLvlPossible,MissingIdentifiers,
                      VarTree);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.ExtractProc(Code: TCodeBuffer; const StartPoint,
  EndPoint: TPoint; ProcType: TExtractProcType; const ProcName: string;
  IgnoreIdentifiers: TAVLTree; var NewCode: TCodeBuffer; var NewX, NewY,
  NewTopLine, BlockTopLine, BlockBottomLine: integer;
  FunctionResultVariableStartPos: integer): boolean;
var
  StartPos, EndPos: TCodeXYPosition;
  NewPos: TCodeXYPosition;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.ExtractProc A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  if not InitCurCodeTool(Code) then exit;
  StartPos.X:=StartPoint.X;
  StartPos.Y:=StartPoint.Y;
  StartPos.Code:=Code;
  EndPos.X:=EndPoint.X;
  EndPos.Y:=EndPoint.Y;
  EndPos.Code:=Code;
  try
    Result:=FCurCodeTool.ExtractProc(StartPos,EndPos,ProcType,ProcName,
                         IgnoreIdentifiers,NewPos,NewTopLine,BlockTopLine,BlockBottomLine,SourceChangeCache,
                         FunctionResultVariableStartPos);
    if Result then begin
      NewX:=NewPos.X;
      NewY:=NewPos.Y;
      NewCode:=NewPos.Code;
    end;
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FindAssignMethod(Code: TCodeBuffer; X, Y: integer;
  out Tool: TCodeTool; out ClassNode: TCodeTreeNode;
  out AssignDeclNode: TCodeTreeNode; var MemberNodeExts: TAVLTree;
  out AssignBodyNode: TCodeTreeNode; out InheritedDeclContext: TFindContext;
  ProcName: string): boolean;
var
  CodePos: TCodeXYPosition;
begin
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindAssignMethod A ',Code.Filename);
  {$ENDIF}
  Result:=false;
  AssignDeclNode:=nil;
  AssignBodyNode:=nil;
  if not InitCurCodeTool(Code) then exit;
  Tool:=FCurCodeTool;
  CodePos.X:=X;
  CodePos.Y:=Y;
  CodePos.Code:=Code;
  try
    Result:=FCurCodeTool.FindAssignMethod(CodePos,ClassNode,
           AssignDeclNode,MemberNodeExts,AssignBodyNode,
           InheritedDeclContext,ProcName);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.GetSourceName(Code: TCodeBuffer;
  SearchMainCode: boolean): string;
begin
  Result:='';
  if (Code=nil)
  or ((not SearchMainCode) and (Code.LastIncludedByFile<>'')) then exit;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GetSourceName A ',Code.Filename,' ',dbgs(Code.SourceLength));
  {$ENDIF}
  {$IFDEF MEM_CHECK}
  CheckHeap(IntToStr(MemCheck_GetMem_Cnt));
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.GetSourceName;
  except
    on e: Exception do begin
      Result:=FCurCodeTool.ExtractSourceName;
      HandleException(e);
    end;
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GetSourceName B ',Code.Filename,' ',dbgs(Code.SourceLength));
  {$IFDEF MEM_CHECK}
  CheckHeap(IntToStr(MemCheck_GetMem_Cnt));
  {$ENDIF}
  DebugLn('SourceName=',Result);
  {$ENDIF}
end;

function TCodeToolManager.GetCachedSourceName(Code: TCodeBuffer): string;
begin
  Result:='';
  if (Code=nil)
  or (Code.LastIncludedByFile<>'') then exit;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GetCachedSourceName A ',Code.Filename,' ',dbgs(Code.SourceLength));
  {$ENDIF}
  {$IFDEF MEM_CHECK}
  CheckHeap(IntToStr(MemCheck_GetMem_Cnt));
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.GetCachedSourceName;
  except
    on e: Exception do HandleException(e);
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GetCachedSourceName B ',Code.Filename,' ',dbgs(Code.SourceLength));
  {$IFDEF MEM_CHECK}
  CheckHeap(IntToStr(MemCheck_GetMem_Cnt));
  {$ENDIF}
  DebugLn('SourceName=',Result);
  {$ENDIF}
end;

function TCodeToolManager.GetSourceType(Code: TCodeBuffer;
  SearchMainCode: boolean): string;
begin
  Result:='';
  if (Code=nil)
  or ((not SearchMainCode) and (Code.LastIncludedByFile<>'')) then exit;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GetSourceType A ',Code.Filename,' ',dbgs(Code.SourceLength));
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    // GetSourceType does not parse the code -> parse it with GetSourceName
    FCurCodeTool.GetSourceName;
    case FCurCodeTool.GetSourceType of
      ctnProgram: Result:='PROGRAM';
      ctnPackage: Result:='PACKAGE';
      ctnLibrary: Result:='LIBRARY';
      ctnUnit: Result:='UNIT';
    else
      Result:='';
    end;
  except
    on e: Exception do HandleException(e);
  end;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GetSourceType END ',Code.Filename,',',dbgs(Code.SourceLength));
  {$IFDEF MEM_CHECK}
  CheckHeap(IntToStr(MemCheck_GetMem_Cnt));
  {$ENDIF}
  DebugLn('SourceType=',Result);
  {$ENDIF}
end;

function TCodeToolManager.RenameSource(Code: TCodeBuffer;
  const NewName: string): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.RenameSource A ',Code.Filename,' NewName=',NewName);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.RenameSource(NewName,SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FindUnitInAllUsesSections(Code: TCodeBuffer;
  const AnUnitName: string; out NamePos, InPos: integer;
  const IgnoreMissingIncludeFiles: Boolean = False): boolean;
var
  NameAtomPos, InAtomPos: TAtomPosition;
  OldIgnoreMissingIncludeFiles: Boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindUnitInAllUsesSections A ',Code.Filename,' AUnitName=',AnUnitName);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindUnitInAllUsesSections B ',Code.Filename,' AUnitName=',AnUnitName);
  {$ENDIF}
  OldIgnoreMissingIncludeFiles := FCurCodeTool.Scanner.IgnoreMissingIncludeFiles;
  try
    FCurCodeTool.Scanner.IgnoreMissingIncludeFiles := IgnoreMissingIncludeFiles;
    Result:=FCurCodeTool.FindUnitInAllUsesSections(AnUnitName,
                NameAtomPos, InAtomPos);
    if Result then begin
      NamePos:=NameAtomPos.StartPos;
      InPos:=InAtomPos.StartPos;
    end;
  except
    on e: Exception do Result:=HandleException(e);
  end;
  FCurCodeTool.Scanner.IgnoreMissingIncludeFiles := OldIgnoreMissingIncludeFiles;
end;

function TCodeToolManager.RenameUsedUnit(Code: TCodeBuffer;
  const OldUnitName, NewUnitName, NewUnitInFile: string): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.RenameUsedUnit A ',Code.Filename,' Old=',OldUnitName,' New=',NewUnitName);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.RenameUsedUnit(OldUnitName,NewUnitName,
                  NewUnitInFile,SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.ReplaceUsedUnits(Code: TCodeBuffer;
  UnitNamePairs: TStringToStringTree): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.ReplaceUsedUnits A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.ReplaceUsedUnits(UnitNamePairs,SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.AddUnitToMainUsesSection(Code: TCodeBuffer;
  const NewUnitName, NewUnitInFile: string; AsLast: boolean;
  CheckSpecialUnits: boolean = true): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.AddUnitToMainUsesSection A ',Code.Filename,' NewUnitName=',NewUnitName);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.AddUnitToMainUsesSection(NewUnitName, NewUnitInFile,
                                    SourceChangeCache,AsLast,CheckSpecialUnits);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.AddUnitToMainUsesSectionIfNeeded(Code: TCodeBuffer;
  const NewUnitName, NewUnitInFile: string; AsLast: boolean;
  CheckSpecialUnits: boolean): boolean;
var
  NamePos, InPos: TAtomPosition;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.AddUnitToMainUsesSectionIfNeeded A ',Code.Filename,' NewUnitName=',NewUnitName);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    if not FCurCodeTool.FindUnitInAllUsesSections(NewUnitName,NamePos,InPos) then
      Result:=FCurCodeTool.AddUnitToMainUsesSection(NewUnitName, NewUnitInFile,
                                      SourceChangeCache,AsLast,CheckSpecialUnits);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.AddUnitToImplementationUsesSection(Code: TCodeBuffer;
  const NewUnitName, NewUnitInFile: string; AsLast: boolean;
  CheckSpecialUnits: boolean): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.AddUnitToImplementationUsesSection A ',Code.Filename,' NewUnitName=',NewUnitName);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.AddUnitToImplementationUsesSection(
                                    NewUnitName, NewUnitInFile,
                                    SourceChangeCache,AsLast,CheckSpecialUnits);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.RemoveUnitFromAllUsesSections(Code: TCodeBuffer;
  const AnUnitName: string): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.RemoveUnitFromAllUsesSections A ',Code.Filename,' AUnitName=',AnUnitName);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.RemoveUnitFromAllUsesSections(AnUnitName,
                SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FindUsedUnitFiles(Code: TCodeBuffer;
  var MainUsesSection: TStrings): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindUsedUnitFiles A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindUsedUnitFiles(MainUsesSection);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FindUsedUnitFiles(Code: TCodeBuffer;
  var MainUsesSection, ImplementationUsesSection: TStrings): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindUsedUnitFiles A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindUsedUnitFiles(MainUsesSection,
                                           ImplementationUsesSection);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FindUsedUnitNames(Code: TCodeBuffer;
  var MainUsesSection, ImplementationUsesSection: TStrings): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindUsedUnitNames A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindUsedUnitNames(MainUsesSection,
                                           ImplementationUsesSection);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FindMissingUnits(Code: TCodeBuffer;
  var MissingUnits: TStrings; FixCase: boolean;
  SearchImplementation: boolean): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindMissingUnits A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindMissingUnits(MissingUnits,FixCase,
                                        SearchImplementation,SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FindDelphiProjectUnits(Code: TCodeBuffer;
  out FoundInUnits, MissingInUnits, NormalUnits: TStrings;
  IgnoreNormalUnits: boolean): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindDelphiProjectUnits A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindDelphiProjectUnits(FoundInUnits, MissingInUnits,
      NormalUnits, false, IgnoreNormalUnits);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FindDelphiPackageUnits(Code: TCodeBuffer;
  var FoundInUnits, MissingInUnits, NormalUnits: TStrings;
  IgnoreNormalUnits: boolean): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindDelphiPackageUnits A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindDelphiProjectUnits(FoundInUnits,
                     MissingInUnits,NormalUnits,true,IgnoreNormalUnits);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.CommentUnitsInUsesSections(Code: TCodeBuffer;
  MissingUnits: TStrings): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.CommentUnitsInUsesSections A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.CommentUnitsInUsesSections(MissingUnits,
                                                    SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FindUnitCaseInsensitive(Code: TCodeBuffer;
  var AnUnitName, AnUnitInFilename: string): string;
begin
  Result:='';
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindUnitCaseInsensitive A ',Code.Filename,' AnUnitName="',AnUnitName,'"',' AnUnitInFilename="',AnUnitInFilename,'"');
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindUnitCaseInsensitive(AnUnitName,AnUnitInFilename);
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.FindUnitSource(Code: TCodeBuffer; const AnUnitName,
  AnUnitInFilename: string): TCodeBuffer;
begin
  Result:=nil;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindUnit A ',Code.Filename,' AnUnitName="',AnUnitName,'" AnUnitInFilename="',AnUnitInFilename,'"');
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindUnitSource(AnUnitName,AnUnitInFilename,false);
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.CreateUsesGraph: TUsesGraph;
begin
  Result:=TUsesGraph.Create;
  Result.DirectoryCachePool:=DirectoryCachePool;
  Result.OnGetCodeToolForBuffer:=@DoOnGetCodeToolForBuffer;
  Result.OnLoadFile:=@DoOnLoadFileForTool;
end;

function TCodeToolManager.FindLFMFileName(Code: TCodeBuffer): string;
var LinkIndex: integer;
  CurCode: TCodeBuffer;
  Ext: string;
begin
  Result:='';
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindLFMFileName A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    LinkIndex:=-1;
    CurCode:=FCurCodeTool.FindNextIncludeInInitialization(LinkIndex);
    while (CurCode<>nil) do begin
      if UpperCaseStr(ExtractFileExt(CurCode.Filename))='.LRS' then begin
        Result:=CurCode.Filename;
        Ext:=ExtractFileExt(Result);
        Result:=copy(Result,1,length(Result)-length(Ext))+'.lfm';
        exit;
      end;
      CurCode:=FCurCodeTool.FindNextIncludeInInitialization(LinkIndex);
    end;
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.CheckLFM(UnitCode, LFMBuf: TCodeBuffer;
  out LFMTree: TLFMTree; RootMustBeClassInUnit, RootMustBeClassInIntf,
  ObjectsMustExist: boolean): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.CheckLFM A ',UnitCode.Filename,' ',LFMBuf.Filename);
  {$ENDIF}
  if not InitCurCodeTool(UnitCode) then exit;
  try
    Result:=FCurCodeTool.CheckLFM(LFMBuf,LFMTree,OnFindDefinePropertyForContext,
                 RootMustBeClassInUnit,RootMustBeClassInIntf,ObjectsMustExist);
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.FindNextResourceFile(Code: TCodeBuffer;
  var LinkIndex: integer): TCodeBuffer;
begin
  Result:=nil;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindNextResourceFile A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindNextIncludeInInitialization(LinkIndex);
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.AddLazarusResourceHeaderComment(Code: TCodeBuffer;
  const CommentText: string): boolean;
begin
  Result:=false;
  if not InitResourceTool then exit;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.AddLazarusResourceHeaderComment A ',Code.Filename,' CommentText=',CommentText);
  {$ENDIF}
  try
    Result:=GetResourceTool.AddLazarusResourceHeaderComment(Code,
      '{ '+CommentText+' }'+SourceChangeCache.BeautifyCodeOptions.LineEnd
      +SourceChangeCache.BeautifyCodeOptions.LineEnd);
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.FindLazarusResource(Code: TCodeBuffer;
  const ResourceName: string): TAtomPosition;
begin
  Result.StartPos:=-1;
  if not InitResourceTool then exit;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindLazarusResource A ',Code.Filename,' ResourceName=',ResourceName);
  {$ENDIF}
  try
    Result:=GetResourceTool.FindLazarusResource(Code,ResourceName,-1);
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.AddLazarusResource(Code: TCodeBuffer;
  const ResourceName, ResourceData: string): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.AddLazarusResource A ',Code.Filename,' ResourceName=',ResourceName,' ',dbgs(length(ResourceData)));
  {$ENDIF}
  if not InitResourceTool then exit;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.AddLazarusResource B ');
  {$ENDIF}
  try
    Result:=GetResourceTool.AddLazarusResource(Code,ResourceName,ResourceData);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.RemoveLazarusResource(Code: TCodeBuffer;
  const ResourceName: string): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.RemoveLazarusResource A ',Code.Filename,' ResourceName=',ResourceName);
  {$ENDIF}
  if not InitResourceTool then exit;
  try
    Result:=GetResourceTool.RemoveLazarusResource(Code,ResourceName);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.RenameMainInclude(Code: TCodeBuffer;
  const NewFilename: string; KeepPath: boolean): boolean;
var
  LinkIndex: integer;
  OldIgnoreMissingIncludeFiles: boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.RenameMainInclude A ',Code.Filename,' NewFilename=',NewFilename,' KeepPath=',dbgs(KeepPath));
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    OldIgnoreMissingIncludeFiles:=
      FCurCodeTool.Scanner.IgnoreMissingIncludeFiles;
    FCurCodeTool.Scanner.IgnoreMissingIncludeFiles:=true;
    LinkIndex:=-1;
    if FCurCodeTool.FindNextIncludeInInitialization(LinkIndex)=nil then exit;
    Result:=FCurCodeTool.RenameInclude(LinkIndex,NewFilename,KeepPath,
                       SourceChangeCache);
    FCurCodeTool.Scanner.IgnoreMissingIncludeFiles:=
      OldIgnoreMissingIncludeFiles;
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.RenameIncludeDirective(Code: TCodeBuffer;
  LinkIndex: integer; const NewFilename: string; KeepPath: boolean): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.RenameIncludeDirective A ',Code.Filename,' NewFilename=',NewFilename,' KeepPath=',dbgs(KeepPath));
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.RenameInclude(LinkIndex,NewFilename,KeepPath,
                                       SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

procedure TCodeToolManager.DefaultFindDefinePropertyForContext(Sender: TObject;
  const ClassContext, AncestorClassContext: TFindContext; LFMNode: TLFMTreeNode;
  const IdentName: string; var IsDefined: boolean);
var
  PersistentClassName: String;
  AncestorClassName: String;
begin
  if Assigned(OnFindDefineProperty) then begin
    PersistentClassName:=ClassContext.Tool.ExtractClassName(
                                                       ClassContext.Node,false);
    AncestorClassName:='';
    if AncestorClassContext.Tool<>nil then
     AncestorClassName:=AncestorClassContext.Tool.ExtractClassName(
                                               AncestorClassContext.Node,false);
    OnFindDefineProperty(ClassContext.Tool,
                         PersistentClassName,AncestorClassName,IdentName,
                         IsDefined);
  end;
end;

function TCodeToolManager.FindCreateFormStatement(Code: TCodeBuffer;
  StartPos: integer;
  const AClassName, AVarName: string;
  out Position: integer): integer;
// 0=found, -1=not found, 1=found, but wrong classname
var PosAtom: TAtomPosition;
begin
  Result:=-1;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindCreateFormStatement A ',Code.Filename,' StartPos=',dbgs(StartPos),' ',AClassName,':',AVarName);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindCreateFormStatement(StartPos,AClassName,
                 AVarName,PosAtom);
    if Result<>-1 then
      Position:=PosAtom.StartPos;
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.AddCreateFormStatement(Code: TCodeBuffer;
  const AClassName, AVarName: string): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.AddCreateFormStatement A ',Code.Filename,' ',AClassName,':',AVarName);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.AddCreateFormStatement(AClassName,AVarName,
                    SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.RemoveCreateFormStatement(Code: TCodeBuffer;
  const AVarName: string): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.RemoveCreateFormStatement A ',Code.Filename,' ',AVarName);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.RemoveCreateFormStatement(AVarName,SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.ChangeCreateFormStatement(Code: TCodeBuffer;
  const OldClassName, OldVarName: string; const NewClassName,
  NewVarName: string; OnlyIfExists: boolean): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.ChangeCreateFormStatement A ',Code.Filename,
    ' ',OldVarName+':',OldClassName,' -> ',NewVarName+':',NewClassName,
    ' OnlyIfExists=',dbgs(OnlyIfExists));
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.ChangeCreateFormStatement(-1,OldClassName,OldVarName,
                    NewClassName,NewVarName,OnlyIfExists,
                    SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.ListAllCreateFormStatements(
  Code: TCodeBuffer): TStrings;
begin
  Result:=nil;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.ListAllCreateFormStatements A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.ListAllCreateFormStatements;
  except
    on e: Exception do HandleException(e);
  end;
end;

function TCodeToolManager.SetAllCreateFromStatements(Code: TCodeBuffer; 
  List: TStrings): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.SetAllCreateFromStatements A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.SetAllCreateFromStatements(List,SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.SetApplicationScaledStatement(Code: TCodeBuffer;
  const NewScaled: Boolean): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.SetApplicationScaledStatement A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.SetApplicationScaledStatement(NewScaled,
                                                      SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.GetApplicationTitleStatement(Code: TCodeBuffer;
  var Title: string): boolean;
var
  StartPos, StringConstStartPos, EndPos: integer;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.GetApplicationTitleStatement A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindApplicationTitleStatement(StartPos,
                                                    StringConstStartPos,EndPos);
    if StartPos=0 then ;
    Result:=FCurCodeTool.GetApplicationTitleStatement(StringConstStartPos,
                                                      EndPos,Title);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.SetApplicationTitleStatement(Code: TCodeBuffer;
  const NewTitle: string): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.SetApplicationTitleStatement A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.SetApplicationTitleStatement(NewTitle,
                                                      SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.RemoveApplicationTitleStatement(Code: TCodeBuffer
  ): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.RemoveApplicationTitleStatement A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.RemoveApplicationTitleStatement(SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.RenameForm(Code: TCodeBuffer; const OldFormName,
  OldFormClassName: string; const NewFormName, NewFormClassName: string
  ): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.RenameForm A ',Code.Filename,
    ' OldFormName=',OldFormName,' OldFormClassName=',OldFormClassName,
    ' NewFormName=',NewFormName,' NewFormClassName=',NewFormClassName);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.RenameForm(OldFormName,OldFormClassName,
                                NewFormName,NewFormClassName,SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FindFormAncestor(Code: TCodeBuffer;
  const FormClassName: string; var AncestorClassName: string;
  DirtySearch: boolean): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindFormAncestor A ',Code.Filename,' ',FormClassName);
  {$ENDIF}
  AncestorClassName:='';
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindFormAncestor(FormClassName,AncestorClassName);
  except
    on e: Exception do Result:=HandleException(e);
  end;
  if (not Result) and DirtySearch then begin
    AncestorClassName:=FindClassAncestorName(Code.Source,FormClassName);
    Result:=AncestorClassName<>'';
  end;
end;

function TCodeToolManager.CompleteComponent(Code: TCodeBuffer;
  AComponent, AncestorComponent: TComponent): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.CompleteComponent A ',Code.Filename,' ',AComponent.Name,':',AComponent.ClassName,' ',dbgsName(AncestorComponent));
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.CompleteComponent(AComponent,AncestorComponent,
                                           SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.PublishedVariableExists(Code: TCodeBuffer;
  const AClassName, AVarName: string; ErrorOnClassNotFound: boolean): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.PublishedVariableExists A ',Code.Filename,' ',AClassName,':',AVarName);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindPublishedVariable(AClassName,
                 AVarName,ErrorOnClassNotFound)<>nil;
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.AddPublishedVariable(Code: TCodeBuffer;
  const AClassName, VarName, VarType: string): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.AddPublishedVariable A ',Code.Filename,' ',AClassName,':',VarName);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.AddPublishedVariable(AClassName,
                      VarName,VarType,SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.RemovePublishedVariable(Code: TCodeBuffer;
  const AClassName, AVarName: string; ErrorOnClassNotFound: boolean): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.RemovePublishedVariable A ',Code.Filename,' ',AClassName,':',AVarName);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.RemovePublishedVariable(AClassName,
               AVarName,ErrorOnClassNotFound,SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.RenamePublishedVariable(Code: TCodeBuffer;
  const AClassName, OldVariableName, NewVarName, VarType: shortstring;
  ErrorOnClassNotFound: boolean): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.RenamePublishedVariable A ',Code.Filename,' ',AClassName,' OldVar=',OldVariableName,' NewVar=',NewVarName);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.RenamePublishedVariable(AClassName,
               OldVariableName,NewVarName,VarType,
               ErrorOnClassNotFound,SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.RetypeClassVariables(Code: TCodeBuffer;
  const AClassName: string; ListOfReTypes: TStringToStringTree;
  ErrorOnClassNotFound: boolean; SearchImplementationToo: boolean): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.RetypeClassVariables A ',Code.Filename,' ',AClassName);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.RetypeClassVariables(AClassName,ListOfReTypes,
                ErrorOnClassNotFound,SourceChangeCache,SearchImplementationToo);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.FindDanglingComponentEvents(Code: TCodeBuffer;
  const AClassName: string; RootComponent: TComponent;
  ExceptionOnClassNotFound, SearchInAncestors: boolean; out
  ListOfPInstancePropInfo: TFPList;
  const OverrideGetMethodName: TOnGetMethodname): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.FindDanglingComponentEvents A ',Code.Filename,' ',AClassName);
  {$ENDIF}
  ListOfPInstancePropInfo:=nil;
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.FindDanglingComponentEvents(AClassName,RootComponent,
                              ExceptionOnClassNotFound,SearchInAncestors,
                              ListOfPInstancePropInfo,OverrideGetMethodName);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.ConvertDelphiToLazarusSource(Code: TCodeBuffer;
  AddLRSCode: boolean): boolean;
begin
  Result:=false;
  {$IFDEF CTDEBUG}
  DebugLn('TCodeToolManager.ConvertDelphiToLazarusSource A ',Code.Filename);
  {$ENDIF}
  if not InitCurCodeTool(Code) then exit;
  try
    Result:=FCurCodeTool.ConvertDelphiToLazarusSource(AddLRSCode,
                                                      SourceChangeCache);
  except
    on e: Exception do Result:=HandleException(e);
  end;
end;

function TCodeToolManager.DoOnFindUsedUnit(SrcTool: TFindDeclarationTool;
  const TheUnitName, TheUnitInFilename: string): TCodeBuffer;
begin
  if Assigned(OnSearchUsedUnit) then
    Result:=OnSearchUsedUnit(SrcTool.MainFilename,
                             TheUnitName,TheUnitInFilename)
  else
    Result:=nil;
end;

procedure TCodeToolManager.DoOnGatherUserIdentifiers(
  Sender: TIdentCompletionTool; const ContextFlags: TIdentifierListContextFlags
  );
begin
  if Assigned(FOnGatherUserIdentifiers) then
    FOnGatherUserIdentifiers(Sender, ContextFlags);
end;

function TCodeToolManager.DoOnGetSrcPathForCompiledUnit(Sender: TObject;
  const AFilename: string): string;
begin
  if CompareFileExt(AFilename,'.ppu',false)=0 then
    Result:=GetPPUSrcPathForDirectory(ExtractFilePath(AFilename))
  else if CompareFileExt(AFilename,'.dcu',false)=0 then
    Result:=GetDCUSrcPathForDirectory(ExtractFilePath(AFilename))
  else
    Result:='';
  if Result='' then
    Result:=GetCompiledSrcPathForDirectory(ExtractFilePath(AFilename));
end;

function TCodeToolManager.DoOnInternalGetMethodName(const AMethod: TMethod;
  CheckOwner: TObject): string;
begin
  if Assigned(OnGetMethodName) then
    Result:=OnGetMethodName(AMethod,CheckOwner)
  else if (AMethod.Data=nil) or (AMethod.Code=nil) then
    Result:=''
  else if (CheckOwner<>nil) and (TObject(AMethod.Data)<>CheckOwner) then
    Result:=''
  else
    Result:=TObject(AMethod.Data).MethodName(AMethod.Code);
end;

function TCodeToolManager.DoOnParserProgress(Tool: TCustomCodeTool): boolean;
begin
  Result:=true;
  if not FAbortable then exit;
  if not Assigned(OnCheckAbort) then exit;
  Result:=not OnCheckAbort();
end;

procedure TCodeToolManager.DoOnRescanFPCDirectoryCache(Sender: TObject);
begin
  if Assigned(FOnRescanFPCDirectoryCache) then
    FOnRescanFPCDirectoryCache(Sender);
end;

procedure TCodeToolManager.DoOnToolTreeChange(Tool: TCustomCodeTool;
  NodesDeleting: boolean);
var
  i: Integer;
begin
  CTIncreaseChangeStamp(FCodeNodeTreeChangeStep);
  if NodesDeleting then begin
    CTIncreaseChangeStamp(FCodeTreeNodesDeletedStep);
    // Note: IdentifierList nodes do not need to be cleared, because Node
    // is accessed via GetNode, which checks if nodes were deleted
  end;
  //debugln(['TCodeToolManager.OnToolTreeChange ',FHandlers[ctmOnToolTreeChanging].Count]);
  i:=FHandlers[ctmOnToolTreeChanging].Count;
  while FHandlers[ctmOnToolTreeChanging].NextDownIndex(i) do
    TOnToolTreeChanging(FHandlers[ctmOnToolTreeChanging][i])(Tool,NodesDeleting);
end;

function TCodeToolManager.DoOnScannerProgress(Sender: TLinkScanner): boolean;
begin
  Result:=true;
  if not FAbortable then exit;
  if not Assigned(OnCheckAbort) then exit;
  Result:=not OnCheckAbort();
end;

procedure TCodeToolManager.DoOnFABGetNestedComments(Sender: TObject;
  Code: TCodeBuffer; out NestedComments: boolean);
begin
  NestedComments:=GetNestedCommentsFlagForFile(Code.Filename);
end;

procedure TCodeToolManager.DoOnFABGetExamples(Sender: TObject; Code: TCodeBuffer;
  Step: integer; var CodeBuffers: TFPList; var ExpandedFilenames: TStrings);
begin
  if Assigned(OnGetIndenterExamples) then
    OnGetIndenterExamples(Sender,Code,Step,CodeBuffers,ExpandedFilenames);
end;

procedure TCodeToolManager.DoOnLoadFileForTool(Sender: TObject;
  const ExpandedFilename: string; out Code: TCodeBuffer; var Abort: boolean);
begin
  Code:=LoadFile(ExpandedFilename,true,false);
end;

function TCodeToolManager.DoOnScannerGetInitValues(Scanner: TLinkScanner;
  Code: Pointer; out AChangeStep: integer): TExpressionEvaluator;
begin
  Result:=nil;
  AChangeStep:=DefineTree.ChangeStep;
  if Code=nil then exit;
  //DefineTree.WriteDebugReport;
  if not TCodeBuffer(Code).IsVirtual then
    Result:=DefineTree.GetDefinesForDirectory(
      ExtractFilePath(TCodeBuffer(Code).Filename),false)
  else
    Result:=DefineTree.GetDefinesForVirtualDirectory;
  if Assigned(OnScannerInit) then
    OnScannerInit(Self,Scanner);
end;

procedure TCodeToolManager.DoOnDefineTreeReadValue(Sender: TObject;
  const VariableName: string; var Value: string; var Handled: boolean);
begin
  Handled:=GlobalValues.IsDefined(VariableName);
  if Handled then
    Value:=GlobalValues[VariableName];
  //DebugLn('[TCodeToolManager.OnDefineTreeReadValue] Name="',VariableName,'" = "',Value,'"');
end;

procedure TCodeToolManager.DoOnGlobalValuesChanged;
begin
  DefineTree.ClearCache;
end;

procedure TCodeToolManager.SetCheckFilesOnDisk(NewValue: boolean);
begin
  if NewValue=FCheckFilesOnDisk then exit;
  FCheckFilesOnDisk:=NewValue;
  if FCurCodeTool<>nil then
    FCurCodeTool.CheckFilesOnDisk:=NewValue;
end;

procedure TCodeToolManager.SetCodeCompletionTemplateFileName(AValue: String);
var
  OldValue: String;
  Code: TCodeBuffer;
begin
  AValue:=CleanAndExpandFilename(AValue);
  if FCodeCompletionTemplateFileName=AValue then Exit;
  OldValue:=FCodeCompletionTemplateFileName;
  FCodeCompletionTemplateFileName:=AValue;
  if CompareFilenames(FCodeCompletionTemplateFileName,OldValue)=0 then exit;
  if (FCodeCompletionTemplateFileName<>'') then
    Code:=LoadFile(FCodeCompletionTemplateFileName,true,false)
  else
    Code:=nil;
  if Code<>nil then begin
    if CTTemplateExpander=nil then
      CTTemplateExpander:=TTemplateExpander.Create;
    CTTemplateExpander.Code:=Code;
  end else begin
    FreeAndNil(CTTemplateExpander);
  end;
end;

procedure TCodeToolManager.SetCompleteProperties(const AValue: boolean);
begin
  if CompleteProperties=AValue then exit;
  FCompleteProperties:=AValue;
  if FCurCodeTool<>nil then
    FCurCodeTool.CompleteProperties:=AValue;
end;

procedure TCodeToolManager.SetIndentSize(NewValue: integer);
begin
  if NewValue=FIndentSize then exit;
  FIndentSize:=NewValue;
  if FCurCodeTool<>nil then
    FCurCodeTool.IndentSize:=NewValue;
  SourceChangeCache.BeautifyCodeOptions.Indent:=NewValue;
end;

procedure TCodeToolManager.SetTabWidth(const AValue: integer);
begin
  if FTabWidth=AValue then exit;
  FTabWidth:=AValue;
  SourceChangeCache.BeautifyCodeOptions.TabWidth:=AValue;
  Indenter.DefaultTabWidth:=AValue;
end;

procedure TCodeToolManager.SetUseTabs(AValue: boolean);
begin
  if FUseTabs=AValue then Exit;
  FUseTabs:=AValue;
  SourceChangeCache.BeautifyCodeOptions.UseTabs:=UseTabs;
end;

procedure TCodeToolManager.SetVisibleEditorLines(NewValue: integer);
begin
  if NewValue=FVisibleEditorLines then exit;
  FVisibleEditorLines:=NewValue;
  if FCurCodeTool<>nil then
    FCurCodeTool.VisibleEditorLines:=NewValue;
end;

procedure TCodeToolManager.SetJumpSingleLinePos(NewValue: integer);
begin
  if NewValue=FJumpSingleLinePos then exit;
  FJumpSingleLinePos:=NewValue;
  if FCurCodeTool<>nil then
    FCurCodeTool.JumpSingleLinePos:=NewValue;
end;

procedure TCodeToolManager.SetJumpCodeBlockPos(NewValue: integer);
begin
  if NewValue=FJumpCodeBlockPos then exit;
  FJumpCodeBlockPos:=NewValue;
  if FCurCodeTool<>nil then
    FCurCodeTool.JumpCodeBlockPos:=NewValue;
end;

procedure TCodeToolManager.SetSetPropertyVariableIsPrefix(aValue: Boolean);
begin
  if FSetPropertyVariableIsPrefix = aValue then Exit;
  FSetPropertyVariableIsPrefix := aValue;
end;

procedure TCodeToolManager.SetSetPropertyVariablename(AValue: string);
begin
  if FSetPropertyVariablename=aValue then Exit;
  FSetPropertyVariablename:=aValue;
end;

procedure TCodeToolManager.SetSetPropertyVariableUseConst(aValue: Boolean);
begin
  if FSetPropertyVariableUseConst = aValue then Exit;
  FSetPropertyVariableUseConst := aValue;
end;

procedure TCodeToolManager.SetCursorBeyondEOL(NewValue: boolean);
begin
  if NewValue=FCursorBeyondEOL then exit;
  FCursorBeyondEOL:=NewValue;
  if FCurCodeTool<>nil then
    FCurCodeTool.CursorBeyondEOL:=NewValue;
end;

procedure TCodeToolManager.BeforeApplyingChanges(var Abort: boolean);
begin
  IncreaseChangeStep;
  if Assigned(FOnBeforeApplyChanges) then
    FOnBeforeApplyChanges(Self,Abort);
end;

procedure TCodeToolManager.AfterApplyingChanges;
begin
  // clear all codetrees of changed buffers
  if FCurCodeTool<>nil then
    FCurCodeTool.Clear;
    
  // user callback
  if Assigned(FOnAfterApplyChanges) then
    FOnAfterApplyChanges(Self);
end;

function TCodeToolManager.FindCodeToolForSource(Code: TCodeBuffer
  ): TCustomCodeTool;
var
  ANode: TAVLTreeNode;
  CurSrc, SearchedSrc: Pointer;
begin
  ANode:=FPascalTools.Root;
  SearchedSrc:=Pointer(Code);
  while (ANode<>nil) do begin
    CurSrc:=Pointer(TCustomCodeTool(ANode.Data).Scanner.MainCode);
    if CurSrc>SearchedSrc then
      ANode:=ANode.Left
    else if CurSrc<SearchedSrc then
      ANode:=ANode.Right
    else begin
      Result:=TCustomCodeTool(ANode.Data);
      exit;
    end;
  end;
  Result:=nil;
end;

procedure TCodeToolManager.SetError(Id: int64; Code: TCodeBuffer; Line,
  Column: integer; const TheMessage: string);
begin
  FErrorId:=Id;
  FErrorMsg:=TheMessage;
  FErrorCode:=Code;
  FErrorLine:=Line;
  FErrorColumn:=Column;
  FErrorTopLine:=FErrorLine;
  AdjustErrorTopLine;
  WriteError;
end;

function TCodeToolManager.GetCodeToolForSource(Code: TCodeBuffer;
  GoToMainCode, ExceptionOnError: boolean): TCustomCodeTool;
// return a codetool for the source
begin
  Result:=nil;
  if Code=nil then begin
    if ExceptionOnError then
      raise Exception.Create('TCodeToolManager.GetCodeToolForSource '
        +'internal error: Code=nil');
    exit;
  end;
  if GoToMainCode then
    Code:=GetMainCode(Code);
  Result:=FindCodeToolForSource(Code);
  if Result=nil then begin
    CreateScanner(Code);
    if Code.Scanner=nil then begin
      if ExceptionOnError then
        raise ECodeToolManagerError.CreateFmt(20170422131430,ctsNoScannerFound,[Code.Filename]);
      exit;
    end;
    Result:=TCodeTool.Create;
    Result.Scanner:=Code.Scanner;
    FPascalTools.Add(Result);
    TCodeTool(Result).Beautifier:=SourceChangeCache.BeautifyCodeOptions;
    TCodeTool(Result).OnGetCodeToolForBuffer:=@DoOnGetCodeToolForBuffer;
    TCodeTool(Result).OnGetDirectoryCache:=@DoOnGetDirectoryCache;
    TCodeTool(Result).OnFindUsedUnit:=@DoOnFindUsedUnit;
    TCodeTool(Result).OnGetSrcPathForCompiledUnit:=@DoOnGetSrcPathForCompiledUnit;
    TCodeTool(Result).OnGetMethodName:=@DoOnInternalGetMethodName;
    TCodeTool(Result).OnRescanFPCDirectoryCache:=@DoOnRescanFPCDirectoryCache;
    TCodeTool(Result).OnGatherUserIdentifiers:=@DoOnGatherUserIdentifiers;
    TCodeTool(Result).DirectoryCache:=
      DirectoryCachePool.GetCache(ExtractFilePath(Code.Filename),
                                  true,true);
    Result.OnSetGlobalWriteLock:=@DoOnToolSetWriteLock;
    Result.OnTreeChange:=@DoOnToolTreeChange;
    TCodeTool(Result).OnParserProgress:=@DoOnParserProgress;
  end;
  with TCodeTool(Result) do begin
    AdjustTopLineDueToComment:=Self.AdjustTopLineDueToComment;
    AddInheritedCodeToOverrideMethod:=Self.AddInheritedCodeToOverrideMethod;
    CompleteProperties:=Self.CompleteProperties;
    SetPropertyVariablename:=Self.SetPropertyVariablename;
    SetPropertyVariableIsPrefix:=Self.SetPropertyVariableIsPrefix;
    SetPropertyVariableUseConst:=Self.SetPropertyVariableUseConst;
  end;
  Result.CheckFilesOnDisk:=FCheckFilesOnDisk;
  Result.IndentSize:=FIndentSize;
  Result.VisibleEditorLines:=FVisibleEditorLines;
  Result.JumpSingleLinePos:=FJumpSingleLinePos;
  Result.JumpCodeBlockPos:=FJumpCodeBlockPos;
  Result.CursorBeyondEOL:=FCursorBeyondEOL;
end;

function TCodeToolManager.FindDirectivesToolForSource(Code: TCodeBuffer
  ): TDirectivesTool;
var
  ANode: TAVLTreeNode;
  CurSrc, SearchedSrc: Pointer;
begin
  ANode:=FDirectivesTools.Root;
  SearchedSrc:=Pointer(Code);
  while (ANode<>nil) do begin
    CurSrc:=Pointer(TDirectivesTool(ANode.Data).Code);
    if CurSrc>SearchedSrc then
      ANode:=ANode.Left
    else if CurSrc<SearchedSrc then
      ANode:=ANode.Right
    else begin
      Result:=TDirectivesTool(ANode.Data);
      exit;
    end;
  end;
  Result:=nil;
end;

procedure TCodeToolManager.ClearCurDirectivesTool;
begin
  ClearError;
  FCurDirectivesTool:=nil;
end;

function TCodeToolManager.InitCurDirectivesTool(Code: TCodeBuffer): boolean;
begin
  Result:=false;
  ClearCurDirectivesTool;
  FCurDirectivesTool:=TDirectivesTool(GetDirectivesToolForSource(Code,true));
  {$IFDEF CTDEBUG}
  DebugLn('[TCodeToolManager.InitCurDirectivesTool] ',Code.Filename,' ',dbgs(Code.SourceLength));
  {$ENDIF}
  Result:=true;
end;

function TCodeToolManager.GetDirectivesToolForSource(Code: TCodeBuffer;
  ExceptionOnError: boolean): TCompilerDirectivesTree;
begin
  if ExceptionOnError then ;
  Result:=FindDirectivesToolForSource(Code);
  if Result=nil then begin
    Result:=TDirectivesTool.Create;
    Result.Code:=Code;
    FDirectivesTools.Add(Result);
  end;
  Result.NestedComments:=GetNestedCommentsFlagForFile(Code.Filename);
end;

procedure TCodeToolManager.SetAbortable(const AValue: boolean);
begin
  if FAbortable=AValue then exit;
  FAbortable:=AValue;
end;

procedure TCodeToolManager.SetAddInheritedCodeToOverrideMethod(
  const AValue: boolean);
begin
  if FAddInheritedCodeToOverrideMethod=AValue then exit;
  FAddInheritedCodeToOverrideMethod:=AValue;
  if FCurCodeTool<>nil then
    FCurCodeTool.AddInheritedCodeToOverrideMethod:=AValue;
end;

function TCodeToolManager.DoOnGetCodeToolForBuffer(Sender: TObject;
  Code: TCodeBuffer; GoToMainCode: boolean): TFindDeclarationTool;
begin
  {$IFDEF CTDEBUG}
  DbgOut('[TCodeToolManager.OnGetCodeToolForBuffer]');
  if Sender is TCustomCodeTool then
    DbgOut(' Sender=',TCustomCodeTool(Sender).MainFilename);
  debugln(' Code=',Code.Filename);
  {$ENDIF}
  Result:=TFindDeclarationTool(GetCodeToolForSource(Code,GoToMainCode,true));
end;

function TCodeToolManager.DoOnGetDirectoryCache(const ADirectory: string
  ): TCTDirectoryCache;
begin
  Result:=DirectoryCachePool.GetCache(ADirectory,true,true);
end;

procedure TCodeToolManager.ActivateWriteLock;
begin
  if FWriteLockCount=0 then begin
    // start a new write lock
    if FWriteLockStep<>$7fffffff then
      inc(FWriteLockStep)
    else
      FWriteLockStep:=-$7fffffff;
    SourceCache.GlobalWriteLockIsSet:=true;
    SourceCache.GlobalWriteLockStep:=FWriteLockStep;
  end;
  inc(FWriteLockCount);
  {$IFDEF CTDEBUG}
  DebugLn('[TCodeToolManager.ActivateWriteLock] FWriteLockCount=',dbgs(FWriteLockCount),' FWriteLockStep=',dbgs(FWriteLockStep));
  {$ENDIF}
end;

procedure TCodeToolManager.DeactivateWriteLock;
begin
  if FWriteLockCount>0 then begin
    dec(FWriteLockCount);
    if FWriteLockCount=0 then begin
      // end the write lock
      if FWriteLockStep<>$7fffffff then
        inc(FWriteLockStep)
      else
        FWriteLockStep:=-$7fffffff;
      SourceCache.GlobalWriteLockIsSet:=false;
      SourceCache.GlobalWriteLockStep:=FWriteLockStep;
    end;
  end;
  {$IFDEF CTDEBUG}
  DebugLn('[TCodeToolManager.DeactivateWriteLock] FWriteLockCount=',dbgs(FWriteLockCount),' FWriteLockStep=',dbgs(FWriteLockStep));
  {$ENDIF}
end;

procedure TCodeToolManager.IncreaseChangeStep;
begin
  if FChangeStep<>High(Integer) then
    inc(FChangeStep)
  else
    FChangeStep:=Low(Integer);
end;

procedure TCodeToolManager.GetCodeTreeNodesDeletedStep(out
  NodesDeletedStep: integer);
begin
  NodesDeletedStep:=FCodeTreeNodesDeletedStep;
end;

procedure TCodeToolManager.AddHandlerToolTreeChanging(
  const OnToolTreeChanging: TOnToolTreeChanging);
begin
  AddHandler(ctmOnToolTreeChanging,TMethod(OnToolTreeChanging));
end;

procedure TCodeToolManager.RemoveHandlerToolTreeChanging(
  const OnToolTreeChanging: TOnToolTreeChanging);
begin
  RemoveHandler(ctmOnToolTreeChanging,TMethod(OnToolTreeChanging));
end;

function TCodeToolManager.GetResourceTool: TResourceCodeTool;
begin
  if FResourceTool=nil then FResourceTool:=TResourceCodeTool.Create;
  Result:=FResourceTool;
end;

function TCodeToolManager.GetOwnerForCodeTreeNode(ANode: TCodeTreeNode
  ): TObject;
var
  AToolNode: TAVLTreeNode;
  CurTool: TCustomCodeTool;
  RootCodeTreeNode: TCodeTreeNode;
  CurDirTool: TCompilerDirectivesTree;
begin
  Result:=nil;
  if ANode=nil then exit;
  RootCodeTreeNode:=ANode.GetRoot;
  
  // search in codetools
  AToolNode:=FPascalTools.FindLowest;
  while (AToolNode<>nil) do begin
    CurTool:=TCustomCodeTool(AToolNode.Data);
    if (CurTool.Tree<>nil) and (CurTool.Tree.Root=RootCodeTreeNode) then begin
      Result:=CurTool;
      exit;
    end;
    AToolNode:=FPascalTools.FindSuccessor(AToolNode);
  end;
  
  // search in directivestools
  AToolNode:=FDirectivesTools.FindLowest;
  while (AToolNode<>nil) do begin
    CurDirTool:=TCompilerDirectivesTree(AToolNode.Data);
    if (CurDirTool.Tree<>nil) and (CurDirTool.Tree.Root=RootCodeTreeNode) then
    begin
      Result:=CurDirTool;
      exit;
    end;
    AToolNode:=FDirectivesTools.FindSuccessor(AToolNode);
  end;
end;

function TCodeToolManager.DirectoryCachePoolGetString(const ADirectory: string;
  const AStringType: TCTDirCacheString): string;
begin
  case AStringType of
  ctdcsUnitPath: Result:=GetUnitPathForDirectory(ADirectory,false);
  ctdcsSrcPath: Result:=GetSrcPathForDirectory(ADirectory,false);
  ctdcsIncludePath: Result:=GetIncludePathForDirectory(ADirectory,false);
  ctdcsCompleteSrcPath: Result:=GetCompleteSrcPathForDirectory(ADirectory,false);
  ctdcsUnitLinks: Result:=GetUnitLinksForDirectory(ADirectory,false);
  ctdcsUnitSet: Result:=GetUnitSetIDForDirectory(ADirectory,false);
  ctdcsFPCUnitPath: Result:=GetFPCUnitPathForDirectory(ADirectory,false);
  ctdcsNamespaces: Result:=GetNamespacesForDirectory(ADirectory,false);
  else RaiseCatchableException('');
  end;
end;

function TCodeToolManager.DirectoryCachePoolFindVirtualFile(
  const Filename: string): string;
var
  Code: TCodeBuffer;
begin
  Result:='';
  if (Filename='') or (System.Pos(PathDelim,Filename)>0) then
    exit;
  Code:=FindFile(Filename);
  if Code<>nil then
    Result:=Code.Filename;
end;

function TCodeToolManager.DirectoryCachePoolGetUnitFromSet(const UnitSet,
  AnUnitName: string; SrcSearchRequiresPPU: boolean): string;
var
  Changed: boolean;
  UnitSetCache: TFPCUnitSetCache;
begin
  Result:='';
  UnitSetCache:=CompilerDefinesCache.FindUnitSetWithID(UnitSet,Changed,false);
  if UnitSetCache=nil then begin
    debugln(['TCodeToolManager.DirectoryCachePoolGetUnitFromSet invalid UnitSet="',dbgstr(UnitSet),'"']);
    exit;
  end;
  if Changed then begin
    debugln(['TCodeToolManager.DirectoryCachePoolGetUnitFromSet outdated UnitSet="',dbgstr(UnitSet),'"']);
    exit;
  end;
  Result:=UnitSetCache.GetUnitSrcFile(AnUnitName,SrcSearchRequiresPPU);
end;

function TCodeToolManager.DirectoryCachePoolGetCompiledUnitFromSet(
  const UnitSet, AnUnitName: string): string;
var
  Changed: boolean;
  UnitSetCache: TFPCUnitSetCache;
begin
  Result:='';
  UnitSetCache:=CompilerDefinesCache.FindUnitSetWithID(UnitSet,Changed,false);
  if UnitSetCache=nil then begin
    debugln(['TCodeToolManager.DirectoryCachePoolGetCompiledUnitFromSet invalid UnitSet="',dbgstr(UnitSet),'"']);
    exit;
  end;
  if Changed then begin
    debugln(['TCodeToolManager.DirectoryCachePoolGetCompiledUnitFromSet outdated UnitSet="',dbgstr(UnitSet),'"']);
    exit;
  end;
  Result:=UnitSetCache.GetCompiledUnitFile(AnUnitName);
end;

procedure TCodeToolManager.DirectoryCachePoolIterateFPCUnitsFromSet(
  const UnitSet: string; const Iterate: TCTOnIterateFile);
var
  Changed: boolean;
  UnitSetCache: TFPCUnitSetCache;
  aConfigCache: TPCTargetConfigCache;
  Node: TAVLTreeNode;
  Item: PStringToStringItem;
begin
  UnitSetCache:=CompilerDefinesCache.FindUnitSetWithID(UnitSet,Changed,false);
  if UnitSetCache=nil then begin
    debugln(['TCodeToolManager.DirectoryCachePoolIterateFPCUnitsFromSet invalid UnitSet="',dbgstr(UnitSet),'"']);
    exit;
  end;
  if Changed then begin
    debugln(['TCodeToolManager.DirectoryCachePoolIterateFPCUnitsFromSet outdated UnitSet="',dbgstr(UnitSet),'"']);
    exit;
  end;
  aConfigCache:=UnitSetCache.GetConfigCache(false);
  if (aConfigCache=nil) or (aConfigCache.Units=nil) then exit;
  Node:=aConfigCache.Units.Tree.FindLowest;
  while Node<>nil do begin
    Item:=PStringToStringItem(Node.Data);
    Iterate(Item^.Value);
    Node:=aConfigCache.Units.Tree.FindSuccessor(Node);
  end;
end;

procedure TCodeToolManager.AddHandler(HandlerType: TCodeToolManagerHandler;
  const Handler: TMethod);
begin
  if Handler.Code=nil then RaiseCatchableException('TCodeToolManager.AddHandler');
  if FHandlers[HandlerType]=nil then
    FHandlers[HandlerType]:=TMethodList.Create;
  FHandlers[HandlerType].Add(Handler);
end;

procedure TCodeToolManager.RemoveHandler(HandlerType: TCodeToolManagerHandler;
  const Handler: TMethod);
begin
  FHandlers[HandlerType].Remove(Handler);
end;

procedure TCodeToolManager.DoOnToolSetWriteLock(Lock: boolean);
begin
  if Lock then ActivateWriteLock else DeactivateWriteLock;
end;

procedure TCodeToolManager.DoOnToolGetChangeSteps(out SourcesChangeStep,
  FilesChangeStep: int64; out InitValuesChangeStep: integer);
begin
  SourcesChangeStep:=SourceCache.ChangeStamp;
  FilesChangeStep:=FileStateCache.TimeStamp;
  InitValuesChangeStep:=DefineTree.ChangeStep;
end;

procedure TCodeToolManager.ConsistencyCheck;
begin
  if FCurCodeTool<>nil then begin
    FCurCodeTool.ConsistencyCheck;
  end;
  DefinePool.ConsistencyCheck;
  DefineTree.ConsistencyCheck;
  SourceCache.ConsistencyCheck;
  GlobalValues.ConsistencyCheck;
  SourceChangeCache.ConsistencyCheck;
  FPascalTools.ConsistencyCheck;
  FDirectivesTools.ConsistencyCheck;
end;

procedure TCodeToolManager.WriteDebugReport(WriteTool,
  WriteDefPool, WriteDefTree, WriteCache, WriteGlobalValues,
  WriteMemStats: boolean);
begin
  DebugLn('[TCodeToolManager.WriteDebugReport]');
  if FCurCodeTool<>nil then begin
    if WriteTool then begin
      FCurCodeTool.WriteDebugTreeReport;
      if FCurCodeTool.Scanner<>nil then
        FCurCodeTool.Scanner.WriteDebugReport;
    end;
  end;
  if WriteDefPool then
    DefinePool.WriteDebugReport
  else
    DefinePool.ConsistencyCheck;
  if WriteDefTree then
    DefineTree.WriteDebugReport
  else
    DefineTree.ConsistencyCheck;
  if WriteCache then
    SourceCache.WriteDebugReport
  else
    SourceCache.ConsistencyCheck;
  if WriteGlobalValues then
    GlobalValues.WriteDebugReport
  else
    GlobalValues.ConsistencyCheck;
  if WriteMemStats then WriteMemoryStats;

  ConsistencyCheck;
end;

procedure TCodeToolManager.WriteMemoryStats;
var
  Node: TAVLTreeNode;
  ATool: TEventsCodeTool;
  Stats: TCTMemStats;
begin
  DebugLn(['Memory stats: ']);
  Stats:=TCTMemStats.Create;
  // boss
  Stats.Add('Boss',
    PtrUInt(InstanceSize)
    +MemSizeString(FErrorMsg)
    +MemSizeString(FSetPropertyVariablename)
    +PtrUInt(SizeOf(FSetPropertyVariableIsPrefix))
    +PtrUInt(SizeOf(FSetPropertyVariableUseConst))
    +MemSizeString(FSourceExtensions)
    );
  if DefinePool<>nil then
    DefinePool.CalcMemSize(Stats);
  if DefineTree<>nil then
    DefineTree.CalcMemSize(Stats);
  if SourceCache<>nil then
    SourceCache.CalcMemSize(Stats);
  if SourceChangeCache<>nil then
    SourceChangeCache.CalcMemSize(Stats);
  if GlobalValues<>nil then
    Stats.Add('GlobalValues',GlobalValues.CalcMemSize);
  if DirectoryCachePool<>nil then
    DirectoryCachePool.CalcMemSize(Stats);
  if IdentifierList<>nil then
    Stats.Add('IdentifierList',IdentifierList.CalcMemSize);
  if IdentifierHistory<>nil then
    Stats.Add('IdentifierHistory',IdentifierHistory.CalcMemSize);
  if Positions<>nil then
    Stats.Add('Positions',Positions.CalcMemSize);

  if FDirectivesTools<>nil then begin
    Stats.Add('FDirectivesTools.Count',FDirectivesTools.Count);
    // ToDo
  end;
  if FPascalTools<>nil then begin
    Stats.Add('PascalTools.Count',FPascalTools.Count);
    Stats.Add('PascalTools',PtrUInt(FPascalTools.Count)*SizeOf(Node));
    Node:=FPascalTools.FindLowest;
    while Node<>nil do begin
      ATool:=TCodeTool(Node.Data);
      ATool.CalcMemSize(Stats);
      Node:=FPascalTools.FindSuccessor(Node);
    end;
  end;
  Stats.Add('KeywordFuncLists.Global',KeywordFuncLists.CalcMemSize);
  Stats.Add('FileStateCache',FileStateCache.CalcMemSize);
  Stats.Add('GlobalIdentifierTree',GlobalIdentifierTree.CalcMemSize);
  Stats.WriteReport;
  Stats.Free;
end;

//-----------------------------------------------------------------------------

function FindIncFileInCfgCache(const Name: string; out ExpFilename: string): boolean;
var
  CfgCache: TPCTargetConfigCache;
  UnitSet: TFPCUnitSetCache;
begin
  // search the include file in directories defines in fpc.cfg (by -Fi option)
  UnitSet:=CodeToolBoss.GetUnitSetForDirectory('');
  if UnitSet<>nil then begin
    CfgCache:=UnitSet.GetConfigCache(false);
    Result:=Assigned(CfgCache) and Assigned(CfgCache.Includes)
      and CfgCache.Includes.GetString(Name,ExpFilename);
  end
  else
    Result:=False;
end;

initialization
  CodeToolBoss:=TCodeToolManager.Create;
  OnFindOwnerOfCodeTreeNode:=@GetOwnerForCodeTreeNode;
  BasicCodeTools.FindIncFileInCfgCache:=@FindIncFileInCfgCache;


finalization
  {$IFDEF CTDEBUG}
  DebugLn('codetoolmanager.pas - finalization');
  {$ENDIF}
  OnFindOwnerOfCodeTreeNode:=nil;
  CodeToolBoss.Free;
  CodeToolBoss:=nil;
  FreeAndNil(CTTemplateExpander);
  {$IFDEF CTDEBUG}
  DebugLn('codetoolmanager.pas - finalization finished');
  {$ENDIF}

end.

