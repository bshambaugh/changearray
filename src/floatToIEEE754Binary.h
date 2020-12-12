struct binArray32 {
   char d[32];
};

typedef struct binArray32 Struct32Int;

typedef union {

        float f;
        struct
        {

                /* Order is important.
                 * Here the members of the union data structure
                 *  use the same memory (32 bits).
                 * The ordering is taken
                 * from the LSB to the MSB. */
                unsigned int mantissa : 23;
                unsigned int exponent : 8;
                unsigned int sign : 1;

        } raw;
} myfloat32;

void printBinary(int n, int i,int array[]);
void printIEEE(myfloat32 var, int l, int m, int k, int a[], int b[], int c[], int d[]);
Struct32Int floatToIEEE754Int(float q);
