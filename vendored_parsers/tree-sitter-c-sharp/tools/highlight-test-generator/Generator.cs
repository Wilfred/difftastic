using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;

if (args.Length != 1)
{
    Console.WriteLine("Add the path to the file as an argument. The path needs to be fully qualified and point to an existing file in [REPO ROOT]/test/highlight.");
    return;
}

var filePath = args[0];

// Some basic tests on the path, so that we have a chance:
if (!filePath.Contains("/test/highlight/") ||
    !filePath.EndsWith(".cs") ||
    !File.Exists(filePath) ||
    !Path.IsPathFullyQualified(filePath))
{
    Console.WriteLine("The file needs to exist in [REPO ROOT]/test/highlight, and the path needs to be fully qualified.");
    return;
}

// Random variable name prefix, so that we don't accidentally replace something in the file:
var idPrefix = "a" + new Random(filePath.GetHashCode()).NextInt64(10000000) + "_";

var originalLines = File.ReadAllLines(filePath);


/// <summary>
/// Adds tree-sitter highlighting comments to the input file.
/// Comments start with either `// <-` or `// ^`, depending on the position of the hiughlighted token.
/// For highlight category, a unique random identifier is used.
/// </summary>
void AddCommentsToFile()
{
    var newLines = new List<string>();
    var index = 0;

    foreach (var line in originalLines)
    {
        newLines.Add(line);

        var leadingWhitespaces = line[..^line.TrimStart().Length];
        var first = true;

        var position = leadingWhitespaces.Length;
        while (position < line.Length)
        {
            var ch = line[position];

            bool HandleToken(Func<char, bool> isOfType)
            {
                if (!isOfType(ch))
                {
                    return false;
                }

                var variable = $"{idPrefix}{index++}";
                if (first)
                {
                    newLines.Add($"{leadingWhitespaces}// <- {variable}");
                    first = false;
                }
                else
                {
                    var spacesLength = position - leadingWhitespaces.Length - 2;
                    if (spacesLength < 0)
                    {
                        // Handle case when the first two characters need different highlight categories:
                        // Shift // by one space to the right.
                        newLines.Add($"{leadingWhitespaces} // <- {variable}");
                    }
                    else
                    {
                        var spaces = new string(' ', position - leadingWhitespaces.Length - 2);
                        newLines.Add($"{leadingWhitespaces}//{spaces}^ {variable}");
                    }
                }

                while (position < line.Length && isOfType(line[position]))
                {
                    position++;
                }

                return true;
            }

            // The below char methods are not exactly what we need for token parsing, but good enough.
            // For example
            // - `_abc` is an identifier, but has both letter and punctuation characters.
            // - string literals are parsed pretty badly, considering they can have all sorts of characters, even spaces, on which we split.
            if (!HandleToken(char.IsLetterOrDigit) &&
                !HandleToken(c => char.IsPunctuation(c) || char.IsSymbol(c)))
            {
                position++;
            }
        }
    }

    File.WriteAllLines(filePath, newLines.ToArray());
}

string GetHighlighterOutput()
{
    var process = new Process
    {
        StartInfo = new ProcessStartInfo
        {
            FileName = "tree-sitter",
            Arguments = $"test --filter skip-all-corpus-tests",
            UseShellExecute = false,
            RedirectStandardOutput = true,
            WorkingDirectory = Path.GetFullPath(Path.Combine(filePath, "..", "..", "..")),

        }
    };
    process.Start();
    var output = process.StandardOutput.ReadToEnd();
    process.WaitForExit();

    return output;
}

var regexWithHighlight = new Regex($@"Failure - row: \d+, column: \d+, expected highlight '{idPrefix}(\d+)', actual highlights: '(.*)'", RegexOptions.Compiled);
var regexWithNone = new Regex($@"Failure - row: \d+, column: \d+, expected highlight '{idPrefix}(\d+)', actual highlights: none.", RegexOptions.Compiled);

/// <summary>
/// Runs the tree-sitter test command, and tries to find a single highlighting failure.
/// If a failure is found, the category is extracted from the output, and the corresponding variable is replaced with the category.
/// </summary>
bool FindAndFixHighlightFailure()
{
    Console.Write(".");
    var output = GetHighlighterOutput();

    if (output.IndexOf("✗") != output.LastIndexOf("✗"))
    {
        Console.WriteLine("\nThe tree-sitter test execution identified multiple files with failed highlighting. Aborting.");
        File.WriteAllLines(filePath, originalLines);
        Environment.Exit(1);
    }

    var match = regexWithHighlight.Match(output);
    if (match.Success && match.Groups.Count == 3)
    {
        // Highlight found for position, so replace with expected category.
        var variableCat = $"{idPrefix}{match.Groups[1].Captures[0].Value}";
        var category = match.Groups[2].Captures[0].Value;
        File.WriteAllText(filePath, File.ReadAllText(filePath).Replace(variableCat + "\n", category + "\n"));
        return true;
    }

    match = regexWithNone.Match(output);
    if (!match.Success || match.Groups.Count != 2)
    {
        // Couldn't match any of the expected patterns.
        return false;
    }

    // No highlight found for position, so remove entire line.
    var variableNone = $"{idPrefix}{match.Groups[1].Captures[0].Value}";
    var lines = File.ReadAllLines(filePath).Where(line => !line.EndsWith(variableNone)).ToArray();
    File.WriteAllLines(filePath, lines);
    return true;
}

AddCommentsToFile();

Console.WriteLine("Calling tree-sitter highlighter several times. This might take a while.");
while (FindAndFixHighlightFailure())
{ }
Console.WriteLine("");
Console.WriteLine("Done modifying the input file. It may require some manual cleanup.");

