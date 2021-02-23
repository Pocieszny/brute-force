/*
    Project : ABC Shitty Brute-force
    Author  : Pocieszny
*/

#include <iostream>

int main ()
{
    unsigned char alph[3]       {'a', 'b', 'c'};
    unsigned short int num[3]   {0, 0, 0};

    while (true)
    {
        std::cout << alph[num[0]] << alph[num[1]] << alph[num[2]] << '\n';
        
        if (num[2] < 2)
            ++num[2];
        else if (num[1] < 2)
        {
            ++num[1];
            num[2] = 0;
        } else
        {
            if (num[0] == 2)
                break;
            ++num[0];
            num[1] = 0;
            num[2] = 0;
        }
    }
}
