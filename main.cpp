/*
    [Project] : Brutforce Algorithm
    [Author]  : Pocieszny
*/ 

#include <iostream>

constexpr short int len     {5};
constexpr short int alen    {6};

unsigned char alph[alen + 1]    {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
unsigned short int num[len + 1] {};

bool isDone ();

inline void output ()
{
    for (unsigned short int x {0}; x <= len; ++x)
        printf ("%c", alph[num[x]]);
    printf ("\n");
}

int main ()
{
    std::ios_base::sync_with_stdio (1);

    while (isDone())
    {
        output();

        for (short int c {len}; c >= 0; --c)
        {
            if (++num[c] <= alen)
                break;
            else
                num[c] = 0;
        }
    }
}

bool isDone ()
{
    for (unsigned short int x {0}; x <= len; ++x)
        if (num[x] != alen)
            return true;
    output();
    return false;
}
