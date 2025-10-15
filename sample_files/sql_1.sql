-- A comment

create table apples (
       variety varchar primary key not null,
       ancestor varchar references apples (path));

create table pears (
       name varchar primary key not null,
       origin varchar not null,
       ancestor varchar references pears (path) not null);
