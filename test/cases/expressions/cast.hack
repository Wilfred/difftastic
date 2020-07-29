(int)'int';
(float)'float';
(string)'string';
(array)'array';

# HHVM gets tripped up unless there's a prefix operator here. 🤔 Tree-sitter doesn't.
(void)+'void';
