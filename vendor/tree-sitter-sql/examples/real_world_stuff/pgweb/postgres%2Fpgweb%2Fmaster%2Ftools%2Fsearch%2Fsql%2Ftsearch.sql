-- Creates configuration 'pg'

BEGIN;

-- create our configuration to work from
CREATE TEXT SEARCH CONFIGURATION pg (COPY = pg_catalog.english );

-- create english ispell dictionary
CREATE TEXT SEARCH DICTIONARY english_ispell (
    TEMPLATE = ispell,
    DictFile = en_us,
    AffFile = en_us,
    StopWords = english
);
-- create our dictionary
CREATE TEXT SEARCH DICTIONARY pg_dict (
    TEMPLATE = synonym,
    SYNONYMS = pg_dict
);

-- activate the dictionaries
ALTER TEXT SEARCH CONFIGURATION pg
    ALTER MAPPING FOR asciiword, asciihword, hword_asciipart,
                      word, hword, hword_part
      WITH pg_dict, english_ispell, english_stem;

-- parts we don't want to index at all
ALTER TEXT SEARCH CONFIGURATION pg
    DROP MAPPING FOR email, url, url_path, sfloat, float;

-- All done

COMMIT;
