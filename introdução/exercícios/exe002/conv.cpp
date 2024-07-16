#include "conv.h"

float celToFah(float temp)
{
    return temp * 1.8 + 32;
}

float FahTocel(float temp)
{
    return (temp - 32) / 1.8;
}
