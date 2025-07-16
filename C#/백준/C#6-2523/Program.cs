using static System.Console;

class Program
{
    static void Main()
    {
        int n = int.Parse(ReadLine());

        // 위쪽 삼각형
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                Write("*");
            }
            WriteLine();
        }

        // 아래쪽 역삼각형
        for (int i = n - 1; i >= 1; i--)
        {
            for (int j = 0; j < i; j++)
            {
                Write("*");
            }
            WriteLine();
        }
    }
}
