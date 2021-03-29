package p is new u
   generic (k:t)
-- ^ error.illegal.clause.generic
   generic map (k)
   port (s:t)
-- ^ error.illegal.clause.port
   port map (s);
-- ^ error.illegal.map_aspect.port


package p is new u
   generic map (k)
   generic map (k);
-- ^ error.repeated.map_aspect.generic
 

package p is new u
   generic map (k);;
               -- ^ error.unexpected.semicolon.after_map_aspect
