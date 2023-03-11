using System;

namespace LiftTask
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter starting floor for lift system: ");
            var startingFloor = Convert.ToInt32(Console.ReadLine());
            Lift lift = new Lift(startingFloor);
            Console.Write("Enter floor to which you want to go : ");
            var nextFloor = Convert.ToInt32(Console.ReadLine());

            if (startingFloor > nextFloor)
            {
                foreach (int i in lift.LiftDown(nextFloor))
                {
                    Console.WriteLine($"You are on floor {i}");
                }
            } 
            else if (startingFloor < nextFloor)
            {
                foreach (int i in lift.LiftUp(nextFloor))
                {
                    Console.WriteLine($"You are on floor {i}");
                }
            }
            else Console.WriteLine($"Lift floor {lift.ShowLiftFloor()} is actual floor");
        }
    }
}
