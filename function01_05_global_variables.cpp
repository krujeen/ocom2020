#include <stdio.h>
#include <iostream>

using namespace std;

int a;      /*global variables*/

int printA()
{
    a = 5;
    printf("%d\n",a);
}


int main()
{
    a = 3;
    printf("%d\n",a);
    printA();
    printf("%d\n",a);
    return 0;
}
