int power(int p, int q)
{

    if (q == 0)
        return (1);
    else if (q == 1)
        return (p);
    else
        return (p * power(p, (q - 1)));
}