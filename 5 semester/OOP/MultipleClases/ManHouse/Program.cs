using System;

namespace ManHouse
{
    class Program
    {
        static void Main(string[] args)
        {
            Man man = new Man("Jānis", "Pētersons");
            House newHouse = new House("Atbrivošanas aleja 200a", "Rezekne");
            man.PrintInfo();

            Console.WriteLine("-- After buying house --");
            man.House = newHouse;
            man.PrintInfo();
        }
    }
}
