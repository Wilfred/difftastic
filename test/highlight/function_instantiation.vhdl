function foo is new bar [t];
                       -- ^ error.missing.return

function "+" is new foo."+" [t,t, return t];
                             -- ^ error.unexpected.comma


