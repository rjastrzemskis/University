using System;

namespace ManyClasses
{
    class Program
    {
        static void Main(string[] args)
        {
            Author author = new Author("Kārlis", "Skalbe");
            Book book = new Book("Pucei aste kalna");
            Library library = new Library("Latvijas nacionālā, Kalnciema iela 2, Rīga");
            School school = new School("R1VSK");
            Reader reader = new Reader("Jānis", "Pētersons");
            Man man = reader;

            Console.WriteLine("-- Checking book info --");
            book.Author = author;
            book.Info();

            Console.WriteLine("-- Checkin for author info --");
            author.Book = book;
            author.Info();

            Console.WriteLine("-- Checking books at library --");
            library.AddBook(book);
            library.PrintList();

            Console.WriteLine("-- Reading pages from book --");
            Console.WriteLine(book.ReadPage(1));

            Console.WriteLine("-- Checking students at school --");
            school.AddStudent(reader);
            school.PrintInfo();

            Console.WriteLine("-- Checking student what book he took --");
            reader.Book = book;
            reader.Info();

            Console.WriteLine("-- Checking for reader name as man -- ");
            Console.WriteLine(man.Name);
        }
    }
}
