using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Difference_between_STATIC_and_NONSTATIC_function
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("enter salary of employee= ");
            double salary=Convert.ToDouble(Console.ReadLine());
        }
        public static double GrossSalary(double sal)
        {
            double Gs=sal+sal*0.3+500;
            return Gs;  
        }
    }
}
