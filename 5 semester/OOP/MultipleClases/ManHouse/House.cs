namespace ManHouse
{
    class House
    {
        public string address;
        public string area;

        public House(string address, string area)
        {
            this.address = address;
            this.area = area;    
        }

        public string getInfo
        {
            get { return $"owner of house at {address} in the {area}"; }

        }
    }
}
