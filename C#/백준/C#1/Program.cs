using static System.Console;

class Program
{
    static void Main()
    {
        int max = 0, maxid = 0;
        int[] a = new int[9];

        for (int i = 0; i < 9; i++)
        {
            a[i] = int.Parse(ReadLine());
        }

        for (int j = 0; j < 9; j++)
        {
            if (a[j] > max)
            {
                max = a[j];
                maxid = j;
            }
        }

        WriteLine($"{max}\n{maxid+1}");
    }
}
