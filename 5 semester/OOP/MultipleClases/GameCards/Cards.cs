using System;
using System.Collections.Generic;

namespace GameCards
{
    class Cards
    {
        private int cardCount;
        private List<Card> cards = new List<Card>();

        public Cards()
        {
            var suitTypes = new List<string>() { "Hearts", "Clubs", "Spades", "Diamonds" };
            var values = new List<int>() { 6, 7, 8, 9, 10, 11, 12, 13, 14 };
            foreach (var suitType in suitTypes)
            {
                foreach (var value in values)
                {
                    cards.Add(new Card { SuitType = suitType, Value = value });
                }
            }
            cardCount = cards.Count;
        }

        public Card TakeRandomCard()
        {
            if (cardCount <= 33) Console.WriteLine("Why are you cheating?");

            var random = new Random();
            var index = random.Next(cardCount);
            var temp = cards[index];
            cards.Remove(cards[index]);
            cardCount = cards.Count;

            return temp;
        }
    }
}
