using Microsoft.VisualStudio.TestTools.UnitTesting;
using StockAmount;

namespace StockAmountTests
{
    [TestClass]
    public class StockAmountTests
    {
        [TestMethod]
        public void StockInformation_NameIphone14Price999Amount14_ExpecteStringStockInfo()
        {
            // Arrange
            Product first = new Product("Iphone 14", (decimal)999.00, 14);

            // Act
            string result = first.StockInformation();

            // Assert
            Assert.AreEqual("Iphone 14, price 999$, amount 14", result);
        }

        [TestMethod]
        public void IncreaseAmount_NameIphone14Price999Amount14_ExpectedAmount24()
        {
            // Arrange
            Product first = new Product("Iphone 14", (decimal)999.00, 14);

            // Act
            int result = first.IncreaseAmount(10);

            // Assert
            Assert.AreEqual(24, result);
        }

        [TestMethod]
        public void DecreaseAmount_NameIphone14Price999Amount14_ExpectedAmount4()
        {
            // Arrange
            Product first = new Product("Iphone 14", (decimal)999.00, 14);

            // Act
            int result = first.DecreaseAmount(10);

            // Assert
            Assert.AreEqual(4, result);
        }

        [TestMethod]
        public void UpdatePrice_NameLogitechMousePrice70Amount14_ExpectedPrice1100()
        {
            // Arrange
            Product first = new Product("Iphone 14", (decimal)999.00, 14);

            // Act
            decimal result = first.UpdatePrice(1100);

            // Assert
            Assert.AreEqual(1100, result);
        }
    }
}
