type circle = shape(
  ?'int' => int,
  'shape' => shape(
    'int' => ?int,
    ...
  ),
  ...
);

type nothing = shape();
