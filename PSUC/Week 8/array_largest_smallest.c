/**************************************************
**** Largest and Smallest Number from an Array ****
**************************************************/

//Header files
#include<stdio.h>

//Function prototypes
int * get_array_from_user(int size);
void print_array(int *arr,int size);
void print_smallest(int size,int *arr);
void print_largest(int size,int *arr);

int main()
{
    int size;       //Number of numbers entered
    int *arr;        //Pointer to array of numbers
    printf("____To Print the largest and smallest number from an array____\n\n");

    printf("How many numbers do you want to enter?: ");
    scanf("%d",&size);
    //Array Input
    arr = get_array_from_user(size);
    printf("\nInput array is: ");
    print_array(arr,size);
    print_largest(size,arr);
    print_smallest(size,arr);

    return 0;
}

/*
*Function: get_array_from_user
*-----------------------------
*To get an array of given size from user using console.
*Input
*/
int* get_array_from_user(int size)
{
    int i;
    int * arr=(int*)malloc(size*sizeof(int));
    printf("\nEnter %d numbers: ",size);
    for(i=0;i<size;i++)
        scanf("%d",(arr+i));
    printf("\nArray Stored\n");
    return arr;
}

void print_array(int *arr, int size)
{
    int i;
    for(i=0;i<size;i++)
        printf("%d ",*(arr+i));
}

void print_smallest(int size,int *arr)
{
    int i;
    int min = arr[0];
    for(i =0;i<size;i++)
        if(arr[i]<min)
            min=arr[i];
    printf("\nThe smallest number is %d",min);
}

void print_largest(int size,int *arr)
{
    int i;
    int max = arr[0];
    for(i =0;i<size;i++)
        if(arr[i]>max)
            max=arr[i];
    printf("\nThe largest number is %d",max);
}
