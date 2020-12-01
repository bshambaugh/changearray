struct structArray  {
   char hexArray[4][3];
};

struct concatenatedString {
   char example[2];
};

typedef struct concatenatedString Struct;
typedef struct structArray Hexarray;

Hexarray BinToHexArray(int array[],int length);
Struct merge_Chars(char A, char B);
char* IntToChar(char str1[]);
char* IntToString(int a);
char* fourBitToHex(int array[], int count);
