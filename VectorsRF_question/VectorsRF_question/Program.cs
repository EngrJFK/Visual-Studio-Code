using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace VectorsRF_question  // my code name for question to be answered
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("\nThis program calculate the perimeter and surface area of a square");
            Shape square = new Shape("Square"); //I created a class called Shape to cover all shapes
            Console.WriteLine("\n\tPlease enter the side value in cm");
            int side = Convert.ToInt32(Console.ReadLine());
            square.calc(5);
            square.calc(side);
            Console.WriteLine("Type of Shape " + square.type);
            Console.WriteLine("Lenght of side in cm" + square.side);
            Console.WriteLine("The perimeter is " + square.perimeter);
            Console.WriteLine("The surface area is" + square.surface_area);
            Console.ReadKey(true);
        }
    }
    public class Shape
    {
        public string type;
        public int surface_area; //multiplication of two sides
        public int side;        //sides of square in cm 
        public int perimeter; // addition of all sides 

        public Shape(string type)
        {
            this.type = type;
        }
        public void calc(int sideExternal)
        {
            perimeter = sideExternal * 4;
            surface_area = sideExternal * sideExternal;
        }

       
    }
}
