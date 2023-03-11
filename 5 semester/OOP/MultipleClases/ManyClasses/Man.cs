namespace ManyClasses
{
    public class Man
    {
        private string name;
        private string surname;

        public Man(string name, string surname)
        {
            this.name = name;
            this.surname = surname;
        }

        public string Name
        {
            get { return name; }
        }

        public string Surname
        {
            get { return surname; }
        }

        public string FullName
        {
            get { return $"{name} {surname}"; }
        }
    }
}
