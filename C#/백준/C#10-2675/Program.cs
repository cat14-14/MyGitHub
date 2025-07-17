using static System.Console;
using System;

class Program
{
    static void Main(string[] args)
    {
        int n = int.Parse(ReadLine());

        for (int i = 0; i < n; i++)
        {
            string[] input = ReadLine().Split(' ');
            int a = int.Parse(input[0]);
            char[] chars = input[1].ToCharArray();

            foreach (char c in chars)
            {
                for (int k = 0; k < a; k++)
                {
                    Write(c);
                }
            }

            WriteLine();
        }
    }
}
