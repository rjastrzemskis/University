using System;

namespace ManHouse
{
    class Man
    {
        private string name;
        private string surname;
        private House house;

        public Man(string name, string surname)
        {
            this.name = name;
            this.surname = surname;
        }

        public string Name
        {
            get { return name; }
        }

        public string Surname
        {
            get { return surname; }
        }

        public House House
        {
            set { house = value; }
        }

        public void PrintInfo()
        {
            if (house != null)
                Console.WriteLine($"{name} {surname} is {house.getInfo}");
            else
                Console.WriteLine($"{name} {surname} is not owner of any house");
        }
    }
}
