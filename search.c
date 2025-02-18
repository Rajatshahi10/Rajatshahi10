// C program to implement linear
// search in unsorted array
#include <stdio.h>

// Function to implement search operation
int search(int arr[ ],int n,int key ){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        return i;
    }
    return -1;
}

// Driver's Code
int main()
{
    int arr[] = { 12, 34, 10, 6, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Using a last element as search element
    int key = 10;
  
      // Function call
    int position = search(arr, n, key);

    if (position == -1)
        printf("Element not found");
    else
        printf("Element Found at Position: %d",
               position + 1);

    return 0;
}
