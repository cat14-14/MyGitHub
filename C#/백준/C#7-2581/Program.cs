using System;

class Program
{
    static void Main()
    {
        int M = int.Parse(Console.ReadLine());
        int N = int.Parse(Console.ReadLine());

        const int MAX = 10001;
        bool[] isPrime = new bool[MAX];

        // 초기값: 모두 true로 초기화
        for (int i = 2; i < MAX; i++)
        {
            isPrime[i] = true;
        }

        // 에라토스테네스의 체 적용
        for (int i = 2; i * i < MAX; i++)
        {
            if (isPrime[i])
            {
                for (int j = i * i; j < MAX; j += i)
                {
                    isPrime[j] = false;
                }
            }
        }

        int sum = 0;
        int min = -1;

        for (int i = M; i <= N; i++)
        {
            if (isPrime[i])
            {
                sum += i;
                if (min == -1)
                    min = i;
            }
        }

        if (min == -1)
        {
            Console.WriteLine("-1");
        }
        else
        {
            Console.WriteLine(sum);
            Console.WriteLine(min);
        }
    }
}
