using System;

namespace UserTask
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter users name:");
            var name = Console.ReadLine();
            Console.Write("Enter users surname:");
            var surname = Console.ReadLine();
            User user = new User(name, surname);
            Console.WriteLine($"User {user.ReadInfo()} created!");
        }
    }
}
