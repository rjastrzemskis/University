using System;

namespace RefrigeratorProduct
{
    class Program
    {
        static void Main(string[] args)
        {
            Refrigerator refrigerator = new Refrigerator();
            Product apple = new Product("apple", 2.22);
            Product banana = new Product("banana", 5);
            Product fish = new Product("fish", 2.22);

            Console.WriteLine("-- Checking refrigerator --");
            refrigerator.CheckOutRefrigerator();

            Console.WriteLine("-- Someone went to shop --");
            refrigerator.PutIntoRefrigerator(apple);
            refrigerator.PutIntoRefrigerator(banana);
            refrigerator.PutIntoRefrigerator(fish);
            Console.WriteLine("-- Checking refrigerator --");
            refrigerator.CheckOutRefrigerator();

            refrigerator.RemoveFromRefrigerator();
            Console.WriteLine("-- Someone took something --");
            refrigerator.CheckOutRefrigerator();
        }
    }
}
