namespace CalculatorTask
{
    public class Calculator
    {
        private double valueX;
        private double valueY;
        private bool valueXAdded = false;
        private bool valueYAdded = false;

        public Calculator() 
        { 

        }

        public void InputValue(double value)
        {
            if (!valueYAdded)
            {
                if (valueXAdded)
                {
                    valueY = value;
                    valueYAdded = true;
                }
                else
                {
                    valueX = value;
                    valueXAdded = true;
                }
            } 
        }

        public double ToSumme()
        {
            valueYAdded = false;
            return valueX += valueY;
        }

        public double ToMinuse()
        {
            valueYAdded = false;
            return valueX -= valueY;
        }

        public double ToMultiply()
        {
            valueYAdded = false;
            return valueX *= valueY;
        }

        public double ToDivide()
        {
            valueYAdded = false;
            return valueX /= valueY;
        }

        public double ReadResult()
        {
            return valueX;
        }
    }
}
