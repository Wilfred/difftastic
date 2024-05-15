with Ada.Text_IO;

procedure Hello is
  package TIO renames Ada.Text_IO;
begin
  TIO.Put_Line ("Hello World!");
end Hello;
