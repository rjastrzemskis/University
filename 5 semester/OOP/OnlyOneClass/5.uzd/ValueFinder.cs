using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ValueFinderTask
{
    public class ValueFinder
    {
        List<int> myValues = new List<int>();

        public ValueFinder(List<int> values)
        {
            myValues = values;
        }

        public int MinValue()
        {
            return myValues.Min();
        }

        public int MaxValue()
        {
            return myValues.Max();
        }

        public double AvgValue()
        {
            return myValues.Average();
        }

        public IEnumerable<int> ShowValues()
        {
            foreach (var value in myValues)
                yield return value;
        }
    }
}
