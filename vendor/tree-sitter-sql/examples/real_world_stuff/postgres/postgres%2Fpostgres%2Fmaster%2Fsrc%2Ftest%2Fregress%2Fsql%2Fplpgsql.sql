--
-- PLPGSQL
--
-- Scenario:
--
--     A building with a modern TP cable installation where any
--     of the wall connectors can be used to plug in phones,
--     ethernet interfaces or local office hubs. The backside
--     of the wall connectors is wired to one of several patch-
--     fields in the building.
--
--     In the patchfields, there are hubs and all the slots
--     representing the wall connectors. In addition there are
--     slots that can represent a phone line from the central
--     phone system.
--
--     Triggers ensure consistency of the patching information.
--
--     Functions are used to build up powerful views that let
--     you look behind the wall when looking at a patchfield
--     or into a room.
--


create table Room (
    roomno	char(8),
    comment	text
);

create unique index Room_rno on Room using btree (roomno bpchar_ops);


create table WSlot (
    slotname	char(20),
    roomno	char(8),
    slotlink	char(20),
    backlink	char(20)
);

create unique index WSlot_name on WSlot using btree (slotname bpchar_ops);


create table PField (
    name	text,
    comment	text
);

create unique index PField_name on PField using btree (name text_ops);


create table PSlot (
    slotname	char(20),
    pfname	text,
    slotlink	char(20),
    backlink	char(20)
);

create unique index PSlot_name on PSlot using btree (slotname bpchar_ops);


create table PLine (
    slotname	char(20),
    phonenumber	char(20),
    comment	text,
    backlink	char(20)
);

create unique index PLine_name on PLine using btree (slotname bpchar_ops);


create table Hub (
    name	char(14),
    comment	text,
    nslots	integer
);

create unique index Hub_name on Hub using btree (name bpchar_ops);


create table HSlot (
    slotname	char(20),
    hubname	char(14),
    slotno	integer,
    slotlink	char(20)
);

create unique index HSlot_name on HSlot using btree (slotname bpchar_ops);
create index HSlot_hubname on HSlot using btree (hubname bpchar_ops);


create table System (
    name	text,
    comment	text
);

create unique index System_name on System using btree (name text_ops);


create table IFace (
    slotname	char(20),
    sysname	text,
    ifname	text,
    slotlink	char(20)
);

create unique index IFace_name on IFace using btree (slotname bpchar_ops);


create table PHone (
    slotname	char(20),
    comment	text,
    slotlink	char(20)
);

create unique index PHone_name on PHone using btree (slotname bpchar_ops);


-- ************************************************************
-- *
-- * Trigger procedures and functions for the patchfield
-- * test of PL/pgSQL
-- *
-- ************************************************************


-- ************************************************************
-- * AFTER UPDATE on Room
-- *	- If room no changes let wall slots follow
-- ************************************************************
create function tg_room_au() returns trigger as '
begin
    if new.roomno != old.roomno then
        update WSlot set roomno = new.roomno where roomno = old.roomno;
    end if;
    return new;
end;
' language plpgsql;

create trigger tg_room_au after update
    on Room for each row execute procedure tg_room_au();


-- ************************************************************
-- * AFTER DELETE on Room
-- *	- delete wall slots in this room
-- ************************************************************
create function tg_room_ad() returns trigger as '
begin
    delete from WSlot where roomno = old.roomno;
    return old;
end;
' language plpgsql;

create trigger tg_room_ad after delete
    on Room for each row execute procedure tg_room_ad();


-- ************************************************************
-- * BEFORE INSERT or UPDATE on WSlot
-- *	- Check that room exists
-- ************************************************************
create function tg_wslot_biu() returns trigger as $$
begin
    if count(*) = 0 from Room where roomno = new.roomno then
        raise exception 'Room % does not exist', new.roomno;
    end if;
    return new;
end;
$$ language plpgsql;

create trigger tg_wslot_biu before insert or update
    on WSlot for each row execute procedure tg_wslot_biu();


-- ************************************************************
-- * AFTER UPDATE on PField
-- *	- Let PSlots of this field follow
-- ************************************************************
create function tg_pfield_au() returns trigger as '
begin
    if new.name != old.name then
        update PSlot set pfname = new.name where pfname = old.name;
    end if;
    return new;
end;
' language plpgsql;

create trigger tg_pfield_au after update
    on PField for each row execute procedure tg_pfield_au();


-- ************************************************************
-- * AFTER DELETE on PField
-- *	- Remove all slots of this patchfield
-- ************************************************************
create function tg_pfield_ad() returns trigger as '
begin
    delete from PSlot where pfname = old.name;
    return old;
end;
' language plpgsql;

create trigger tg_pfield_ad after delete
    on PField for each row execute procedure tg_pfield_ad();


-- ************************************************************
-- * BEFORE INSERT or UPDATE on PSlot
-- *	- Ensure that our patchfield does exist
-- ************************************************************
create function tg_pslot_biu() returns trigger as $proc$
declare
    pfrec	record;
    ps          alias for new;
begin
    select into pfrec * from PField where name = ps.pfname;
    if not found then
        raise exception $$Patchfield "%" does not exist$$, ps.pfname;
    end if;
    return ps;
end;
$proc$ language plpgsql;

create trigger tg_pslot_biu before insert or update
    on PSlot for each row execute procedure tg_pslot_biu();


-- ************************************************************
-- * AFTER UPDATE on System
-- *	- If system name changes let interfaces follow
-- ************************************************************
create function tg_system_au() returns trigger as '
begin
    if new.name != old.name then
        update IFace set sysname = new.name where sysname = old.name;
    end if;
    return new;
end;
' language plpgsql;

create trigger tg_system_au after update
    on System for each row execute procedure tg_system_au();


-- ************************************************************
-- * BEFORE INSERT or UPDATE on IFace
-- *	- set the slotname to IF.sysname.ifname
-- ************************************************************
create function tg_iface_biu() returns trigger as $$
declare
    sname	text;
    sysrec	record;
begin
    select into sysrec * from system where name = new.sysname;
    if not found then
        raise exception $q$system "%" does not exist$q$, new.sysname;
    end if;
    sname := 'IF.' || new.sysname;
    sname := sname || '.';
    sname := sname || new.ifname;
    if length(sname) > 20 then
        raise exception 'IFace slotname "%" too long (20 char max)', sname;
    end if;
    new.slotname := sname;
    return new;
end;
$$ language plpgsql;

create trigger tg_iface_biu before insert or update
    on IFace for each row execute procedure tg_iface_biu();


-- ************************************************************
-- * AFTER INSERT or UPDATE or DELETE on Hub
-- *	- insert/delete/rename slots as required
-- ************************************************************
create function tg_hub_a() returns trigger as '
declare
    hname	text;
    dummy	integer;
begin
    if tg_op = ''INSERT'' then
	dummy := tg_hub_adjustslots(new.name, 0, new.nslots);
	return new;
    end if;
    if tg_op = ''UPDATE'' then
	if new.name != old.name then
	    update HSlot set hubname = new.name where hubname = old.name;
	end if;
	dummy := tg_hub_adjustslots(new.name, old.nslots, new.nslots);
	return new;
    end if;
    if tg_op = ''DELETE'' then
	dummy := tg_hub_adjustslots(old.name, old.nslots, 0);
	return old;
    end if;
end;
' language plpgsql;

create trigger tg_hub_a after insert or update or delete
    on Hub for each row execute procedure tg_hub_a();


-- ************************************************************
-- * Support function to add/remove slots of Hub
-- ************************************************************
create function tg_hub_adjustslots(hname bpchar,
                                   oldnslots integer,
                                   newnslots integer)
returns integer as '
begin
    if newnslots = oldnslots then
        return 0;
    end if;
    if newnslots < oldnslots then
        delete from HSlot where hubname = hname and slotno > newnslots;
	return 0;
    end if;
    for i in oldnslots + 1 .. newnslots loop
        insert into HSlot (slotname, hubname, slotno, slotlink)
		values (''HS.dummy'', hname, i, '''');
    end loop;
    return 0;
end
' language plpgsql;

-- Test comments
COMMENT ON FUNCTION tg_hub_adjustslots_wrong(bpchar, integer, integer) IS 'function with args';
COMMENT ON FUNCTION tg_hub_adjustslots(bpchar, integer, integer) IS 'function with args';
COMMENT ON FUNCTION tg_hub_adjustslots(bpchar, integer, integer) IS NULL;

-- ************************************************************
-- * BEFORE INSERT or UPDATE on HSlot
-- *	- prevent from manual manipulation
-- *	- set the slotname to HS.hubname.slotno
-- ************************************************************
create function tg_hslot_biu() returns trigger as '
declare
    sname	text;
    xname	HSlot.slotname%TYPE;
    hubrec	record;
begin
    select into hubrec * from Hub where name = new.hubname;
    if not found then
        raise exception ''no manual manipulation of HSlot'';
    end if;
    if new.slotno < 1 or new.slotno > hubrec.nslots then
        raise exception ''no manual manipulation of HSlot'';
    end if;
    if tg_op = ''UPDATE'' and new.hubname != old.hubname then
	if count(*) > 0 from Hub where name = old.hubname then
	    raise exception ''no manual manipulation of HSlot'';
	end if;
    end if;
    sname := ''HS.'' || trim(new.hubname);
    sname := sname || ''.'';
    sname := sname || new.slotno::text;
    if length(sname) > 20 then
        raise exception ''HSlot slotname "%" too long (20 char max)'', sname;
    end if;
    new.slotname := sname;
    return new;
end;
' language plpgsql;

create trigger tg_hslot_biu before insert or update
    on HSlot for each row execute procedure tg_hslot_biu();


-- ************************************************************
-- * BEFORE DELETE on HSlot
-- *	- prevent from manual manipulation
-- ************************************************************
create function tg_hslot_bd() returns trigger as '
declare
    hubrec	record;
begin
    select into hubrec * from Hub where name = old.hubname;
    if not found then
        return old;
    end if;
    if old.slotno > hubrec.nslots then
        return old;
    end if;
    raise exception ''no manual manipulation of HSlot'';
end;
' language plpgsql;

create trigger tg_hslot_bd before delete
    on HSlot for each row execute procedure tg_hslot_bd();


-- ************************************************************
-- * BEFORE INSERT on all slots
-- *	- Check name prefix
-- ************************************************************
create function tg_chkslotname() returns trigger as '
begin
    if substr(new.slotname, 1, 2) != tg_argv[0] then
        raise exception ''slotname must begin with %'', tg_argv[0];
    end if;
    return new;
end;
' language plpgsql;

create trigger tg_chkslotname before insert
    on PSlot for each row execute procedure tg_chkslotname('PS');

create trigger tg_chkslotname before insert
    on WSlot for each row execute procedure tg_chkslotname('WS');

create trigger tg_chkslotname before insert
    on PLine for each row execute procedure tg_chkslotname('PL');

create trigger tg_chkslotname before insert
    on IFace for each row execute procedure tg_chkslotname('IF');

create trigger tg_chkslotname before insert
    on PHone for each row execute procedure tg_chkslotname('PH');


-- ************************************************************
-- * BEFORE INSERT or UPDATE on all slots with slotlink
-- *	- Set slotlink to empty string if NULL value given
-- ************************************************************
create function tg_chkslotlink() returns trigger as '
begin
    if new.slotlink isnull then
        new.slotlink := '''';
    end if;
    return new;
end;
' language plpgsql;

create trigger tg_chkslotlink before insert or update
    on PSlot for each row execute procedure tg_chkslotlink();

create trigger tg_chkslotlink before insert or update
    on WSlot for each row execute procedure tg_chkslotlink();

create trigger tg_chkslotlink before insert or update
    on IFace for each row execute procedure tg_chkslotlink();

create trigger tg_chkslotlink before insert or update
    on HSlot for each row execute procedure tg_chkslotlink();

create trigger tg_chkslotlink before insert or update
    on PHone for each row execute procedure tg_chkslotlink();


-- ************************************************************
-- * BEFORE INSERT or UPDATE on all slots with backlink
-- *	- Set backlink to empty string if NULL value given
-- ************************************************************
create function tg_chkbacklink() returns trigger as '
begin
    if new.backlink isnull then
        new.backlink := '''';
    end if;
    return new;
end;
' language plpgsql;

create trigger tg_chkbacklink before insert or update
    on PSlot for each row execute procedure tg_chkbacklink();

create trigger tg_chkbacklink before insert or update
    on WSlot for each row execute procedure tg_chkbacklink();

create trigger tg_chkbacklink before insert or update
    on PLine for each row execute procedure tg_chkbacklink();


-- ************************************************************
-- * BEFORE UPDATE on PSlot
-- *	- do delete/insert instead of update if name changes
-- ************************************************************
create function tg_pslot_bu() returns trigger as '
begin
    if new.slotname != old.slotname then
        delete from PSlot where slotname = old.slotname;
	insert into PSlot (
		    slotname,
		    pfname,
		    slotlink,
		    backlink
		) values (
		    new.slotname,
		    new.pfname,
		    new.slotlink,
		    new.backlink
		);
        return null;
    end if;
    return new;
end;
' language plpgsql;

create trigger tg_pslot_bu before update
    on PSlot for each row execute procedure tg_pslot_bu();


-- ************************************************************
-- * BEFORE UPDATE on WSlot
-- *	- do delete/insert instead of update if name changes
-- ************************************************************
create function tg_wslot_bu() returns trigger as '
begin
    if new.slotname != old.slotname then
        delete from WSlot where slotname = old.slotname;
	insert into WSlot (
		    slotname,
		    roomno,
		    slotlink,
		    backlink
		) values (
		    new.slotname,
		    new.roomno,
		    new.slotlink,
		    new.backlink
		);
        return null;
    end if;
    return new;
end;
' language plpgsql;

create trigger tg_wslot_bu before update
    on WSlot for each row execute procedure tg_Wslot_bu();


-- ************************************************************
-- * BEFORE UPDATE on PLine
-- *	- do delete/insert instead of update if name changes
-- ************************************************************
create function tg_pline_bu() returns trigger as '
begin
    if new.slotname != old.slotname then
        delete from PLine where slotname = old.slotname;
	insert into PLine (
		    slotname,
		    phonenumber,
		    comment,
		    backlink
		) values (
		    new.slotname,
		    new.phonenumber,
		    new.comment,
		    new.backlink
		);
        return null;
    end if;
    return new;
end;
' language plpgsql;

create trigger tg_pline_bu before update
    on PLine for each row execute procedure tg_pline_bu();


-- ************************************************************
-- * BEFORE UPDATE on IFace
-- *	- do delete/insert instead of update if name changes
-- ************************************************************
create function tg_iface_bu() returns trigger as '
begin
    if new.slotname != old.slotname then
        delete from IFace where slotname = old.slotname;
	insert into IFace (
		    slotname,
		    sysname,
		    ifname,
		    slotlink
		) values (
		    new.slotname,
		    new.sysname,
		    new.ifname,
		    new.slotlink
		);
        return null;
    end if;
    return new;
end;
' language plpgsql;

create trigger tg_iface_bu before update
    on IFace for each row execute procedure tg_iface_bu();


-- ************************************************************
-- * BEFORE UPDATE on HSlot
-- *	- do delete/insert instead of update if name changes
-- ************************************************************
create function tg_hslot_bu() returns trigger as '
begin
    if new.slotname != old.slotname or new.hubname != old.hubname then
        delete from HSlot where slotname = old.slotname;
	insert into HSlot (
		    slotname,
		    hubname,
		    slotno,
		    slotlink
		) values (
		    new.slotname,
		    new.hubname,
		    new.slotno,
		    new.slotlink
		);
        return null;
    end if;
    return new;
end;
' language plpgsql;

create trigger tg_hslot_bu before update
    on HSlot for each row execute procedure tg_hslot_bu();


-- ************************************************************
-- * BEFORE UPDATE on PHone
-- *	- do delete/insert instead of update if name changes
-- ************************************************************
create function tg_phone_bu() returns trigger as '
begin
    if new.slotname != old.slotname then
        delete from PHone where slotname = old.slotname;
	insert into PHone (
		    slotname,
		    comment,
		    slotlink
		) values (
		    new.slotname,
		    new.comment,
		    new.slotlink
		);
        return null;
    end if;
    return new;
end;
' language plpgsql;

create trigger tg_phone_bu before update
    on PHone for each row execute procedure tg_phone_bu();


-- ************************************************************
-- * AFTER INSERT or UPDATE or DELETE on slot with backlink
-- *	- Ensure that the opponent correctly points back to us
-- ************************************************************
create function tg_backlink_a() returns trigger as '
declare
    dummy	integer;
begin
    if tg_op = ''INSERT'' then
        if new.backlink != '''' then
	    dummy := tg_backlink_set(new.backlink, new.slotname);
	end if;
	return new;
    end if;
    if tg_op = ''UPDATE'' then
        if new.backlink != old.backlink then
	    if old.backlink != '''' then
	        dummy := tg_backlink_unset(old.backlink, old.slotname);
	    end if;
	    if new.backlink != '''' then
	        dummy := tg_backlink_set(new.backlink, new.slotname);
	    end if;
	else
	    if new.slotname != old.slotname and new.backlink != '''' then
	        dummy := tg_slotlink_set(new.backlink, new.slotname);
	    end if;
	end if;
	return new;
    end if;
    if tg_op = ''DELETE'' then
        if old.backlink != '''' then
	    dummy := tg_backlink_unset(old.backlink, old.slotname);
	end if;
	return old;
    end if;
end;
' language plpgsql;


create trigger tg_backlink_a after insert or update or delete
    on PSlot for each row execute procedure tg_backlink_a('PS');

create trigger tg_backlink_a after insert or update or delete
    on WSlot for each row execute procedure tg_backlink_a('WS');

create trigger tg_backlink_a after insert or update or delete
    on PLine for each row execute procedure tg_backlink_a('PL');


-- ************************************************************
-- * Support function to set the opponents backlink field
-- * if it does not already point to the requested slot
-- ************************************************************
create function tg_backlink_set(myname bpchar, blname bpchar)
returns integer as '
declare
    mytype	char(2);
    link	char(4);
    rec		record;
begin
    mytype := substr(myname, 1, 2);
    link := mytype || substr(blname, 1, 2);
    if link = ''PLPL'' then
        raise exception
		''backlink between two phone lines does not make sense'';
    end if;
    if link in (''PLWS'', ''WSPL'') then
        raise exception
		''direct link of phone line to wall slot not permitted'';
    end if;
    if mytype = ''PS'' then
        select into rec * from PSlot where slotname = myname;
	if not found then
	    raise exception ''% does not exist'', myname;
	end if;
	if rec.backlink != blname then
	    update PSlot set backlink = blname where slotname = myname;
	end if;
	return 0;
    end if;
    if mytype = ''WS'' then
        select into rec * from WSlot where slotname = myname;
	if not found then
	    raise exception ''% does not exist'', myname;
	end if;
	if rec.backlink != blname then
	    update WSlot set backlink = blname where slotname = myname;
	end if;
	return 0;
    end if;
    if mytype = ''PL'' then
        select into rec * from PLine where slotname = myname;
	if not found then
	    raise exception ''% does not exist'', myname;
	end if;
	if rec.backlink != blname then
	    update PLine set backlink = blname where slotname = myname;
	end if;
	return 0;
    end if;
    raise exception ''illegal backlink beginning with %'', mytype;
end;
' language plpgsql;


-- ************************************************************
-- * Support function to clear out the backlink field if
-- * it still points to specific slot
-- ************************************************************
create function tg_backlink_unset(bpchar, bpchar)
returns integer as '
declare
    myname	alias for $1;
    blname	alias for $2;
    mytype	char(2);
    rec		record;
begin
    mytype := substr(myname, 1, 2);
    if mytype = ''PS'' then
        select into rec * from PSlot where slotname = myname;
	if not found then
	    return 0;
	end if;
	if rec.backlink = blname then
	    update PSlot set backlink = '''' where slotname = myname;
	end if;
	return 0;
    end if;
    if mytype = ''WS'' then
        select into rec * from WSlot where slotname = myname;
	if not found then
	    return 0;
	end if;
	if rec.backlink = blname then
	    update WSlot set backlink = '''' where slotname = myname;
	end if;
	return 0;
    end if;
    if mytype = ''PL'' then
        select into rec * from PLine where slotname = myname;
	if not found then
	    return 0;
	end if;
	if rec.backlink = blname then
	    update PLine set backlink = '''' where slotname = myname;
	end if;
	return 0;
    end if;
end
' language plpgsql;


-- ************************************************************
-- * AFTER INSERT or UPDATE or DELETE on slot with slotlink
-- *	- Ensure that the opponent correctly points back to us
-- ************************************************************
create function tg_slotlink_a() returns trigger as '
declare
    dummy	integer;
begin
    if tg_op = ''INSERT'' then
        if new.slotlink != '''' then
	    dummy := tg_slotlink_set(new.slotlink, new.slotname);
	end if;
	return new;
    end if;
    if tg_op = ''UPDATE'' then
        if new.slotlink != old.slotlink then
	    if old.slotlink != '''' then
	        dummy := tg_slotlink_unset(old.slotlink, old.slotname);
	    end if;
	    if new.slotlink != '''' then
	        dummy := tg_slotlink_set(new.slotlink, new.slotname);
	    end if;
	else
	    if new.slotname != old.slotname and new.slotlink != '''' then
	        dummy := tg_slotlink_set(new.slotlink, new.slotname);
	    end if;
	end if;
	return new;
    end if;
    if tg_op = ''DELETE'' then
        if old.slotlink != '''' then
	    dummy := tg_slotlink_unset(old.slotlink, old.slotname);
	end if;
	return old;
    end if;
end;
' language plpgsql;


create trigger tg_slotlink_a after insert or update or delete
    on PSlot for each row execute procedure tg_slotlink_a('PS');

create trigger tg_slotlink_a after insert or update or delete
    on WSlot for each row execute procedure tg_slotlink_a('WS');

create trigger tg_slotlink_a after insert or update or delete
    on IFace for each row execute procedure tg_slotlink_a('IF');

create trigger tg_slotlink_a after insert or update or delete
    on HSlot for each row execute procedure tg_slotlink_a('HS');

create trigger tg_slotlink_a after insert or update or delete
    on PHone for each row execute procedure tg_slotlink_a('PH');


-- ************************************************************
-- * Support function to set the opponents slotlink field
-- * if it does not already point to the requested slot
-- ************************************************************
create function tg_slotlink_set(bpchar, bpchar)
returns integer as '
declare
    myname	alias for $1;
    blname	alias for $2;
    mytype	char(2);
    link	char(4);
    rec		record;
begin
    mytype := substr(myname, 1, 2);
    link := mytype || substr(blname, 1, 2);
    if link = ''PHPH'' then
        raise exception
		''slotlink between two phones does not make sense'';
    end if;
    if link in (''PHHS'', ''HSPH'') then
        raise exception
		''link of phone to hub does not make sense'';
    end if;
    if link in (''PHIF'', ''IFPH'') then
        raise exception
		''link of phone to hub does not make sense'';
    end if;
    if link in (''PSWS'', ''WSPS'') then
        raise exception
		''slotlink from patchslot to wallslot not permitted'';
    end if;
    if mytype = ''PS'' then
        select into rec * from PSlot where slotname = myname;
	if not found then
	    raise exception ''% does not exist'', myname;
	end if;
	if rec.slotlink != blname then
	    update PSlot set slotlink = blname where slotname = myname;
	end if;
	return 0;
    end if;
    if mytype = ''WS'' then
        select into rec * from WSlot where slotname = myname;
	if not found then
	    raise exception ''% does not exist'', myname;
	end if;
	if rec.slotlink != blname then
	    update WSlot set slotlink = blname where slotname = myname;
	end if;
	return 0;
    end if;
    if mytype = ''IF'' then
        select into rec * from IFace where slotname = myname;
	if not found then
	    raise exception ''% does not exist'', myname;
	end if;
	if rec.slotlink != blname then
	    update IFace set slotlink = blname where slotname = myname;
	end if;
	return 0;
    end if;
    if mytype = ''HS'' then
        select into rec * from HSlot where slotname = myname;
	if not found then
	    raise exception ''% does not exist'', myname;
	end if;
	if rec.slotlink != blname then
	    update HSlot set slotlink = blname where slotname = myname;
	end if;
	return 0;
    end if;
    if mytype = ''PH'' then
        select into rec * from PHone where slotname = myname;
	if not found then
	    raise exception ''% does not exist'', myname;
	end if;
	if rec.slotlink != blname then
	    update PHone set slotlink = blname where slotname = myname;
	end if;
	return 0;
    end if;
    raise exception ''illegal slotlink beginning with %'', mytype;
end;
' language plpgsql;


-- ************************************************************
-- * Support function to clear out the slotlink field if
-- * it still points to specific slot
-- ************************************************************
create function tg_slotlink_unset(bpchar, bpchar)
returns integer as '
declare
    myname	alias for $1;
    blname	alias for $2;
    mytype	char(2);
    rec		record;
begin
    mytype := substr(myname, 1, 2);
    if mytype = ''PS'' then
        select into rec * from PSlot where slotname = myname;
	if not found then
	    return 0;
	end if;
	if rec.slotlink = blname then
	    update PSlot set slotlink = '''' where slotname = myname;
	end if;
	return 0;
    end if;
    if mytype = ''WS'' then
        select into rec * from WSlot where slotname = myname;
	if not found then
	    return 0;
	end if;
	if rec.slotlink = blname then
	    update WSlot set slotlink = '''' where slotname = myname;
	end if;
	return 0;
    end if;
    if mytype = ''IF'' then
        select into rec * from IFace where slotname = myname;
	if not found then
	    return 0;
	end if;
	if rec.slotlink = blname then
	    update IFace set slotlink = '''' where slotname = myname;
	end if;
	return 0;
    end if;
    if mytype = ''HS'' then
        select into rec * from HSlot where slotname = myname;
	if not found then
	    return 0;
	end if;
	if rec.slotlink = blname then
	    update HSlot set slotlink = '''' where slotname = myname;
	end if;
	return 0;
    end if;
    if mytype = ''PH'' then
        select into rec * from PHone where slotname = myname;
	if not found then
	    return 0;
	end if;
	if rec.slotlink = blname then
	    update PHone set slotlink = '''' where slotname = myname;
	end if;
	return 0;
    end if;
end;
' language plpgsql;


-- ************************************************************
-- * Describe the backside of a patchfield slot
-- ************************************************************
create function pslot_backlink_view(bpchar)
returns text as '
<<outer>>
declare
    rec		record;
    bltype	char(2);
    retval	text;
begin
    select into rec * from PSlot where slotname = $1;
    if not found then
        return '''';
    end if;
    if rec.backlink = '''' then
        return ''-'';
    end if;
    bltype := substr(rec.backlink, 1, 2);
    if bltype = ''PL'' then
        declare
	    rec		record;
	begin
	    select into rec * from PLine where slotname = "outer".rec.backlink;
	    retval := ''Phone line '' || trim(rec.phonenumber);
	    if rec.comment != '''' then
	        retval := retval || '' ('';
		retval := retval || rec.comment;
		retval := retval || '')'';
	    end if;
	    return retval;
	end;
    end if;
    if bltype = ''WS'' then
        select into rec * from WSlot where slotname = rec.backlink;
	retval := trim(rec.slotname) || '' in room '';
	retval := retval || trim(rec.roomno);
	retval := retval || '' -> '';
	return retval || wslot_slotlink_view(rec.slotname);
    end if;
    return rec.backlink;
end;
' language plpgsql;


-- ************************************************************
-- * Describe the front of a patchfield slot
-- ************************************************************
create function pslot_slotlink_view(bpchar)
returns text as '
declare
    psrec	record;
    sltype	char(2);
    retval	text;
begin
    select into psrec * from PSlot where slotname = $1;
    if not found then
        return '''';
    end if;
    if psrec.slotlink = '''' then
        return ''-'';
    end if;
    sltype := substr(psrec.slotlink, 1, 2);
    if sltype = ''PS'' then
	retval := trim(psrec.slotlink) || '' -> '';
	return retval || pslot_backlink_view(psrec.slotlink);
    end if;
    if sltype = ''HS'' then
        retval := comment from Hub H, HSlot HS
			where HS.slotname = psrec.slotlink
			  and H.name = HS.hubname;
        retval := retval || '' slot '';
	retval := retval || slotno::text from HSlot
			where slotname = psrec.slotlink;
	return retval;
    end if;
    return psrec.slotlink;
end;
' language plpgsql;


-- ************************************************************
-- * Describe the front of a wall connector slot
-- ************************************************************
create function wslot_slotlink_view(bpchar)
returns text as '
declare
    rec		record;
    sltype	char(2);
    retval	text;
begin
    select into rec * from WSlot where slotname = $1;
    if not found then
        return '''';
    end if;
    if rec.slotlink = '''' then
        return ''-'';
    end if;
    sltype := substr(rec.slotlink, 1, 2);
    if sltype = ''PH'' then
        select into rec * from PHone where slotname = rec.slotlink;
	retval := ''Phone '' || trim(rec.slotname);
	if rec.comment != '''' then
	    retval := retval || '' ('';
	    retval := retval || rec.comment;
	    retval := retval || '')'';
	end if;
	return retval;
    end if;
    if sltype = ''IF'' then
	declare
	    syrow	System%RowType;
	    ifrow	IFace%ROWTYPE;
        begin
	    select into ifrow * from IFace where slotname = rec.slotlink;
	    select into syrow * from System where name = ifrow.sysname;
	    retval := syrow.name || '' IF '';
	    retval := retval || ifrow.ifname;
	    if syrow.comment != '''' then
	        retval := retval || '' ('';
		retval := retval || syrow.comment;
		retval := retval || '')'';
	    end if;
	    return retval;
	end;
    end if;
    return rec.slotlink;
end;
' language plpgsql;



-- ************************************************************
-- * View of a patchfield describing backside and patches
-- ************************************************************
create view Pfield_v1 as select PF.pfname, PF.slotname,
	pslot_backlink_view(PF.slotname) as backside,
	pslot_slotlink_view(PF.slotname) as patch
    from PSlot PF;


--
-- First we build the house - so we create the rooms
--
insert into Room values ('001', 'Entrance');
insert into Room values ('002', 'Office');
insert into Room values ('003', 'Office');
insert into Room values ('004', 'Technical');
insert into Room values ('101', 'Office');
insert into Room values ('102', 'Conference');
insert into Room values ('103', 'Restroom');
insert into Room values ('104', 'Technical');
insert into Room values ('105', 'Office');
insert into Room values ('106', 'Office');

--
-- Second we install the wall connectors
--
insert into WSlot values ('WS.001.1a', '001', '', '');
insert into WSlot values ('WS.001.1b', '001', '', '');
insert into WSlot values ('WS.001.2a', '001', '', '');
insert into WSlot values ('WS.001.2b', '001', '', '');
insert into WSlot values ('WS.001.3a', '001', '', '');
insert into WSlot values ('WS.001.3b', '001', '', '');

insert into WSlot values ('WS.002.1a', '002', '', '');
insert into WSlot values ('WS.002.1b', '002', '', '');
insert into WSlot values ('WS.002.2a', '002', '', '');
insert into WSlot values ('WS.002.2b', '002', '', '');
insert into WSlot values ('WS.002.3a', '002', '', '');
insert into WSlot values ('WS.002.3b', '002', '', '');

insert into WSlot values ('WS.003.1a', '003', '', '');
insert into WSlot values ('WS.003.1b', '003', '', '');
insert into WSlot values ('WS.003.2a', '003', '', '');
insert into WSlot values ('WS.003.2b', '003', '', '');
insert into WSlot values ('WS.003.3a', '003', '', '');
insert into WSlot values ('WS.003.3b', '003', '', '');

insert into WSlot values ('WS.101.1a', '101', '', '');
insert into WSlot values ('WS.101.1b', '101', '', '');
insert into WSlot values ('WS.101.2a', '101', '', '');
insert into WSlot values ('WS.101.2b', '101', '', '');
insert into WSlot values ('WS.101.3a', '101', '', '');
insert into WSlot values ('WS.101.3b', '101', '', '');

insert into WSlot values ('WS.102.1a', '102', '', '');
insert into WSlot values ('WS.102.1b', '102', '', '');
insert into WSlot values ('WS.102.2a', '102', '', '');
insert into WSlot values ('WS.102.2b', '102', '', '');
insert into WSlot values ('WS.102.3a', '102', '', '');
insert into WSlot values ('WS.102.3b', '102', '', '');

insert into WSlot values ('WS.105.1a', '105', '', '');
insert into WSlot values ('WS.105.1b', '105', '', '');
insert into WSlot values ('WS.105.2a', '105', '', '');
insert into WSlot values ('WS.105.2b', '105', '', '');
insert into WSlot values ('WS.105.3a', '105', '', '');
insert into WSlot values ('WS.105.3b', '105', '', '');

insert into WSlot values ('WS.106.1a', '106', '', '');
insert into WSlot values ('WS.106.1b', '106', '', '');
insert into WSlot values ('WS.106.2a', '106', '', '');
insert into WSlot values ('WS.106.2b', '106', '', '');
insert into WSlot values ('WS.106.3a', '106', '', '');
insert into WSlot values ('WS.106.3b', '106', '', '');

--
-- Now create the patch fields and their slots
--
insert into PField values ('PF0_1', 'Wallslots basement');

--
-- The cables for these will be made later, so they are unconnected for now
--
insert into PSlot values ('PS.base.a1', 'PF0_1', '', '');
insert into PSlot values ('PS.base.a2', 'PF0_1', '', '');
insert into PSlot values ('PS.base.a3', 'PF0_1', '', '');
insert into PSlot values ('PS.base.a4', 'PF0_1', '', '');
insert into PSlot values ('PS.base.a5', 'PF0_1', '', '');
insert into PSlot values ('PS.base.a6', 'PF0_1', '', '');

--
-- These are already wired to the wall connectors
--
insert into PSlot values ('PS.base.b1', 'PF0_1', '', 'WS.002.1a');
insert into PSlot values ('PS.base.b2', 'PF0_1', '', 'WS.002.1b');
insert into PSlot values ('PS.base.b3', 'PF0_1', '', 'WS.002.2a');
insert into PSlot values ('PS.base.b4', 'PF0_1', '', 'WS.002.2b');
insert into PSlot values ('PS.base.b5', 'PF0_1', '', 'WS.002.3a');
insert into PSlot values ('PS.base.b6', 'PF0_1', '', 'WS.002.3b');

insert into PSlot values ('PS.base.c1', 'PF0_1', '', 'WS.003.1a');
insert into PSlot values ('PS.base.c2', 'PF0_1', '', 'WS.003.1b');
insert into PSlot values ('PS.base.c3', 'PF0_1', '', 'WS.003.2a');
insert into PSlot values ('PS.base.c4', 'PF0_1', '', 'WS.003.2b');
insert into PSlot values ('PS.base.c5', 'PF0_1', '', 'WS.003.3a');
insert into PSlot values ('PS.base.c6', 'PF0_1', '', 'WS.003.3b');

--
-- This patchfield will be renamed later into PF0_2 - so its
-- slots references in pfname should follow
--
insert into PField values ('PF0_X', 'Phonelines basement');

insert into PSlot values ('PS.base.ta1', 'PF0_X', '', '');
insert into PSlot values ('PS.base.ta2', 'PF0_X', '', '');
insert into PSlot values ('PS.base.ta3', 'PF0_X', '', '');
insert into PSlot values ('PS.base.ta4', 'PF0_X', '', '');
insert into PSlot values ('PS.base.ta5', 'PF0_X', '', '');
insert into PSlot values ('PS.base.ta6', 'PF0_X', '', '');

insert into PSlot values ('PS.base.tb1', 'PF0_X', '', '');
insert into PSlot values ('PS.base.tb2', 'PF0_X', '', '');
insert into PSlot values ('PS.base.tb3', 'PF0_X', '', '');
insert into PSlot values ('PS.base.tb4', 'PF0_X', '', '');
insert into PSlot values ('PS.base.tb5', 'PF0_X', '', '');
insert into PSlot values ('PS.base.tb6', 'PF0_X', '', '');

insert into PField values ('PF1_1', 'Wallslots first floor');

insert into PSlot values ('PS.first.a1', 'PF1_1', '', 'WS.101.1a');
insert into PSlot values ('PS.first.a2', 'PF1_1', '', 'WS.101.1b');
insert into PSlot values ('PS.first.a3', 'PF1_1', '', 'WS.101.2a');
insert into PSlot values ('PS.first.a4', 'PF1_1', '', 'WS.101.2b');
insert into PSlot values ('PS.first.a5', 'PF1_1', '', 'WS.101.3a');
insert into PSlot values ('PS.first.a6', 'PF1_1', '', 'WS.101.3b');

insert into PSlot values ('PS.first.b1', 'PF1_1', '', 'WS.102.1a');
insert into PSlot values ('PS.first.b2', 'PF1_1', '', 'WS.102.1b');
insert into PSlot values ('PS.first.b3', 'PF1_1', '', 'WS.102.2a');
insert into PSlot values ('PS.first.b4', 'PF1_1', '', 'WS.102.2b');
insert into PSlot values ('PS.first.b5', 'PF1_1', '', 'WS.102.3a');
insert into PSlot values ('PS.first.b6', 'PF1_1', '', 'WS.102.3b');

insert into PSlot values ('PS.first.c1', 'PF1_1', '', 'WS.105.1a');
insert into PSlot values ('PS.first.c2', 'PF1_1', '', 'WS.105.1b');
insert into PSlot values ('PS.first.c3', 'PF1_1', '', 'WS.105.2a');
insert into PSlot values ('PS.first.c4', 'PF1_1', '', 'WS.105.2b');
insert into PSlot values ('PS.first.c5', 'PF1_1', '', 'WS.105.3a');
insert into PSlot values ('PS.first.c6', 'PF1_1', '', 'WS.105.3b');

insert into PSlot values ('PS.first.d1', 'PF1_1', '', 'WS.106.1a');
insert into PSlot values ('PS.first.d2', 'PF1_1', '', 'WS.106.1b');
insert into PSlot values ('PS.first.d3', 'PF1_1', '', 'WS.106.2a');
insert into PSlot values ('PS.first.d4', 'PF1_1', '', 'WS.106.2b');
insert into PSlot values ('PS.first.d5', 'PF1_1', '', 'WS.106.3a');
insert into PSlot values ('PS.first.d6', 'PF1_1', '', 'WS.106.3b');

--
-- Now we wire the wall connectors 1a-2a in room 001 to the
-- patchfield. In the second update we make an error, and
-- correct it after
--
update PSlot set backlink = 'WS.001.1a' where slotname = 'PS.base.a1';
update PSlot set backlink = 'WS.001.1b' where slotname = 'PS.base.a3';
select * from WSlot where roomno = '001' order by slotname;
select * from PSlot where slotname ~ 'PS.base.a' order by slotname;
update PSlot set backlink = 'WS.001.2a' where slotname = 'PS.base.a3';
select * from WSlot where roomno = '001' order by slotname;
select * from PSlot where slotname ~ 'PS.base.a' order by slotname;
update PSlot set backlink = 'WS.001.1b' where slotname = 'PS.base.a2';
select * from WSlot where roomno = '001' order by slotname;
select * from PSlot where slotname ~ 'PS.base.a' order by slotname;

--
-- Same procedure for 2b-3b but this time updating the WSlot instead
-- of the PSlot. Due to the triggers the result is the same:
-- WSlot and corresponding PSlot point to each other.
--
update WSlot set backlink = 'PS.base.a4' where slotname = 'WS.001.2b';
update WSlot set backlink = 'PS.base.a6' where slotname = 'WS.001.3a';
select * from WSlot where roomno = '001' order by slotname;
select * from PSlot where slotname ~ 'PS.base.a' order by slotname;
update WSlot set backlink = 'PS.base.a6' where slotname = 'WS.001.3b';
select * from WSlot where roomno = '001' order by slotname;
select * from PSlot where slotname ~ 'PS.base.a' order by slotname;
update WSlot set backlink = 'PS.base.a5' where slotname = 'WS.001.3a';
select * from WSlot where roomno = '001' order by slotname;
select * from PSlot where slotname ~ 'PS.base.a' order by slotname;

insert into PField values ('PF1_2', 'Phonelines first floor');

insert into PSlot values ('PS.first.ta1', 'PF1_2', '', '');
insert into PSlot values ('PS.first.ta2', 'PF1_2', '', '');
insert into PSlot values ('PS.first.ta3', 'PF1_2', '', '');
insert into PSlot values ('PS.first.ta4', 'PF1_2', '', '');
insert into PSlot values ('PS.first.ta5', 'PF1_2', '', '');
insert into PSlot values ('PS.first.ta6', 'PF1_2', '', '');

insert into PSlot values ('PS.first.tb1', 'PF1_2', '', '');
insert into PSlot values ('PS.first.tb2', 'PF1_2', '', '');
insert into PSlot values ('PS.first.tb3', 'PF1_2', '', '');
insert into PSlot values ('PS.first.tb4', 'PF1_2', '', '');
insert into PSlot values ('PS.first.tb5', 'PF1_2', '', '');
insert into PSlot values ('PS.first.tb6', 'PF1_2', '', '');

--
-- Fix the wrong name for patchfield PF0_2
--
update PField set name = 'PF0_2' where name = 'PF0_X';

select * from PSlot order by slotname;
select * from WSlot order by slotname;

--
-- Install the central phone system and create the phone numbers.
-- They are wired on insert to the patchfields. Again the
-- triggers automatically tell the PSlots to update their
-- backlink field.
--
insert into PLine values ('PL.001', '-0', 'Central call', 'PS.base.ta1');
insert into PLine values ('PL.002', '-101', '', 'PS.base.ta2');
insert into PLine values ('PL.003', '-102', '', 'PS.base.ta3');
insert into PLine values ('PL.004', '-103', '', 'PS.base.ta5');
insert into PLine values ('PL.005', '-104', '', 'PS.base.ta6');
insert into PLine values ('PL.006', '-106', '', 'PS.base.tb2');
insert into PLine values ('PL.007', '-108', '', 'PS.base.tb3');
insert into PLine values ('PL.008', '-109', '', 'PS.base.tb4');
insert into PLine values ('PL.009', '-121', '', 'PS.base.tb5');
insert into PLine values ('PL.010', '-122', '', 'PS.base.tb6');
insert into PLine values ('PL.015', '-134', '', 'PS.first.ta1');
insert into PLine values ('PL.016', '-137', '', 'PS.first.ta3');
insert into PLine values ('PL.017', '-139', '', 'PS.first.ta4');
insert into PLine values ('PL.018', '-362', '', 'PS.first.tb1');
insert into PLine values ('PL.019', '-363', '', 'PS.first.tb2');
insert into PLine values ('PL.020', '-364', '', 'PS.first.tb3');
insert into PLine values ('PL.021', '-365', '', 'PS.first.tb5');
insert into PLine values ('PL.022', '-367', '', 'PS.first.tb6');
insert into PLine values ('PL.028', '-501', 'Fax entrance', 'PS.base.ta2');
insert into PLine values ('PL.029', '-502', 'Fax first floor', 'PS.first.ta1');

--
-- Buy some phones, plug them into the wall and patch the
-- phone lines to the corresponding patchfield slots.
--
insert into PHone values ('PH.hc001', 'Hicom standard', 'WS.001.1a');
update PSlot set slotlink = 'PS.base.ta1' where slotname = 'PS.base.a1';
insert into PHone values ('PH.hc002', 'Hicom standard', 'WS.002.1a');
update PSlot set slotlink = 'PS.base.ta5' where slotname = 'PS.base.b1';
insert into PHone values ('PH.hc003', 'Hicom standard', 'WS.002.2a');
update PSlot set slotlink = 'PS.base.tb2' where slotname = 'PS.base.b3';
insert into PHone values ('PH.fax001', 'Canon fax', 'WS.001.2a');
update PSlot set slotlink = 'PS.base.ta2' where slotname = 'PS.base.a3';

--
-- Install a hub at one of the patchfields, plug a computers
-- ethernet interface into the wall and patch it to the hub.
--
insert into Hub values ('base.hub1', 'Patchfield PF0_1 hub', 16);
insert into System values ('orion', 'PC');
insert into IFace values ('IF', 'orion', 'eth0', 'WS.002.1b');
update PSlot set slotlink = 'HS.base.hub1.1' where slotname = 'PS.base.b2';

--
-- Now we take a look at the patchfield
--
select * from PField_v1 where pfname = 'PF0_1' order by slotname;
select * from PField_v1 where pfname = 'PF0_2' order by slotname;

--
-- Finally we want errors
--
insert into PField values ('PF1_1', 'should fail due to unique index');
update PSlot set backlink = 'WS.not.there' where slotname = 'PS.base.a1';
update PSlot set backlink = 'XX.illegal' where slotname = 'PS.base.a1';
update PSlot set slotlink = 'PS.not.there' where slotname = 'PS.base.a1';
update PSlot set slotlink = 'XX.illegal' where slotname = 'PS.base.a1';
insert into HSlot values ('HS', 'base.hub1', 1, '');
insert into HSlot values ('HS', 'base.hub1', 20, '');
delete from HSlot;
insert into IFace values ('IF', 'notthere', 'eth0', '');
insert into IFace values ('IF', 'orion', 'ethernet_interface_name_too_long', '');


--
-- The following tests are unrelated to the scenario outlined above;
-- they merely exercise specific parts of PL/pgSQL
--

--
-- Test recursion, per bug report 7-Sep-01
--
CREATE FUNCTION recursion_test(int,int) RETURNS text AS '
DECLARE rslt text;
BEGIN
    IF $1 <= 0 THEN
        rslt = CAST($2 AS TEXT);
    ELSE
        rslt = CAST($1 AS TEXT) || '','' || recursion_test($1 - 1, $2);
    END IF;
    RETURN rslt;
END;' LANGUAGE plpgsql;

SELECT recursion_test(4,3);

--
-- Test the FOUND magic variable
--
CREATE TABLE found_test_tbl (a int);

create function test_found()
  returns boolean as '
  declare
  begin
  insert into found_test_tbl values (1);
  if FOUND then
     insert into found_test_tbl values (2);
  end if;

  update found_test_tbl set a = 100 where a = 1;
  if FOUND then
    insert into found_test_tbl values (3);
  end if;

  delete from found_test_tbl where a = 9999; -- matches no rows
  if not FOUND then
    insert into found_test_tbl values (4);
  end if;

  for i in 1 .. 10 loop
    -- no need to do anything
  end loop;
  if FOUND then
    insert into found_test_tbl values (5);
  end if;

  -- never executes the loop
  for i in 2 .. 1 loop
    -- no need to do anything
  end loop;
  if not FOUND then
    insert into found_test_tbl values (6);
  end if;
  return true;
  end;' language plpgsql;

select test_found();
select * from found_test_tbl;

--
-- Test set-returning functions for PL/pgSQL
--

create function test_table_func_rec() returns setof found_test_tbl as '
DECLARE
	rec RECORD;
BEGIN
	FOR rec IN select * from found_test_tbl LOOP
		RETURN NEXT rec;
	END LOOP;
	RETURN;
END;' language plpgsql;

select * from test_table_func_rec();

create function test_table_func_row() returns setof found_test_tbl as '
DECLARE
	row found_test_tbl%ROWTYPE;
BEGIN
	FOR row IN select * from found_test_tbl LOOP
		RETURN NEXT row;
	END LOOP;
	RETURN;
END;' language plpgsql;

select * from test_table_func_row();

create function test_ret_set_scalar(int,int) returns setof int as '
DECLARE
	i int;
BEGIN
	FOR i IN $1 .. $2 LOOP
		RETURN NEXT i + 1;
	END LOOP;
	RETURN;
END;' language plpgsql;

select * from test_ret_set_scalar(1,10);

create function test_ret_set_rec_dyn(int) returns setof record as '
DECLARE
	retval RECORD;
BEGIN
	IF $1 > 10 THEN
		SELECT INTO retval 5, 10, 15;
		RETURN NEXT retval;
		RETURN NEXT retval;
	ELSE
		SELECT INTO retval 50, 5::numeric, ''xxx''::text;
		RETURN NEXT retval;
		RETURN NEXT retval;
	END IF;
	RETURN;
END;' language plpgsql;

SELECT * FROM test_ret_set_rec_dyn(1500) AS (a int, b int, c int);
SELECT * FROM test_ret_set_rec_dyn(5) AS (a int, b numeric, c text);

create function test_ret_rec_dyn(int) returns record as '
DECLARE
	retval RECORD;
BEGIN
	IF $1 > 10 THEN
		SELECT INTO retval 5, 10, 15;
		RETURN retval;
	ELSE
		SELECT INTO retval 50, 5::numeric, ''xxx''::text;
		RETURN retval;
	END IF;
END;' language plpgsql;

SELECT * FROM test_ret_rec_dyn(1500) AS (a int, b int, c int);
SELECT * FROM test_ret_rec_dyn(5) AS (a int, b numeric, c text);

--
-- Test some simple polymorphism cases.
--

create function f1(x anyelement) returns anyelement as $$
begin
  return x + 1;
end$$ language plpgsql;

select f1(42) as int, f1(4.5) as num;
select f1(point(3,4));  -- fail for lack of + operator

drop function f1(x anyelement);

create function f1(x anyelement) returns anyarray as $$
begin
  return array[x + 1, x + 2];
end$$ language plpgsql;

select f1(42) as int, f1(4.5) as num;

drop function f1(x anyelement);

create function f1(x anyarray) returns anyelement as $$
begin
  return x[1];
end$$ language plpgsql;

select f1(array[2,4]) as int, f1(array[4.5, 7.7]) as num;

select f1(stavalues1) from pg_statistic;  -- fail, can't infer element type

drop function f1(x anyarray);

create function f1(x anyarray) returns anyarray as $$
begin
  return x;
end$$ language plpgsql;

select f1(array[2,4]) as int, f1(array[4.5, 7.7]) as num;

select f1(stavalues1) from pg_statistic;  -- fail, can't infer element type

drop function f1(x anyarray);

-- fail, can't infer type:
create function f1(x anyelement) returns anyrange as $$
begin
  return array[x + 1, x + 2];
end$$ language plpgsql;

create function f1(x anyrange) returns anyarray as $$
begin
  return array[lower(x), upper(x)];
end$$ language plpgsql;

select f1(int4range(42, 49)) as int, f1(float8range(4.5, 7.8)) as num;

drop function f1(x anyrange);

create function f1(x anycompatible, y anycompatible) returns anycompatiblearray as $$
begin
  return array[x, y];
end$$ language plpgsql;

select f1(2, 4) as int, f1(2, 4.5) as num;

drop function f1(x anycompatible, y anycompatible);

create function f1(x anycompatiblerange, y anycompatible, z anycompatible) returns anycompatiblearray as $$
begin
  return array[lower(x), upper(x), y, z];
end$$ language plpgsql;

select f1(int4range(42, 49), 11, 2::smallint) as int, f1(float8range(4.5, 7.8), 7.8, 11::real) as num;

select f1(int4range(42, 49), 11, 4.5) as fail;  -- range type doesn't fit

drop function f1(x anycompatiblerange, y anycompatible, z anycompatible);

-- fail, can't infer type:
create function f1(x anycompatible) returns anycompatiblerange as $$
begin
  return array[x + 1, x + 2];
end$$ language plpgsql;

create function f1(x anycompatiblerange, y anycompatiblearray) returns anycompatiblerange as $$
begin
  return x;
end$$ language plpgsql;

select f1(int4range(42, 49), array[11]) as int, f1(float8range(4.5, 7.8), array[7]) as num;

drop function f1(x anycompatiblerange, y anycompatiblearray);

create function f1(a anyelement, b anyarray,
                   c anycompatible, d anycompatible,
                   OUT x anyarray, OUT y anycompatiblearray)
as $$
begin
  x := a || b;
  y := array[c, d];
end$$ language plpgsql;

select x, pg_typeof(x), y, pg_typeof(y)
  from f1(11, array[1, 2], 42, 34.5);
select x, pg_typeof(x), y, pg_typeof(y)
  from f1(11, array[1, 2], point(1,2), point(3,4));
select x, pg_typeof(x), y, pg_typeof(y)
  from f1(11, '{1,2}', point(1,2), '(3,4)');
select x, pg_typeof(x), y, pg_typeof(y)
  from f1(11, array[1, 2.2], 42, 34.5);  -- fail

drop function f1(a anyelement, b anyarray,
                 c anycompatible, d anycompatible);

--
-- Test handling of OUT parameters, including polymorphic cases.
-- Note that RETURN is optional with OUT params; we try both ways.
--

-- wrong way to do it:
create function f1(in i int, out j int) returns int as $$
begin
  return i+1;
end$$ language plpgsql;

create function f1(in i int, out j int) as $$
begin
  j := i+1;
  return;
end$$ language plpgsql;

select f1(42);
select * from f1(42);

create or replace function f1(inout i int) as $$
begin
  i := i+1;
end$$ language plpgsql;

select f1(42);
select * from f1(42);

drop function f1(int);

create function f1(in i int, out j int) returns setof int as $$
begin
  j := i+1;
  return next;
  j := i+2;
  return next;
  return;
end$$ language plpgsql;

select * from f1(42);

drop function f1(int);

create function f1(in i int, out j int, out k text) as $$
begin
  j := i;
  j := j+1;
  k := 'foo';
end$$ language plpgsql;

select f1(42);
select * from f1(42);

drop function f1(int);

create function f1(in i int, out j int, out k text) returns setof record as $$
begin
  j := i+1;
  k := 'foo';
  return next;
  j := j+1;
  k := 'foot';
  return next;
end$$ language plpgsql;

select * from f1(42);

drop function f1(int);

create function duplic(in i anyelement, out j anyelement, out k anyarray) as $$
begin
  j := i;
  k := array[j,j];
  return;
end$$ language plpgsql;

select * from duplic(42);
select * from duplic('foo'::text);

drop function duplic(anyelement);

create function duplic(in i anycompatiblerange, out j anycompatible, out k anycompatiblearray) as $$
begin
  j := lower(i);
  k := array[lower(i),upper(i)];
  return;
end$$ language plpgsql;

select * from duplic(int4range(42,49));
select * from duplic(textrange('aaa', 'bbb'));

drop function duplic(anycompatiblerange);

--
-- test PERFORM
--

create table perform_test (
	a	INT,
	b	INT
);

create function perform_simple_func(int) returns boolean as '
BEGIN
	IF $1 < 20 THEN
		INSERT INTO perform_test VALUES ($1, $1 + 10);
		RETURN TRUE;
	ELSE
		RETURN FALSE;
	END IF;
END;' language plpgsql;

create function perform_test_func() returns void as '
BEGIN
	IF FOUND then
		INSERT INTO perform_test VALUES (100, 100);
	END IF;

	PERFORM perform_simple_func(5);

	IF FOUND then
		INSERT INTO perform_test VALUES (100, 100);
	END IF;

	PERFORM perform_simple_func(50);

	IF FOUND then
		INSERT INTO perform_test VALUES (100, 100);
	END IF;

	RETURN;
END;' language plpgsql;

SELECT perform_test_func();
SELECT * FROM perform_test;

drop table perform_test;

--
-- Test proper snapshot handling in simple expressions
--

create temp table users(login text, id serial);

create function sp_id_user(a_login text) returns int as $$
declare x int;
begin
  select into x id from users where login = a_login;
  if found then return x; end if;
  return 0;
end$$ language plpgsql stable;

insert into users values('user1');

select sp_id_user('user1');
select sp_id_user('userx');

create function sp_add_user(a_login text) returns int as $$
declare my_id_user int;
begin
  my_id_user = sp_id_user( a_login );
  IF  my_id_user > 0 THEN
    RETURN -1;  -- error code for existing user
  END IF;
  INSERT INTO users ( login ) VALUES ( a_login );
  my_id_user = sp_id_user( a_login );
  IF  my_id_user = 0 THEN
    RETURN -2;  -- error code for insertion failure
  END IF;
  RETURN my_id_user;
end$$ language plpgsql;

select sp_add_user('user1');
select sp_add_user('user2');
select sp_add_user('user2');
select sp_add_user('user3');
select sp_add_user('user3');

drop function sp_add_user(text);
drop function sp_id_user(text);

--
-- tests for refcursors
--
create table rc_test (a int, b int);
copy rc_test from stdin;
5	10
50	100
500	1000
\.

create function return_unnamed_refcursor() returns refcursor as $$
declare
    rc refcursor;
begin
    open rc for select a from rc_test;
    return rc;
end
$$ language plpgsql;

create function use_refcursor(rc refcursor) returns int as $$
declare
    rc refcursor;
    x record;
begin
    rc := return_unnamed_refcursor();
    fetch next from rc into x;
    return x.a;
end
$$ language plpgsql;

select use_refcursor(return_unnamed_refcursor());

create function return_refcursor(rc refcursor) returns refcursor as $$
begin
    open rc for select a from rc_test;
    return rc;
end
$$ language plpgsql;

create function refcursor_test1(refcursor) returns refcursor as $$
begin
    perform return_refcursor($1);
    return $1;
end
$$ language plpgsql;

begin;

select refcursor_test1('test1');
fetch next in test1;

select refcursor_test1('test2');
fetch all from test2;

commit;

-- should fail
fetch next from test1;

create function refcursor_test2(int, int) returns boolean as $$
declare
    c1 cursor (param1 int, param2 int) for select * from rc_test where a > param1 and b > param2;
    nonsense record;
begin
    open c1($1, $2);
    fetch c1 into nonsense;
    close c1;
    if found then
        return true;
    else
        return false;
    end if;
end
$$ language plpgsql;

select refcursor_test2(20000, 20000) as "Should be false",
       refcursor_test2(20, 20) as "Should be true";

-- should fail
create function constant_refcursor() returns refcursor as $$
declare
    rc constant refcursor;
begin
    open rc for select a from rc_test;
    return rc;
end
$$ language plpgsql;

select constant_refcursor();

-- but it's okay like this
create or replace function constant_refcursor() returns refcursor as $$
declare
    rc constant refcursor := 'my_cursor_name';
begin
    open rc for select a from rc_test;
    return rc;
end
$$ language plpgsql;

select constant_refcursor();

--
-- tests for cursors with named parameter arguments
--
create function namedparmcursor_test1(int, int) returns boolean as $$
declare
    c1 cursor (param1 int, param12 int) for select * from rc_test where a > param1 and b > param12;
    nonsense record;
begin
    open c1(param12 := $2, param1 := $1);
    fetch c1 into nonsense;
    close c1;
    if found then
        return true;
    else
        return false;
    end if;
end
$$ language plpgsql;

select namedparmcursor_test1(20000, 20000) as "Should be false",
       namedparmcursor_test1(20, 20) as "Should be true";

-- mixing named and positional argument notations
create function namedparmcursor_test2(int, int) returns boolean as $$
declare
    c1 cursor (param1 int, param2 int) for select * from rc_test where a > param1 and b > param2;
    nonsense record;
begin
    open c1(param1 := $1, $2);
    fetch c1 into nonsense;
    close c1;
    if found then
        return true;
    else
        return false;
    end if;
end
$$ language plpgsql;
select namedparmcursor_test2(20, 20);

-- mixing named and positional: param2 is given twice, once in named notation
-- and second time in positional notation. Should throw an error at parse time
create function namedparmcursor_test3() returns void as $$
declare
    c1 cursor (param1 int, param2 int) for select * from rc_test where a > param1 and b > param2;
begin
    open c1(param2 := 20, 21);
end
$$ language plpgsql;

-- mixing named and positional: same as previous test, but param1 is duplicated
create function namedparmcursor_test4() returns void as $$
declare
    c1 cursor (param1 int, param2 int) for select * from rc_test where a > param1 and b > param2;
begin
    open c1(20, param1 := 21);
end
$$ language plpgsql;

-- duplicate named parameter, should throw an error at parse time
create function namedparmcursor_test5() returns void as $$
declare
  c1 cursor (p1 int, p2 int) for
    select * from tenk1 where thousand = p1 and tenthous = p2;
begin
  open c1 (p2 := 77, p2 := 42);
end
$$ language plpgsql;

-- not enough parameters, should throw an error at parse time
create function namedparmcursor_test6() returns void as $$
declare
  c1 cursor (p1 int, p2 int) for
    select * from tenk1 where thousand = p1 and tenthous = p2;
begin
  open c1 (p2 := 77);
end
$$ language plpgsql;

-- division by zero runtime error, the context given in the error message
-- should be sensible
create function namedparmcursor_test7() returns void as $$
declare
  c1 cursor (p1 int, p2 int) for
    select * from tenk1 where thousand = p1 and tenthous = p2;
begin
  open c1 (p2 := 77, p1 := 42/0);
end $$ language plpgsql;
select namedparmcursor_test7();

-- check that line comments work correctly within the argument list (there
-- is some special handling of this case in the code: the newline after the
-- comment must be preserved when the argument-evaluating query is
-- constructed, otherwise the comment effectively comments out the next
-- argument, too)
create function namedparmcursor_test8() returns int4 as $$
declare
  c1 cursor (p1 int, p2 int) for
    select count(*) from tenk1 where thousand = p1 and tenthous = p2;
  n int4;
begin
  open c1 (77 -- test
  , 42);
  fetch c1 into n;
  return n;
end $$ language plpgsql;
select namedparmcursor_test8();

-- cursor parameter name can match plpgsql variable or unreserved keyword
create function namedparmcursor_test9(p1 int) returns int4 as $$
declare
  c1 cursor (p1 int, p2 int, debug int) for
    select count(*) from tenk1 where thousand = p1 and tenthous = p2
      and four = debug;
  p2 int4 := 1006;
  n int4;
begin
  open c1 (p1 := p1, p2 := p2, debug := 2);
  fetch c1 into n;
  return n;
end $$ language plpgsql;
select namedparmcursor_test9(6);

--
-- tests for "raise" processing
--
create function raise_test1(int) returns int as $$
begin
    raise notice 'This message has too many parameters!', $1;
    return $1;
end;
$$ language plpgsql;

create function raise_test2(int) returns int as $$
begin
    raise notice 'This message has too few parameters: %, %, %', $1, $1;
    return $1;
end;
$$ language plpgsql;

create function raise_test3(int) returns int as $$
begin
    raise notice 'This message has no parameters (despite having %% signs in it)!';
    return $1;
end;
$$ language plpgsql;

select raise_test3(1);

-- Test re-RAISE inside a nested exception block.  This case is allowed
-- by Oracle's PL/SQL but was handled differently by PG before 9.1.

CREATE FUNCTION reraise_test() RETURNS void AS $$
BEGIN
   BEGIN
       RAISE syntax_error;
   EXCEPTION
       WHEN syntax_error THEN
           BEGIN
               raise notice 'exception % thrown in inner block, reraising', sqlerrm;
               RAISE;
           EXCEPTION
               WHEN OTHERS THEN
                   raise notice 'RIGHT - exception % caught in inner block', sqlerrm;
           END;
   END;
EXCEPTION
   WHEN OTHERS THEN
       raise notice 'WRONG - exception % caught in outer block', sqlerrm;
END;
$$ LANGUAGE plpgsql;

SELECT reraise_test();

--
-- reject function definitions that contain malformed SQL queries at
-- compile-time, where possible
--
create function bad_sql1() returns int as $$
declare a int;
begin
    a := 5;
    Johnny Yuma;
    a := 10;
    return a;
end$$ language plpgsql;

create function bad_sql2() returns int as $$
declare r record;
begin
    for r in select I fought the law, the law won LOOP
        raise notice 'in loop';
    end loop;
    return 5;
end;$$ language plpgsql;

-- a RETURN expression is mandatory, except for void-returning
-- functions, where it is not allowed
create function missing_return_expr() returns int as $$
begin
    return ;
end;$$ language plpgsql;

create function void_return_expr() returns void as $$
begin
    return 5;
end;$$ language plpgsql;

-- VOID functions are allowed to omit RETURN
create function void_return_expr() returns void as $$
begin
    perform 2+2;
end;$$ language plpgsql;

select void_return_expr();

-- but ordinary functions are not
create function missing_return_expr() returns int as $$
begin
    perform 2+2;
end;$$ language plpgsql;

select missing_return_expr();

drop function void_return_expr();
drop function missing_return_expr();

--
-- EXECUTE ... INTO test
--

create table eifoo (i integer, y integer);
create type eitype as (i integer, y integer);

create or replace function execute_into_test(varchar) returns record as $$
declare
    _r record;
    _rt eifoo%rowtype;
    _v eitype;
    i int;
    j int;
    k int;
begin
    execute 'insert into '||$1||' values(10,15)';
    execute 'select (row).* from (select row(10,1)::eifoo) s' into _r;
    raise notice '% %', _r.i, _r.y;
    execute 'select * from '||$1||' limit 1' into _rt;
    raise notice '% %', _rt.i, _rt.y;
    execute 'select *, 20 from '||$1||' limit 1' into i, j, k;
    raise notice '% % %', i, j, k;
    execute 'select 1,2' into _v;
    return _v;
end; $$ language plpgsql;

select execute_into_test('eifoo');

drop table eifoo cascade;
drop type eitype cascade;

--
-- SQLSTATE and SQLERRM test
--

create function excpt_test1() returns void as $$
begin
    raise notice '% %', sqlstate, sqlerrm;
end; $$ language plpgsql;
-- should fail: SQLSTATE and SQLERRM are only in defined EXCEPTION
-- blocks
select excpt_test1();

create function excpt_test2() returns void as $$
begin
    begin
        begin
            raise notice '% %', sqlstate, sqlerrm;
        end;
    end;
end; $$ language plpgsql;
-- should fail
select excpt_test2();

create function excpt_test3() returns void as $$
begin
    begin
        raise exception 'user exception';
    exception when others then
	    raise notice 'caught exception % %', sqlstate, sqlerrm;
	    begin
	        raise notice '% %', sqlstate, sqlerrm;
	        perform 10/0;
        exception
            when substring_error then
                -- this exception handler shouldn't be invoked
                raise notice 'unexpected exception: % %', sqlstate, sqlerrm;
	        when division_by_zero then
	            raise notice 'caught exception % %', sqlstate, sqlerrm;
	    end;
	    raise notice '% %', sqlstate, sqlerrm;
    end;
end; $$ language plpgsql;
select excpt_test3();

create function excpt_test4() returns text as $$
begin
	begin perform 1/0;
	exception when others then return sqlerrm; end;
end; $$ language plpgsql;
select excpt_test4();

drop function excpt_test1();
drop function excpt_test2();
drop function excpt_test3();
drop function excpt_test4();

-- parameters of raise stmt can be expressions
create function raise_exprs() returns void as $$
declare
    a integer[] = '{10,20,30}';
    c varchar = 'xyz';
    i integer;
begin
    i := 2;
    raise notice '%; %; %; %; %; %', a, a[i], c, (select c || 'abc'), row(10,'aaa',NULL,30), NULL;
end;$$ language plpgsql;

select raise_exprs();
drop function raise_exprs();

-- regression test: verify that multiple uses of same plpgsql datum within
-- a SQL command all get mapped to the same $n parameter.  The return value
-- of the SELECT is not important, we only care that it doesn't fail with
-- a complaint about an ungrouped column reference.
create function multi_datum_use(p1 int) returns bool as $$
declare
  x int;
  y int;
begin
  select into x,y unique1/p1, unique1/$1 from tenk1 group by unique1/p1;
  return x = y;
end$$ language plpgsql;

select multi_datum_use(42);

--
-- Test STRICT limiter in both planned and EXECUTE invocations.
-- Note that a data-modifying query is quasi strict (disallow multi rows)
-- by default in the planned case, but not in EXECUTE.
--

create temp table foo (f1 int, f2 int);

insert into foo values (1,2), (3,4);

create or replace function stricttest() returns void as $$
declare x record;
begin
  -- should work
  insert into foo values(5,6) returning * into x;
  raise notice 'x.f1 = %, x.f2 = %', x.f1, x.f2;
end$$ language plpgsql;

select stricttest();

create or replace function stricttest() returns void as $$
declare x record;
begin
  -- should fail due to implicit strict
  insert into foo values(7,8),(9,10) returning * into x;
  raise notice 'x.f1 = %, x.f2 = %', x.f1, x.f2;
end$$ language plpgsql;

select stricttest();

create or replace function stricttest() returns void as $$
declare x record;
begin
  -- should work
  execute 'insert into foo values(5,6) returning *' into x;
  raise notice 'x.f1 = %, x.f2 = %', x.f1, x.f2;
end$$ language plpgsql;

select stricttest();

create or replace function stricttest() returns void as $$
declare x record;
begin
  -- this should work since EXECUTE isn't as picky
  execute 'insert into foo values(7,8),(9,10) returning *' into x;
  raise notice 'x.f1 = %, x.f2 = %', x.f1, x.f2;
end$$ language plpgsql;

select stricttest();

select * from foo;

create or replace function stricttest() returns void as $$
declare x record;
begin
  -- should work
  select * from foo where f1 = 3 into strict x;
  raise notice 'x.f1 = %, x.f2 = %', x.f1, x.f2;
end$$ language plpgsql;

select stricttest();

create or replace function stricttest() returns void as $$
declare x record;
begin
  -- should fail, no rows
  select * from foo where f1 = 0 into strict x;
  raise notice 'x.f1 = %, x.f2 = %', x.f1, x.f2;
end$$ language plpgsql;

select stricttest();

create or replace function stricttest() returns void as $$
declare x record;
begin
  -- should fail, too many rows
  select * from foo where f1 > 3 into strict x;
  raise notice 'x.f1 = %, x.f2 = %', x.f1, x.f2;
end$$ language plpgsql;

select stricttest();

create or replace function stricttest() returns void as $$
declare x record;
begin
  -- should work
  execute 'select * from foo where f1 = 3' into strict x;
  raise notice 'x.f1 = %, x.f2 = %', x.f1, x.f2;
end$$ language plpgsql;

select stricttest();

create or replace function stricttest() returns void as $$
declare x record;
begin
  -- should fail, no rows
  execute 'select * from foo where f1 = 0' into strict x;
  raise notice 'x.f1 = %, x.f2 = %', x.f1, x.f2;
end$$ language plpgsql;

select stricttest();

create or replace function stricttest() returns void as $$
declare x record;
begin
  -- should fail, too many rows
  execute 'select * from foo where f1 > 3' into strict x;
  raise notice 'x.f1 = %, x.f2 = %', x.f1, x.f2;
end$$ language plpgsql;

select stricttest();

drop function stricttest();

-- test printing parameters after failure due to STRICT

set plpgsql.print_strict_params to true;

create or replace function stricttest() returns void as $$
declare
x record;
p1 int := 2;
p3 text := 'foo';
begin
  -- no rows
  select * from foo where f1 = p1 and f1::text = p3 into strict x;
  raise notice 'x.f1 = %, x.f2 = %', x.f1, x.f2;
end$$ language plpgsql;

select stricttest();

create or replace function stricttest() returns void as $$
declare
x record;
p1 int := 2;
p3 text := $a$'Valame Dios!' dijo Sancho; 'no le dije yo a vuestra merced que mirase bien lo que hacia?'$a$;
begin
  -- no rows
  select * from foo where f1 = p1 and f1::text = p3 into strict x;
  raise notice 'x.f1 = %, x.f2 = %', x.f1, x.f2;
end$$ language plpgsql;

select stricttest();

create or replace function stricttest() returns void as $$
declare
x record;
p1 int := 2;
p3 text := 'foo';
begin
  -- too many rows
  select * from foo where f1 > p1 or f1::text = p3  into strict x;
  raise notice 'x.f1 = %, x.f2 = %', x.f1, x.f2;
end$$ language plpgsql;

select stricttest();

create or replace function stricttest() returns void as $$
declare x record;
begin
  -- too many rows, no params
  select * from foo where f1 > 3 into strict x;
  raise notice 'x.f1 = %, x.f2 = %', x.f1, x.f2;
end$$ language plpgsql;

select stricttest();

create or replace function stricttest() returns void as $$
declare x record;
begin
  -- no rows
  execute 'select * from foo where f1 = $1 or f1::text = $2' using 0, 'foo' into strict x;
  raise notice 'x.f1 = %, x.f2 = %', x.f1, x.f2;
end$$ language plpgsql;

select stricttest();

create or replace function stricttest() returns void as $$
declare x record;
begin
  -- too many rows
  execute 'select * from foo where f1 > $1' using 1 into strict x;
  raise notice 'x.f1 = %, x.f2 = %', x.f1, x.f2;
end$$ language plpgsql;

select stricttest();

create or replace function stricttest() returns void as $$
declare x record;
begin
  -- too many rows, no parameters
  execute 'select * from foo where f1 > 3' into strict x;
  raise notice 'x.f1 = %, x.f2 = %', x.f1, x.f2;
end$$ language plpgsql;

select stricttest();

create or replace function stricttest() returns void as $$
-- override the global
#print_strict_params off
declare
x record;
p1 int := 2;
p3 text := 'foo';
begin
  -- too many rows
  select * from foo where f1 > p1 or f1::text = p3  into strict x;
  raise notice 'x.f1 = %, x.f2 = %', x.f1, x.f2;
end$$ language plpgsql;

select stricttest();

reset plpgsql.print_strict_params;

create or replace function stricttest() returns void as $$
-- override the global
#print_strict_params on
declare
x record;
p1 int := 2;
p3 text := 'foo';
begin
  -- too many rows
  select * from foo where f1 > p1 or f1::text = p3  into strict x;
  raise notice 'x.f1 = %, x.f2 = %', x.f1, x.f2;
end$$ language plpgsql;

select stricttest();

-- test warnings and errors
set plpgsql.extra_warnings to 'all';
set plpgsql.extra_warnings to 'none';
set plpgsql.extra_errors to 'all';
set plpgsql.extra_errors to 'none';

-- test warnings when shadowing a variable

set plpgsql.extra_warnings to 'shadowed_variables';

-- simple shadowing of input and output parameters
create or replace function shadowtest(in1 int)
	returns table (out1 int) as $$
declare
in1 int;
out1 int;
begin
end
$$ language plpgsql;
select shadowtest(1);

set plpgsql.extra_warnings to 'shadowed_variables';
select shadowtest(1);
create or replace function shadowtest(in1 int)
	returns table (out1 int) as $$
declare
in1 int;
out1 int;
begin
end
$$ language plpgsql;
select shadowtest(1);
drop function shadowtest(int);

-- shadowing in a second DECLARE block
create or replace function shadowtest()
	returns void as $$
declare
f1 int;
begin
	declare
	f1 int;
	begin
	end;
end$$ language plpgsql;
drop function shadowtest();

-- several levels of shadowing
create or replace function shadowtest(in1 int)
	returns void as $$
declare
in1 int;
begin
	declare
	in1 int;
	begin
	end;
end$$ language plpgsql;
drop function shadowtest(int);

-- shadowing in cursor definitions
create or replace function shadowtest()
	returns void as $$
declare
f1 int;
c1 cursor (f1 int) for select 1;
begin
end$$ language plpgsql;
drop function shadowtest();

-- test errors when shadowing a variable

set plpgsql.extra_errors to 'shadowed_variables';

create or replace function shadowtest(f1 int)
	returns boolean as $$
declare f1 int; begin return 1; end $$ language plpgsql;

select shadowtest(1);

reset plpgsql.extra_errors;
reset plpgsql.extra_warnings;

create or replace function shadowtest(f1 int)
	returns boolean as $$
declare f1 int; begin return 1; end $$ language plpgsql;

select shadowtest(1);

-- runtime extra checks
set plpgsql.extra_warnings to 'too_many_rows';

do $$
declare x int;
begin
  select v from generate_series(1,2) g(v) into x;
end;
$$;

set plpgsql.extra_errors to 'too_many_rows';

do $$
declare x int;
begin
  select v from generate_series(1,2) g(v) into x;
end;
$$;

reset plpgsql.extra_errors;
reset plpgsql.extra_warnings;

set plpgsql.extra_warnings to 'strict_multi_assignment';

do $$
declare
  x int;
  y int;
begin
  select 1 into x, y;
  select 1,2 into x, y;
  select 1,2,3 into x, y;
end
$$;

set plpgsql.extra_errors to 'strict_multi_assignment';

do $$
declare
  x int;
  y int;
begin
  select 1 into x, y;
  select 1,2 into x, y;
  select 1,2,3 into x, y;
end
$$;

create table test_01(a int, b int, c int);

alter table test_01 drop column a;

-- the check is active only when source table is not empty
insert into test_01 values(10,20);

do $$
declare
  x int;
  y int;
begin
  select * from test_01 into x, y; -- should be ok
  raise notice 'ok';
  select * from test_01 into x;    -- should to fail
end;
$$;

do $$
declare
  t test_01;
begin
  select 1, 2 into t;  -- should be ok
  raise notice 'ok';
  select 1, 2, 3 into t; -- should fail;
end;
$$;

do $$
declare
  t test_01;
begin
  select 1 into t; -- should fail;
end;
$$;

drop table test_01;

reset plpgsql.extra_errors;
reset plpgsql.extra_warnings;

-- test scrollable cursor support

create function sc_test() returns setof integer as $$
declare
  c scroll cursor for select f1 from int4_tbl;
  x integer;
begin
  open c;
  fetch last from c into x;
  while found loop
    return next x;
    fetch prior from c into x;
  end loop;
  close c;
end;
$$ language plpgsql;

select * from sc_test();

create or replace function sc_test() returns setof integer as $$
declare
  c no scroll cursor for select f1 from int4_tbl;
  x integer;
begin
  open c;
  fetch last from c into x;
  while found loop
    return next x;
    fetch prior from c into x;
  end loop;
  close c;
end;
$$ language plpgsql;

select * from sc_test();  -- fails because of NO SCROLL specification

create or replace function sc_test() returns setof integer as $$
declare
  c refcursor;
  x integer;
begin
  open c scroll for select f1 from int4_tbl;
  fetch last from c into x;
  while found loop
    return next x;
    fetch prior from c into x;
  end loop;
  close c;
end;
$$ language plpgsql;

select * from sc_test();

create or replace function sc_test() returns setof integer as $$
declare
  c refcursor;
  x integer;
begin
  open c scroll for execute 'select f1 from int4_tbl';
  fetch last from c into x;
  while found loop
    return next x;
    fetch relative -2 from c into x;
  end loop;
  close c;
end;
$$ language plpgsql;

select * from sc_test();

create or replace function sc_test() returns setof integer as $$
declare
  c refcursor;
  x integer;
begin
  open c scroll for execute 'select f1 from int4_tbl';
  fetch last from c into x;
  while found loop
    return next x;
    move backward 2 from c;
    fetch relative -1 from c into x;
  end loop;
  close c;
end;
$$ language plpgsql;

select * from sc_test();

create or replace function sc_test() returns setof integer as $$
declare
  c cursor for select * from generate_series(1, 10);
  x integer;
begin
  open c;
  loop
      move relative 2 in c;
      if not found then
          exit;
      end if;
      fetch next from c into x;
      if found then
          return next x;
      end if;
  end loop;
  close c;
end;
$$ language plpgsql;

select * from sc_test();

create or replace function sc_test() returns setof integer as $$
declare
  c cursor for select * from generate_series(1, 10);
  x integer;
begin
  open c;
  move forward all in c;
  fetch backward from c into x;
  if found then
    return next x;
  end if;
  close c;
end;
$$ language plpgsql;

select * from sc_test();

drop function sc_test();

-- test qualified variable names

create function pl_qual_names (param1 int) returns void as $$
<<outerblock>>
declare
  param1 int := 1;
begin
  <<innerblock>>
  declare
    param1 int := 2;
  begin
    raise notice 'param1 = %', param1;
    raise notice 'pl_qual_names.param1 = %', pl_qual_names.param1;
    raise notice 'outerblock.param1 = %', outerblock.param1;
    raise notice 'innerblock.param1 = %', innerblock.param1;
  end;
end;
$$ language plpgsql;

select pl_qual_names(42);

drop function pl_qual_names(int);

-- tests for RETURN QUERY
create function ret_query1(out int, out int) returns setof record as $$
begin
    $1 := -1;
    $2 := -2;
    return next;
    return query select x + 1, x * 10 from generate_series(0, 10) s (x);
    return next;
end;
$$ language plpgsql;

select * from ret_query1();

create type record_type as (x text, y int, z boolean);

create or replace function ret_query2(lim int) returns setof record_type as $$
begin
    return query select md5(s.x::text), s.x, s.x > 0
                 from generate_series(-8, lim) s (x) where s.x % 2 = 0;
end;
$$ language plpgsql;

select * from ret_query2(8);

-- test EXECUTE USING
create function exc_using(int, text) returns int as $$
declare i int;
begin
  for i in execute 'select * from generate_series(1,$1)' using $1+1 loop
    raise notice '%', i;
  end loop;
  execute 'select $2 + $2*3 + length($1)' into i using $2,$1;
  return i;
end
$$ language plpgsql;

select exc_using(5, 'foobar');

drop function exc_using(int, text);

create or replace function exc_using(int) returns void as $$
declare
  c refcursor;
  i int;
begin
  open c for execute 'select * from generate_series(1,$1)' using $1+1;
  loop
    fetch c into i;
    exit when not found;
    raise notice '%', i;
  end loop;
  close c;
  return;
end;
$$ language plpgsql;

select exc_using(5);

drop function exc_using(int);

-- test FOR-over-cursor

create or replace function forc01() returns void as $$
declare
  c cursor(r1 integer, r2 integer)
       for select * from generate_series(r1,r2) i;
  c2 cursor
       for select * from generate_series(41,43) i;
begin
  for r in c(5,7) loop
    raise notice '% from %', r.i, c;
  end loop;
  -- again, to test if cursor was closed properly
  for r in c(9,10) loop
    raise notice '% from %', r.i, c;
  end loop;
  -- and test a parameterless cursor
  for r in c2 loop
    raise notice '% from %', r.i, c2;
  end loop;
  -- and try it with a hand-assigned name
  raise notice 'after loop, c2 = %', c2;
  c2 := 'special_name';
  for r in c2 loop
    raise notice '% from %', r.i, c2;
  end loop;
  raise notice 'after loop, c2 = %', c2;
  -- and try it with a generated name
  -- (which we can't show in the output because it's variable)
  c2 := null;
  for r in c2 loop
    raise notice '%', r.i;
  end loop;
  raise notice 'after loop, c2 = %', c2;
  return;
end;
$$ language plpgsql;

select forc01();

-- try updating the cursor's current row

create temp table forc_test as
  select n as i, n as j from generate_series(1,10) n;

create or replace function forc01() returns void as $$
declare
  c cursor for select * from forc_test;
begin
  for r in c loop
    raise notice '%, %', r.i, r.j;
    update forc_test set i = i * 100, j = r.j * 2 where current of c;
  end loop;
end;
$$ language plpgsql;

select forc01();

select * from forc_test;

-- same, with a cursor whose portal name doesn't match variable name
create or replace function forc01() returns void as $$
declare
  c refcursor := 'fooled_ya';
  r record;
begin
  open c for select * from forc_test;
  loop
    fetch c into r;
    exit when not found;
    raise notice '%, %', r.i, r.j;
    update forc_test set i = i * 100, j = r.j * 2 where current of c;
  end loop;
end;
$$ language plpgsql;

select forc01();

select * from forc_test;

drop function forc01();

-- fail because cursor has no query bound to it

create or replace function forc_bad() returns void as $$
declare
  c refcursor;
begin
  for r in c loop
    raise notice '%', r.i;
  end loop;
end;
$$ language plpgsql;

-- test RETURN QUERY EXECUTE

create or replace function return_dquery()
returns setof int as $$
begin
  return query execute 'select * from (values(10),(20)) f';
  return query execute 'select * from (values($1),($2)) f' using 40,50;
end;
$$ language plpgsql;

select * from return_dquery();

drop function return_dquery();

-- test RETURN QUERY with dropped columns

create table tabwithcols(a int, b int, c int, d int);
insert into tabwithcols values(10,20,30,40),(50,60,70,80);

create or replace function returnqueryf()
returns setof tabwithcols as $$
begin
  return query select * from tabwithcols;
  return query execute 'select * from tabwithcols';
end;
$$ language plpgsql;

select * from returnqueryf();

alter table tabwithcols drop column b;

select * from returnqueryf();

alter table tabwithcols drop column d;

select * from returnqueryf();

alter table tabwithcols add column d int;

select * from returnqueryf();

drop function returnqueryf();
drop table tabwithcols;

--
-- Tests for composite-type results
--

create type compostype as (x int, y varchar);

-- test: use of variable of composite type in return statement
create or replace function compos() returns compostype as $$
declare
  v compostype;
begin
  v := (1, 'hello');
  return v;
end;
$$ language plpgsql;

select compos();

-- test: use of variable of record type in return statement
create or replace function compos() returns compostype as $$
declare
  v record;
begin
  v := (1, 'hello'::varchar);
  return v;
end;
$$ language plpgsql;

select compos();

-- test: use of row expr in return statement
create or replace function compos() returns compostype as $$
begin
  return (1, 'hello'::varchar);
end;
$$ language plpgsql;

select compos();

-- this does not work currently (no implicit casting)
create or replace function compos() returns compostype as $$
begin
  return (1, 'hello');
end;
$$ language plpgsql;

select compos();

-- ... but this does
create or replace function compos() returns compostype as $$
begin
  return (1, 'hello')::compostype;
end;
$$ language plpgsql;

select compos();

drop function compos();

-- test: return a row expr as record.
create or replace function composrec() returns record as $$
declare
  v record;
begin
  v := (1, 'hello');
  return v;
end;
$$ language plpgsql;

select composrec();

-- test: return row expr in return statement.
create or replace function composrec() returns record as $$
begin
  return (1, 'hello');
end;
$$ language plpgsql;

select composrec();

drop function composrec();

-- test: row expr in RETURN NEXT statement.
create or replace function compos() returns setof compostype as $$
begin
  for i in 1..3
  loop
    return next (1, 'hello'::varchar);
  end loop;
  return next null::compostype;
  return next (2, 'goodbye')::compostype;
end;
$$ language plpgsql;

select * from compos();

drop function compos();

-- test: use invalid expr in return statement.
create or replace function compos() returns compostype as $$
begin
  return 1 + 1;
end;
$$ language plpgsql;

select compos();

-- RETURN variable is a different code path ...
create or replace function compos() returns compostype as $$
declare x int := 42;
begin
  return x;
end;
$$ language plpgsql;

select * from compos();

drop function compos();

-- test: invalid use of composite variable in scalar-returning function
create or replace function compos() returns int as $$
declare
  v compostype;
begin
  v := (1, 'hello');
  return v;
end;
$$ language plpgsql;

select compos();

-- test: invalid use of composite expression in scalar-returning function
create or replace function compos() returns int as $$
begin
  return (1, 'hello')::compostype;
end;
$$ language plpgsql;

select compos();

drop function compos();
drop type compostype;

--
-- Tests for 8.4's new RAISE features
--

create or replace function raise_test() returns void as $$
begin
  raise notice '% % %', 1, 2, 3
     using errcode = '55001', detail = 'some detail info', hint = 'some hint';
  raise '% % %', 1, 2, 3
     using errcode = 'division_by_zero', detail = 'some detail info';
end;
$$ language plpgsql;

select raise_test();

-- Since we can't actually see the thrown SQLSTATE in default psql output,
-- test it like this; this also tests re-RAISE

create or replace function raise_test() returns void as $$
begin
  raise 'check me'
     using errcode = 'division_by_zero', detail = 'some detail info';
  exception
    when others then
      raise notice 'SQLSTATE: % SQLERRM: %', sqlstate, sqlerrm;
      raise;
end;
$$ language plpgsql;

select raise_test();

create or replace function raise_test() returns void as $$
begin
  raise 'check me'
     using errcode = '1234F', detail = 'some detail info';
  exception
    when others then
      raise notice 'SQLSTATE: % SQLERRM: %', sqlstate, sqlerrm;
      raise;
end;
$$ language plpgsql;

select raise_test();

-- SQLSTATE specification in WHEN
create or replace function raise_test() returns void as $$
begin
  raise 'check me'
     using errcode = '1234F', detail = 'some detail info';
  exception
    when sqlstate '1234F' then
      raise notice 'SQLSTATE: % SQLERRM: %', sqlstate, sqlerrm;
      raise;
end;
$$ language plpgsql;

select raise_test();

create or replace function raise_test() returns void as $$
begin
  raise division_by_zero using detail = 'some detail info';
  exception
    when others then
      raise notice 'SQLSTATE: % SQLERRM: %', sqlstate, sqlerrm;
      raise;
end;
$$ language plpgsql;

select raise_test();

create or replace function raise_test() returns void as $$
begin
  raise division_by_zero;
end;
$$ language plpgsql;

select raise_test();

create or replace function raise_test() returns void as $$
begin
  raise sqlstate '1234F';
end;
$$ language plpgsql;

select raise_test();

create or replace function raise_test() returns void as $$
begin
  raise division_by_zero using message = 'custom' || ' message';
end;
$$ language plpgsql;

select raise_test();

create or replace function raise_test() returns void as $$
begin
  raise using message = 'custom' || ' message', errcode = '22012';
end;
$$ language plpgsql;

select raise_test();

-- conflict on message
create or replace function raise_test() returns void as $$
begin
  raise notice 'some message' using message = 'custom' || ' message', errcode = '22012';
end;
$$ language plpgsql;

select raise_test();

-- conflict on errcode
create or replace function raise_test() returns void as $$
begin
  raise division_by_zero using message = 'custom' || ' message', errcode = '22012';
end;
$$ language plpgsql;

select raise_test();

-- nothing to re-RAISE
create or replace function raise_test() returns void as $$
begin
  raise;
end;
$$ language plpgsql;

select raise_test();

-- test access to exception data
create function zero_divide() returns int as $$
declare v int := 0;
begin
  return 10 / v;
end;
$$ language plpgsql;

create or replace function raise_test() returns void as $$
begin
  raise exception 'custom exception'
     using detail = 'some detail of custom exception',
           hint = 'some hint related to custom exception';
end;
$$ language plpgsql;

create function stacked_diagnostics_test() returns void as $$
declare _sqlstate text;
        _message text;
        _context text;
begin
  perform zero_divide();
exception when others then
  get stacked diagnostics
        _sqlstate = returned_sqlstate,
        _message = message_text,
        _context = pg_exception_context;
  raise notice 'sqlstate: %, message: %, context: [%]',
    _sqlstate, _message, replace(_context, E'\n', ' <- ');
end;
$$ language plpgsql;

select stacked_diagnostics_test();

create or replace function stacked_diagnostics_test() returns void as $$
declare _detail text;
        _hint text;
        _message text;
begin
  perform raise_test();
exception when others then
  get stacked diagnostics
        _message = message_text,
        _detail = pg_exception_detail,
        _hint = pg_exception_hint;
  raise notice 'message: %, detail: %, hint: %', _message, _detail, _hint;
end;
$$ language plpgsql;

select stacked_diagnostics_test();

-- fail, cannot use stacked diagnostics statement outside handler
create or replace function stacked_diagnostics_test() returns void as $$
declare _detail text;
        _hint text;
        _message text;
begin
  get stacked diagnostics
        _message = message_text,
        _detail = pg_exception_detail,
        _hint = pg_exception_hint;
  raise notice 'message: %, detail: %, hint: %', _message, _detail, _hint;
end;
$$ language plpgsql;

select stacked_diagnostics_test();

drop function zero_divide();
drop function stacked_diagnostics_test();

-- check cases where implicit SQLSTATE variable could be confused with
-- SQLSTATE as a keyword, cf bug #5524
create or replace function raise_test() returns void as $$
begin
  perform 1/0;
exception
  when sqlstate '22012' then
    raise notice using message = sqlstate;
    raise sqlstate '22012' using message = 'substitute message';
end;
$$ language plpgsql;

select raise_test();

drop function raise_test();

-- test passing column_name, constraint_name, datatype_name, table_name
-- and schema_name error fields

create or replace function stacked_diagnostics_test() returns void as $$
declare _column_name text;
        _constraint_name text;
        _datatype_name text;
        _table_name text;
        _schema_name text;
begin
  raise exception using
    column = '>>some column name<<',
    constraint = '>>some constraint name<<',
    datatype = '>>some datatype name<<',
    table = '>>some table name<<',
    schema = '>>some schema name<<';
exception when others then
  get stacked diagnostics
        _column_name = column_name,
        _constraint_name = constraint_name,
        _datatype_name = pg_datatype_name,
        _table_name = table_name,
        _schema_name = schema_name;
  raise notice 'column %, constraint %, type %, table %, schema %',
    _column_name, _constraint_name, _datatype_name, _table_name, _schema_name;
end;
$$ language plpgsql;

select stacked_diagnostics_test();

drop function stacked_diagnostics_test();

-- test variadic functions

create or replace function vari(variadic int[])
returns void as $$
begin
  for i in array_lower($1,1)..array_upper($1,1) loop
    raise notice '%', $1[i];
  end loop; end;
$$ language plpgsql;

select vari(1,2,3,4,5);
select vari(3,4,5);
select vari(variadic array[5,6,7]);

drop function vari(int[]);

-- coercion test
create or replace function pleast(variadic numeric[])
returns numeric as $$
declare aux numeric = $1[array_lower($1,1)];
begin
  for i in array_lower($1,1)+1..array_upper($1,1) loop
    if $1[i] < aux then aux := $1[i]; end if;
  end loop;
  return aux;
end;
$$ language plpgsql immutable strict;

select pleast(10,1,2,3,-16);
select pleast(10.2,2.2,-1.1);
select pleast(10.2,10, -20);
select pleast(10,20, -1.0);

-- in case of conflict, non-variadic version is preferred
create or replace function pleast(numeric)
returns numeric as $$
begin
  raise notice 'non-variadic function called';
  return $1;
end;
$$ language plpgsql immutable strict;

select pleast(10);

drop function pleast(numeric[]);
drop function pleast(numeric);

-- test table functions

create function tftest(int) returns table(a int, b int) as $$
begin
  return query select $1, $1+i from generate_series(1,5) g(i);
end;
$$ language plpgsql immutable strict;

select * from tftest(10);

create or replace function tftest(a1 int) returns table(a int, b int) as $$
begin
  a := a1; b := a1 + 1;
  return next;
  a := a1 * 10; b := a1 * 10 + 1;
  return next;
end;
$$ language plpgsql immutable strict;

select * from tftest(10);

drop function tftest(int);

create function rttest()
returns setof int as $$
declare rc int;
begin
  return query values(10),(20);
  get diagnostics rc = row_count;
  raise notice '% %', found, rc;
  return query select * from (values(10),(20)) f(a) where false;
  get diagnostics rc = row_count;
  raise notice '% %', found, rc;
  return query execute 'values(10),(20)';
  get diagnostics rc = row_count;
  raise notice '% %', found, rc;
  return query execute 'select * from (values(10),(20)) f(a) where false';
  get diagnostics rc = row_count;
  raise notice '% %', found, rc;
end;
$$ language plpgsql;

select * from rttest();

-- check some error cases, too

create or replace function rttest()
returns setof int as $$
begin
  return query select 10 into no_such_table;
end;
$$ language plpgsql;

select * from rttest();

create or replace function rttest()
returns setof int as $$
begin
  return query execute 'select 10 into no_such_table';
end;
$$ language plpgsql;

select * from rttest();

select * from no_such_table;

drop function rttest();

-- Test for proper cleanup at subtransaction exit.  This example
-- exposed a bug in PG 8.2.

CREATE FUNCTION leaker_1(fail BOOL) RETURNS INTEGER AS $$
DECLARE
  v_var INTEGER;
BEGIN
  BEGIN
    v_var := (leaker_2(fail)).error_code;
  EXCEPTION
    WHEN others THEN RETURN 0;
  END;
  RETURN 1;
END;
$$ LANGUAGE plpgsql;

CREATE FUNCTION leaker_2(fail BOOL, OUT error_code INTEGER, OUT new_id INTEGER)
  RETURNS RECORD AS $$
BEGIN
  IF fail THEN
    RAISE EXCEPTION 'fail ...';
  END IF;
  error_code := 1;
  new_id := 1;
  RETURN;
END;
$$ LANGUAGE plpgsql;

SELECT * FROM leaker_1(false);
SELECT * FROM leaker_1(true);

DROP FUNCTION leaker_1(bool);
DROP FUNCTION leaker_2(bool);

-- Test for appropriate cleanup of non-simple expression evaluations
-- (bug in all versions prior to August 2010)

CREATE FUNCTION nonsimple_expr_test() RETURNS text[] AS $$
DECLARE
  arr text[];
  lr text;
  i integer;
BEGIN
  arr := array[array['foo','bar'], array['baz', 'quux']];
  lr := 'fool';
  i := 1;
  -- use sub-SELECTs to make expressions non-simple
  arr[(SELECT i)][(SELECT i+1)] := (SELECT lr);
  RETURN arr;
END;
$$ LANGUAGE plpgsql;

SELECT nonsimple_expr_test();

DROP FUNCTION nonsimple_expr_test();

CREATE FUNCTION nonsimple_expr_test() RETURNS integer AS $$
declare
   i integer NOT NULL := 0;
begin
  begin
    i := (SELECT NULL::integer);  -- should throw error
  exception
    WHEN OTHERS THEN
      i := (SELECT 1::integer);
  end;
  return i;
end;
$$ LANGUAGE plpgsql;

SELECT nonsimple_expr_test();

DROP FUNCTION nonsimple_expr_test();

--
-- Test cases involving recursion and error recovery in simple expressions
-- (bugs in all versions before October 2010).  The problems are most
-- easily exposed by mutual recursion between plpgsql and sql functions.
--

create function recurse(float8) returns float8 as
$$
begin
  if ($1 > 0) then
    return sql_recurse($1 - 1);
  else
    return $1;
  end if;
end;
$$ language plpgsql;

-- "limit" is to prevent this from being inlined
create function sql_recurse(float8) returns float8 as
$$ select recurse($1) limit 1; $$ language sql;

select recurse(10);

create function error1(text) returns text language sql as
$$ SELECT relname::text FROM pg_class c WHERE c.oid = $1::regclass $$;

create function error2(p_name_table text) returns text language plpgsql as $$
begin
  return error1(p_name_table);
end$$;

BEGIN;
create table public.stuffs (stuff text);
SAVEPOINT a;
select error2('nonexistent.stuffs');
ROLLBACK TO a;
select error2('public.stuffs');
rollback;

drop function error2(p_name_table text);
drop function error1(text);

-- Test for proper handling of cast-expression caching

create function sql_to_date(integer) returns date as $$
select $1::text::date
$$ language sql immutable strict;

create cast (integer as date) with function sql_to_date(integer) as assignment;

create function cast_invoker(integer) returns date as $$
begin
  return $1;
end$$ language plpgsql;

select cast_invoker(20150717);
select cast_invoker(20150718);  -- second call crashed in pre-release 9.5

begin;
select cast_invoker(20150717);
select cast_invoker(20150718);
savepoint s1;
select cast_invoker(20150718);
select cast_invoker(-1); -- fails
rollback to savepoint s1;
select cast_invoker(20150719);
select cast_invoker(20150720);
commit;

drop function cast_invoker(integer);
drop function sql_to_date(integer) cascade;

-- Test handling of cast cache inside DO blocks
-- (to check the original crash case, this must be a cast not previously
-- used in this session)

begin;
do $$ declare x text[]; begin x := '{1.23, 4.56}'::numeric[]; end $$;
do $$ declare x text[]; begin x := '{1.23, 4.56}'::numeric[]; end $$;
end;

-- Test for consistent reporting of error context

create function fail() returns int language plpgsql as $$
begin
  return 1/0;
end
$$;

select fail();
select fail();

drop function fail();

-- Test handling of string literals.

set standard_conforming_strings = off;

create or replace function strtest() returns text as $$
begin
  raise notice 'foo\\bar\041baz';
  return 'foo\\bar\041baz';
end
$$ language plpgsql;

select strtest();

create or replace function strtest() returns text as $$
begin
  raise notice E'foo\\bar\041baz';
  return E'foo\\bar\041baz';
end
$$ language plpgsql;

select strtest();

set standard_conforming_strings = on;

create or replace function strtest() returns text as $$
begin
  raise notice 'foo\\bar\041baz\';
  return 'foo\\bar\041baz\';
end
$$ language plpgsql;

select strtest();

create or replace function strtest() returns text as $$
begin
  raise notice E'foo\\bar\041baz';
  return E'foo\\bar\041baz';
end
$$ language plpgsql;

select strtest();

drop function strtest();

-- Test anonymous code blocks.

DO $$
DECLARE r record;
BEGIN
    FOR r IN SELECT rtrim(roomno) AS roomno, comment FROM Room ORDER BY roomno
    LOOP
        RAISE NOTICE '%, %', r.roomno, r.comment;
    END LOOP;
END$$;

-- these are to check syntax error reporting
DO LANGUAGE plpgsql $$begin return 1; end$$;

DO $$
DECLARE r record;
BEGIN
    FOR r IN SELECT rtrim(roomno) AS roomno, foo FROM Room ORDER BY roomno
    LOOP
        RAISE NOTICE '%, %', r.roomno, r.comment;
    END LOOP;
END$$;

-- Check handling of errors thrown from/into anonymous code blocks.
do $outer$
begin
  for i in 1..10 loop
   begin
    execute $ex$
      do $$
      declare x int = 0;
      begin
        x := 1 / x;
      end;
      $$;
    $ex$;
  exception when division_by_zero then
    raise notice 'caught division by zero';
  end;
  end loop;
end;
$outer$;

-- Check variable scoping -- a var is not available in its own or prior
-- default expressions, but it is available in later ones.

do $$
declare x int := x + 1;  -- error
begin
  raise notice 'x = %', x;
end;
$$;

do $$
declare y int := x + 1;  -- error
        x int := 42;
begin
  raise notice 'x = %, y = %', x, y;
end;
$$;

do $$
declare x int := 42;
        y int := x + 1;
begin
  raise notice 'x = %, y = %', x, y;
end;
$$;

do $$
declare x int := 42;
begin
  declare y int := x + 1;
          x int := x + 2;
          z int := x * 10;
  begin
    raise notice 'x = %, y = %, z = %', x, y, z;
  end;
end;
$$;

-- Check handling of conflicts between plpgsql vars and table columns.

set plpgsql.variable_conflict = error;

create function conflict_test() returns setof int8_tbl as $$
declare r record;
  q1 bigint := 42;
begin
  for r in select q1,q2 from int8_tbl loop
    return next r;
  end loop;
end;
$$ language plpgsql;

select * from conflict_test();

create or replace function conflict_test() returns setof int8_tbl as $$
#variable_conflict use_variable
declare r record;
  q1 bigint := 42;
begin
  for r in select q1,q2 from int8_tbl loop
    return next r;
  end loop;
end;
$$ language plpgsql;

select * from conflict_test();

create or replace function conflict_test() returns setof int8_tbl as $$
#variable_conflict use_column
declare r record;
  q1 bigint := 42;
begin
  for r in select q1,q2 from int8_tbl loop
    return next r;
  end loop;
end;
$$ language plpgsql;

select * from conflict_test();

drop function conflict_test();

-- Check that an unreserved keyword can be used as a variable name

create function unreserved_test() returns int as $$
declare
  forward int := 21;
begin
  forward := forward * 2;
  return forward;
end
$$ language plpgsql;

select unreserved_test();

create or replace function unreserved_test() returns int as $$
declare
  return int := 42;
begin
  return := return + 1;
  return return;
end
$$ language plpgsql;

select unreserved_test();

create or replace function unreserved_test() returns int as $$
declare
  comment int := 21;
begin
  comment := comment * 2;
  comment on function unreserved_test() is 'this is a test';
  return comment;
end
$$ language plpgsql;

select unreserved_test();

select obj_description('unreserved_test()'::regprocedure, 'pg_proc');

drop function unreserved_test();

--
-- Test FOREACH over arrays
--

create function foreach_test(anyarray)
returns void as $$
declare x int;
begin
  foreach x in array $1
  loop
    raise notice '%', x;
  end loop;
  end;
$$ language plpgsql;

select foreach_test(ARRAY[1,2,3,4]);
select foreach_test(ARRAY[[1,2],[3,4]]);

create or replace function foreach_test(anyarray)
returns void as $$
declare x int;
begin
  foreach x slice 1 in array $1
  loop
    raise notice '%', x;
  end loop;
  end;
$$ language plpgsql;

-- should fail
select foreach_test(ARRAY[1,2,3,4]);
select foreach_test(ARRAY[[1,2],[3,4]]);

create or replace function foreach_test(anyarray)
returns void as $$
declare x int[];
begin
  foreach x slice 1 in array $1
  loop
    raise notice '%', x;
  end loop;
  end;
$$ language plpgsql;

select foreach_test(ARRAY[1,2,3,4]);
select foreach_test(ARRAY[[1,2],[3,4]]);

-- higher level of slicing
create or replace function foreach_test(anyarray)
returns void as $$
declare x int[];
begin
  foreach x slice 2 in array $1
  loop
    raise notice '%', x;
  end loop;
  end;
$$ language plpgsql;

-- should fail
select foreach_test(ARRAY[1,2,3,4]);
-- ok
select foreach_test(ARRAY[[1,2],[3,4]]);
select foreach_test(ARRAY[[[1,2]],[[3,4]]]);

create type xy_tuple AS (x int, y int);

-- iteration over array of records
create or replace function foreach_test(anyarray)
returns void as $$
declare r record;
begin
  foreach r in array $1
  loop
    raise notice '%', r;
  end loop;
  end;
$$ language plpgsql;

select foreach_test(ARRAY[(10,20),(40,69),(35,78)]::xy_tuple[]);
select foreach_test(ARRAY[[(10,20),(40,69)],[(35,78),(88,76)]]::xy_tuple[]);

create or replace function foreach_test(anyarray)
returns void as $$
declare x int; y int;
begin
  foreach x, y in array $1
  loop
    raise notice 'x = %, y = %', x, y;
  end loop;
  end;
$$ language plpgsql;

select foreach_test(ARRAY[(10,20),(40,69),(35,78)]::xy_tuple[]);
select foreach_test(ARRAY[[(10,20),(40,69)],[(35,78),(88,76)]]::xy_tuple[]);

-- slicing over array of composite types
create or replace function foreach_test(anyarray)
returns void as $$
declare x xy_tuple[];
begin
  foreach x slice 1 in array $1
  loop
    raise notice '%', x;
  end loop;
  end;
$$ language plpgsql;

select foreach_test(ARRAY[(10,20),(40,69),(35,78)]::xy_tuple[]);
select foreach_test(ARRAY[[(10,20),(40,69)],[(35,78),(88,76)]]::xy_tuple[]);

drop function foreach_test(anyarray);
drop type xy_tuple;

--
-- Assorted tests for array subscript assignment
--

create temp table rtype (id int, ar text[]);

create function arrayassign1() returns text[] language plpgsql as $$
declare
 r record;
begin
  r := row(12, '{foo,bar,baz}')::rtype;
  r.ar[2] := 'replace';
  return r.ar;
end$$;

select arrayassign1();
select arrayassign1(); -- try again to exercise internal caching

create domain orderedarray as int[2]
  constraint sorted check (value[1] < value[2]);

select '{1,2}'::orderedarray;
select '{2,1}'::orderedarray;  -- fail

create function testoa(x1 int, x2 int, x3 int) returns orderedarray
language plpgsql as $$
declare res orderedarray;
begin
  res := array[x1, x2];
  res[2] := x3;
  return res;
end$$;

select testoa(1,2,3);
select testoa(1,2,3); -- try again to exercise internal caching
select testoa(2,1,3); -- fail at initial assign
select testoa(1,2,1); -- fail at update

drop function arrayassign1();
drop function testoa(x1 int, x2 int, x3 int);


--
-- Test handling of expanded arrays
--

create function returns_rw_array(int) returns int[]
language plpgsql as $$
  declare r int[];
  begin r := array[$1, $1]; return r; end;
$$ stable;

create function consumes_rw_array(int[]) returns int
language plpgsql as $$
  begin return $1[1]; end;
$$ stable;

select consumes_rw_array(returns_rw_array(42));

-- bug #14174
explain (verbose, costs off)
select i, a from
  (select returns_rw_array(1) as a offset 0) ss,
  lateral consumes_rw_array(a) i;

select i, a from
  (select returns_rw_array(1) as a offset 0) ss,
  lateral consumes_rw_array(a) i;

explain (verbose, costs off)
select consumes_rw_array(a), a from returns_rw_array(1) a;

select consumes_rw_array(a), a from returns_rw_array(1) a;

explain (verbose, costs off)
select consumes_rw_array(a), a from
  (values (returns_rw_array(1)), (returns_rw_array(2))) v(a);

select consumes_rw_array(a), a from
  (values (returns_rw_array(1)), (returns_rw_array(2))) v(a);

do $$
declare a int[] := array[1,2];
begin
  a := a || 3;
  raise notice 'a = %', a;
end$$;


--
-- Test access to call stack
--

create function inner_func(int)
returns int as $$
declare _context text;
begin
  get diagnostics _context = pg_context;
  raise notice '***%***', _context;
  -- lets do it again, just for fun..
  get diagnostics _context = pg_context;
  raise notice '***%***', _context;
  raise notice 'lets make sure we didnt break anything';
  return 2 * $1;
end;
$$ language plpgsql;

create or replace function outer_func(int)
returns int as $$
declare
  myresult int;
begin
  raise notice 'calling down into inner_func()';
  myresult := inner_func($1);
  raise notice 'inner_func() done';
  return myresult;
end;
$$ language plpgsql;

create or replace function outer_outer_func(int)
returns int as $$
declare
  myresult int;
begin
  raise notice 'calling down into outer_func()';
  myresult := outer_func($1);
  raise notice 'outer_func() done';
  return myresult;
end;
$$ language plpgsql;

select outer_outer_func(10);
-- repeated call should to work
select outer_outer_func(20);

drop function outer_outer_func(int);
drop function outer_func(int);
drop function inner_func(int);

-- access to call stack from exception
create function inner_func(int)
returns int as $$
declare
  _context text;
  sx int := 5;
begin
  begin
    perform sx / 0;
  exception
    when division_by_zero then
      get diagnostics _context = pg_context;
      raise notice '***%***', _context;
  end;

  -- lets do it again, just for fun..
  get diagnostics _context = pg_context;
  raise notice '***%***', _context;
  raise notice 'lets make sure we didnt break anything';
  return 2 * $1;
end;
$$ language plpgsql;

create or replace function outer_func(int)
returns int as $$
declare
  myresult int;
begin
  raise notice 'calling down into inner_func()';
  myresult := inner_func($1);
  raise notice 'inner_func() done';
  return myresult;
end;
$$ language plpgsql;

create or replace function outer_outer_func(int)
returns int as $$
declare
  myresult int;
begin
  raise notice 'calling down into outer_func()';
  myresult := outer_func($1);
  raise notice 'outer_func() done';
  return myresult;
end;
$$ language plpgsql;

select outer_outer_func(10);
-- repeated call should to work
select outer_outer_func(20);

drop function outer_outer_func(int);
drop function outer_func(int);
drop function inner_func(int);

--
-- Test ASSERT
--

do $$
begin
  assert 1=1;  -- should succeed
end;
$$;

do $$
begin
  assert 1=0;  -- should fail
end;
$$;

do $$
begin
  assert NULL;  -- should fail
end;
$$;

-- check controlling GUC
set plpgsql.check_asserts = off;
do $$
begin
  assert 1=0;  -- won't be tested
end;
$$;
reset plpgsql.check_asserts;

-- test custom message
do $$
declare var text := 'some value';
begin
  assert 1=0, format('assertion failed, var = "%s"', var);
end;
$$;

-- ensure assertions are not trapped by 'others'
do $$
begin
  assert 1=0, 'unhandled assertion';
exception when others then
  null; -- do nothing
end;
$$;

-- Test use of plpgsql in a domain check constraint (cf. bug #14414)

create function plpgsql_domain_check(val int) returns boolean as $$
begin return val > 0; end
$$ language plpgsql immutable;

create domain plpgsql_domain as integer check(plpgsql_domain_check(value));

do $$
declare v_test plpgsql_domain;
begin
  v_test := 1;
end;
$$;

do $$
declare v_test plpgsql_domain := 1;
begin
  v_test := 0;  -- fail
end;
$$;

-- Test handling of expanded array passed to a domain constraint (bug #14472)

create function plpgsql_arr_domain_check(val int[]) returns boolean as $$
begin return val[1] > 0; end
$$ language plpgsql immutable;

create domain plpgsql_arr_domain as int[] check(plpgsql_arr_domain_check(value));

do $$
declare v_test plpgsql_arr_domain;
begin
  v_test := array[1];
  v_test := v_test || 2;
end;
$$;

do $$
declare v_test plpgsql_arr_domain := array[1];
begin
  v_test := 0 || v_test;  -- fail
end;
$$;

--
-- test usage of transition tables in AFTER triggers
--

CREATE TABLE transition_table_base (id int PRIMARY KEY, val text);

CREATE FUNCTION transition_table_base_ins_func()
  RETURNS trigger
  LANGUAGE plpgsql
AS $$
DECLARE
  t text;
  l text;
BEGIN
  t = '';
  FOR l IN EXECUTE
           $q$
             EXPLAIN (TIMING off, COSTS off, VERBOSE on)
             SELECT * FROM newtable
           $q$ LOOP
    t = t || l || E'\n';
  END LOOP;

  RAISE INFO '%', t;
  RETURN new;
END;
$$;

CREATE TRIGGER transition_table_base_ins_trig
  AFTER INSERT ON transition_table_base
  REFERENCING OLD TABLE AS oldtable NEW TABLE AS newtable
  FOR EACH STATEMENT
  EXECUTE PROCEDURE transition_table_base_ins_func();

CREATE TRIGGER transition_table_base_ins_trig
  AFTER INSERT ON transition_table_base
  REFERENCING NEW TABLE AS newtable
  FOR EACH STATEMENT
  EXECUTE PROCEDURE transition_table_base_ins_func();

INSERT INTO transition_table_base VALUES (1, 'One'), (2, 'Two');
INSERT INTO transition_table_base VALUES (3, 'Three'), (4, 'Four');

CREATE OR REPLACE FUNCTION transition_table_base_upd_func()
  RETURNS trigger
  LANGUAGE plpgsql
AS $$
DECLARE
  t text;
  l text;
BEGIN
  t = '';
  FOR l IN EXECUTE
           $q$
             EXPLAIN (TIMING off, COSTS off, VERBOSE on)
             SELECT * FROM oldtable ot FULL JOIN newtable nt USING (id)
           $q$ LOOP
    t = t || l || E'\n';
  END LOOP;

  RAISE INFO '%', t;
  RETURN new;
END;
$$;

CREATE TRIGGER transition_table_base_upd_trig
  AFTER UPDATE ON transition_table_base
  REFERENCING OLD TABLE AS oldtable NEW TABLE AS newtable
  FOR EACH STATEMENT
  EXECUTE PROCEDURE transition_table_base_upd_func();

UPDATE transition_table_base
  SET val = '*' || val || '*'
  WHERE id BETWEEN 2 AND 3;

CREATE TABLE transition_table_level1
(
      level1_no serial NOT NULL ,
      level1_node_name varchar(255),
       PRIMARY KEY (level1_no)
) WITHOUT OIDS;

CREATE TABLE transition_table_level2
(
      level2_no serial NOT NULL ,
      parent_no int NOT NULL,
      level1_node_name varchar(255),
       PRIMARY KEY (level2_no)
) WITHOUT OIDS;

CREATE TABLE transition_table_status
(
      level int NOT NULL,
      node_no int NOT NULL,
      status int,
       PRIMARY KEY (level, node_no)
) WITHOUT OIDS;

CREATE FUNCTION transition_table_level1_ri_parent_del_func()
  RETURNS TRIGGER
  LANGUAGE plpgsql
AS $$
  DECLARE n bigint;
  BEGIN
    PERFORM FROM p JOIN transition_table_level2 c ON c.parent_no = p.level1_no;
    IF FOUND THEN
      RAISE EXCEPTION 'RI error';
    END IF;
    RETURN NULL;
  END;
$$;

CREATE TRIGGER transition_table_level1_ri_parent_del_trigger
  AFTER DELETE ON transition_table_level1
  REFERENCING OLD TABLE AS p
  FOR EACH STATEMENT EXECUTE PROCEDURE
    transition_table_level1_ri_parent_del_func();

CREATE FUNCTION transition_table_level1_ri_parent_upd_func()
  RETURNS TRIGGER
  LANGUAGE plpgsql
AS $$
  DECLARE
    x int;
  BEGIN
    WITH p AS (SELECT level1_no, sum(delta) cnt
                 FROM (SELECT level1_no, 1 AS delta FROM i
                       UNION ALL
                       SELECT level1_no, -1 AS delta FROM d) w
                 GROUP BY level1_no
                 HAVING sum(delta) < 0)
    SELECT level1_no
      FROM p JOIN transition_table_level2 c ON c.parent_no = p.level1_no
      INTO x;
    IF FOUND THEN
      RAISE EXCEPTION 'RI error';
    END IF;
    RETURN NULL;
  END;
$$;

CREATE TRIGGER transition_table_level1_ri_parent_upd_trigger
  AFTER UPDATE ON transition_table_level1
  REFERENCING OLD TABLE AS d NEW TABLE AS i
  FOR EACH STATEMENT EXECUTE PROCEDURE
    transition_table_level1_ri_parent_upd_func();

CREATE FUNCTION transition_table_level2_ri_child_insupd_func()
  RETURNS TRIGGER
  LANGUAGE plpgsql
AS $$
  BEGIN
    PERFORM FROM i
      LEFT JOIN transition_table_level1 p
        ON p.level1_no IS NOT NULL AND p.level1_no = i.parent_no
      WHERE p.level1_no IS NULL;
    IF FOUND THEN
      RAISE EXCEPTION 'RI error';
    END IF;
    RETURN NULL;
  END;
$$;

CREATE TRIGGER transition_table_level2_ri_child_ins_trigger
  AFTER INSERT ON transition_table_level2
  REFERENCING NEW TABLE AS i
  FOR EACH STATEMENT EXECUTE PROCEDURE
    transition_table_level2_ri_child_insupd_func();

CREATE TRIGGER transition_table_level2_ri_child_upd_trigger
  AFTER UPDATE ON transition_table_level2
  REFERENCING NEW TABLE AS i
  FOR EACH STATEMENT EXECUTE PROCEDURE
    transition_table_level2_ri_child_insupd_func();

-- create initial test data
INSERT INTO transition_table_level1 (level1_no)
  SELECT generate_series(1,200);
ANALYZE transition_table_level1;

INSERT INTO transition_table_level2 (level2_no, parent_no)
  SELECT level2_no, level2_no / 50 + 1 AS parent_no
    FROM generate_series(1,9999) level2_no;
ANALYZE transition_table_level2;

INSERT INTO transition_table_status (level, node_no, status)
  SELECT 1, level1_no, 0 FROM transition_table_level1;

INSERT INTO transition_table_status (level, node_no, status)
  SELECT 2, level2_no, 0 FROM transition_table_level2;
ANALYZE transition_table_status;

INSERT INTO transition_table_level1(level1_no)
  SELECT generate_series(201,1000);
ANALYZE transition_table_level1;

-- behave reasonably if someone tries to modify a transition table
CREATE FUNCTION transition_table_level2_bad_usage_func()
  RETURNS TRIGGER
  LANGUAGE plpgsql
AS $$
  BEGIN
    INSERT INTO dx VALUES (1000000, 1000000, 'x');
    RETURN NULL;
  END;
$$;

CREATE TRIGGER transition_table_level2_bad_usage_trigger
  AFTER DELETE ON transition_table_level2
  REFERENCING OLD TABLE AS dx
  FOR EACH STATEMENT EXECUTE PROCEDURE
    transition_table_level2_bad_usage_func();

DELETE FROM transition_table_level2
  WHERE level2_no BETWEEN 301 AND 305;

DROP TRIGGER transition_table_level2_bad_usage_trigger
  ON transition_table_level2;

-- attempt modifications which would break RI (should all fail)
DELETE FROM transition_table_level1
  WHERE level1_no = 25;

UPDATE transition_table_level1 SET level1_no = -1
  WHERE level1_no = 30;

INSERT INTO transition_table_level2 (level2_no, parent_no)
  VALUES (10000, 10000);

UPDATE transition_table_level2 SET parent_no = 2000
  WHERE level2_no = 40;


-- attempt modifications which would not break RI (should all succeed)
DELETE FROM transition_table_level1
  WHERE level1_no BETWEEN 201 AND 1000;

DELETE FROM transition_table_level1
  WHERE level1_no BETWEEN 100000000 AND 100000010;

SELECT count(*) FROM transition_table_level1;

DELETE FROM transition_table_level2
  WHERE level2_no BETWEEN 211 AND 220;

SELECT count(*) FROM transition_table_level2;

CREATE TABLE alter_table_under_transition_tables
(
  id int PRIMARY KEY,
  name text
);

CREATE FUNCTION alter_table_under_transition_tables_upd_func()
  RETURNS TRIGGER
  LANGUAGE plpgsql
AS $$
BEGIN
  RAISE WARNING 'old table = %, new table = %',
                  (SELECT string_agg(id || '=' || name, ',') FROM d),
                  (SELECT string_agg(id || '=' || name, ',') FROM i);
  RAISE NOTICE 'one = %', (SELECT 1 FROM alter_table_under_transition_tables LIMIT 1);
  RETURN NULL;
END;
$$;

-- should fail, TRUNCATE is not compatible with transition tables
CREATE TRIGGER alter_table_under_transition_tables_upd_trigger
  AFTER TRUNCATE OR UPDATE ON alter_table_under_transition_tables
  REFERENCING OLD TABLE AS d NEW TABLE AS i
  FOR EACH STATEMENT EXECUTE PROCEDURE
    alter_table_under_transition_tables_upd_func();

-- should work
CREATE TRIGGER alter_table_under_transition_tables_upd_trigger
  AFTER UPDATE ON alter_table_under_transition_tables
  REFERENCING OLD TABLE AS d NEW TABLE AS i
  FOR EACH STATEMENT EXECUTE PROCEDURE
    alter_table_under_transition_tables_upd_func();

INSERT INTO alter_table_under_transition_tables
  VALUES (1, '1'), (2, '2'), (3, '3');
UPDATE alter_table_under_transition_tables
  SET name = name || name;

-- now change 'name' to an integer to see what happens...
ALTER TABLE alter_table_under_transition_tables
  ALTER COLUMN name TYPE int USING name::integer;
UPDATE alter_table_under_transition_tables
  SET name = (name::text || name::text)::integer;

-- now drop column 'name'
ALTER TABLE alter_table_under_transition_tables
  DROP column name;
UPDATE alter_table_under_transition_tables
  SET id = id;

--
-- Test multiple reference to a transition table
--

CREATE TABLE multi_test (i int);
INSERT INTO multi_test VALUES (1);

CREATE OR REPLACE FUNCTION multi_test_trig() RETURNS trigger
LANGUAGE plpgsql AS $$
BEGIN
    RAISE NOTICE 'count = %', (SELECT COUNT(*) FROM new_test);
    RAISE NOTICE 'count union = %',
      (SELECT COUNT(*)
       FROM (SELECT * FROM new_test UNION ALL SELECT * FROM new_test) ss);
    RETURN NULL;
END$$;

CREATE TRIGGER my_trigger AFTER UPDATE ON multi_test
  REFERENCING NEW TABLE AS new_test OLD TABLE as old_test
  FOR EACH STATEMENT EXECUTE PROCEDURE multi_test_trig();

UPDATE multi_test SET i = i;

DROP TABLE multi_test;
DROP FUNCTION multi_test_trig();

--
-- Check type parsing and record fetching from partitioned tables
--

CREATE TABLE partitioned_table (a int, b text) PARTITION BY LIST (a);
CREATE TABLE pt_part1 PARTITION OF partitioned_table FOR VALUES IN (1);
CREATE TABLE pt_part2 PARTITION OF partitioned_table FOR VALUES IN (2);

INSERT INTO partitioned_table VALUES (1, 'Row 1');
INSERT INTO partitioned_table VALUES (2, 'Row 2');

CREATE OR REPLACE FUNCTION get_from_partitioned_table(partitioned_table.a%type)
RETURNS partitioned_table AS $$
DECLARE
    a_val partitioned_table.a%TYPE;
    result partitioned_table%ROWTYPE;
BEGIN
    a_val := $1;
    SELECT * INTO result FROM partitioned_table WHERE a = a_val;
    RETURN result;
END; $$ LANGUAGE plpgsql;

SELECT * FROM get_from_partitioned_table(1) AS t;

CREATE OR REPLACE FUNCTION list_partitioned_table()
RETURNS SETOF partitioned_table.a%TYPE AS $$
DECLARE
    row partitioned_table%ROWTYPE;
    a_val partitioned_table.a%TYPE;
BEGIN
    FOR row IN SELECT * FROM partitioned_table ORDER BY a LOOP
        a_val := row.a;
        RETURN NEXT a_val;
    END LOOP;
    RETURN;
END; $$ LANGUAGE plpgsql;

SELECT * FROM list_partitioned_table() AS t;

--
-- Check argument name is used instead of $n in error message
--
CREATE FUNCTION fx(x WSlot) RETURNS void AS $$
BEGIN
  GET DIAGNOSTICS x = ROW_COUNT;
  RETURN;
END; $$ LANGUAGE plpgsql;
