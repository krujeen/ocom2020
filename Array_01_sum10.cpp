#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int num[10],sum,i;
    for(i = 0; i < 10; i++){
        scanf("%d",&num[i]);
    }
    sum = 0;
    for(i=0;i<10;i++) {
        sum = sum + num[i];
    }
    printf("sum is %d\n",sum);
    return 0;
}





