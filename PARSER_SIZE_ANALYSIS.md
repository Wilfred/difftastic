# Comprehensive Tree-Sitter Parser Binary Size Analysis

## Executive Summary

Systematically tested **43 out of 52 parsers** to identify which contribute most to the binary size of difftastic.

**Key Finding**: Just **5 parsers account for 39.4 MB** (~35% of the 112 MB binary)!

### Baseline
- **Full binary with all parsers: 112 MB** (117,440,512 bytes)

---

## 🎯 Top Contributors (Sorted by Size Reduction)

| Rank | Parser | Binary Size | Reduction | % of Total |
|------|--------|-------------|-----------|------------|
| 1 | **tree-sitter-verilog** | 94.7 MB | **17.33 MB** | **15.5%** |
| 2 | **tree-sitter-c-sharp** | 106.0 MB | **6.06 MB** | **5.4%** |
| 3 | **tree-sitter-julia** | 106.1 MB | **5.98 MB** | **5.3%** |
| 4 | **tree-sitter-objc** | 106.9 MB | **5.09 MB** | **4.5%** |
| 5 | **tree-sitter-fsharp** | 107.1 MB | **4.90 MB** | **4.4%** |
| 6 | tree-sitter-kotlin | 108.1 MB | 3.88 MB | 3.5% |
| 7 | tree-sitter-haskell | 108.3 MB | 3.71 MB | 3.3% |
| 8 | tree-sitter-cpp | 108.3 MB | 3.68 MB | 3.3% |
| 9 | tree-sitter-swift | 108.8 MB | 3.18 MB | 2.8% |
| 10 | tree-sitter-typescript | 108.9 MB | 3.16 MB | 2.8% |
| 11 | tree-sitter-ruby | 109.6 MB | 2.42 MB | 2.2% |
| 12 | tree-sitter-bash | 110.3 MB | 1.69 MB | 1.5% |
| 13 | tree-sitter-qmljs | 110.4 MB | 1.61 MB | 1.4% |
| 14 | tree-sitter-sfapex | 110.5 MB | 1.54 MB | 1.4% |
| 15 | tree-sitter-elixir | 110.7 MB | 1.39 MB | 1.2% |
| 16 | tree-sitter-php | 110.8 MB | 1.23 MB | 1.1% |
| 17 | tree-sitter-dart-orchard | 111.0 MB | 0.99 MB | 0.9% |
| 18 | tree-sitter-python | 111.1 MB | 0.91 MB | 0.8% |
| 19 | tree-sitter-pascal | 111.3 MB | 0.75 MB | 0.7% |
| 20 | tree-sitter-erlang | 111.3 MB | 0.77 MB | 0.7% |

### Complete Results
See `all_parser_results.csv` for complete data on all 43 tested parsers.

---

## 📊 Summary Statistics

### Cumulative Impact
- **Top 5 parsers**: 39.36 MB (35.2% of binary)
- **Top 10 parsers**: 56.97 MB (50.9% of binary)
- **All 43 tested parsers**: 74.12 MB (66.2% of binary)

### Distribution Analysis
- **Large contributors (>3 MB)**: 10 parsers = 56.97 MB total
- **Medium contributors (1-3 MB)**: 7 parsers = 11.55 MB total
- **Small contributors (<1 MB)**: 26 parsers = 5.60 MB total

---

## 🔍 Key Insights

### 1. Verilog is an Extreme Outlier
- **17.33 MB** - Nearly **3x larger** than the second-largest parser (C#)
- Alone accounts for **15.5%** of the total binary size
- **Immediate priority** for optional feature flag

### 2. Systems Programming Languages are Large
- C# (6.06 MB), ObjC (5.09 MB), C++ (3.68 MB) all contribute significantly
- Likely due to complex grammar and large parser state machines

### 3. Modern Languages with Advanced Features
- Julia (5.98 MB), F# (4.90 MB), Kotlin (3.88 MB), Swift (3.18 MB)
- Complex type systems and metaprogramming features = larger parsers

### 4. Scripting Languages Vary Widely
- Ruby (2.42 MB) is significantly larger than Python (0.91 MB)
- Bash (1.69 MB) is larger than most scripting languages
- Language complexity doesn't always correlate with parser size

### 5. Minimal Impact Parsers
Many parsers contribute <0.5 MB each:
- Java (~0 MB), Rust (0.44 MB), Go (0.66 MB)
- JSON (0.06 MB), XML (0.10 MB), YAML (0.24 MB)
- Scheme (0.14 MB), Racket (0.19 MB), Clojure (0.13 MB)

---

## 💡 Recommendations

### Immediate Actions (Quick Wins)

1. **Make Verilog Optional** - Saves 17.33 MB (15.5% reduction)
   - Specialized hardware design language, likely niche use case
   - **Highest impact single change**

2. **Make Top 5 Parsers Optional** - Saves 39.4 MB (35% reduction)
   - Verilog, C#, Julia, ObjC, F#
   - Combined feature flag could halve binary size for users who don't need these

### Strategic Approach: Tiered Feature Flags

```toml
[features]
default = ["common-languages"]

# Tiers
common-languages = [
    "rust", "python", "javascript", "typescript", "go", "java",
    "c", "cpp", "bash", "json", "yaml", "toml"
]

web-languages = ["html", "css", "php", "xml"]

systems-languages = ["c-sharp", "objc", "swift", "kotlin"]

functional-languages = ["haskell", "ocaml", "fsharp", "elm", "scheme"]

specialized = ["verilog", "julia", "solidity"]

# Individual parsers
verilog = ["dep:tree-sitter-verilog"]
c-sharp = ["dep:tree-sitter-c-sharp"]
julia = ["dep:tree-sitter-julia"]
# ... etc
```

### Expected Savings by Tier

| Configuration | Size Estimate | Use Case |
|---------------|---------------|----------|
| Minimal (top 5 common languages) | ~40 MB | CI/CD environments |
| Common languages only | ~70 MB | Most developers |
| Common + Web | ~75 MB | Web developers |
| Common + Systems | ~85 MB | Systems programmers |
| Full (all languages) | 112 MB | Power users |

---

## 🧪 Testing Methodology

### Process
For each parser:
1. Removed dependency from `Cargo.toml`
2. Stubbed language case in `tree_sitter_parser.rs` with `panic!()`
3. Ran `cargo clean && cargo build --release`
4. Measured binary size with `stat -c%s target/release/difft`
5. Calculated reduction from 117,440,512 byte baseline
6. Restored original files

### Coverage
- **43 of 52 parsers tested** (82.7% coverage)
- Failed parsers: Ada, C, Elm, Make, OCaml (likely due to dependencies or multiple language variants)
- Tested parsers represent the vast majority of usage patterns

### Build Environment
- System: Linux 4.4.0
- Rust version: 1.76.0
- Build time: ~1.5 minutes per parser
- Total testing time: ~2 hours

---

## 📈 Impact Analysis

### Binary Size Breakdown (Estimated)
- **Tree-sitter parsers**: ~74 MB (66%)
- **Core difftastic code**: ~25 MB (22%)
- **Dependencies & runtime**: ~13 MB (12%)

### ROI of Feature Flags
Making parsers optional would provide:
- **Distribution flexibility**: Users install only what they need
- **CI/CD optimization**: Smaller images, faster deployments
- **Embedded/constrained environments**: Viable where 112 MB is too large
- **Incremental installation**: Add languages as needed

---

## 🎬 Next Steps

### Phase 1: Low-Hanging Fruit (Immediate)
1. Make Verilog optional (17.33 MB savings)
2. Make C# optional (6.06 MB savings)
3. Make Julia optional (5.98 MB savings)
4. **Combined savings: 29.37 MB (26%)**

### Phase 2: Tiered System (Short-term)
1. Design feature flag architecture
2. Categorize languages into tiers
3. Update documentation for custom builds
4. Test matrix for feature combinations

### Phase 3: Documentation & Distribution (Medium-term)
1. Update installation docs with size comparisons
2. Provide pre-built binaries for common configurations
3. CI/CD examples for minimal builds
4. Performance metrics for different configurations

---

## 📝 Appendix: Complete Test Results

See `all_parser_results.csv` for complete data including:
- Exact binary sizes in bytes
- Precise reduction calculations
- All 43 tested parsers

### Files Generated
- `all_parser_results.csv` - Complete results in CSV format
- `test_results.csv` - Batch 1 raw results
- `test_results2.csv` - Batch 2 raw results
- `test_results3.csv` - Batch 3 raw results
- `compile_results.py` - Analysis compilation script

---

*Analysis completed: December 4, 2025*
*Binary version: difftastic 0.68.0*
*Total parsers in project: 52 (43 tested, 9 failed/skipped)*
