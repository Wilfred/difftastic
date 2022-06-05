-- The gist_page_opaque_info() function prints the page's LSN. Normally,
-- that's constant 1 (GistBuildLSN) on every page of a freshly built GiST
-- index. But with wal_level=minimal, the whole relation is dumped to WAL at
-- the end of the transaction if it's smaller than wal_skip_threshold, which
-- updates the LSNs. Wrap the tests on gist_page_opaque_info() in the
-- same transaction with the CREATE INDEX so that we see the LSNs before
-- they are possibly overwritten at end of transaction.
BEGIN;

-- Create a test table and GiST index.
CREATE TABLE test_gist AS SELECT point(i,i) p, i::text t FROM
    generate_series(1,1000) i;
CREATE INDEX test_gist_idx ON test_gist USING gist (p);

-- Page 0 is the root, the rest are leaf pages
SELECT * FROM gist_page_opaque_info(get_raw_page('test_gist_idx', 0));
SELECT * FROM gist_page_opaque_info(get_raw_page('test_gist_idx', 1));
SELECT * FROM gist_page_opaque_info(get_raw_page('test_gist_idx', 2));

COMMIT;

SELECT * FROM gist_page_items(get_raw_page('test_gist_idx', 0), 'test_gist_idx');
SELECT * FROM gist_page_items(get_raw_page('test_gist_idx', 1), 'test_gist_idx') LIMIT 5;

-- gist_page_items_bytea prints the raw key data as a bytea. The output of that is
-- platform-dependent (endianness), so omit the actual key data from the output.
SELECT itemoffset, ctid, itemlen FROM gist_page_items_bytea(get_raw_page('test_gist_idx', 0));

-- Failure with non-GiST index.
CREATE INDEX test_gist_btree on test_gist(t);
SELECT gist_page_items(get_raw_page('test_gist_btree', 0), 'test_gist_btree');

-- Failure with various modes.
-- Suppress the DETAIL message, to allow the tests to work across various
-- page sizes and architectures.
\set VERBOSITY terse
-- invalid page size
SELECT gist_page_items_bytea('aaa'::bytea);
SELECT gist_page_items('aaa'::bytea, 'test_gist_idx'::regclass);
SELECT gist_page_opaque_info('aaa'::bytea);
-- invalid special area size
SELECT * FROM gist_page_opaque_info(get_raw_page('test_gist', 0));
SELECT gist_page_items_bytea(get_raw_page('test_gist', 0));
SELECT gist_page_items_bytea(get_raw_page('test_gist_btree', 0));
\set VERBOSITY default

-- Tests with all-zero pages.
SHOW block_size \gset
SELECT gist_page_items_bytea(decode(repeat('00', :block_size), 'hex'));
SELECT gist_page_items(decode(repeat('00', :block_size), 'hex'), 'test_gist_idx'::regclass);
SELECT gist_page_opaque_info(decode(repeat('00', :block_size), 'hex'));

DROP TABLE test_gist;
