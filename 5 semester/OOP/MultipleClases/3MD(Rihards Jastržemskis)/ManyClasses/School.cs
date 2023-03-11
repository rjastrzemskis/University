using System;
using System.Collections.Generic;

namespace ManyClasses
{
    class School
    {
        private string name;
        private List<Reader> students = new List<Reader>();


        public School(string name)
        {
            this.name = name;
        }

        public void AddStudent(Reader reader)
        {
            students.Add(reader);
        }

        public void RemoveStudent(Reader reader)
        {
            students.Add(reader);
        }

        public void PrintInfo()
        {
            Console.WriteLine($"{name}");
            if (students.Count > 0)
                for (int i = 0; i < students.Count; i++)
                    Console.WriteLine($"{students[i].FullName}");
            else
                Console.WriteLine("School doesn't have any student!");
        }
    }
}
