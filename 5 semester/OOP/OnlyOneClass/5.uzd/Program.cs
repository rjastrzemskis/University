using System;
using System.Collections.Generic;
using System.Linq;

namespace ValueFinderTask
{
    class Program
    {
        static void Main(string[] args)
        {
            List<int> list = new List<int>();
            for(int i = 0; i < 10; i++)
            {
                Console.Write("Please enter value : ");
                list.Add(Convert.ToInt32(Console.ReadLine()));
            }

            ValueFinder valueFinder = new ValueFinder(list);

            var values = valueFinder.ShowValues().ToList();
            Console.WriteLine($"Full list of values {string.Join(", ", values.ToArray())}");
            Console.WriteLine($"Avg values is {valueFinder.AvgValue()}");
            Console.WriteLine($"Min values is {valueFinder.MinValue()}");
            Console.WriteLine($"Max values is {valueFinder.MaxValue()}");
        }
    }
}
