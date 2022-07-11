-- directory paths are passed to us in environment variables
\getenv abs_srcdir PG_ABS_SRCDIR
\getenv abs_builddir PG_ABS_BUILDDIR

-- set up file names to use
\set srcfilename :abs_srcdir '/data/copy1.data'
\set destfilename :abs_builddir '/results/copy1.data'

CREATE TABLE copy1 (a int, b float);

-- COPY TO/FROM not authorized from client.
DO LANGUAGE plpgsql $$
BEGIN
  COPY copy1 TO stdout;
END;
$$;
DO LANGUAGE plpgsql $$
BEGIN
  COPY copy1 FROM stdin;
END;
$$;
DO LANGUAGE plpgsql $$
BEGIN
  EXECUTE 'COPY copy1 TO stdout';
END;
$$;
DO LANGUAGE plpgsql $$
BEGIN
  EXECUTE 'COPY copy1 FROM stdin';
END;
$$;

-- Valid cases
-- COPY FROM
\set dobody 'BEGIN COPY copy1 FROM ' :'srcfilename' '; END'
DO LANGUAGE plpgsql :'dobody';
SELECT * FROM copy1 ORDER BY 1;
TRUNCATE copy1;
\set cmd 'COPY copy1 FROM ' :'srcfilename'
\set dobody 'BEGIN EXECUTE ' :'cmd' '; END'
DO LANGUAGE plpgsql :'dobody';
SELECT * FROM copy1 ORDER BY 1;

-- COPY TO
-- Copy the data externally once, then process it back to the table.
\set dobody 'BEGIN COPY copy1 TO ' :'destfilename' '; END'
DO LANGUAGE plpgsql :'dobody';
TRUNCATE copy1;
\set dobody 'BEGIN COPY copy1 FROM ' :'destfilename' '; END'
DO LANGUAGE plpgsql :'dobody';

\set cmd 'COPY copy1 FROM ' :'destfilename'
\set dobody 'BEGIN EXECUTE ' :'cmd' '; END'
DO LANGUAGE plpgsql :'dobody';

SELECT * FROM copy1 ORDER BY 1;

DROP TABLE copy1;
