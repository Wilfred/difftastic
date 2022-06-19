CREATE EXTENSION worker_spi;
SELECT worker_spi_launch(4) IS NOT NULL;
-- wait until the worker completes its initialization
DO $$
DECLARE
	visible bool;
	loops int := 0;
BEGIN
	LOOP
		visible := table_name IS NOT NULL
			FROM information_schema.tables
			WHERE table_schema = 'schema4' AND table_name = 'counted';
		IF visible OR loops > 120 * 10 THEN EXIT; END IF;
		PERFORM pg_sleep(0.1);
		loops := loops + 1;
	END LOOP;
END
$$;
INSERT INTO schema4.counted VALUES ('total', 0), ('delta', 1);
SELECT pg_reload_conf();
-- wait until the worker has processed the tuple we just inserted
DO $$
DECLARE
	count int;
	loops int := 0;
BEGIN
	LOOP
		count := count(*) FROM schema4.counted WHERE type = 'delta';
		IF count = 0 OR loops > 120 * 10 THEN EXIT; END IF;
		PERFORM pg_sleep(0.1);
		loops := loops + 1;
	END LOOP;
END
$$;
SELECT * FROM schema4.counted;
