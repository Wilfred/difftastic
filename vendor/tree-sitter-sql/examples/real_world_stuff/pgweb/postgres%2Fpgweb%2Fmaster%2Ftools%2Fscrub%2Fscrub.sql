--
-- scrub.sql
--
--   Scrub the contents of the pgweb database, so the data can be reasonably shared
--   by updating and deleting anything sensitive
--
--   WARNING! DO NOT RUN IN PRODUCTION!
--
--   NOTE! BEFORE USE, ALWAYS VALIDATE THAT THE SCRIPT IS UP TO DATE!
--
--
-- Always runs as a transaction, just in case...

\set ON_ERROR_STOP 1
BEGIN;

-- Commnity auth sites need reset crypto keys
-- The actual sites and id's are not secret.
UPDATE account_communityauthsite SET cryptkey='XXX';

-- Any outstanding email tokens need to just be removed
DELETE FROM account_emailchangetoken;

-- As this is the master database, we need to massage the user table since it has a lot
-- of sensitive data in it. We need to clear out names and emails, as well as passwords.
-- The user is expected to manually set up new users as needed, but we need these
-- links to remain in the system.
UPDATE auth_user SET username='id' || id,
       		     first_name='F' || id,
		     last_name='L' || id,
		     email='e' || id || '@scrubbed.postgresql.org',
		     password='NOTAVALIDHASHSETBYSCRUBBINGSCRIPT',
		     is_staff='f', is_superuser='f';

UPDATE contributors_contributor SET email='e'||id||'@scrubbed.postgresql.org';

DELETE FROM core_moderationnotification;

UPDATE core_organisation SET email='e'||id||'@scrubbed.postgresql.org', phone='1-555-'||id,
       name='O'||id, address='scrubbedaddress', url='http://scrubbed.url';
DELETE FROM core_organisation_managers;
UPDATE core_userprofile SET sshkey='SSHKEYSCRUBBED';

TRUNCATE TABLE django_admin_log;
TRUNCATE TABLE django_session;

-- Just in case we snapshotted with something in the queue
DELETE FROM mailqueue_queuedmail;

UPDATE profserv_professionalservice SET contact='scrubbedcontact';

TRUNCATE TABLE survey_surveylock;

-- We still have a lot of migration data, so lose it.
DROP TABLE IF EXISTS users_old;
DROP TABLE IF EXISTS docs_doccomment_saved;

\echo NOTE! Transaction has not been committed. Verify manually and then commit!
