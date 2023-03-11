using System;

namespace RefrigeratorProduct
{
    class Product
    {
        private string productName;
        private double weight;

        public Product(string productName, double weight)
        {
            this.productName = productName;
            this.weight = weight;
        }
        public void ReadInfo()
        {
            Console.WriteLine($"{productName} of {weight}kg");
        }
    }
}
