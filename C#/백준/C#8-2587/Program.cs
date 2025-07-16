using System;
using static System.Console;

class Program
{
    static void Main(string[] args)
    {
        int[] a = new int[5];
        int sum = 0;

        for (int i = 0; i < 5; i++)
        {
            a[i] = int.Parse(ReadLine());
            sum += a[i];
        }

        Array.Sort(a);

        WriteLine(sum / 5);
        WriteLine(a[5 / 2]);
    }
}
