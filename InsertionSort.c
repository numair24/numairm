/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int disp( int *arr,int size)
{
    int i, value, j,c=0,temp;
    for (i = 1; i < size; i++) {
      value=arr[i];
      j = i;

      while ((j > 0) && (arr[j - 1] > arr[j]))
        {
            if(arr[j-1]>arr[j]){
            c++;
        }
        temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }
    c++;
    }

    for(int i = 0; i < size; ++i)
    {
       printf("%d ", arr[i]);
    }
    printf("\n");
    return c;
}

int main()
{
     int size;
     printf("enter size of array: \n");
     scanf("%d",&size);
     int arr[size];
     for (int i=0; i<size; i++)
     {
         scanf("%d", &arr[i]);
     }
     int comparisons=disp(arr,size);
     printf("%d\n", comparisons);
     return 0;
}