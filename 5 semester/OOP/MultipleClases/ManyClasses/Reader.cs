using System;

namespace ManyClasses
{
    class Reader : Man
    {
        private string name;
        private string surname;
        private Book takenBook;

        public Reader(string name, string surname) : base(name, surname)
        {
            this.name = name;
            this.surname = surname;
        }

        public Book Book
        {
            set { takenBook = value; }
        }

        public void Info()
        {
            if (takenBook != null)
                Console.WriteLine($"{name} {surname} is reader of {takenBook.Title}");
            else
                Console.WriteLine($"{name} {surname} not reader of any book");
        }
    }
}
