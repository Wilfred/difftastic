-- A comment

create table apples (
       variety varchar primary key not null,
       ancestor varchar not null);

create table pears (
       name varchar primary key not null,
       origin varchar not null,
       price float,
       ancestor varchar references pears (path) not null);
