using System;
using System.Collections.Generic;

namespace ManyClasses
{
    class Library
    {
        private string address;
        private List<Book> books = new List<Book>();

        public Library(string address)
        {
            this.address = address;
        }

        public void AddBook(Book book)
        {
            books.Add(book);
        }

        public Book RemoveBook(int id)
        {
            Book b = books[id];
            if (id > -1 && id < books.Count)
                books.RemoveAt(id);

            return b;
        }

        public void PrintList()
        {
            Console.WriteLine(address);
            if (books.Count > 0)
                for (int i = 0; i < books.Count; i++)
                    books[i].Info();
            else
                Console.WriteLine("Library doesn't contain some book!");
        }
    }
}
