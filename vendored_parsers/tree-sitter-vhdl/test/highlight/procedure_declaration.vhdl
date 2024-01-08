   pure procedure f (k:t);
-- ^ error.unexpected.purity

   pure procedure f (k:t) is
-- ^ error.unexpected.purity
   begin
   end pure procedure;
    -- ^ error.unexpected.purity


   procedure "+" (k:t);
          -- ^ error.illegal.designator.operator_symbol

   procedure "+" (k:t) is
          -- ^ error.illegal.designator.operator_symbol
   begin
   end "+";
    -- ^ error.illegal.designator.operator_symbol


   procedure f (k:t) return x;
                  -- ^ error.unexpected.return

   procedure f (k:t) return x is
                  -- ^ error.unexpected.return
   begin
   end;


   procedure f (k:t) is
   begin
   end g;
    -- ^ error.misspeling.designator

   procedure f (k:t) is
   begin
   end function;
    -- ^ error.misspeling.subprogram_kind
