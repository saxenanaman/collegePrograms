/************************************************
**** Insert and Delete an Element from array ****
************************************************/

//Header files
#include<iostream>
#include<conio.h>

using namespace std;

//Function prototypes
int * get_array_from_user(int size);
void print_array(int *arr,int size);
void insert_item(int *size,int *arr);
void delete_item(int *size,int *arr);

int main()
{
    int size;       //Number of numbers entered
    int *arr;        //Pointer to array of numbers
    int choice;
    cout<<"____To Insert and Delete an Item From the Array____\n\n";

    cout<<"How many numbers do you want to enter?: ";
    cin>>size;
    //Array Input
    arr = get_array_from_user(size);
    cout<<"\nInput array is: ";
    print_array(arr,size);

    while(1)
    {
        cout<<"Choose an option:\n1.Insert Item\t2.Delete Item\n3.Exit"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            insert_item(&size,arr);
            break;
        case 2:
            delete_item(&size,arr);
            break;
        case 3:
            break;
        default:
            cout<<"\nInvalid choice. Enter Again...";
        }
    }

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
    for(i=0;i<size;i++)
        cin>>arr[i];
    cout<<"\nArray Stored\n";
    return arr;
}

void print_array(int *arr, int size)
{
    int i;
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
}

int insert_item(int * size, int *arr)
{
    int item, pos, temp;
    cout<<"\nEnter Item to insert: ";
    cin>>item;
    cout<<"\nEnter the position to insert the item(starts from 0): ";
    cin>>pos;
    for(int i=0;i<*size;i++)
}
