### This is a bunch of stuff to convert floating point nunber from BH1750 sensor to uint8_t 32 byte array like in https://learn.sparkfun.com/tutorials/cryptographic-co-processor-atecc508a-qwiic-hookup-guide/example-2-sign

## Legacy
There is a lot of cruff built up here from repeated experiments, but See: [
returnArraysFromFunc6_8shortI_scratch3_5.c (float to IEEE754 binary) , /changearray/ifstructures/loopbyFour/example1_2_9f.c (binary to hex array if the mergeChars function can be fixed. (Use gdb and valgrind)) now the modified version is in /ifstructures/loopbyFour/FourBitToHex.c

## File update:
/scratchwork/ifstructures/loopbyFour/FourBitToHex_short.c ---> binaryToHexArray.c
### compile: gcc -g binaryToHexArray.c -o binaryToHexArray

/scratchwork/returnArraysFromFunc6_8shortI_scratch3_5.c --->  floatToIEEE754Binary.c
### compile: gcc -g floatToIEEE754Binary -o floatToIEEE754Binary -lm
However, this program has some roundoff error(?), so try: https://www.geeksforgeeks.org/program-for-conversion-of-32-bits-single-precision-ieee-754-floating-point-representation/ .

## managing the memory::
https://valgrind.org/docs/manual/quick-start.html

## running tests:
http://www.throwtheswitch.org/unity/
