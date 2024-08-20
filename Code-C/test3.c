#include <stdio.h>

int main()
{
    int val = 10;
    switch (val)
    {
    case 2 + 3:
        printf("Case1");
        break;
    case 2 + 5:
        printf("Case2");
        break;
    case 2 + 8:
        printf("Case3");
        break;
    case 3 + 7:
        printf("Case4");
        break;
    case 10:
        printf("Case5");
        break;
    default:
        printf("Default");
    }
    return 0;
}
