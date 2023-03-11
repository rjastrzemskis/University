using Microsoft.VisualStudio.TestTools.UnitTesting;
using LiftTask;

namespace LiftTaskTests
{
    [TestClass]
    public class LiftTaskTests
    {
        [TestMethod]
        public void LiftFloor_StartFloor1_Expected1()
        {
            // Arrange
            var floor = 1;
            Lift lift = new Lift(floor);

            // Act  
            var actual = lift.ShowLiftFloor();

            // Assert
            Assert.AreEqual(floor, actual);
        }


        [TestMethod]
        public void LiftUp_FromFllor1To5_ExpectedLiftFloor5()
        {
            // Arrange
            var floor = 1;
            Lift lift = new Lift(floor);

            // Act  
            var actualList = lift.LiftUp(5);

            // Assert
            foreach(var actual in actualList)
                Assert.AreEqual(floor++, actual);
        }

        [TestMethod]
        public void LiftDown_FromFllor5To1_ExpectedLiftFloor1()
        {
            // Arrange
            var floor = 5;
            Lift lift = new Lift(floor);

            // Act  
            var actualList = lift.LiftDown(1);

            // Assert
            foreach (var actual in actualList)
                Assert.AreEqual(floor--, actual);
        }
    }
}
