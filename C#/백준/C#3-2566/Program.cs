using static System.Console;

class Program
{
    static void Main()
    {
        int[,] a = new int[9, 9];
        int max = 0;
        int[] maxid = new int[2];

        for (int i = 0; i < 9; i++)
        {
            string[] line = ReadLine().Split();
            for (int j = 0; j < 9; j++)
            {
                a[i, j] = int.Parse(line[j]);
            }
        }

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (a[i, j] > max)
                {
                    max = a[i, j];
                    maxid[0] = i;
                    maxid[1] = j;
                }
            }
        }

        WriteLine($"{max}\n{maxid[0] + 1} {maxid[1] + 1}");
    }
}
