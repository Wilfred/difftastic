--
-- Test error trapping
--

create function trap_zero_divide(int) returns int as $$
declare x int;
	sx smallint;
begin
	begin	-- start a subtransaction
		raise notice 'should see this';
		x := 100 / $1;
		raise notice 'should see this only if % <> 0', $1;
		sx := $1;
		raise notice 'should see this only if % fits in smallint', $1;
		if $1 < 0 then
			raise exception '% is less than zero', $1;
		end if;
	exception
		when division_by_zero then
			raise notice 'caught division_by_zero';
			x := -1;
		when NUMERIC_VALUE_OUT_OF_RANGE then
			raise notice 'caught numeric_value_out_of_range';
			x := -2;
	end;
	return x;
end$$ language plpgsql;

select trap_zero_divide(50);
select trap_zero_divide(0);
select trap_zero_divide(100000);
select trap_zero_divide(-100);

create table match_source as
  select x as id, x*10 as data, x/10 as ten from generate_series(1,100) x;

create function trap_matching_test(int) returns int as $$
declare x int;
	sx smallint;
	y int;
begin
	begin	-- start a subtransaction
		x := 100 / $1;
		sx := $1;
		select into y data from match_source where id =
			(select id from match_source b where ten = $1);
	exception
		when data_exception then  -- category match
			raise notice 'caught data_exception';
			x := -1;
		when NUMERIC_VALUE_OUT_OF_RANGE OR CARDINALITY_VIOLATION then
			raise notice 'caught numeric_value_out_of_range or cardinality_violation';
			x := -2;
	end;
	return x;
end$$ language plpgsql;

select trap_matching_test(50);
select trap_matching_test(0);
select trap_matching_test(100000);
select trap_matching_test(1);

create temp table foo (f1 int);

create function subxact_rollback_semantics() returns int as $$
declare x int;
begin
  x := 1;
  insert into foo values(x);
  begin
    x := x + 1;
    insert into foo values(x);
    raise exception 'inner';
  exception
    when others then
      x := x * 10;
  end;
  insert into foo values(x);
  return x;
end$$ language plpgsql;

select subxact_rollback_semantics();
select * from foo;
drop table foo;

create function trap_timeout() returns void as $$
begin
  declare x int;
  begin
    -- we assume this will take longer than 1 second:
    select count(*) into x from generate_series(1, 1000000000000);
  exception
    when others then
      raise notice 'caught others?';
    when query_canceled then
      raise notice 'nyeah nyeah, can''t stop me';
  end;
  -- Abort transaction to abandon the statement_timeout setting.  Otherwise,
  -- the next top-level statement would be vulnerable to the timeout.
  raise exception 'end of function';
end$$ language plpgsql;

begin;
set statement_timeout to 1000;
select trap_timeout();
rollback;

-- Test for pass-by-ref values being stored in proper context
create function test_variable_storage() returns text as $$
declare x text;
begin
  x := '1234';
  begin
    x := x || '5678';
    -- force error inside subtransaction SPI context
    perform trap_zero_divide(-100);
  exception
    when others then
      x := x || '9012';
  end;
  return x;
end$$ language plpgsql;

select test_variable_storage();

--
-- test foreign key error trapping
--

create temp table root(f1 int primary key);

create temp table leaf(f1 int references root deferrable);

insert into root values(1);
insert into leaf values(1);
insert into leaf values(2);	-- fails

create function trap_foreign_key(int) returns int as $$
begin
	begin	-- start a subtransaction
		insert into leaf values($1);
	exception
		when foreign_key_violation then
			raise notice 'caught foreign_key_violation';
			return 0;
	end;
	return 1;
end$$ language plpgsql;

create function trap_foreign_key_2() returns int as $$
begin
	begin	-- start a subtransaction
		set constraints all immediate;
	exception
		when foreign_key_violation then
			raise notice 'caught foreign_key_violation';
			return 0;
	end;
	return 1;
end$$ language plpgsql;

select trap_foreign_key(1);
select trap_foreign_key(2);	-- detects FK violation

begin;
  set constraints all deferred;
  select trap_foreign_key(2);	-- should not detect FK violation
  savepoint x;
    set constraints all immediate; -- fails
  rollback to x;
  select trap_foreign_key_2();  -- detects FK violation
commit;				-- still fails

drop function trap_foreign_key(int);
drop function trap_foreign_key_2();
