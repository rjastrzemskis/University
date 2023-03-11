namespace GameCards
{
    class Card
    {
        private int cardValue;
        private string suitType;

        public int Value
        {
            set { cardValue = value; }
            get { return cardValue; }
        }

        public string SuitType
        {
            set { suitType = value; }
            get { return suitType; }
        }
    }
}
