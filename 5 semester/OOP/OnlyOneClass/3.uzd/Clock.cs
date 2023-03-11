using System;

namespace ClockTask
{ 
    public class Clock
    {
        private int clockHours;
        private int clockMinutes;
        private int clockSeconds;

        public Clock(int hours, int minutes, int seconds)
        {
            if ((hours >= 0) && (hours < 24) && (minutes >= 0) && (minutes < 60) && (seconds >= 0) && (seconds < 60))
            {
                clockHours = hours;
                clockMinutes = minutes;
                clockSeconds = seconds;
            }
            else
            {
                clockHours = 0;
                clockMinutes = 0;
                clockSeconds = 0;
            }
        }

        public void IncrementTime(int hours, int minutes, int seconds)
        {
            clockSeconds += seconds;
            clockMinutes += minutes;
            clockHours += hours;
            if (clockSeconds > 59)
            {
                var leftOverMinutes = (int)clockSeconds / 60;
                var leftOverSeconds = clockSeconds - leftOverMinutes * 60;
                clockSeconds = leftOverSeconds;
                clockMinutes += leftOverMinutes;
            }
            if (clockMinutes > 59)
            {
                var leftOverHours = (int)clockMinutes / 60;
                var leftOverMinutes = clockMinutes - leftOverHours * 60;
                clockMinutes = leftOverMinutes;
                clockHours += leftOverHours;

            }
            if (clockHours > 23)
            {
                var leftOverDays = (int)clockHours / 24;
                var leftOverHours = clockHours - leftOverDays * 24;
                clockHours = leftOverHours;
            }
        }

        public void DecrementTime(int hours, int minutes, int seconds)
        {
            clockSeconds -= seconds;
            clockMinutes -= minutes;
            clockHours -= hours;

            if (clockSeconds < 0)
            {
                var leftOverMinutes = Math.Abs((int)clockSeconds / 60);
                var leftOverSeconds = clockSeconds - leftOverMinutes * -60 + 60;
                clockSeconds = leftOverSeconds;
                clockMinutes -= leftOverMinutes + 1;
            }
            if (clockMinutes < 0)
            {
                var leftOverHours = Math.Abs((int)clockMinutes / 60);
                var leftOverMinutes = clockMinutes + leftOverHours * -60 + 60;
                clockMinutes = leftOverMinutes ;
                clockHours -= leftOverHours + 1;

            }
            if (clockHours < 0)
            {
                var leftOverDays = Math.Abs((int)clockHours / 24);
                var leftOverHours = clockHours + leftOverDays * -24 + 24;
                clockHours = leftOverHours;
            }
        }

        public string ShowTime()
        {
            return $"{clockHours.ToString("D2")}:{clockMinutes.ToString("D2")}:{clockSeconds.ToString("D2")}";
        }
    }
}
