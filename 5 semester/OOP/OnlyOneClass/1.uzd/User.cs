namespace UserTask
{
    public class User
    {
        private string name;
        private string surname;

        public User (string name, string surname)
        {
            this.name = name;
            this.surname = surname;
        }

        public string getName
        {
            get { return name; }
        }

        public string getSurname
        {
            get { return surname; }
        }

        public string ReadInfo()
        {
            return $"{name} {surname}";
        }
    }
}
