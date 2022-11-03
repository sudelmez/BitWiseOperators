#include <stdio.h>
#include <stdlib.h>


void bitwiseshift(int value, int n){
    unsigned short val,val2;
    val =value;
    val2= val<<n;
    bprint(val2); //4 bits shifts left
    printf("x(2)) = %u\n", val2);
}



void bprint(int value){ //returns the bit value
    char str[sizeof(int) * 8 + 1];
    itoa(value, str, 2);
    printf("%0*s\n", sizeof(int) * 8, str);
}


int main()
{
    unsigned int x;
    printf("bir tam sayi giriniz: ");
    scanf("%u", &x);
    bprint(x);
    bprint(~x); //returns the opposite bits
    printf("x = %u\n", x);

    //bitwise shift operators
    bitwiseshift(x,4);
    

    return 0;
}
