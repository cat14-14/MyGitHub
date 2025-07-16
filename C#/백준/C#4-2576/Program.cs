using static System.Console;

class Program
{
    static void Main()
    {
        int n = 7, sum = 0, min = 101;
        int[] a = new int[n];
        bool hasOdd = false; // 홀수 존재 여부를 확인하는 플래그

        for (int i = 0; i < n; i++)
        {
            a[i] = int.Parse(ReadLine());
        }

        for (int j = 0; j < n; j++)
        {
            if (a[j] % 2 != 0)
            {
                hasOdd = true;
                sum += a[j];
                if (a[j] < min)
                {
                    min = a[j];
                }
            }
        }

        if (hasOdd)
        {
            WriteLine($"{sum}\n{min}");
        }
        else
        {
            WriteLine("-1");
        }
    }
}
