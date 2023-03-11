using System;

namespace CalculatorTask
{
    class Program
    {
        static void Main(string[] args)
        {
            Calculator calculator = new Calculator();
            Console.Write("Enter number: ");
            var number = Convert.ToDouble(Console.ReadLine());
            calculator.InputValue(number);
            Console.Write("Enter second number: ");
            number = Convert.ToDouble(Console.ReadLine());
            calculator.InputValue(number);

            Console.WriteLine("Enter the action to be performed");
            Console.WriteLine("Press 1 for Summe");
            Console.WriteLine("Press 2 for Minuse");
            Console.WriteLine("Press 3 for Divide");
            Console.WriteLine("Press 4 for Multiply");
            var action = Convert.ToInt32(Console.ReadLine());

            if (action == 1)
                calculator.ToSumme();
            else if (action == 2)
                calculator.ToMinuse();
            else if (action ==3)
                calculator.ToDivide();
            else if (action == 4)
                calculator.ToMultiply();

            Console.WriteLine($"Result is {calculator.ReadResult()}");
        }
    }
}
