using Microsoft.VisualStudio.TestTools.UnitTesting;
using System.Collections.Generic;
using ValueFinderTask;

namespace ValueFinderTaskTests
{
    [TestClass]
    public class ValueFinderTaskTests
    {
        [TestMethod]
        public void EnterValues_ListOfValues1to10_ExpectedListOfValues1to10()
        {
            // Arrange
            List<int> values = new List<int>() { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            var value = 1;
            ValueFinder valueFinder = new ValueFinder(values);

            // Act
            var actualList = valueFinder.ShowValues();

            // Assert
            foreach (var actual in actualList)
                Assert.AreEqual(value++, actual);
        }

        [TestMethod]
        public void AvgValue_ListOfValues1to10_Expected5()
        {
            // Arrange
            List<int> values = new List<int>() { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            ValueFinder valueFinder = new ValueFinder(values);

            // Act
            var actual= valueFinder.AvgValue();

            // Assert
                Assert.AreEqual(5.5, actual);
        }

        [TestMethod]
        public void MinValue_ListOfValues1to10_Expected1()
        {
            // Arrange
            List<int> values = new List<int>() { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            ValueFinder valueFinder = new ValueFinder(values);

            // Act
            var actual = valueFinder.MinValue();

            // Assert
            Assert.AreEqual(1, actual);
        }

        [TestMethod]
        public void MaxValue_ListOfValues1to10_Expected10()
        {
            // Arrange
            List<int> values = new List<int>() { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            ValueFinder valueFinder = new ValueFinder(values);

            // Act
            var actual = valueFinder.MaxValue();

            // Assert
            Assert.AreEqual(10, actual);
        }
    }
}
