==================
Shebang
==================
#!/bin/sh
---
(source_file (shebang))

===================
Shebang + Directive
===================
#!/bin/sh

# something
# line 3
---
(source_file (shebang) (directive) (directive))
