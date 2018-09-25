/************************************************
****Largest and Smallest Number from an Array****
************************************************/

//Header files
#include<stdio.h>

//Function prototypes
int * get_array_from_user(int size);
void print_array(int *arr,int size);
int * add2arrays(int size,int * arrA,int * arrB);

int main()
{
    int size;       //Number of numbers entered
    int *arrA, *arrB, *arrC;        //Pointer to array of numbers
    printf("__________To Add Two Arrays__________\n\n");

    printf("How many numbers do you want to enter?: ");
    scanf("%d",&size);
    //Array Input
    printf("\nEnter Array A\n");
    arrA = get_array_from_user(size);
    printf("\nEnter Array B\n");
    arrB = get_array_from_user(size);

    arrC = add2arrays(size,arrA,arrB);

    printf("\nThe sum of arrays is:\n");
    print_array(arrC, size);
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

int * add2arrays(int size,int * arrA,int * arrB)
{
    int * arrC = (int *) malloc(size*sizeof(int));
    int i;
    for(i=0;i<size;i++)
        arrC[i]=arrA[i] + arrB[i];

    return arrC;
}
