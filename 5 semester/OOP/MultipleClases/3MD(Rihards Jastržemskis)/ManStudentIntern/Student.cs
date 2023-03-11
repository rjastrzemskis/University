using System;

namespace ManStudentIntern
{
    class Student : Man
    {
        private string school;

        public string School
        {
            set { school = value; }
        }

        public new void WriteInfo()
        {
            base.WriteInfo();
            Console.WriteLine($"School: {school}");
        }
    }
}
