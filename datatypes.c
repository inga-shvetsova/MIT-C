/* datatypes.c 
  Created by Inga Shvetsova, 10/05/2024 */


#include <stdio.h>

int main(void) {

    /* Numeric */

    int integerDecimal = 3;
    long longDecimal = 3L;
    unsigned long unsignedLongDecimal = 3UL;

    int integerHex = 0xA; /* hexadecimal */
    int integerOctal = 012; /* octal number */

    float floatPi = 3.14159F;
    float floatPiShort = 3.14F; /* floating point */
    double doublePi = 3.1415926535897932384L;


    /* Character */

    const char charA = 'A';
    const char charHexA = '\x41'; /* specified in hex */
    const char charOctalA = '\101'; /* specified in octal */

    char string[] = "hello world";
    char concatenatedString[] = "hello" "world";
    
    printf("Integer Decimal: %d\n", integerDecimal);
    printf("Long Decimal: %ld\n", longDecimal);
    printf("Unsigned Long Decimal: %lu\n", unsignedLongDecimal);

    printf("Integer Hex: %x\n", integerHex);
    printf("Integer Octal: %o\n", integerOctal);

    printf("Float Pi: %f\n", floatPi);
    printf("Float Pi (short): %f\n", floatPiShort);
    printf("Double Pi: %lf\n", doublePi);

    printf("Character A: %c\n", charA);
    printf("Character Hex A: %c\n", charHexA);
    printf("Character Octal A: %c\n", charOctalA);

    printf("String: %s\n", string);
    printf("Concatenated String: %s\n", concatenatedString);
    
    return 0;
    
   }
