bool even(int k) 
{
    bool even;
    if (k % 2 == 0)
        even = true;
    else
        even = false;
    return even;
}

double radtodeg(double r) 
{
    double deg=0;
    deg = r * 180.0 / M_PI;
    return deg; 
}

int fact2(int n)
{
    int fact = 1;
    for (int i = n; n > 0; n -= 2)
    {
        fact *= n;
    }
    return fact;
}

double power(double x ,int y)
{
    double ver = 1;
    if (y > 0)
    {
        for (int i = 0; i < y; i++)
        {
            ver *= y;
        }
    }
    else 
        if (y < 0)
        {
            for (int i = 0; i > y; i--)
                ver = ver * (1 / x);
        }
        else
        {
            ver = 1;
        }
    return ver;
}
    

