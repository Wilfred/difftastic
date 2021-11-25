
(root)                                   @local.scope

(defProc)                                @local.scope
(lambda)                                 @local.scope
(interface   (declProc)                  @local.scope)
(declSection (declProc)                  @local.scope)
(declClass   (declProc)                  @local.scope)
(declHelper  (declProc)                  @local.scope)
(declProcRef)                            @local.scope

(exceptionHandler)                       @local.scope
(exceptionHandler variable: (identifier) @local.definition)

(declArg          name: (identifier)     @local.definition)
(declVar          name: (identifier)     @local.definition)
(declConst        name: (identifier)     @local.definition)
(declLabel        name: (identifier)     @local.definition)
(genericArg       name: (identifier)     @local.definition)
(declEnumValue    name: (identifier)     @local.definition)
(declType         name: (identifier)     @local.definition)
(declType         name: (genericTpl entity: (identifier)     @local.definition))

(declProc         name: (identifier)     @local.definition)

(identifier)                             @local.reference
