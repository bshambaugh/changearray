#include <stdio.h>

int n, pos, arr[100], i, num;
int main() {

n = 5;
arr[0] = 1;
arr[1] = 2;
arr[2] = 3;
pos = 4;
num = 4;

for( i = n; i >= pos; i--) {
            arr[i] = arr[i -1];
}

arr[pos-1] = num;

// Increment the size of an array
n++;

// Array after inserting new element
for( i = 0; i < n; i++) {
    printf(" %d ", arr[i]);
}
  
return 0;

}
