using System;
using System.Collections.Generic;

namespace _4MD_Rihards_Jastržemskis_
{
    public class Functions
    {
        string firstNumber, secondNumber, operation;
        bool veryFirstNumber = true;
        decimal result;
        Dictionary<string, string> numberDictionary = new Dictionary<string, string>() {
            {"buttonOne","1"},{"buttonTwo","2"},{"buttonThree","3"},{"buttonFour","4"},{"buttonFive","5"},
            {"buttonSix","6"},{"buttonSeven","7"}, {"buttonEight","8"},{"buttonNine","9"},{"buttonZero","0"}
        };

        public string FirstNumber
        {
            set { firstNumber = value; }
            get { return firstNumber; }
        }

        public string SecondNumber
        {
            set { secondNumber = value; }
            get { return secondNumber; }
        }

        public string Operation
        {
            set { operation = value; }
            get { return operation; }
        }

        public decimal Result
        {
            set { result = value; }
            get { return result; }
        }

        public string NumberInput(string buttonName)
        {
            var numberLenght = SecondNumber.Length;
            if (numberLenght > 6) return SecondNumber;

            if (SecondNumber == "0")
                return numberDictionary[buttonName];
            else
                return SecondNumber + numberDictionary[buttonName];
        }

        public string OtherInput(string buttonName)
        {
            if (SecondNumber != "0" && buttonName == "buttonAbs")
            {
                if (SecondNumber.Contains("-"))
                    return SecondNumber.Remove(0, 1);
                else
                    return $"-{SecondNumber}";
            }
            else
            {
                if (SecondNumber.Contains(","))
                    return SecondNumber;
                else
                    return $"{SecondNumber},";
            }
        }

        public string MathematicalOperators()
        {
            var firstNumberDecimal = Convert.ToDecimal(FirstNumber.Replace(",", "."));
            var secondNumberDecimal = Convert.ToDecimal(SecondNumber.Replace(",", "."));

            if (veryFirstNumber)
            {
                FirstNumber = SecondNumber;
                veryFirstNumber = false;
                SecondNumber = "0";
                return FirstNumber;
            }
            else if (Operation == "+")
            {
                Result = secondNumberDecimal + firstNumberDecimal;
            }
            else if (Operation == "-")
            {
                Result = secondNumberDecimal - firstNumberDecimal;
            }
            else if (Operation == "x")
            {
                Result = secondNumberDecimal * firstNumberDecimal;
            }
            else if (Operation == "/")
            {
                Result = secondNumberDecimal / firstNumberDecimal;
            }

            var resultString = Convert.ToString(Result).Replace(".", ",");
            FirstNumber = resultString;
            SecondNumber = "0";
            return resultString;
        }

        public string OtherOperators()
        {
            if (Operation == "=")
            {
                veryFirstNumber = true;
                SecondNumber = "0";
            }
            else if (Operation == "S")
            {
                veryFirstNumber = false;
                FirstNumber = SecondNumber;
                SecondNumber = "0";
            }
            else if (Operation == "C")
            {
                veryFirstNumber = true;
                FirstNumber = "0";
                SecondNumber = "0";

            }
            else if (Operation == "I")
            {
                SecondNumber = FirstNumber.Length > 7 ? FirstNumber.Substring(0, 7) : SecondNumber = FirstNumber;
                FirstNumber = "0";
            }

            return FirstNumber;
        }
    }
}
