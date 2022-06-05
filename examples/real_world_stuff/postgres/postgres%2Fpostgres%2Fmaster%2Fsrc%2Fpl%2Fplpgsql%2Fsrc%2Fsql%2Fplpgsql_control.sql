--
-- Tests for PL/pgSQL control structures
--

-- integer FOR loop

do $$
begin
  -- basic case
  for i in 1..3 loop
    raise notice '1..3: i = %', i;
  end loop;
  -- with BY, end matches exactly
  for i in 1..10 by 3 loop
    raise notice '1..10 by 3: i = %', i;
  end loop;
  -- with BY, end does not match
  for i in 1..11 by 3 loop
    raise notice '1..11 by 3: i = %', i;
  end loop;
  -- zero iterations
  for i in 1..0 by 3 loop
    raise notice '1..0 by 3: i = %', i;
  end loop;
  -- REVERSE
  for i in reverse 10..0 by 3 loop
    raise notice 'reverse 10..0 by 3: i = %', i;
  end loop;
  -- potential overflow
  for i in 2147483620..2147483647 by 10 loop
    raise notice '2147483620..2147483647 by 10: i = %', i;
  end loop;
  -- potential overflow, reverse direction
  for i in reverse -2147483620..-2147483647 by 10 loop
    raise notice 'reverse -2147483620..-2147483647 by 10: i = %', i;
  end loop;
end$$;

-- BY can't be zero or negative
do $$
begin
  for i in 1..3 by 0 loop
    raise notice '1..3 by 0: i = %', i;
  end loop;
end$$;

do $$
begin
  for i in 1..3 by -1 loop
    raise notice '1..3 by -1: i = %', i;
  end loop;
end$$;

do $$
begin
  for i in reverse 1..3 by -1 loop
    raise notice 'reverse 1..3 by -1: i = %', i;
  end loop;
end$$;


-- CONTINUE statement

create table conttesttbl(idx serial, v integer);
insert into conttesttbl(v) values(10);
insert into conttesttbl(v) values(20);
insert into conttesttbl(v) values(30);
insert into conttesttbl(v) values(40);

create function continue_test1() returns void as $$
declare _i integer = 0; _r record;
begin
  raise notice '---1---';
  loop
    _i := _i + 1;
    raise notice '%', _i;
    continue when _i < 10;
    exit;
  end loop;

  raise notice '---2---';
  <<lbl>>
  loop
    _i := _i - 1;
    loop
      raise notice '%', _i;
      continue lbl when _i > 0;
      exit lbl;
    end loop;
  end loop;

  raise notice '---3---';
  <<the_loop>>
  while _i < 10 loop
    _i := _i + 1;
    continue the_loop when _i % 2 = 0;
    raise notice '%', _i;
  end loop;

  raise notice '---4---';
  for _i in 1..10 loop
    begin
      -- applies to outer loop, not the nested begin block
      continue when _i < 5;
      raise notice '%', _i;
    end;
  end loop;

  raise notice '---5---';
  for _r in select * from conttesttbl loop
    continue when _r.v <= 20;
    raise notice '%', _r.v;
  end loop;

  raise notice '---6---';
  for _r in execute 'select * from conttesttbl' loop
    continue when _r.v <= 20;
    raise notice '%', _r.v;
  end loop;

  raise notice '---7---';
  <<looplabel>>
  for _i in 1..3 loop
    continue looplabel when _i = 2;
    raise notice '%', _i;
  end loop;

  raise notice '---8---';
  _i := 1;
  while _i <= 3 loop
    raise notice '%', _i;
    _i := _i + 1;
    continue when _i = 3;
  end loop;

  raise notice '---9---';
  for _r in select * from conttesttbl order by v limit 1 loop
    raise notice '%', _r.v;
    continue;
  end loop;

  raise notice '---10---';
  for _r in execute 'select * from conttesttbl order by v limit 1' loop
    raise notice '%', _r.v;
    continue;
  end loop;

  raise notice '---11---';
  <<outerlooplabel>>
  for _i in 1..2 loop
    raise notice 'outer %', _i;
    <<innerlooplabel>>
    for _j in 1..3 loop
      continue outerlooplabel when _j = 2;
      raise notice 'inner %', _j;
    end loop;
  end loop;
end; $$ language plpgsql;

select continue_test1();

-- should fail: CONTINUE is only legal inside a loop
create function continue_error1() returns void as $$
begin
    begin
        continue;
    end;
end;
$$ language plpgsql;

-- should fail: unlabeled EXIT is only legal inside a loop
create function exit_error1() returns void as $$
begin
    begin
        exit;
    end;
end;
$$ language plpgsql;

-- should fail: no such label
create function continue_error2() returns void as $$
begin
    begin
        loop
            continue no_such_label;
        end loop;
    end;
end;
$$ language plpgsql;

-- should fail: no such label
create function exit_error2() returns void as $$
begin
    begin
        loop
            exit no_such_label;
        end loop;
    end;
end;
$$ language plpgsql;

-- should fail: CONTINUE can't reference the label of a named block
create function continue_error3() returns void as $$
begin
    <<begin_block1>>
    begin
        loop
            continue begin_block1;
        end loop;
    end;
end;
$$ language plpgsql;

-- On the other hand, EXIT *can* reference the label of a named block
create function exit_block1() returns void as $$
begin
    <<begin_block1>>
    begin
        loop
            exit begin_block1;
            raise exception 'should not get here';
        end loop;
    end;
end;
$$ language plpgsql;

select exit_block1();

-- verbose end block and end loop
create function end_label1() returns void as $$
<<blbl>>
begin
  <<flbl1>>
  for i in 1 .. 10 loop
    raise notice 'i = %', i;
    exit flbl1;
  end loop flbl1;
  <<flbl2>>
  for j in 1 .. 10 loop
    raise notice 'j = %', j;
    exit flbl2;
  end loop;
end blbl;
$$ language plpgsql;

select end_label1();

-- should fail: undefined end label
create function end_label2() returns void as $$
begin
  for _i in 1 .. 10 loop
    exit;
  end loop flbl1;
end;
$$ language plpgsql;

-- should fail: end label does not match start label
create function end_label3() returns void as $$
<<outer_label>>
begin
  <<inner_label>>
  for _i in 1 .. 10 loop
    exit;
  end loop outer_label;
end;
$$ language plpgsql;

-- should fail: end label on a block without a start label
create function end_label4() returns void as $$
<<outer_label>>
begin
  for _i in 1 .. 10 loop
    exit;
  end loop outer_label;
end;
$$ language plpgsql;

-- unlabeled exit matches no blocks
do $$
begin
for i in 1..10 loop
  <<innerblock>>
  begin
    begin  -- unlabeled block
      exit;
      raise notice 'should not get here';
    end;
    raise notice 'should not get here, either';
  end;
  raise notice 'nor here';
end loop;
raise notice 'should get here';
end$$;

-- check exit out of an unlabeled block to a labeled one
do $$
<<outerblock>>
begin
  <<innerblock>>
  begin
    <<moreinnerblock>>
    begin
      begin  -- unlabeled block
        exit innerblock;
        raise notice 'should not get here';
      end;
      raise notice 'should not get here, either';
    end;
    raise notice 'nor here';
  end;
  raise notice 'should get here';
end$$;

-- check exit out of outermost block
do $$
<<outerblock>>
begin
  <<innerblock>>
  begin
    exit outerblock;
    raise notice 'should not get here';
  end;
  raise notice 'should not get here, either';
end$$;

-- unlabeled exit does match a while loop
do $$
begin
  <<outermostwhile>>
  while 1 > 0 loop
    <<outerwhile>>
    while 1 > 0 loop
      <<innerwhile>>
      while 1 > 0 loop
        exit;
        raise notice 'should not get here';
      end loop;
      raise notice 'should get here';
      exit outermostwhile;
      raise notice 'should not get here, either';
    end loop;
    raise notice 'nor here';
  end loop;
  raise notice 'should get here, too';
end$$;

-- check exit out of an unlabeled while to a labeled one
do $$
begin
  <<outerwhile>>
  while 1 > 0 loop
    while 1 > 0 loop
      exit outerwhile;
      raise notice 'should not get here';
    end loop;
    raise notice 'should not get here, either';
  end loop;
  raise notice 'should get here';
end$$;

-- continue to an outer while
do $$
declare i int := 0;
begin
  <<outermostwhile>>
  while i < 2 loop
    raise notice 'outermostwhile, i = %', i;
    i := i + 1;
    <<outerwhile>>
    while 1 > 0 loop
      <<innerwhile>>
      while 1 > 0 loop
        continue outermostwhile;
        raise notice 'should not get here';
      end loop;
      raise notice 'should not get here, either';
    end loop;
    raise notice 'nor here';
  end loop;
  raise notice 'out of outermostwhile, i = %', i;
end$$;

-- return out of a while
create function return_from_while() returns int language plpgsql as $$
declare i int := 0;
begin
  while i < 10 loop
    if i > 2 then
      return i;
    end if;
    i := i + 1;
  end loop;
  return null;
end$$;

select return_from_while();

-- using list of scalars in fori and fore stmts
create function for_vect() returns void as $proc$
<<lbl>>declare a integer; b varchar; c varchar; r record;
begin
  -- fori
  for i in 1 .. 3 loop
    raise notice '%', i;
  end loop;
  -- fore with record var
  for r in select gs as aa, 'BB' as bb, 'CC' as cc from generate_series(1,4) gs loop
    raise notice '% % %', r.aa, r.bb, r.cc;
  end loop;
  -- fore with single scalar
  for a in select gs from generate_series(1,4) gs loop
    raise notice '%', a;
  end loop;
  -- fore with multiple scalars
  for a,b,c in select gs, 'BB','CC' from generate_series(1,4) gs loop
    raise notice '% % %', a, b, c;
  end loop;
  -- using qualified names in fors, fore is enabled, disabled only for fori
  for lbl.a, lbl.b, lbl.c in execute $$select gs, 'bb','cc' from generate_series(1,4) gs$$ loop
    raise notice '% % %', a, b, c;
  end loop;
end;
$proc$ language plpgsql;

select for_vect();

-- CASE statement

create or replace function case_test(bigint) returns text as $$
declare a int = 10;
        b int = 1;
begin
  case $1
    when 1 then
      return 'one';
    when 2 then
      return 'two';
    when 3,4,3+5 then
      return 'three, four or eight';
    when a then
      return 'ten';
    when a+b, a+b+1 then
      return 'eleven, twelve';
  end case;
end;
$$ language plpgsql immutable;

select case_test(1);
select case_test(2);
select case_test(3);
select case_test(4);
select case_test(5); -- fails
select case_test(8);
select case_test(10);
select case_test(11);
select case_test(12);
select case_test(13); -- fails

create or replace function catch() returns void as $$
begin
  raise notice '%', case_test(6);
exception
  when case_not_found then
    raise notice 'caught case_not_found % %', SQLSTATE, SQLERRM;
end
$$ language plpgsql;

select catch();

-- test the searched variant too, as well as ELSE
create or replace function case_test(bigint) returns text as $$
declare a int = 10;
begin
  case
    when $1 = 1 then
      return 'one';
    when $1 = a + 2 then
      return 'twelve';
    else
      return 'other';
  end case;
end;
$$ language plpgsql immutable;

select case_test(1);
select case_test(2);
select case_test(12);
select case_test(13);
