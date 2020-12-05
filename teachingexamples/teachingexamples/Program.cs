using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace teachingexamples
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            int n, i, range;
            Console.Write("Enter Any Integer");
            n = int.Parse(Console.ReadLine());
            Console.Write("Enter The range");
            range = int.Parse(Console.ReadLine());

            for(i=1; i<=20; i++)
            {
                Console.WriteLine("the product of {0} and {1} = {2}", n, i, n * i);

            }
        }

    }
}

