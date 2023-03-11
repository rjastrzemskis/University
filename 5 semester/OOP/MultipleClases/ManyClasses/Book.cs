using System;
using System.Collections.Generic;

namespace ManyClasses
{
    class Book
    {
        private string title;
        private Author author;
        private List<Page> pages = new List<Page>();
        private int pageNumber;

        public Book(string title)
        {
            this.title = title;

            Console.Write("Number of pages: ");
            pageNumber = int.Parse(Console.ReadLine());
            if (pageNumber < 1) pageNumber = 1;
           
            string t = "t";
            for (int i = 0; i < pageNumber; i++)
            {
                pages.Add(new Page(i, t));
                t += t;
            }
        }

        public string Title
        {
            get { return title; }
        }

        public Author Author
        {
            set { author = value; }
        }

        public string ReadPage(int number)
        {
            if (number > -1 && number < pageNumber)
                return pages[number].Text;
            else
                return "Page not found";
        }

        public void Info()
        {
            if (author != null)
                Console.WriteLine($"{title} is written by {author.Name} {author.Surname}");
            else
                Console.WriteLine($"{title} is book.");
            Console.WriteLine($"It contains {pageNumber} pages.");
        }
    }
}
