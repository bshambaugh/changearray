### This is code to convert a floating point nunber to a  uint8_t 32 byte array like in https://learn.sparkfun.com/tutorials/cryptographic-co-processor-atecc508a-qwiic-hookup-guide/example-2-sign

#compile code to test on computer/laptop
$: cd src 
gcc -g floatToIEEE754Binary.c binaryToHexArray.c floatToHexArray.c main.c -o main

## managing the memory::
$: make

or
valgrind -v {target}
https://valgrind.org/docs/manual/quick-start.html

## run everything
$: sh build.sh

## running tests:
$: make

uses
http://www.throwtheswitch.org/unity/
