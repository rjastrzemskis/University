using System;

namespace ManyClasses
{
    class Author : Man
    {
        private string name;
        private string surname;
        private Book book;

        public Author(string name, string surname) : base(name, surname)
        {
            this.name = name;
            this.surname = surname;
        }

        public Book Book
        {
            set { book = value; }
        }

        public void Info()
        {
            if (book != null)
                Console.WriteLine($"{name} {surname} is author of {book.Title}");
            else
                Console.WriteLine($"{name} {surname} is author");
        }
    }
}