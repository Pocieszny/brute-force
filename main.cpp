/*
    [Project] : Brute-force Algorithm
    [Author]  : Pocieszny
*/ 

#include <iostream>

constexpr short int len     {5};
constexpr short int alen    {6};

unsigned char alph[alen + 1]    {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
unsigned short int num[len + 1] {};

inline void output ()
{
    for (unsigned int x {0}; x <= len; ++x)
        putchar_unlocked (alph[num[x]]);
    putchar_unlocked ('\n');
}

inline bool isDone ()
{
    for (unsigned int x {0}; x <= len; ++x)
        if (num[x] != alen)
            return true;
    output();
    return false;
}

int main ()
{
    std::ios_base::sync_with_stdio (0);

    while (isDone())
    {
        output();

        for (int c {len}; c >= 0; --c)
        {
            if (++num[c] <= alen)
                break;
            else
                num[c] = 0;
        }
    }
}
