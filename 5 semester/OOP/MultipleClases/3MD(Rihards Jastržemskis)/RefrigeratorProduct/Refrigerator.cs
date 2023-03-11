using System;
using System.Collections.Generic;

namespace RefrigeratorProduct
{
    class Refrigerator
    {
        private int productCount;
        private List<Product> products = new List<Product>();


        public void PutIntoRefrigerator(Product product)
        {
            products.Add(product);
            productCount = products.Count;
        }

        public Product RemoveFromRefrigerator()
        {
            if (productCount > 0)
            {
                for (int i = 0; i < productCount; i++)
                {
                    Console.Write($"{i}: ");
                    products[i].ReadInfo();
                }
            }

            Console.WriteLine("What product you want to remove?");
            var id = Convert.ToInt32(Console.ReadLine());
            var temp = products[id];

            products.Remove(products[id]);
            productCount = products.Count;
            return temp;
        }

        public void CheckOutRefrigerator()
        {
            if (productCount > 0)
                for (int i = 0; i < productCount; i++)
                    products[i].ReadInfo();
            else
                Console.WriteLine("Refrigerator is empty!");
        }
    }
}
