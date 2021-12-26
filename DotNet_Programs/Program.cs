using System;


namespace H_nov_25_Area_using_Function_Overloding
{
    internal class Program
    {
        static void Main()
        {
            Console.Write("enter radius of circle=");
            double radius = Convert.ToDouble(Console.ReadLine());
            double a = Area(radius);
            Console.WriteLine("area of circle={0:f2}",a);


            Console.Write("enter length  of rectangle=");
            int l = Convert.ToInt32(Console.ReadLine());
            Console.Write("enter breath of rectangle=");
            int b = Convert.ToInt32(Console.ReadLine());
            int c = Area(l , b);
            Console.WriteLine("area of rectangle={0:}", c);


            Console.Write("enter hight of triangle=");
            double h = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter base of triangle=");
            int   ba = Convert.ToInt32(Console.ReadLine());
            Area(h , ba);

            Console.ReadLine();

        }
       public static double Area(double r)
        {
            double Ar_c = 3.14 * r * r;
            return Ar_c;
        }
        public static int Area(int len , int brt)
        {
            int Ar_r =  len * brt;
            return Ar_r;
        }
        public static void Area(double hight , int bases)
        {
            double Ar_t = 0.5 * hight * bases;
            Console.WriteLine("area of triangle={0:f3}", Ar_t);
        }
    }
}
