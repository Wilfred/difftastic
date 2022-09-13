// From Rosetta Code https://rosettacode.org/wiki/Evaluate_binomial_coefficients#Delphi
// Under CC-BY-SA license.

program Binomial;

{$APPTYPE CONSOLE}

function BinomialCoff(N, K: Cardinal): Cardinal;
var
  L: Cardinal;

begin
  if N < K then
    Result:= 0      // Error
  else begin
    if K > N - K then
      K:= N - K;    // Optimization
    Result:= 1;
    L:= 0;
    while L < K do begin
      Result:= Result * (N - L);
      Inc(L);
      Result:= Result div L;
    end;
  end;
end;

begin
  Writeln('C(5,3) is ', BinomialCoff(5, 3));
  ReadLn;
end.
