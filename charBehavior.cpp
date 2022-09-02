#include "charBehavior.h"

void charPointerToArray()
{
    unsigned char data[] = { 0x86, 0x10, 0xf1, 0x21, 0xe1 };
    unsigned char* pData = data;
    unsigned char* pData2 = &(data[0]); //-- SAME THING AS ABOVE

    printf("char pointer to the data: %p\n", pData);
    printf("char pointer to the data: %p\n", &pData);
    printf("char pointer to the data: %x\n", *pData);
    printf("char pointer to the data: %x\n", *(pData+1)); //1 because unsigned char is 1 byte
    printf("OUT OF BOUNDS:   char pointer to the data: %x\n", *(pData + 10));
}


void printCharArray()
{
    char arr1[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    printf("%.6s\n", arr1);
}


void charDifferences()
{
    char        stringLiteral[] = "hello world!";      // creates an object "stringLiteral", a char array of 11, initialized with the values 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0'
                                                       // where this array is located in memory and how long it lives for, depends on where you declare it.

    char        charLiteral     = 'a';                 // this variable only carries the character "a". 
    const char* ccp             = "a constant string"; // cp is a mutable pointer to an immutable string. you cannot change the contents of what the cp points to (a constant string cannot be changed)
    char* cp                    = &stringLiteral[0];   // cp now points to the first element of the array, represented by stringLiteral. you can read all of the contents by iterating through the elements.

}

