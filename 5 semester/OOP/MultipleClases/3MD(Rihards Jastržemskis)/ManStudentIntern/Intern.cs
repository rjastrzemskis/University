using System;

namespace ManStudentIntern
{
    class Intern : Student
    {
        private string placeOfPractice;

        public string PlaceOfPractice
        {
            set { placeOfPractice = value; }
        }

        public new void WriteInfo()
        {
            base.WriteInfo();
            Console.WriteLine($"Place of practice : {placeOfPractice}");
        }
    }
}
