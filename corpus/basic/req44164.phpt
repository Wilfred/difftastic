==========
Req #44164 (Handle "Content-Length" HTTP header when zlib.output_compression active)
==========

<?php
header("Content-length: 200");
echo str_repeat("a", 200);

---
