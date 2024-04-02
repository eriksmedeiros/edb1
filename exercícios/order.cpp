#include <iostream>
#include <vector>
#include "include/order.hpp"

using namespace std;

int orderCheck(int vector[])
{
    int acrescing = 1;

    for (int i = 0; i < 4; i++)
    {
        if (vector[i] > vector[i + 1])
        {
            acrescing = 0;
            break;
        }
    }

    return acrescing;
}
