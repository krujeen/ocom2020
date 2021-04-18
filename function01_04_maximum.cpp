#include <stdio.h>
#include <iostream>

using namespace std;

int maximum (int,int,int)

int main()
{
    int x,y,z;
    cin>>x>>y>>z;

    printf("%d",maximum(x,y,z));
    return 0;
}

int maximum (int x,int y,int z)
{
    int max_x = x;
    if (y>max_x)
        max_x = y;
    if (z>max_x)
        max_x = z;
    return max_x;
}
