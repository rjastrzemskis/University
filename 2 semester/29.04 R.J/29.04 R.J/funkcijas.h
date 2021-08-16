int skait(int x)
{
    int y;
    if (x == 0)
    {
        throw 1;
    }
    if (0 < x && x <= 5)
    {
        y = 8 * x - pow(x, 2);
        return y;
    }
    else
        if (6 <= x && x <= 9)
        {
            throw 2;
        }
        else if (10 <= x && x <= 200)
        {
            y = x + 6;
            return y;
        }
        else
        {
            throw 2;
        }
   
}