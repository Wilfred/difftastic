import com.github.javaparser.*;
import com.github.javaparser.ast.*;
import com.github.javaparser.printer.*;
import java.nio.file.*;
import java.nio.charset.*;

public class RunJavaParser
{
  public static void main(String[] args) {
    String sourceCode = readFile(args[0]);
    CompilationUnit compilationUnit = JavaParser.parse(sourceCode);
    JsonPrinter printer = new JsonPrinter(true);
    System.out.println(printer.output(compilationUnit));
  }

  static String readFile(String path)
  {
    try {
      byte[] encoded = Files.readAllBytes(Paths.get(path));
      return new String(encoded, StandardCharsets.UTF_8);
    } catch (Exception error) {
      System.err.println(error);
      return "";
    }
  }
}
