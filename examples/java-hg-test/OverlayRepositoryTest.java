package com.aragost.javahg;

import java.io.File;
import java.io.IOException;
import java.util.List;

import org.junit.Assert;
import org.junit.Test;

import com.aragost.javahg.commands.AddCommand;
import com.aragost.javahg.commands.CommitCommand;
import com.aragost.javahg.commands.IncomingCommand;
import com.aragost.javahg.commands.LogCommand;
import com.aragost.javahg.commands.PushCommand;
import com.aragost.javahg.commands.UpdateCommand;
import com.aragost.javahg.test.AbstractTestCase;
import com.google.common.io.Files;

public class OverlayRepositoryTest extends AbstractTestCase {

    @Test
    public void testCreateBundle() throws IOException {
        Bundle bundle = createBundle();
        Assert.assertEquals(2, bundle.getChangesets().size());
        Repository repo = bundle.getOverlayRepository();
        // The changesets from bundle are in cache plus the parent
        Assert.assertEquals(3, repo.getChangesetCache().size());
        List<Changeset> changesets = LogCommand.on(repo).rev("0:tip").execute();
        Assert.assertEquals(4, changesets.size());
        Assert.assertEquals(4, repo.getChangesetCache().size());
        for (Changeset changeset : changesets) {
            Assert.assertSame(repo, changeset.getRepository());
            changeset.getExtra();
        }
        bundle.close();
    }

    /**
     * Scenario: We create a 2-changeset bundle from the test repo, which provides a "virtual" overlay repo.
     * <p>
     * The bundle's contents is then pushed to its base repository. Because there's no update command issued, the change
     * sets are in the base repository but not "applied". Therefore, the number of change sets does not change in either
     * repository (ie base repo and overlay repo).
     * <p>
     * Finally, we compare the repository referenced in each change set of the base repository to the base repo (which
     * confirms that the change sets have been correctly pushed and are now "owned" by the base repo), and we compare
     * the repo in each change set in the bundle to the overlay repo (which confirms that the bundle's integrity is
     * safe).
     */
    @Test
    public void testImportBundle() throws IOException {
        Bundle bundle = createBundle();
        Repository repo = bundle.getOverlayRepository();
        Changeset overlayTip = repo.tip();
        BaseRepository baseRepository = repo.getBaseRepository();
        Assert.assertEquals(2, baseRepository.getChangesetCache().size());
        Assert.assertEquals(3, repo.getChangesetCache().size());
        bundle.pushToRepository();
        Assert.assertEquals(2, baseRepository.getChangesetCache().size());
        Assert.assertEquals(3, repo.getChangesetCache().size());

        Changeset baseTip = LogCommand.on(baseRepository).rev("tip").single();
        Assert.assertEquals(overlayTip.getNode(), baseTip.getNode());

        for (Changeset cs : baseRepository.getChangesetCache().asMap().values()) {
            Assert.assertSame(baseRepository, cs.getRepository());
        }

        for (Changeset cs : bundle.getChangesets()) {
            Assert.assertSame(repo, cs.getRepository());
        }

        bundle.close();
    }

    /**
     * Return a bundle with 2 changesets
     *
     * @return
     * @throws IOException
     */
    private Bundle createBundle() throws IOException {
        BaseRepository mainRepo = getTestRepository();
        Changeset cset1 = createChangeset();
        Changeset cset2 = createChangeset();
        BaseRepository otherRepo = getTestRepository2();
        PushCommand.on(mainRepo).execute(otherRepo.getDirectory().getPath());
        UpdateCommand.on(otherRepo).execute();
        Files.write(new byte[1], new File(otherRepo.getDirectory(), "other"));
        AddCommand.on(otherRepo).execute();
        Changeset cset3 = CommitCommand.on(otherRepo).message("other 1").user("user").execute();
        Files.write(new byte[2], new File(otherRepo.getDirectory(), "other"));
        Changeset cset4 = CommitCommand.on(otherRepo).message("other 2").user("user").execute();
        Bundle bundle = IncomingCommand.on(mainRepo).execute(otherRepo);
        return bundle;
    }
}
