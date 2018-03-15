package com.aragost.javahg;

import org.junit.Assert;
import org.junit.Test;

public class HgVersionTest {

    @Test
    public void test() {
        assertVersion(2, 1, null, false, null, "2.1");
        assertVersion(1, 9, 3, false, null, "1.9.3");
        assertVersion(11, 99, null, false, null, "11.99");
        assertVersion(11, 99, 78, false, null, "11.99.78");
        assertVersion(2, 0, null, true, null, "2.0-rc");
        assertVersion(2, 0, 9, true, null, "2.0.09-rc");
    }

    @Test
    public void testSuffix() {
        assertVersion(2, 1, null, false, "abc", "2.1+abc");
        assertVersion(1, 9, 3, false, "abc", "1.9.3+abc");
        assertVersion(11, 99, null, false, "abc", "11.99+abc");
        assertVersion(11, 99, 78, false, "abc", "11.99.78+abc");
        assertVersion(2, 0, null, true, "abc", "2.0-rc+abc");
        assertVersion(2, 0, 9, true, "abc", "2.0.09-rc+abc");
    }

    @Test
    public void testEmptySuffix() {
        assertVersion(2, 1, null, false, "", "2.1+");
        assertVersion(1, 9, 3, false, "", "1.9.3+");
        assertVersion(11, 99, null, false, "", "11.99+");
        assertVersion(11, 99, 78, false, "", "11.99.78+");
        assertVersion(2, 0, null, true, "", "2.0-rc+");
        assertVersion(2, 0, 9, true, "", "2.0.09-rc+");
    }

    @Test
    public void testInvalid() {
        assertInvalid("");
        assertInvalid("1.");
        assertInvalid("11.");
        assertInvalid("11.2.");
        assertInvalid("11.22.");
        assertInvalid("-1.2.3");
        assertInvalid("1.-2.3");
        assertInvalid("1.2.-3");
        assertInvalid("1a.2");
        assertInvalid("001.002");
        assertInvalid("2.1-rcx");
        assertInvalid("2.1v6");
        assertInvalid(" 2.1");
        assertInvalid("2.1 ");
        assertInvalid("2 .1");
    }

    @Test
    public void testCompareTo() {
        assertCompare(0, "2.1", "2.1");
        assertCompare(0, "2.1-rc", "2.1-rc");
        assertCompare(0, "2.1-rc", "2.1-rc+asdf");
        assertCompare(-1, "1.9.1", "1.9.2");
        assertCompare(-1, "2.0", "2.1");
        assertCompare(-1, "2.0", "2.0.1");
        assertCompare(-1, "2.0-rc", "2.0");
    }

    @SuppressWarnings("static-method")
    private void assertVersion(int major, int minor, Integer release, boolean isReleaseCandidate, String suffix,
            String versionString) {
        HgVersion v = HgVersion.fromString(versionString);
        Assert.assertEquals(major, v.getMajor());
        Assert.assertEquals(minor, v.getMinor());
        Assert.assertEquals(release, v.getRelease());
        Assert.assertEquals(isReleaseCandidate, v.isReleaseCandidate());
        Assert.assertEquals(suffix, v.getSuffix());
    }

    private static void assertInvalid(String versionString) {
        try {
            HgVersion.fromString(versionString);
            Assert.fail("Version: '" + versionString + "' was accepted but is invalid");
        } catch (IllegalArgumentException e) {
            // Nothing to do.
        }
    }

    private static void assertCompare(int expected, String first, String second) {
        HgVersion a = HgVersion.fromString(first);
        HgVersion b = HgVersion.fromString(second);
        int n = a.compareTo(b);
        if (n > 0) {
            n = 1;
        } else if (n < 0) {
            n = -1;
        }
        Assert.assertEquals(expected, n);

        n = b.compareTo(a);
        if (n > 0) {
            n = 1;
        } else if (n < 0) {
            n = -1;
        }
        Assert.assertEquals("Reverted order of " + first + " and " + second, -expected, n);

    }

}
