CREATE OR REPLACE FUNCTION site_search(query text, startofs int, hitsperpage int, _suburl text, includeinternal boolean DEFAULT False)
RETURNS TABLE (siteid int, baseurl text, suburl text, title text, headline text, rank float)
AS $$
DECLARE
    tsq tsquery;
    qry text;
    hits int;
    hit RECORD;
    curs refcursor;
    pagecount int;
BEGIN
    tsq := plainto_tsquery('public.pg', query);
    IF numnode(tsq) = 0 THEN
        siteid = 0;baseurl=NULL;suburl=NULL;title=NULL;headline=NULL;rank=0;
        RETURN NEXT;
        RETURN;
    END IF;

    hits := 0;

    SELECT INTO pagecount sites.pagecount FROM sites WHERE id=1;
    IF _suburl IS NULL THEN
        OPEN curs FOR SELECT sites.id AS siteid, sites.baseurl, webpages.suburl, ts_rank_cd(fti,tsq) * relprio AS ts_rank_cd FROM webpages INNER JOIN sites ON webpages.site=sites.id WHERE fti @@ tsq AND site=1 AND (includeinternal OR NOT isinternal) ORDER BY ts_rank_cd(fti,tsq) * relprio DESC LIMIT 1000;
    ELSE
        OPEN curs FOR SELECT sites.id AS siteid, sites.baseurl, webpages.suburl, ts_rank_cd(fti,tsq) * relprio AS ts_rank_cd FROM webpages INNER JOIN sites ON webpages.site=sites.id WHERE fti @@ tsq AND site=1 AND webpages.suburl LIKE _suburl||'%' AND (includeinternal OR NOT isinternal) ORDER BY ts_rank_cd(fti,tsq) * relprio DESC LIMIT 1000;
    END IF;
    LOOP
       FETCH curs INTO hit;
       IF NOT FOUND THEN
          EXIT;
       END IF;
       hits := hits+1;
       IF (hits < startofs+1) OR (hits > startofs+hitsperpage) THEN
          CONTINUE;
       END IF;
       RETURN QUERY SELECT hit.siteid, hit.baseurl::text, hit.suburl::text, webpages.title::text, ts_headline(webpages.txt,tsq,'StartSel="[[[[[[",StopSel="]]]]]]"'), hit.ts_rank_cd::float * relprio FROM webpages WHERE webpages.site=hit.siteid AND webpages.suburl=hit.suburl;
    END LOOP;
    RETURN QUERY SELECT pagecount, NULL::text, NULL::text, NULL::text, NULL::text, hits::float;
END;
$$
LANGUAGE 'plpgsql';
ALTER FUNCTION site_search(text, int, int, text, bool) SET default_text_search_config = 'public.pg';
