using System;

namespace ManStudentIntern
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("-- Creating object intern --");
            Intern intern = new Intern();
            intern.Name = "Jānis";
            intern.Surname = "Pētersons";
            intern.School = "R2VSK";
            intern.PlaceOfPractice = "RVS";
            intern.WriteInfo();

            Console.WriteLine("-- Changing school name for intern --");
            intern.School = "R1VSK";
            intern.WriteInfo();

            Console.WriteLine("-- Changing object from intern to student --");
            Student student = intern;
            student.WriteInfo();

            Console.WriteLine("-- Changing object from student to man --");
            Man man = student;
            man.WriteInfo();

            Console.WriteLine("-- Changing object from man back to intern --");
            Intern internAgain = (Intern)man;
            internAgain.WriteInfo();
        }
    }
}
