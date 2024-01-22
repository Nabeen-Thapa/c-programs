#include <stdio.h>

int main() {
	int i;
   int arr[] = {10, 20, 5, 15, 25};
   int n = sizeof(arr) / sizeof(arr[0]);
   int smallest = arr[0], largest = arr[0];
   
   for ( i = 1; i < n; i++) {
      if (arr[i] < smallest) {
         smallest = arr[i];
      }
      if (arr[i] > largest) {
         largest = arr[i];
      }
   }

   printf("Smallest element: %d\n", smallest);
   printf("Largest element: %d\n", largest);

   return 0;
}

