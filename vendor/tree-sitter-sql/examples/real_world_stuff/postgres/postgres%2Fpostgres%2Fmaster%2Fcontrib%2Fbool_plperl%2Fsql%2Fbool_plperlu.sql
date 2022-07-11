CREATE EXTENSION bool_plperlu CASCADE;

--- test transforming from perl

CREATE FUNCTION perl2int(int) RETURNS bool
LANGUAGE plperlu
TRANSFORM FOR TYPE bool
AS $$
return shift;
$$;

CREATE FUNCTION perl2text(text) RETURNS bool
LANGUAGE plperlu
TRANSFORM FOR TYPE bool
AS $$
return shift;
$$;

CREATE FUNCTION perl2undef() RETURNS bool
LANGUAGE plperlu
TRANSFORM FOR TYPE bool
AS $$
return undef;
$$;

SELECT perl2int(1);
SELECT perl2int(0);
SELECT perl2text('foo');
SELECT perl2text('');
SELECT perl2undef() IS NULL AS p;

--- test transforming to perl

CREATE FUNCTION bool2perl(bool, bool, bool) RETURNS void
LANGUAGE plperlu
TRANSFORM FOR TYPE bool, for type boolean  -- duplicate to test ruleutils
AS $$
my ($x, $y, $z) = @_;

die("NULL mistransformed") if (defined($z));
die("TRUE mistransformed to UNDEF") if (!defined($x));
die("FALSE mistransformed to UNDEF") if (!defined($y));
die("TRUE mistransformed") if (!$x);
die("FALSE mistransformed") if ($y);
$$;

SELECT bool2perl (true, false, NULL);

--- test ruleutils

\sf bool2perl

--- test selecting bool through SPI

CREATE FUNCTION spi_test()  RETURNS void
LANGUAGE plperlu
TRANSFORM FOR TYPE bool
AS $$
my $rv = spi_exec_query('SELECT true t, false f, NULL n')->{rows}->[0];

die("TRUE mistransformed to UNDEF in SPI") if (!defined ($rv->{t}));
die("FALSE mistransformed to UNDEF in SPI") if (!defined ($rv->{f}));
die("NULL mistransformed in SPI") if (defined ($rv->{n}));
die("TRUE mistransformed in SPI") if (!$rv->{t});
die("FALSE mistransformed in SPI") if ($rv->{f});
$$;

SELECT spi_test();

DROP EXTENSION plperlu CASCADE;
