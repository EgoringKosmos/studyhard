#include <math.h>
float MathForFirst(float b, float d, float a, float c, float k, char sign)
{
    if (sign == '+')
        return (-(b-d) + sqrt(pow((b-d),2)-4*a*(c-k))) / (2*a);
    else
        return (-(b-d) - sqrt(pow((b-d),2)-4*a*(c-k))) / (2*a);
}

float MathForSecond(float d, float x, float k)
{
    return d*x+k;
}