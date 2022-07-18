#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>

//Declaring functions
double mean(int *x, int size);
double median(int *x, int size);
int mode(int *x, int size);

int main(){
    int i, n;

    printf("\nEnter the number of elements\n");
    scanf("%d",&n);

    int a[n];

    printf("Enter the set of numbers\n");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

//Calling and printing different values
printf("Mean = %lf", mean(a, n));

printf("\nMedian = %d", median(a, n));

mode(a, n );

return 0;
}


double mean(int *x, int size){
    int i;
    double sum = 0;

//Finding total sum
    for(i = 0; i < size; i++){
    sum = sum + (double)x[i];
    }

//Returning mean by dividing sum by number of eleents
    return sum / (double)size;
}

int median(int *x, int size){
    int i, j, t;

//Sorting the array
    for(i = 0; i < size; i++){
    for(j = i + 1; j < size; j++)
    {
        if(x[i] > x[j])
        {
        t = x[i];
        x[i] = x[j];
        x[j] = t;
        }
    }
}

//Finding the median when number of elements is even
if(size % 2 == 0)
return ((x[size / 2] + x[(size - 1) / 2]) / 2);

//When number of elements are odd
else
return x[(size - 1) / 2];

return 0;
}


int mode(int *x, int size)
{
int i, j, mode, max = 0, k, c;

//To store the most occured element
int b[size];

for(i = 0; i < size - 1; i++)
{
mode=0;

//Counting number of occurance of every elements
for(j = i + 1;j < size; j++)
{
if(x[i] == x[j])
{
mode++;
}
}

//Storing the elements with max occurance
if((mode > max) && (mode != 0))
{
k=0;
max=mode;
b[k] = x[i];
k++;
}

else if(mode==max)
{
b[k] = x[i];
k++;
}
}

//To check if all element occur once
for(i = 0; i < size; i++)
{

if(x[i] == b[i])
c++;
}

//In case all elements occur same number of time, hence no mode
if(c==size){
printf("\nThere is no mode");
}
//printing all modes of the list
else
{
printf("\nMode = ");

for(i = 0;i < k; i++)
printf("%d ",b[i]);
}

return 0;
}
