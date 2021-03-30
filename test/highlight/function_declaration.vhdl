   function f;
          -- ^ error.missing.return

   function f is
           -- ^ error.missing.return
   begin
   end;


   function f (k:t);
                -- ^ error.missing.return

   function f (k:t) is
                 -- ^ error.missing.return
   begin
   end;


   function "+" (k:t) return t is
   begin
   end g;
    -- ^ error.misspeling.designator

   function f (k:t) return t is
   begin
   end procedure;
    -- ^ error.misspeling.subprogram_kind


   pure function f (k:t) return t is
   begin
   end pure function;
    -- ^ error.unexpected.purity.at_end


   function "and" return t;

   function "foo" return t;
         -- ^ error.illegal.operator_symbol

