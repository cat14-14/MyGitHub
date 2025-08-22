using static System.Console;
using System.Linq;

class MyClass
{
    static void Main()
    {
        int[] n = ReadLine().Split().Select(int.Parse).ToArray();
        foreach(int m in n)
            Write($"{m} ");
    }
}
