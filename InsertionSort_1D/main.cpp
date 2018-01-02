#include <iostream>

using namespace std;




int main()
{
        int arrsize;

        cout<<"how many element do you want to insert in the array" <<endl;
        cin>>arrsize;

        int arr[arrsize];

        for(int i=0; i<arrsize; i++)
        {
            cout<<"enter the "<<(i+1)<<" element" <<endl;
            cin>>arr[i];
        }

        ///before insertion sorting

        cout<<"before sorting" <<endl;
        for(int i=0; i<arrsize; i++)
        {
            cout<< arr[i] <<" " <<endl;
        }

        ///after sorting

        for(int i=1; i<=arrsize; i++)

            ///analyze it again
            for(int j=i ; j>=1; j--)
        {
            if(arr[j]<arr[j-1])   ///for descending, change the sign
                swap(arr[j],arr[j-1]);
        }

        cout<<"after sorting" <<endl;
        cout<<endl;
         for(int i=0; i<arrsize; i++)
        {
            cout<< arr[i] <<" " <<endl;
        }


    return 0;
}
