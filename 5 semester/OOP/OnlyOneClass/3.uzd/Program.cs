using System;

namespace ClockTask
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter start time by format hh:mm:ss : ");
            var fullTime = Console.ReadLine();
            var hours = Convert.ToInt32(fullTime.Split(":")[0]);
            var minutes = Convert.ToInt32(fullTime.Split(":")[1]);
            var seconds = Convert.ToInt32(fullTime.Split(":")[2]);
            Clock clock = new Clock(hours, minutes, seconds);
            Console.WriteLine($"Time now is {clock.ShowTime()}");

            Console.Write("Enter for how much to increment time by format hh:mm:ss : ");
            fullTime = Console.ReadLine();
            hours = Convert.ToInt32(fullTime.Split(":")[0]);
            minutes = Convert.ToInt32(fullTime.Split(":")[1]);
            seconds = Convert.ToInt32(fullTime.Split(":")[2]);
            clock.IncrementTime(hours, minutes, seconds);
            Console.WriteLine($"Time now is {clock.ShowTime()}");

            Console.Write("Enter for how much to decreament time by format hh:mm:ss : ");
            fullTime = Console.ReadLine();
            hours = Convert.ToInt32(fullTime.Split(":")[0]);
            minutes = Convert.ToInt32(fullTime.Split(":")[1]);
            seconds = Convert.ToInt32(fullTime.Split(":")[2]);
            clock.DecrementTime(hours, minutes, seconds);
            Console.WriteLine($"Time now is {clock.ShowTime()}");
        }
    }
}
