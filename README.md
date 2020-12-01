### This is a bunch of stuff to convert floating point nunber from BH1750 sensor to uint8_t 32 byte array like in https://learn.sparkfun.com/tutorials/cryptographic-co-processor-atecc508a-qwiic-hookup-guide/example-2-sign

## Legacy
There is a lot of cruff built up here from repeated experiments, moved to scratchwork but See: [
returnArraysFromFunc6_8shortI_scratch3_5.c (float to IEEE754 binary) , /changearray/ifstructures/loopbyFour/example1_2_9f.c (binary to hex array if the mergeChars function can be fixed. (Use gdb and valgrind)) now the modified version is in /ifstructures/loopbyFour/FourBitToHex.c

## File update:
## these the files will need to be chained together
/scratchwork/ifstructures/loopbyFour/FourBitToHex_short.c ---> binaryToHexArray.c
### compile: gcc -g binaryToHexArray.c -o binaryToHexArray

/scratchwork/returnArraysFromFunc6_8shortI_scratch3_5.c --->  floatToIEEE754Binary.c
### compile: gcc -g floatToIEEE754Binary -o floatToIEEE754Binary -lm
However, this program has some roundoff error(?), so try: https://www.geeksforgeeks.org/program-for-conversion-of-32-bits-single-precision-ieee-754-floating-point-representation/ .

## now I am doing something like:
gcc -g main.c binToHexArray.c -o main

and hopefully: gcc -g main.c binToHexArray.c floatToIEEE754Binary.c -o main

## managing the memory::
https://valgrind.org/docs/manual/quick-start.html

valgrind floatToIEEE754Binary

valgrind binaryToHexArray

or maybe just main

## running tests:
http://www.throwtheswitch.org/unity/

have something like /test/binToHexArrayTest.c and /test/floatToIEEE754BinaryTest.c that pull in functions from /src/binToHexArray.c and /src/floatToIEEE754Binary.c, respectively.

##temporary

Temporarily I moved the source code for binaryToHexArray.c and floatToIEEE754Binary.c to src_backup and I created a simple folder for example1 tests from the unity project (https://github.com/ThrowTheSwitch/Unity) in src and test. the makefile runs example1 

## questions??
can I move my entire workflow into make??
