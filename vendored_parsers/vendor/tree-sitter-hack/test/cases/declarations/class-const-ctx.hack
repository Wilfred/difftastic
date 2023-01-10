abstract class WithConstant {
  abstract const ctx CAnotherOne as [io];
  abstract const ctx COne super [defaults];
  abstract const ctx CMany super [defaults] as [io, rand];
  const ctx C = [defaults];
  const ctx CWithBound super [defaults] = [io];
}
