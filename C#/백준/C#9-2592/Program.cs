using static System.Console;
using System;

class Program
{
    static void Main(string[] args)
    {
        int[] a = new int[10];        // 입력값 저장
        int[] freq = new int[1010];   // 0~1000까지 숫자 빈도 카운트용 배열
        int sum = 0;

        for (int i = 0; i < 10; i++)
        {
            a[i] = int.Parse(ReadLine());
            sum += a[i];
            freq[a[i]]++; // 각 숫자의 등장 횟수 기록
        }

        // 평균 출력
        WriteLine(sum / 10);

        // 최빈값 계산
        int maxFreq = 0;
        int mode = 0;

        for (int i = 0; i < freq.Length; i++)
        {
            if (freq[i] > maxFreq)
            {
                maxFreq = freq[i];
                mode = i;
            }
        }

        // 최빈값 출력
        WriteLine(mode);
    }
}
