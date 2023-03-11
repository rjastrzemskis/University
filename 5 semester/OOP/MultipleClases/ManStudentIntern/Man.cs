using System;

namespace ManStudentIntern
{
    class Man
    {
        private string name;
        private string surname;
 
        public string Name
        {
            set { name = value; }
        }

        public string Surname
        {
            set { surname = value; }
        }

        public void WriteInfo()
        {
            Console.WriteLine($"Name: {name} and surname: {surname}");
        }
    }
}
