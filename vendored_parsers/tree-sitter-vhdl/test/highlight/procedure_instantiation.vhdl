   pure procedure foo is new bar;
-- ^ error.unexpected.purity

   impure procedure foo is new bar;
-- ^ error.unexpected.purity


   procedure "+" is new foo."+";
          -- ^ error.illegal.designator.operator_symbol

   procedure foo is new bar [return t];
                          -- ^ error.unexpected.return
