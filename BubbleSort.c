#include <stdio.h>
 
int bubbleSort(int *A,int N) //bubbleSort function
{
  int ans=0;
  for(int i=0;i<N-1;i++)
  {
    for(int j=0;j<N-i-1;j++)
    {
      if(A[j]>A[j+1])
      {
        int t=A[j];  //swapping
        A[j]=A[j+1];
        A[j+1]=t;
        ans++;   //incrementing ans
      }
    }
  }
  return ans;
}

int main(void) {
  int N;
  scanf("%d",&N); 
  int A[N];
  for(int i=0;i<N;i++)
  {
    scanf("%d",&A[i]);
  }
  int ans=bubbleSort(A,N);
  for(int i=0;i<N;i++)
  {
    printf("%d ",A[i]);
  }
  printf("\n");
  printf("%d\n",ans);
  return 0;
}