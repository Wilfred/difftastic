1. Increase the version number in the package.json and the Cargo.toml
2. Run `npm run generate-wasm`
3. Push the code to main
4. Wait for tests to be successful
5. Create a release on github with the name being the version number from before prefixed with `v` for e.g. `v1.1.0`
6. Enjoy, builds should appear on that release as soon as the CI is done running them.
