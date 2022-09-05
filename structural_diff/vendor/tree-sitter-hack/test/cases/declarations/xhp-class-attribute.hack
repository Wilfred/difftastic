class :a {
    attribute int extra_attr;
    // XHP identifiers are optional for this case of attribute transfer.
    attribute :XHP:HTML:div;
}

// DEPRECATED:
// Before XHP namespace support (in XHP-Lib v3),
// a special category keyword could be used instead of an interface.
// Note: An XHP class cannot have multiple category or children declarations.
class :a {
    category %foo:bar;
}
class :a {
    category %name1, %name2;
}

// Also, a special children keyword with a regex-like syntax could be used.
// See https://github.com/hhvm/xhp-lib/blob/v3.x/tests/ChildRuleTest.php
class :a {
    children (:div);
}
class :a {
    children any;
}
class :a {
    children (:bar*, :baz?, pcdata);
}
class :a {
    children (:div*);
}
class :a {
    children (:div+);
}
class :a {
    children (:div, :div);
}
class :a {
    children (:div | :code);
}
class :a {
    children (:div | (:code+));
}
class :a {
    children (:div | :code | :p);
}
class :a {
    children (%flow);
}
