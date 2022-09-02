#include "pointerLogic.h"



/*------------------------------------------------*/
/*                  POINTER PRIMERS               */
/*------------------------------------------------*/
void passPointerToFunction(int* innerPointer)
{
    *innerPointer = 50;
}

void pointerLogic()
{
    int myValue = 10;
    int* pointer_to_myValue = NULL;
    pointer_to_myValue = &myValue;

    printf("The address of int variable pointer_to_myValue : %p \n", pointer_to_myValue);
    printf("The address of pointer variable pointer_to_myValue : %p \n", &pointer_to_myValue);
    printf("The value pointed by pointer variable pointer_to_myValue : %i\n", *pointer_to_myValue);

    //BEFORE PASSING INSIDE THE FUNCTION
    int myValue2 = 100;
    int* outerPointer = &myValue2;
    printf("BEFORE The address of int variable outerPointer : %p \n", outerPointer);
    printf("BEFORE The address of pointer variable outerPointer : %p \n", &outerPointer);
    printf("BEFORE The value pointed by pointer variable outerPointer: %i\n", *outerPointer);

    passPointerToFunction(outerPointer);

    //AFTER PASSING INSIDE THE FUNCTION
    printf("AFTER The address of int variable outerPointer : %p \n", outerPointer);
    printf("AFTER The address of pointer variable outerPointer : %p \n", &outerPointer);
    printf("AFTER The value pointed by pointer variable  outerPointer: %i\n", *outerPointer);


    /*
    //*punLenOut = &unFullLength;  -- print this inside the skillbank
    //change what it points to
    //*punLenOut = *punLenOut + sizeof(int)*1;   -- goes from 9 to 13
    *punLenOut = *punLenOut + 1;   //-- goes from 9 to 10
    */
}


/*------------------------------------------------*/
/*              POINTER TO ARRAY ITERATION        */
/*------------------------------------------------*/
void pointerToArrayIteration()
{
    printf("currently under construction\n");
}

/*------------------------------------------------*/
/*    SCOPE CIRCUMVENTION BY PASSING PTR AS ARGS  */
/*------------------------------------------------*/

void passPtrAsArgToGetScope()
{
    printf("currently under construction\n");
}