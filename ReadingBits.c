#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <complex.h>


int main() {

    int num,position,newNum;

    printf("Enter number:");
    scanf("%d",&num);

    printf("Enter bit to check:");
    scanf("%d",&position);

    newNum = ( 1 << position) | num;

    printf("Number before %d bit: %d in decimal\n",position,num);
    printf("Number after %d bit: %d in decimal",position,newNum);

    return 0;
}

