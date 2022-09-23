==================
Import declaration
==================
import garrett.damore;
---
(source_file
    (import_declaration (import)
        (imported (identifier) (identifier))
    )
)

==================
Multiple imports
==================
import garrett.damore, dcell.tables;
---
(source_file
    (import_declaration
        (import)
        (imported (identifier) (identifier))
        (imported (identifier) (identifier))
    )
)

==================
Multiple imports with alias
==================
import garrett.damore, tabs = dcell.tables, dcell.terminfo;
---
(source_file
    (import_declaration
        (import)
        (imported (identifier) (identifier))
        (imported (identifier) (identifier) (identifier))
        (imported (identifier) (identifier))
    )
)

==================
Import alias declaration
==================
import garrett = garrett.damore;
---
(source_file
    (import_declaration
        (import)
        (imported (identifier) (identifier) (identifier))
    )
)

==================
Import with binding
==================
import garrett.damore : what = where;
---
(source_file
    (import_declaration
        (import)
        (imported (identifier) (identifier))
        (import_bind (identifier) (identifier))
    )
)

==================
Import with bindings
==================
import garrett.damore : what = where, when = then;
---
(source_file
    (import_declaration
        (import)
        (imported (identifier) (identifier))
        (import_bind (identifier) (identifier))
        (import_bind (identifier) (identifier))
    )
)

==================
Import alias with bindings
==================
import garrett = garrett.damore : what = where, when = then;
---
(source_file
    (import_declaration
        (import)
        (imported (identifier) (identifier) (identifier))
        (import_bind (identifier) (identifier))
        (import_bind (identifier) (identifier))
    )
)

==================
Static import alias with bindings
==================
static import garrett = garrett.damore : what = where, when = then;
---
; This test verifies that the static import binds at higher precedence
; than the attribute specifier.  The actual syntax is ambiguous.
(source_file
    (static)
    (import_declaration
        (import)
        (imported (identifier) (identifier) (identifier))
        (import_bind (identifier) (identifier))
        (import_bind (identifier) (identifier))
    )
)
