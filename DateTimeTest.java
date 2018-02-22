package com.aragost.javahg;

import org.junit.Assert;
import org.junit.Test;

public class DateTimeTest {

    @Test
    public void testDateFormat() {
        DateTime date = new DateTime(1234 * 1000, 20 * 60 * 60 * 1000);
        String dateFormatted = date.getHgString();
        Assert.assertEquals("1234 72000", dateFormatted);
    }

}
