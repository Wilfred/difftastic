const request = require("supertest");
const app = require("./app");
const db = require("./db");

beforeAll(done => {
  db.init(done);
});

describe("Authentication", () => {
  test("Editing pages", done => {
    request(app)
      .get("/edit/Foo")
      .then(res => {
        expect(res.statusCode).toBe(401);
        expect(res.headers["www-authenticate"]).toBe("Basic");
        done();
      });
  });
});
