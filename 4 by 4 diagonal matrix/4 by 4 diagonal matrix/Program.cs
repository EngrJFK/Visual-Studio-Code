using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _4_by_4_diagonal_matrix
{
    class Program
    {
        //static int MAX = 100;
        static void Main_diagonal(int[,] mat, int n)
        {
            // function to print the main diagonal matrix from a11 to a44
            Console.Write("Diagonal Matrix 4 by 4:");
            for (int i=0; i <n; i++)
            { 
                for (int j =0; j<n; j++)
                {

                    if (i == j)
                    {
                        Console.Write(mat[i, j] + ", ");
                    }
                }
            }
            Console.WriteLine(""); 
        }

        //function to print the secondary diagonal a14 to a41
        static void Second_diagonal(int[,] mat, int n)
        {
            Console.Write("Second Diagonal a14 to a41 ");
            for (int i =0; i < n; i++)
            {
                for (int j=0; j<n; j++)
                {

                    if ((i+j) == (n-1))
                    {
                        Console.Write(mat[i, j] + ",");

                    }
                }
            }
            Console.WriteLine(" ");

        }

        public static void Main(String[] args)
        {

            int n = 4;
            int[,] a = { { 1, 2, 3, 4},
                { 5, 6, 7, 8},
                { 9, 10, 11, 12},
                { 14, 15, 16, 17} };

            Main_diagonal(a, n);
            Second_diagonal(a, n);

        }
        
    }
  
}
