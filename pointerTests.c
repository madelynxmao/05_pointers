/*
Madelyn Mao
System Level Programming
K05 -- that way madness lies
2020-10-08
*/

#include <stdio.h>

int main(){

    //1 Declare and initialize variables of types char, int, and long.
    char a = 'm';
    int b = 100;
    long c = 1000;

    //2 Print each variable in hex and decimal, the hex value should be equivalent to the decimal values
    printf("address of a in hex: %p\n", &a);
    printf("address of a in decimal: %lu\n", &a);

    printf("address of b in hex: %p\n", &b);
    printf("address of b in decimal: %lu\n", &b);

    printf("address of c in hex: %p\n", &c);
    printf("address of c in decimal: %lu\n", &c);
    printf("\n");

    //3 Declare and initialize pointers for each of your variables.
    char *ap = &a;
    int *bp = &b;
    long *cp = &c;

    //4 Print out the values of each pointer.
    printf("pointer value of *ap %p\n", *ap);
    printf("pointer value of *bp %p\n", *bp);
    printf("pointer value of *cp %p\n", *cp);
    printf("\n");

    //5 Use the pointers to modify the values of the original variables and print out the new values.
    *ap = 'n';
    *bp = 101;
    *cp = 1001;

    printf("new value of a %c\n", a);
    printf("new value of b in hex %d\n", b);
    printf("new value of c in hex %ld\n", c);
    printf("\n");

    //6 Declare and initialize an unsigned int variable and 2 pointers that point to it, 
    // one should be an int * and the other should be a char *
    unsigned int d = 2000;
    char *dp1 = &d;
    int *dp2 = &d;

    //7 Print out the value of each pointer (this should be the memory address), 
    // and de-reference each pointer to print out the value each points to.
    // p: 0x7ffee3dbd938 p points to: 133.
    printf("d: %p", &d);
    printf(" p points to: %p\n", *dp1);

    printf("d: %p", &d);
    printf(" p points to: %p\n", *dp2);

    printf("\n");
    
    //8 Print out your unsigned int in decimal and hex.

    printf("unsigned int in hexadecimal: %x\n", d);
    printf("unsigned int in decimal: %u\n", d);

    printf("\n");

    //9 Use the char * to print out each individual byte of your unsigned int.
    printf("Each byte in decimal: \n");
    int i;
    for (i = 0; i < 4; i++){
        printf("%d : %hhu\n", i + 1, *(dp1 + i));
    }
    for (i = 0; i < 4; i++){
        printf("%d : %hhx\n", i + 1, *(dp1 + i));
    }
   printf("\n");

   //10 
   //Print out the unsigned int in both hex and decimal after each modification. 
   // When done, print out each byte like in step 9. 
   // You may need to reset the char * so that it points to the unsigned int, depending on how you wrote step 4 out.
   int j;
   for (int j = 0; j < 4; j++){
       *(dp1 + j) += 1;             // Used the char * to increment each byte of the unsigned int by 1.
       printf("unsigned int in hex: %x\n", d);
       printf("unsigned int in dec: %u\n\n", d);
   }

   for (j = 0; j < 4; j++){
       printf("byte %d in decimal : %hhu\n", j + 1, *(dp1 + j));
   }

   for (j = 0; j < 4; j++){
       printf("byte %d in hex : %hhx\n", j + 1, *(dp1 + j));
   }

   printf("\n");

   // same as 10 but add 16

   int k = 0;
   for (k = 0; k < 4; k++){
       *(dp1 + k) += 16;
       printf("d in hex: %x\n", d);
       printf("d in dec: %u\n\n", d);
   }

   for (k = 0; k < 4; k++){
       printf("byte %d in decimal : %hhu\n", k + 1, *(dp1 + k));
   }

   for (k = 0; k < 4; k++){
       printf("byte %d in hex : %hhx\n", k + 1, *(dp1 + k));
   }
}