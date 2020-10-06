#include <stdio.h>

int func(){
    int intType;
    signed int signedint;
    float floatType;
    double doubleType;
    char charType;
    signed char signedchar;
    short s;
    long l;
    long double ld;
    printf("Size of int: %ld bytes\n", sizeof(intType));
    printf("Size of signed int: %ld bytes\n", sizeof(signedint));
    printf("Size of float: %ld bytes\n", sizeof(floatType));
    printf("Size of double: %ld bytes\n", sizeof(doubleType));
    printf("Size of char: %ld byte\n", sizeof(charType));
    printf("Size of signed char: %ld byte\n", sizeof(signedchar));
    printf("Size of short: %ld bytes \n", sizeof(s));
    printf("Size of long: %ld bytes \n", sizeof(l));
    printf("Size of long-double: %ld bytes \n", sizeof(ld));
}

int main(){

    printf("Size of int: %ld bytes\n", sizeof(8));
    printf("Size of signed int: %ld bytes\n", sizeof(-6));
    printf("Size of float: %ld bytes\n", sizeof(7.6));
    printf("Size of double: %ld bytes\n", sizeof(10));
    printf("Size of char: %ld byte\n", sizeof("c"));
    printf("Size of signed char: %ld byte\n", sizeof("g"));
    printf("Size of short: %ld bytes \n", sizeof(3));
    printf("Size of long: %ld bytes \n", sizeof(1124332));
    printf("Size of long-double: %ld bytes \n", sizeof(231423));

}

