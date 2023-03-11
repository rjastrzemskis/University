using Microsoft.VisualStudio.TestTools.UnitTesting;
using ClockTask;

namespace ClockTaskTests
{
    [TestClass]
    public class ClockTaskTests
    {
        [TestMethod]
        public void ClockOutput_16_55_55_Expected16_55_55()
        {
            // Arrange
            Clock clock = new Clock(16,55,55);

            // Act  
            var actual = clock.ShowTime();

            // Assert
            Assert.AreEqual("16:55:55", actual);
        }

        [TestMethod]
        public void ClockIncreament_Increament0_0_55_Expected16_56_50()
        {
            // Arrange
            Clock clock = new Clock(16, 55, 55);

            // Act  
            clock.IncrementTime(0, 0, 55);
            var actual = clock.ShowTime();

            // Assert
            Assert.AreEqual("16:56:50", actual);
        }

        [TestMethod]
        public void ClockIncreament_Increament0_20_0_Expected17_15_55()
        {
            // Arrange
            Clock clock = new Clock(16, 55, 55);

            // Act  
            clock.IncrementTime(0, 20, 0);
            var actual = clock.ShowTime();

            // Assert
            Assert.AreEqual("17:15:55", actual);
        }

        [TestMethod]
        public void ClockIncreament_Increament9_0_0_Expected01_55_55()
        {
            // Arrange
            Clock clock = new Clock(16, 55, 55);

            // Act  
            clock.IncrementTime(9, 0, 0);
            var actual = clock.ShowTime();

            // Assert
            Assert.AreEqual("01:55:55", actual);
        }

        [TestMethod]
        public void ClockDecreament_Decreament0_0_170_Expected16_53_05()
        {
            // Arrange
            Clock clock = new Clock(16, 55, 55);

            // Act  
            clock.DecrementTime(0, 0, 170);
            var actual = clock.ShowTime();

            // Assert
            Assert.AreEqual("16:53:05", actual);
        }

        [TestMethod]
        public void ClockDecreament_Decreament0_60_0_Expected15_55_55()
        {
            // Arrange
            Clock clock = new Clock(16, 55, 55);

            // Act  
            clock.DecrementTime(0, 60, 0);
            var actual = clock.ShowTime();

            // Assert
            Assert.AreEqual("15:55:55", actual);
        }

        [TestMethod]
        public void ClockDecreament_Decreament17_0_0_Expected23_55_55()
        {
            // Arrange
            Clock clock = new Clock(16, 55, 55);

            // Act  
            clock.DecrementTime(17, 0, 0);
            var actual = clock.ShowTime();

            // Assert
            Assert.AreEqual("23:55:55", actual);
        }
    }
}
