CREATE TABLE ttable1 OF nothing;

CREATE TYPE person_type AS (id int, name text);
CREATE TABLE persons OF person_type;
CREATE TABLE IF NOT EXISTS persons OF person_type;
SELECT * FROM persons;
\d persons

CREATE FUNCTION get_all_persons() RETURNS SETOF person_type
LANGUAGE SQL
AS $$
    SELECT * FROM persons;
$$;

SELECT * FROM get_all_persons();

-- certain ALTER TABLE operations on typed tables are not allowed
ALTER TABLE persons ADD COLUMN comment text;
ALTER TABLE persons DROP COLUMN name;
ALTER TABLE persons RENAME COLUMN id TO num;
ALTER TABLE persons ALTER COLUMN name TYPE varchar;
CREATE TABLE stuff (id int);
ALTER TABLE persons INHERIT stuff;

CREATE TABLE personsx OF person_type (myname WITH OPTIONS NOT NULL); -- error

CREATE TABLE persons2 OF person_type (
    id WITH OPTIONS PRIMARY KEY,
    UNIQUE (name)
);

\d persons2

CREATE TABLE persons3 OF person_type (
    PRIMARY KEY (id),
    name WITH OPTIONS DEFAULT ''
);

\d persons3

CREATE TABLE persons4 OF person_type (
    name WITH OPTIONS NOT NULL,
    name WITH OPTIONS DEFAULT ''  -- error, specified more than once
);

DROP TYPE person_type RESTRICT;
DROP TYPE person_type CASCADE;

CREATE TABLE persons5 OF stuff; -- only CREATE TYPE AS types may be used

DROP TABLE stuff;


-- implicit casting

CREATE TYPE person_type AS (id int, name text);
CREATE TABLE persons OF person_type;
INSERT INTO persons VALUES (1, 'test');

CREATE FUNCTION namelen(person_type) RETURNS int LANGUAGE SQL AS $$ SELECT length($1.name) $$;
SELECT id, namelen(persons) FROM persons;

CREATE TABLE persons2 OF person_type (
    id WITH OPTIONS PRIMARY KEY,
    UNIQUE (name)
);

\d persons2

CREATE TABLE persons3 OF person_type (
    PRIMARY KEY (id),
    name NOT NULL DEFAULT ''
);

\d persons3
