#include <stdio.h>
#include <iostream>

using namespace std;

void Show_A1()
{
    printf("AAA\n");
    printf("BBB\n");

}

void Show_A2()
{
    int i;
    for (i=1;i<20;i++){
        printf("A");
    }

}

void Show_A3(int A)
{
    int i;
    for (i=1;i<A;i++){
        printf("A");
    }

}

int Show_AB (int A,int B)
{
    int x;
    x = A+B;
    return x;
}


int main()
{
    int A,B;

    A = 5;
    B = 10;

    Show_A1();

    return 0;
}
