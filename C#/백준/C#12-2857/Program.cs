using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        List<int> foundIndices = new List<int>();

        for (int i = 0; i < 5; i++)
        {
            string line = Console.ReadLine();
            if (line.Contains("FBI"))
            {
                foundIndices.Add(i + 1); // 줄 번호는 1부터 시작
            }
        }

        if (foundIndices.Count > 0)
        {
            Console.WriteLine(string.Join(" ", foundIndices));
        }
        else
        {
            Console.WriteLine("HE GOT AWAY!");
        }
    }
}
