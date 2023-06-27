using System;

/// <summary>
/// This is a doc comment.
/// </summary>
class Hello
{
  /**
   * This is a doc comment.
   * This is a multiline doc comment.
   */
  static void Main()
  {
    /* Multi comment line */
    // This line prints "Hello, World" 
    Console.WriteLine("Hello, World");

    Hello.Test();
  }

  static void Test(int i = 0)
  {
    Console.WriteLine("Hello, World");
  }
}