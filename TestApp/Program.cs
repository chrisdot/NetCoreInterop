using System;
using System.Runtime.InteropServices;

namespace TestApp
{
    class Program
    {


        [DllImport("libmathcpp.so", EntryPoint="new_MathNerd")] //seems we don't set the extension of the lib
        private static extern System.IntPtr new_MathNerd(int value);

        [DllImport("libmathcpp.so")]
        private static extern int MathNerd_Val(System.IntPtr m);

        [DllImport("libmathcpp.so")]
        private static extern void MathNerd_Add(System.IntPtr m, int val);


        static void Main(string[] args)
        {

            System.IntPtr ptr = new_MathNerd(16);

            int val = MathNerd_Val(ptr);

            Console.WriteLine("Value ={0} ", val);

            MathNerd_Add(ptr, 6);

            val = MathNerd_Val(ptr);

            Console.WriteLine("Value after +6 add ={0} ", val);

        }
    }
}
