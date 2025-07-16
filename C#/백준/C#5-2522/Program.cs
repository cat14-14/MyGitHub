using static System.Console;

class Program
{
    static void Main()
    {
        int n = int.Parse(ReadLine());
        for(int i=0; i<n; i++)
        {   
            for(int j=0; j<n-i-1; j++)
            {
                Write(" ");
            }
            for(int j=0; j<i+1; j++)
            {
                Write("*");
            }
            WriteLine();
        }
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<i+1; j++)
            {
                Write(" ");
            }
            for(int j=0; j<n-i-1; j++)
            {
                Write("*");
            }
            WriteLine();
        }
    }
}
