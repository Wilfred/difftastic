// This tests that the parser is correctly interprets when a variable is embedded between two string literals
// This test currently fails but should pass

<<<EOT
	$()abc$()$realvar$()
EOT;
