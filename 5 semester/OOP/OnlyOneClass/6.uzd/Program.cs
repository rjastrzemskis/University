using System;

namespace StockAmount
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter product name: ");
            var productName = Console.ReadLine();
            Console.Write("Enter product price: ");
            var productPrice = Convert.ToDecimal(Console.ReadLine());
            Console.Write("Enter product amount: ");
            var productAmount = Convert.ToInt32(Console.ReadLine());
            Product product = new Product(productName, productPrice, productAmount);
            Console.WriteLine(product.StockInformation());

            Console.Write("Enter new price for product: ");
            productPrice = Convert.ToDecimal(Console.ReadLine());
            product.UpdatePrice(productPrice);
            Console.WriteLine(product.StockInformation());

            Console.Write("Enter for how much stock has increased: ");
            productAmount = Convert.ToInt32(Console.ReadLine());
            product.IncreaseAmount(productAmount);
            Console.WriteLine(product.StockInformation());

            Console.Write("Enter for how much stock has decreased: ");
            productAmount = Convert.ToInt32(Console.ReadLine());
            product.DecreaseAmount(productAmount);
            Console.WriteLine(product.StockInformation());
        }
    }
}
