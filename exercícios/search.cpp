#include <iostream>
#include "include/search.hpp"

using namespace std;

int search(int k, int elementos[])
{
    int i = 0;
    do
    {
        if (k == elementos[i])
        {
            return i + 1;
        }
        else if (k < elementos[i])
        {
            return -1;
        }
        i++;
    } while (i < 5);
    return -1;
}