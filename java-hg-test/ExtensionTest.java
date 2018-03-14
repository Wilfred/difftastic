/*
 * #%L
 * JavaHg parent POM
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

import org.junit.Assert;
import org.junit.Test;

import com.aragost.javahg.internals.Utils;
import com.aragost.javahg.test.AbstractTestCase;
import com.google.common.io.Files;

public class ExtensionTest extends AbstractTestCase {

    @Test
    public void test() throws IOException {
        RepositoryConfiguration conf = new RepositoryConfiguration();
        conf.addExtension(DummyTestExtension.class);

        File dir1 = Files.createTempDir();
        BaseRepository repo1 = Repository.create(conf, dir1);
        Assert.assertEquals(1, DummyTestExtension.initCount);

        TestableCommand command = new TestableCommand(repo1, "purge");
        Utils.consumeAll(command.executeToStream());

        File dir2 = Files.createTempDir();
        BaseRepository repo2 = Repository.create(conf, dir2);
        Assert.assertEquals(1, DummyTestExtension.initCount);
        command = new TestableCommand(repo2, "purge");
        Utils.consumeAll(command.executeToStream());

        Assert.assertEquals(1, repo1.getServerPool().getServers().size());
        Assert.assertEquals(1, repo2.getServerPool().getServers().size());

        repo1.close();
        repo2.close();

        Utils.deleteTempDir(dir1);
        Utils.deleteTempDir(dir2);
    }
}
