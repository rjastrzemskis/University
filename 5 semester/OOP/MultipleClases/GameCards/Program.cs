using System;

namespace GameCards
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("-- Welcome to 21 game --");
            do
            {
                Cards cards = new Cards();
                Console.WriteLine("-- Computer will take three random cards --");
                Console.WriteLine("-- Taking tree random cards --");
                var card = cards.TakeRandomCard();
                Console.WriteLine($"Card type: {card.SuitType} and card value: {card.Value}");
                var cardSum = card.Value;
                card = cards.TakeRandomCard();
                Console.WriteLine($"Card type: {card.SuitType} and card value: {card.Value}");
                cardSum += card.Value;
                card = cards.TakeRandomCard();
                Console.WriteLine($"Card type: {card.SuitType} and card value: {card.Value}");
                cardSum += card.Value;

                if(cardSum == 21)
                    Console.WriteLine($"-- You won your card sum was {cardSum}! --");
                else
                    Console.WriteLine($"-- You lost your card sum was {cardSum}! --");


                Console.WriteLine("Would you play to play again? Y or N");
            } while (Console.ReadLine().ToLower() == "y");
        }
    }
}
