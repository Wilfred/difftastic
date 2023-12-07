import NodePreGypGithub from "node-pre-gyp-github";
try {
  const opts = {
    draft: false,
    verbose: false,
    target_commitish: "main",
  };
  const nodePreGypGithub = new NodePreGypGithub();
  await nodePreGypGithub.publish(opts);
} catch (err) {
  console.error(`An error occurred whilst publishing:`, err);
  process.exit(1);
}
