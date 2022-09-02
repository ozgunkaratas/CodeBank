#include "binaryOperations.h"



/*------------------------------------------------*/
/*              BITWISE OPERATIONS                */
/*------------------------------------------------*/
void bitMasking()
{
    unsigned char ucFormatByte1 = 0x00;
    unsigned int  len = 6;

    ucFormatByte1 = (unsigned char)len;
    ucFormatByte1 = ucFormatByte1 | (1 << 6); //create a 0x00000001, shift it 6 times to the left, OR mask it
                                              // to set the 7th bit as 1 
    ucFormatByte1 = ucFormatByte1 | (1 << 7); //create a 0x00000001, shift it 7 times to the left, OR mask it
                                              // to set the 8th bit as 1

    printf("expected value : 11000110\n");
    printf("in hex : %x\n", ucFormatByte1);
    printf("in dec : %d\n", ucFormatByte1);

}

void bitShifting()
{
    unsigned char temp = 0x01;
    printf("old value: %x", temp); // 1
    //shift it one time to the left, going from 0x00000001 to 0x00000010
    temp = temp << 1;
    printf("new value: %x", temp); // 2
    //shift it one time to the left, going from 0x00000010 to 0x00000100
    temp = temp << 1;
    printf("new value: %x", temp); // 4

    unsigned char temp2 = 0xC0;
    printf("old value: %x", temp2);
    temp2 = temp2 >> 6; //shift all of the bits 6 times to the right from 0x11000000 to 0x00000011
    printf("new value: %x", temp); // 2

    unsigned char ucFormatByte = 0x00;
    printf("old value: %x", ucFormatByte); // 2

    ucFormatByte = 3 << 6 | 0x07; // makes 00000111 into 11000111 by introducing 11000000 and OR masking it.
    printf("new value after 3<<6 | 0x07: %x", ucFormatByte); // 2


}

/*------------------------------------------------*/
/*              BINARY NUMBER PRINTING            */
/*------------------------------------------------*/
void printBinaries(unsigned char ucInput)
{
    int i;
    printf("in hex : %x\n", ucInput);
    printf("in dec : %d\n", ucInput);
    printf("in binary: ");
    for (i = 1 << 7; i > 0; i = i / 2)
    {
        (ucInput & i) ? printf("1") : printf("0");
    }
}

/*------------------------------------------------*/
/*              RAW BITS CHECKSUM                 */
/*------------------------------------------------*/
unsigned char createChecksum(unsigned char* data, unsigned len)
{
    unsigned char checksum = 0;

    for (unsigned i = 0; i < len; i++)
    {
        checksum += data[i];
    }
    printf("checksum is: %x\n", checksum);
    return checksum;
}