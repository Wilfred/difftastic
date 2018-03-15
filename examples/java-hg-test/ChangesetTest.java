/*
 * #%L
 * JavaHg
 * %%
 * Copyright (C) 2011 aragost Trifork ag
 * %%
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 * #L%
 */
package com.aragost.javahg;

import java.io.IOException;
import java.util.List;
import java.util.Map;

import org.junit.Assert;
import org.junit.Test;

import com.aragost.javahg.Changeset.Extra;
import com.aragost.javahg.commands.AddCommand;
import com.aragost.javahg.commands.CommitCommand;
import com.aragost.javahg.commands.RemoveCommand;
import com.aragost.javahg.commands.TagCommand;
import com.aragost.javahg.test.AbstractTestCase;

public class ChangesetTest extends AbstractTestCase {

    @Test
    public void testNullNode() {
        Repository repo = getTestRepository();
        Assert.assertNull(repo.changeset("0000000000000000000000000000000000000000"));
    }

    @Test
    public void testRevisionNodeEquality() throws IOException {
        Repository repo = getTestRepository();
        writeFile("x", "abc");
        String node0 = commit().getNode();
        writeFile("x", "");
        String node1 = commit().getNode();

        Assert.assertFalse(repo.changeset(node0).equals(repo.changeset(node1)));
        Assert.assertFalse(repo.changeset(node1).equals(repo.changeset(node0)));
        Assert.assertEquals(repo.changeset(node0), repo.changeset(node0));
        Assert.assertEquals(repo.changeset(node1), repo.changeset(node1));
    }

    @Test
    public void testParents() throws IOException {
        DateTime d = DateTime.parse("0 0");
        Repository repo = getTestRepository();

        writeFile("x", "abc");
        AddCommand.on(repo).execute();
        Changeset rev0 = CommitCommand.on(repo).message("added x").user("user").date(d).execute();

        writeFile("x", "def");
        Changeset rev1 = CommitCommand.on(repo).message("changed x").user("user").date(d).execute();

        Assert.assertEquals(rev1.getParent1(), rev0);
        Assert.assertNull(rev1.getParent2());
    }

    @Test
    public void testFields() throws IOException {
        Repository repo = getTestRepository();

        // write a and b initially
        writeFile("a");
        writeFile("b");
        AddCommand.on(repo).execute();
        CommitCommand.on(repo).user("test").message("add a and b").execute();

        // remove a, modify b, and add c
        DateTime d = DateTime.parse("1000 0");
        RemoveCommand.on(repo).execute("a");
        appendFile("b");
        writeFile("c");
        AddCommand.on(repo).execute("c");
        //
        // We use non-ASCII characters to test for encoding problems.
        String commitMessage = "add, modify, and remove - modifiÃ©";
        String userId = "test AimÃ©e Â¤";
        //
        Changeset c = CommitCommand.on(repo).user(userId).date(d).message(commitMessage).execute();

        Assert.assertEquals(userId, c.getUser());
        Assert.assertEquals(d, c.getTimestamp());
        Assert.assertEquals(commitMessage, c.getMessage());
        Assert.assertEquals("default", c.getBranch());
        // test for files
        Assert.assertEquals("a", c.getDeletedFiles().get(0));
        Assert.assertEquals("b", c.getModifiedFiles().get(0));
        Assert.assertEquals("c", c.getAddedFiles().get(0));
    }

    @Test
    public void testLazyFileLoading() throws IOException {
        Repository repo = getTestRepository();
        writeFile("a");
        AddCommand.on(repo).execute();
        Changeset c = CommitCommand.on(repo).user("test").message("added a").execute();
        Assert.assertNull("file data should be null", c.getFileData());
        Assert.assertEquals("a", c.getAddedFiles().get(0));
        Assert.assertNotNull("file data should not be null", c.getFileData());
    }

    @Test
    public void testNotEqualDifferentTypes() throws IOException {
        Repository repo = getTestRepository();
        writeFile("a");
        AddCommand.on(repo).execute();
        Changeset c = CommitCommand.on(repo).user("test").message("added a").execute();
        Assert.assertFalse(c.equals("not a changeset"));
    }

    @Test
    public void testNotEqualNodes() throws IOException {
        writeFile("a");
        Changeset node0 = commit();
        writeFile("b");
        Changeset node1 = commit();
        Assert.assertFalse(node0.equals(node1));
    }

    @Test
    public void testExtra() throws IOException {
        BaseRepository repo = getTestRepository();
        createChangeset();
        Changeset cs = CommitCommand.on(repo).message("a").user("user").closeBranch().execute();
        Extra extra = cs.getExtra();
        Map<String, String> map = extra.stringValuedMap();
        Assert.assertEquals(2, map.size());
        Assert.assertEquals("default", map.get("branch"));
        Assert.assertEquals("1", map.get("close"));

        String branchName = "blÃ¥bÃ¦rgrÃ¸d;=\t\\";
        repo.workingCopy().setBranchName(branchName);
        cs = commit();
        Extra extra2 = cs.getExtra();
        String csBranchName = extra2.getString("branch");
        Assert.assertEquals(branchName, csBranchName);
    }

    @Test
    public void testTags() throws IOException {
        Repository repo = getTestRepository();
        Changeset cs1 = createChangeset();
        TagCommand.on(repo).rev(cs1.getNode()).user("a").execute("a", "blÃ¥bÃ¦rgrÃ¸d");
        Changeset cs2 = createChangeset();
        TagCommand.on(repo).rev(cs2.getNode()).user("a").execute("\t b\t b \t");

        List<String> tags = cs1.tags();
        Assert.assertArrayEquals(new Object[] { "a", "blÃ¥bÃ¦rgrÃ¸d" }, tags.toArray());

        tags = cs2.tags();
        Assert.assertArrayEquals(new Object[] { "b\t b" }, tags.toArray());

        tags = repo.tip().tags();
        Assert.assertEquals(0, tags.size());

    }

}
