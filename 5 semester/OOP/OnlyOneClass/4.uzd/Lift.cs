using System.Collections.Generic;

namespace LiftTask
{
    public class Lift
    {
        private int liftFloor;

        public Lift(int startingFloor)
        {
            liftFloor = startingFloor;
        }

        public IEnumerable<int> LiftUp(int value)
        {
            for(int i = liftFloor; i <= value; i++)
                yield return liftFloor++;
        }

        public IEnumerable<int> LiftDown(int value)
        {
            for (int i = liftFloor; i >= value; i--)
                yield return liftFloor--;
        }

        public int ShowLiftFloor()
        {
            return liftFloor;
        }
    }
}
