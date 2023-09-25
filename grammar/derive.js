module.exports = {
// possible types of deriving declarations:
// derive instance Eq (Id a)
// derive instance Eq a => Eq (Id a)
// derive instance (Eq a, Eq a) => Eq (Id a)
// derive instance eqId :: Eq (Id a)
// derive instance eqId :: Eq a => Eq (Id a)
// derive instance eqId :: (Eq a, Eq a) => Eq (Id a)
// derive newtype instance Eq (Id a)
// derive newtype instance Eq a => Eq (Id a)
// derive newtype instance (Eq a, Eq a) => Eq (Id a)
// derive newtype instance eqId :: Eq (Id a)
// derive newtype instance eqId :: Eq a => Eq (Id a)
// derive newtype instance eqId :: (Eq a, Eq a) => Eq (Id a)

  decl_derive: $ => prec(1, seq(
    'derive',
    optional('newtype'),
    'instance',
    optional(seq(alias($._tyvar, $.instance_name), $._colon2)),
    optional($._context),
    $.type_name,
    repeat($._atype)
  )),

}
