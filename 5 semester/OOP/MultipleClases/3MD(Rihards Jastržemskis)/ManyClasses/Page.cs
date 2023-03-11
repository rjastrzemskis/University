namespace ManyClasses
{
    class Page
    {
        private int number;
        private string text;

        public Page(int number, string text)
        {
            this.number = number;
            this.text = text;
        }

        public int Number
        {
            get { return number; }
        }

        public string Text
        {
            get { return text; }
        }
    }
}
