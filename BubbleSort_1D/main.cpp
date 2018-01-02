#include <iostream>

using namespace std;



///Bubble Sort
int main()
{
    int arrsize = 6;
    int arr[arrsize] = {19,0,4,1,81,2};
    cout<<"before sorting" <<endl;
     for(int i=0; i<arrsize; i++)
        {
            cout<< arr[i] <<" " <<endl;
        }

    cout<<endl;


    for(int i=1; i<=arrsize-1; i++)
        for(int j=1; j<=(arrsize-1); j++)
    {
        if(arr[j]<arr[j-1])   ///for descending, change to greater-than
            swap(arr[j],arr[j-1]);

    }


        cout<<"after sorting " <<endl;
     for(int i=0; i<arrsize; i++)
        {
            cout<< arr[i] <<" " <<endl;
        }

    return 0;
}
