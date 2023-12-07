type Parser = import("web-tree-sitter");
declare module "web-tree-sitter-sfapex" {
  function getApexParser(): Promise<Parser>;
  function getSoqlParser(): Promise<Parser>;
  function getSoslParser(): Promise<Parser>;
}
