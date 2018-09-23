/*********************************************
**** Print the prime number from an Array ****
*********************************************/

//Header files
#include<iostream>

using namespace std;

//Function prototypes
int * get_array_from_user(int size);
void print_array(int *arr,int size);
void print_prime(int size, int *arr);
int check_prime(int number);

int main()
{
    int size;       //Number of numbers entered
    int *arr;        //Pointer to array of numbers
    cout<<"____To Print all the prime numbers from an array____\n\n";

    cout<<"How many numbers do you want to enter?: ";
    cin>>size;
    //Array Input
    arr = get_array_from_user(size);
    cout<<"\nInput array is: ";
    print_array(arr,size);
    print_prime(size,arr);

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
    int * arr = new int[size*sizeof(int)];
    cout<<"\nEnter "<<size<<" numbers: ";
    for(i=0; i<size; i++)
        cin>>arr[i];
    cout<<"\nArray Stored\n";
    return arr;
}

void print_array(int *arr, int size)
{
    int i;
    for(i=0; i<size; i++)
        cout<<arr[i]<<" ";
}

void print_prime(int size, int *arr)
{
    cout<<endl<<"Prime numbers are: ";
    for(int i =0; i<size; i++)
        if(check_prime(arr[i]))
            cout<<arr[i]<<" ";
}

int check_prime(int number)
{
    if(number==1)
        return 0;
    for(int i =2;i<=number/2;i++)
        if(number%i==0)
            return 0;
    return 1;
}
