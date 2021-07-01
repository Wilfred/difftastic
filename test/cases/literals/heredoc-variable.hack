// This test ensures that variables within heredocs are interpreted as such.
// ÿ is 255 in unicode which is a valid variable identifier.

<<<EOF
r$var
EOF;

<<<EOT
	$ÿ
EOT;
