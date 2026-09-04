# Performance research summary

This document is the short decision guide to the optimisation work on
`claude/auto-research-karpathy-diuc1c`. It highlights the changes with the
largest measured effect, the workloads where they matter, and their value
relative to implementation complexity. The complete measurements, rejected
experiments, and correctness checks are in [PERF_RESEARCH_LOG.md](PERF_RESEARCH_LOG.md);
the continuation strategy is in [plan.md](plan.md).

Percentages below come from different fixed controls and workload shapes, so
they should not be added together. Every retained change preserved output on
the applicable oracle. “Complexity” includes both implementation size and the
reasoning burden needed to preserve diff semantics.

## Headline results

| Investigation | Before | Latest accepted | End-to-end change |
| --- | ---: | ---: | ---: |
| Original 27-pair suite, master through exp8 | 28.87B instructions | 16.59B | **-42.5%** |
| 22 MB `huge_cpp` line-oriented pair, exp17 through exp60 | 14.86B | 8.86B | **-40.4%** |
| `huge_cpp` peak RSS, exp21 through exp22 | 696 MB | 491 MB | **-29%** |
| Parsed `typing_1.ml`/`typing_2.ml`, exp22 through exp61 | 3.115B | 2.617B | **-15.98%** |
| Parsed `slow_1.rs`/`slow_2.rs`, exp22 through exp61 | 1.882B | 0.468B | **-75.13%** |

The strongest overall pattern is that removing unnecessary work beats making
the same work slightly cheaper. Query pruning removes patterns difftastic never
uses; similar-list pairing prevents huge graph searches; the line-oriented
changes remove repeated scans; dense indexing replaces general-purpose hashes
where IDs are already compact.

## Highest-impact changes

| Optimisation | Best measured impact | Where it matters | Complexity | Value relative to complexity |
| --- | ---: | --- | --- | --- |
| [Drop unused highlight-query patterns](https://github.com/Wilfred/difftastic/commit/659896a) (exp1) | **-38.2%** over the original suite; -38.8% Rust, -88.2% JavaScript, and -74.7% Python on trivial diffs | Small and medium **parsed** files, especially languages with large highlight queries. This removes a fixed query-compilation cost paid once per language per process. It is mostly invisible for plain text and JSON. | Medium | **Exceptional.** Large general win from a focused filter, with tests and fallback to the original query if filtering cannot compile. |
| [Pair similar lists before graph search](https://github.com/Wilfred/difftastic/commit/b76c6f7) (exp35) | **-65.42%** `slow`, **-7.43%** `typing`, **-86.1%** `slow` RSS | Large **parsed** inputs whose changed sections contain corresponding sibling lists but few exactly unchanged anchors. It reduces the dimensions of the syntax graph before Dijkstra runs. | High | **Exceptional.** The largest parsed-input win, but also the most algorithmically delicate because pairing can affect alignment quality. |
| [Lower the similar-list decomposition gate](https://github.com/Wilfred/difftastic/commit/f4322f7) (exp39) | **-19.33%** `slow`, -0.14% `typing` | Medium-to-large parsed sections just below the original one-million-cell gate. The 45,000 setting enables another exact-output recursive split; lower tested settings changed sample output. | Low | **Exceptional.** A tiny constant change unlocks the expensive exp35 algorithm more often, though the empirically established correctness boundary must be retained. |
| [Index hunk ends](https://github.com/Wilfred/difftastic/commit/ca5b12f) (exp17) | **-22.0%** on the 22 MB C++ pair | Very large **line-oriented** inputs with many aligned lines/hunks. It removes repeated reverse searches for the final occurrence of aligned lines. | Medium | **Very high.** A substantial whole-input win from replacing repeated scans with an index. |
| [Store opposite-line mappings densely](https://github.com/Wilfred/difftastic/commit/980a55f) (exp22) | **-9.15%** instructions and **-29%** RSS on the 22 MB C++ pair | Large line-oriented inputs and display processing, where line numbers are dense and most lines have zero or one opposite line. | Medium | **Very high.** Improves both time and memory by matching representation to the data domain. |
| [Use a bounded circular Dial queue](https://github.com/Wilfred/difftastic/commit/c8082ef) (exp48) | **-6.05%** `slow`, -0.36% `typing` | Parsed inputs that spend significant time in syntax-graph shortest path. All edge costs are bounded by 600, so a 601-bucket circular queue replaces a general radix heap. | High | **High.** Strong graph-heavy win and removes a dependency, but depends on a proved edge-cost bound and careful wrap/tie handling. |
| [Store one-span unchanged positions inline](https://github.com/Wilfred/difftastic/commit/64f7686) (exp60) | **-4.77%** `huge_cpp`, -1.53% `typing`, -0.54% `slow` | Both line-oriented and parsed inputs with many unchanged tokens. Each match usually maps one span on each side. | Medium | **Very high.** Removes two tiny heap allocations per common unchanged match without changing consumers' slice-based logic. |
| [Build unchanged spans from line order](https://github.com/Wilfred/difftastic/commit/eaac294) (exp19) | **-7.36%** on the 22 MB C++ pair | Very large line-oriented fallback diffs. It avoids repeated byte-offset-to-line binary searches when traversal already supplies line order. | Medium | **High.** A good example of carrying known structure forward instead of reconstructing it. |

## Large display and line-oriented wins

These changes are dramatic on adversarial display shapes but may be nearly
invisible when parsing or graph search dominates.

| Optimisation | Measured impact | Triggering shape / mode | Complexity and payoff |
| --- | ---: | --- | --- |
| [Insert visible ranges once per hunk](https://github.com/Wilfred/difftastic/commit/1ec99c8) (exp13) | **-96.6%** on a 12,000-line full rewrite | Side-by-side display with very large changed hunks | Medium complexity, exceptional payoff; removes quadratic range insertion. |
| [Group JSON changes by line](https://github.com/Wilfred/difftastic/commit/549c7b8) (exp14) | **-82.6%** on a 12,000-line full rewrite | JSON output with many changes | Medium complexity, exceptional payoff; avoids repeatedly filtering the full change list for each line. |
| [Calculate inline bounds once](https://github.com/Wilfred/difftastic/commit/5c78864) (exp15) | **-90.2%** on a 20,000-line, 2,000-hunk diff | Inline output with many hunks | Low-to-medium complexity, exceptional payoff; hoists file-wide scans out of the per-hunk loop. |
| [Use a queue for gap compaction](https://github.com/Wilfred/difftastic/commit/8e944d6) (exp16) | **-44.5%** on a 20,000-line full rewrite | Long one-sided runs during display alignment | Medium complexity, very high payoff; replaces repeated front removal with linear consumption. |
| [Reserve large line maps](https://github.com/Wilfred/difftastic/commit/7fc5210) (exp20) | **-2.08%** on `huge_cpp` | Large line-oriented inputs with many matched positions | Low complexity, high value; avoids predictable hash-map growth. |
| [Sort and deduplicate line numbers directly](https://github.com/Wilfred/difftastic/commit/f33f1d5) (exp21) | **-2.81%** on `huge_cpp` | Large line-oriented display preparation | Low complexity, high value; replaces hashing with contiguous collection and sorting. |

## Parsed-input and graph-search wins

| Optimisation | Measured impact | When it is impactful | Complexity and payoff |
| --- | ---: | --- | --- |
| [Pack graph vertex identity](https://github.com/Wilfred/difftastic/commit/18e72ae) + [key `seen` directly by it](https://github.com/Wilfred/difftastic/commit/d88cf03) (exp7-8) | -0.7% then **-1.9%** on the original suite | Any parsed input with non-trivial graph search; strongest when millions of vertices are hashed | Medium complexity, high aggregate value. |
| [Use two exact seen-map slots](https://github.com/Wilfred/difftastic/commit/34d61d5) (exp9) | **-1.18%** on the 26-pair suite | Graph-heavy parsed inputs; each position key has at most two parent-stack variants | Medium complexity, high value because it encodes a domain invariant and removes per-value `SmallVec` machinery. |
| [Build syntax spans from tree-sitter points](https://github.com/Wilfred/difftastic/commit/12a32b4) (exp11) | **-1.44%** on the 26-pair suite | Parsed inputs with many syntax nodes, especially large files | Medium complexity, high value; avoids offset-to-line searches using positions tree-sitter already computed. |
| [Index change states by syntax ID](https://github.com/Wilfred/difftastic/commit/e08bf74) (exp45) | **-1.20%** `typing`, -0.27% `slow`, -4.5% `typing` RSS | Large parsed trees with dense preorder IDs | Medium complexity, high value; a dense vector replaces a hash map in a hot post-processing path. |
| [Cache persistent-stack length](https://github.com/Wilfred/difftastic/commit/a4a435e) (exp49) | **-0.94%** `slow` | Graph-heavy sections where candidate vertices often have unequal parent-stack depths | Low-to-medium complexity, high value; preserves pointer-sized `Stack` handles and rejects inequality before a deep walk. |
| [Reserve both parent variants](https://github.com/Wilfred/difftastic/commit/6a99d47) (exp51) | -0.30% instructions and **-6.2%** RSS on `slow` | Graph sections that grow beyond the one-variant Cartesian capacity hint | Low complexity, high value; prevents a costly overlapping-table rehash. |

## Smaller, composable wins

These changes do not dominate individually, but are low-risk and apply broadly
enough to be worthwhile.

| Optimisation | Measured impact | Workload | Complexity / value |
| --- | ---: | --- | --- |
| [Stop word splitting at the diff limit](https://github.com/Wilfred/difftastic/commit/8426aa3) (exp5) | **-2.4%** on the original suite | Long changed strings/comments in parsed or text inputs | Low complexity, very high value. |
| [Avoid slider index vectors](https://github.com/Wilfred/difftastic/commit/b4051f8) (exp25) | **-1.29%** `typing`, -0.14% `slow` | Parsed inputs with many slider-correction regions | Medium complexity, high value. |
| [Append matched positions directly](https://github.com/Wilfred/difftastic/commit/47b4f73) (exp42) | **-0.75%** `typing`, -0.25% `slow` | Large parsed trees during change-position collection | Low complexity, high value. |
| [Borrow filtered endpoint spans](https://github.com/Wilfred/difftastic/commit/26723ac) (exp41) | **-0.54%** `typing`, -0.19% `slow` | Parsed inputs with many syntax endpoints | Low complexity, high value. |
| [Count content IDs densely](https://github.com/Wilfred/difftastic/commit/2bf1971) (exp46) | -0.40% `typing`, -0.12% `slow` | Large parsed trees | Low-to-medium complexity, good value. |
| [Consolidate highlight kinds](https://github.com/Wilfred/difftastic/commit/bec7a7f) (exp54) | **-0.61%** `typing`, -0.17% `slow` | Query-heavy parsed inputs with many syntax nodes | Medium complexity, good value; one bitmask lookup replaces repeated node-ID hashing while preserving overlapping captures. |
| [Borrow content-key text](https://github.com/Wilfred/difftastic/commit/66c14b4) (exp55) | **-0.37%** `typing`, -0.14% `slow` | Large parsed trees, particularly with substantial atom text | Low complexity, good value; syntax nodes already outlive the temporary interning map. |
| [Distinguish atom/list content keys](https://github.com/Wilfred/difftastic/commit/a904f7d) (exp57) | **-0.25%** `typing`, flat on `slow` | Atom-heavy parsed trees | Low complexity, good value; atoms no longer hash list-only sentinel fields. |
| [Move final unchanged-position metadata](https://github.com/Wilfred/difftastic/commit/aa1b5b9) (exp58) | **-0.92%** `typing`, -0.32% `slow` | Parsed inputs with many unchanged syntax tokens | Low complexity, very high value; avoids cloning two position vectors in the common single-line case. |
| Construct inline positions directly from slices (exp61) | **-0.48%** `typing`, -0.14% `slow` | Parsed inputs with many unchanged tokens | Low complexity, high value; avoids generic iterator extension for the usual one-span copy. |
| [Fuse syntax metadata traversals](https://github.com/Wilfred/difftastic/commit/edb0357), [identity traversal](https://github.com/Wilfred/difftastic/commit/95f0d37), and [initial setup](https://github.com/Wilfred/difftastic/commit/ca155c8) (exp36-37, 47) | Individual wins from flat to -0.56% | Large parsed trees where recursive metadata walks are visible | Medium complexity, modest-to-good value; useful cumulatively, but less leverage than reducing hash/allocation work. |

## Practical prioritisation

For a small parsed-file regression, inspect highlight-query compilation first;
exp1 and exp3 show that fixed startup work can dwarf parsing and diffing. For a
large structurally parsed file, measure graph size and pursue safe section
decomposition before micro-optimising neighbours. For a line-oriented fallback
or huge output, look for a file- or hunk-wide scan nested inside a line loop and
prefer dense line-indexed storage. For mixed large parsed inputs such as
`typing.ml`, parser/query work, tree traversal, syntax metadata, sliders, and
graph search all matter, so small independent wins compose.

The implementation-complexity lesson is equally consistent: local removal of
redundant work usually has the best risk-adjusted value. High-complexity graph
changes are justified only when they reduce the search space or exploit a firm
invariant, as exp35 and exp48 do. Representation changes that merely look
smaller can regress due to hashing, cache, or repeated reconstruction costs;
the rejected experiments in the full log are important guardrails.
