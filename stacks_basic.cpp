#include <iostream>

using namespace std;

int arr[20];
int top=-1;
int max_size;

int push(int item);
int pop();

int main()
{
    int option, item;
    cout<<"";
    while(1)
    {
        cout<<"\nEnter an Option:\n1. Push\t2. Pop\t3. Exit";
        cin>>option;
        switch(option)
        {
        case 1:
            cout<<"Enter the item to push: ";
            cin>>item;
            if(push(item))
                cout<<endl<<"Cant push item"<<endl;
            else
                cout<<endl<<"Push Successful"<<endl;
            break;
        case 2:


        }
    }
    return 0;
}

int push(int item)
{
    if(top<max_size)

}

int pop()
{


}
