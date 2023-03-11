namespace StockAmount
{
    public class Product
    {
        private string name;
        private int amount;
        private decimal price;

        public Product(string name, decimal price, int amount)
        {
            this.name = name;
            this.price = price;
            this.amount = amount;
        }

        public string StockInformation()
        {
            return name + ", price " + price + "$, amount " + amount;
        }

        public int IncreaseAmount(int newAmount)
        {
            return amount += newAmount;
        }

        public int DecreaseAmount(int newAmount)
        {
            return amount -= newAmount;
        }

        public decimal UpdatePrice(decimal newPrice)
        {
            return price = newPrice;
        }
    }
}
