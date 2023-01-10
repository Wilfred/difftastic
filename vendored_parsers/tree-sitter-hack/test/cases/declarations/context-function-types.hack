function has_fn_args(
  (function (): void) $no_list,
  (function ()[io, rand]: void) $list,
  (function ()[]: void) $empty_list,
)[ctx $list]: void {}

