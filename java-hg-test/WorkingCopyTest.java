package com.aragost.javahg;

import java.io.IOException;

import org.junit.Assert;
import org.junit.Test;

import com.aragost.javahg.commands.MergeCommand;
import com.aragost.javahg.test.AbstractTestCase;

public class WorkingCopyTest extends AbstractTestCase {

    @Test
    public void test() throws IOException {
        BaseRepository repo = getTestRepository();
        WorkingCopy wc1 = repo.workingCopy();
        Assert.assertNull(wc1.getParent1());
        Assert.assertNull(wc1.getParent2());
        Assert.assertEquals("default", wc1.getBranchName());

        Changeset root = createChangeset();
        Assert.assertNotNull(root);
        WorkingCopy wc2 = repo.workingCopy();
        // wc1 still has the "old" data
        Assert.assertNull(wc1.getParent1());
        Assert.assertEquals(root, wc2.getParent1());

        WorkingCopy wc3 = repo.workingCopy();
        wc2.setBranchName("abc");
        Assert.assertEquals("default", wc1.getBranchName());
        Assert.assertEquals("abc", wc2.getBranchName());
        Assert.assertEquals("abc", wc3.getBranchName());

        Changeset first = createChangeset();
        wc3.setBranchName("b1");
        update(root);
        Changeset second = createChangeset();
        wc3.setBranchName("b2");
        second = commit();
        MergeCommand.on(repo).rev(first.getNode()).execute(null);

        WorkingCopy wc4 = repo.workingCopy();
        Assert.assertEquals(second, wc4.getParent1());
        Assert.assertEquals(first, wc4.getParent2());
        Assert.assertEquals("b2", wc4.getBranchName());

    }

}
