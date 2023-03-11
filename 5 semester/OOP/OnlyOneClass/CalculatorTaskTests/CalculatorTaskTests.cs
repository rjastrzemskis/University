using Microsoft.VisualStudio.TestTools.UnitTesting;
using CalculatorTask;

namespace CalculatorTaskTests
{
    [TestClass]
    public class CalculatorTaskTests
    {
        [TestMethod]
        public void CalculatorSum_3Plus5_Expetected8()
        {
            // Arrange
            Calculator calculator = new Calculator();
            calculator.InputValue(3);
            calculator.InputValue(5);

            // Act  
            calculator.ToSumme();
            var actual = calculator.ReadResult();

            // Assert
            Assert.AreEqual(8, actual);
        }
        public void CalculatorMinuse_3Minus5_ExpetectedMinus2()
        {
            // Arrange
            Calculator calculator = new Calculator();
            calculator.InputValue(3);
            calculator.InputValue(5);

            // Act  
            calculator.ToMinuse();
            var actual = calculator.ReadResult();

            // Assert
            Assert.AreEqual(-2, actual);
        }

        [TestMethod]
        public void CalculatorDivide_3Divided5_Expetected0_6()
        {
            // Arrange
            Calculator calculator = new Calculator();
            calculator.InputValue(3);
            calculator.InputValue(5);

            // Act  
            calculator.ToDivide();
            var actual = calculator.ReadResult();

            // Assert
            Assert.AreEqual(0.6, actual);
        }

        [TestMethod]
        public void CalculatorMultiply_3Multiply5_Expetected15()
        {
            // Arrange
            Calculator calculator = new Calculator();
            calculator.InputValue(3);
            calculator.InputValue(5);

            // Act  
            calculator.ToMultiply();
            var actual = calculator.ReadResult();

            // Assert
            Assert.AreEqual(15, actual);
        }

        [TestMethod]
        public void CalculatorMultipleInputs3_5_5_3Multiply5_Expetected15()
        {
            // Arrange
            Calculator calculator = new Calculator();
            calculator.InputValue(3);
            calculator.InputValue(5);
            calculator.InputValue(5);

            // Act  
            calculator.ToMultiply();
            var actual = calculator.ReadResult();

            // Assert
            Assert.AreEqual(15, actual);
        }
    }
}
