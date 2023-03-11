using Microsoft.VisualStudio.TestTools.UnitTesting;
using UserTask;

namespace UserTaskTests
{
    [TestClass]
    public class UserTaskTests
    {
        [TestMethod]
        public void CheckUsersName_NewUserAlvisPastars_ExpectedUserNameAlvis()
        {
            // Arrange
            var name = "Alvis";
            var surname = "Kalns";
            User user1 = new User(name, surname);

            // Act  
            var actual = user1.getName;

            // Assert
            Assert.AreEqual("Alvis", actual);
        }

        [TestMethod]
        public void CheckUsersSurname_NewUserAlvisPastars_ExpectedUserSurnameKalns()
        {
            // Arrange
            var name = "Alvis";
            var surname = "Kalns";
            User user1 = new User(name, surname);

            // Act  
            var actual = user1.getSurname;

            // Assert
            Assert.AreEqual("Kalns", actual);
        }

        [TestMethod]
        public void CheckUsersNameSurname_NewUserAlvisPastars_ExpectedUserSurnameNameAlvisKalns()
        {
            // Arrange
            var name = "Alvis";
            var surname = "Kalns";
            User user1 = new User(name, surname);

            // Act  
            var actual = user1.ReadInfo();

            // Assert
            Assert.AreEqual("Alvis Kalns", actual);
        }
    }
}
