using static System.Console;
using System;

class Program
{
    static void Main(string[] args)
    {
        int n = int.Parse(ReadLine());
        for(int i=0; i<n; i++)
        {
            int[] a = Array.ConvertAll(ReadLine().Split(), int.Parse);
            Array.Sort(a);
            Array.Reverse(a);
            WriteLine(a[2]);
        }
    }
}
