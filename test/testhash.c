#include<stdio.h>
#include "hash.h"
#include <assert.h>

//gcc -I.. ../hash.c testhash.c -o testhash 

int main()
{
    hashfunction(wordList,isAvailable);
    int e=0;

    for (long long i = 0; i <=6999999; i++) {
        if (isAvailable[i])e++;
    }



    assert(e==9077);
    printf("The hash functionality is working perfectly\n");

    
}