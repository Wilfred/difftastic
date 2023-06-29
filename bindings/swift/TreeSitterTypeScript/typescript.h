#ifndef TREE_SITTER_TYPESCRIPT_H_
#define TREE_SITTER_TYPESCRIPT_H_

typedef struct TSLanguage TSLanguage;

#ifdef __cplusplus
extern "C" {
#endif

extern TSLanguage *tree_sitter_typescript();
extern TSLanguage *tree_sitter_tsx();

#ifdef __cplusplus
}
#endif

#endif // TREE_SITTER_TYPESCRIPT_H_
