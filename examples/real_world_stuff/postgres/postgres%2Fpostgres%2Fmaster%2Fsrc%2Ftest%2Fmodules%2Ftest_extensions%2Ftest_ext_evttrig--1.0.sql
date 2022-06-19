/* src/test/modules/test_extensions/test_event_trigger--1.0.sql */
-- complain if script is sourced in psql, rather than via CREATE EXTENSION
\echo Use "CREATE EXTENSION test_event_trigger" to load this file. \quit

-- Base table with event trigger, used in a regression test involving
-- extension upgrades.
CREATE TABLE t (id text);
CREATE OR REPLACE FUNCTION _evt_table_rewrite_fnct()
RETURNS EVENT_TRIGGER LANGUAGE plpgsql AS
$$
  BEGIN
  END;
$$;
CREATE EVENT TRIGGER table_rewrite_trg
  ON table_rewrite
  EXECUTE PROCEDURE _evt_table_rewrite_fnct();
