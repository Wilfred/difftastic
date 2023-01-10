type I1<T as R super H> = I2<T>;

// Only newtype can have a type constraint.
newtype I2<T as R super H> as N<B> = I1<T>;
