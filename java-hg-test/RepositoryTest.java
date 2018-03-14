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

import java.io.File;
import java.io.IOException;
import java.util.List;
import java.util.Map;

import org.junit.Assume;
import org.junit.Test;

import com.aragost.javahg.commands.AddCommand;
import com.aragost.javahg.commands.CommitCommand;
import com.aragost.javahg.commands.IncomingCommand;
import com.aragost.javahg.commands.LogCommand;
import com.aragost.javahg.internals.UnexpectedServerTerminationException;
import com.aragost.javahg.internals.Utils;
import com.aragost.javahg.test.AbstractTestCase;
import com.google.common.io.Files;

import junit.framework.Assert;

public class RepositoryTest extends AbstractTestCase {

    @Test
    public void testCreate() throws IOException {
        File tmp = createTempDir();
        File repoDir = new File(tmp, "repo");
        Repository repo = Repository.create(repoDir);
        Assert.assertEquals(repoDir, repo.getDirectory());

        File hgDir = new File(repoDir, ".hg");
        Assert.assertTrue(hgDir.exists());
        Assert.assertTrue(hgDir.isDirectory());

        repo.close();
        deleteTempDir(tmp);
    }

    @Test
    public void testCreateWithExistingDirectory() throws IOException {
        File repoDir = createTempDir();
        Repository repo = Repository.create(repoDir);
        Assert.assertEquals(repoDir, repo.getDirectory());

        File hgDir = new File(repoDir, ".hg");
        Assert.assertTrue(hgDir.exists());
        Assert.assertTrue(hgDir.isDirectory());

        repo.close();
        deleteTempDir(repoDir);
    }

    @Test
    public void testOpen() throws IOException {
        File dir = createMercurialRepository();
        Assert.assertTrue(new File(dir, ".hg").exists());
        Repository repo = Repository.open(dir);
        repo.close();
        deleteTempDir(dir);
    }

    @Test
    public void testClone() throws IOException {
        Repository src = Repository.open(createMercurialRepository());
        Files.write("q", new File(src.getDirectory(), "xxx"), utf8());
        AddCommand.on(src).execute();
        CommitCommand commit = CommitCommand.on(src);
        commit.user("test").message("m");
        commit.execute();
        File tgt = Files.createTempDir();
        Repository clone = Repository.clone(tgt, src.getDirectory().getAbsolutePath());
        File xxx = new File(tgt, "xxx");
        Assert.assertTrue(xxx.exists());
        clone.close();
        src.close();
        deleteTempDir(tgt);
        deleteTempDir(src.getDirectory());
    }

    @Test(expected = IllegalArgumentException.class)
    public void testOpenWithNoRepository() throws IOException {
        File repoDir = Files.createTempDir();
        try {
            Repository.open(repoDir);
        } finally {
            deleteTempDir(repoDir);
        }
    }

    @Test
    public void testCaching() throws IOException, InterruptedException {
        Repository repo = getTestRepository();
        writeFile("a");
        Changeset csNode = commit();
        String node = csNode.getNode();
        Assert.assertNull(csNode.getData());
        csNode.getRevision();
        Assert.assertNotNull(csNode.getData());

        csNode = null;
        System.gc(); // Should cause the csNode to be gc'ed and
                     // removed from cache
        Thread.sleep(100);
        csNode = repo.changeset(node);
        Assert.assertNull(csNode.getData());
    }

    @Test
    public void testBundleRepository() throws IOException {
        BaseRepository repo = getTestRepository();
        BaseRepository repo2 = getTestRepository2();

        writeFile("a");
        Changeset cs = commit();

        Bundle bundle = IncomingCommand.on(repo2).execute(repo);
        Repository repo3 = bundle.getOverlayRepository();
        List<Changeset> changesets = LogCommand.on(repo3).execute();
        Assert.assertEquals(1, changesets.size());
        Assert.assertEquals(cs.getNode(), changesets.get(0).getNode());
        bundle.close();
    }

    @Test
    public void testHgVersion() {
        BaseRepository repo = getTestRepository();
        HgVersion hgVersion = repo.getHgVersion();
        Assert.assertFalse(hgVersion.isUnknown());
    }

    @Test
    public void testTip() throws IOException {
        BaseRepository repo = getTestRepository();
        Assert.assertNull(repo.tip());
        writeFile("a");
        commit();
        Changeset tip = repo.tip();
        Assert.assertNotNull(tip);
        Assert.assertEquals(0, tip.getRevision());
    }

    @Test
    public void testInvalidHgrc() throws IOException {
        // This test case used to fail sporadic. Loop to increase
        // likelyhood of it failing
        for (int i = 0; i < 15; i++) {
            RepositoryConfiguration conf = new RepositoryConfiguration();
            conf.setHgrcPath(Utils.resourceAsFile("/test-hgrc-invalid").getPath());
            File dir = Files.createTempDir();
            try {
                Repository.create(conf, dir).close();
                Assert.fail("Exception expected");
            } catch (UnexpectedServerTerminationException e) {
                // success
            }
            deleteTempDir(dir);
        }
    }

    @Test
    public void testValidHgrc() throws IOException {
        RepositoryConfiguration conf = new RepositoryConfiguration();
        conf.setHgrcPath(Utils.resourceAsFile("/test-hgrc-valid").getPath());
        File dir = Files.createTempDir();

        BaseRepository repo = Repository.create(conf, dir);
        Files.write(new byte[0], new File(dir, "a"));
        repo.workingCopy().add("a");
        Changeset cs = CommitCommand.on(repo).message("m").execute();
        // User is defined in the hgrc file
        Assert.assertEquals("hgrc test user", cs.getUser());
        repo.close();
        deleteTempDir(dir);
    }

    @Test
    public void testPhases() throws IOException {
        BaseRepository repo = getTestRepository();
        Changeset cs1 = createChangeset();
        Changeset cs2 = createChangeset();
        Map<Changeset, Phase> phases = repo.phases("all()");
        Assert.assertEquals(2, phases.size());
        Phase p;
        if (repo.getHgVersion().isBefore(HgVersion.fromString("2.1"))) {
            p = null;
        } else {
            p = Phase.DRAFT;
        }
        Assert.assertEquals(p, phases.get(cs1));
        Assert.assertEquals(p, phases.get(cs2));
    }

    @Test
    public void testCloneWithLargefileExtension() throws IOException {
        BaseRepository repo = getTestRepository();
        // Mercurial version 2.0+ is needed for the largefiles extension to be packages with Mercurial
        Assume.assumeTrue(repo.getHgVersion().getMajor() >= 2);
        writeFile(".hg/hgrc", "[extensions]\nlargefiles = \n");
        createChangeset();
        writeFile("x", "x");
        // TODO: It seems Mercurial has a problem with the file is added via the server
        execHgCommand(repo, "add", "--large", repo.file("x").getAbsolutePath());
        execHgCommand(repo, "commit", "-m", "m", "-u", "testuser");
        File targetDir = createTempDir();
        RepositoryConfiguration repoConf = new RepositoryConfiguration();
        repoConf.setHgrcPath(repo.file(".hg/hgrc").getAbsolutePath());
        BaseRepository clone = Repository.clone(repoConf, targetDir, repo.getDirectory().getAbsolutePath());
        Assert.assertEquals(1, clone.tip().getRevision());
        File x = new File(clone.getDirectory(), "x");
        Assert.assertTrue(x.exists());
        clone.close();
        deleteTempDir(targetDir);
    }

}
