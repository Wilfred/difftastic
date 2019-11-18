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

  test("Creating pages", done => {
    request(app)
      .get("/new")
      .then(res => {
        expect(res.statusCode).toBe(401);
        expect(res.headers["www-authenticate"]).toBe("Basic");
        done();
      });
  });
});

const ADMIN_PASSWORD = process.env.ADMIN_PASSWORD || "admin";

describe("Editing", () => {
  test("/new GET", done => {
    request(app)
      .get("/new")
      .auth("admin", ADMIN_PASSWORD)
      .expect(200, done);
  });
  test("/new POST", done => {
    request(app)
      .post("/new")
      .type("form")
      .send({ name: "FooBar", content: "hello world" })
      .auth("admin", ADMIN_PASSWORD)
      .expect(302, done);
  });

  test("/edit GET", done => {
    db.createPage("EditGetExample", "foo bar", (err, page) => {
      expect(err).toBeNull();

      request(app)
        .get("/edit/" + page.rowid)
        .auth("admin", ADMIN_PASSWORD)
        .expect(200, done);
    });
  });
  test("/edit GET", done => {
    db.createPage("EditPostExample", "foo bar", (err, page) => {
      expect(err).toBeNull();

      request(app)
        .post("/edit/" + page.rowid)
        .type("form")
        .send({ name: "EditPostExample", content: "hello world" })
        .auth("admin", ADMIN_PASSWORD)
        .expect(302, done);
    });
  });
});

test("/all", done => {
  request(app)
    .get("/all")
    .expect(200, done);
});
