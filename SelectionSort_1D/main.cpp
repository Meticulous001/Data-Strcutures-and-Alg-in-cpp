#include <iostream>

using namespace std;

int main()
{
    int arr[] = {81,2,13,4,1};

    cout<<"before sorting"<<endl;
     for(int i=0; i<5; i++)
        {
            cout<< arr[i] <<" " <<endl;
        }

        for(int i=1; i<5; i++)
        {
            int temp1;
            int temp2;

            if(arr[i]<arr[i-1])

                temp1=arr[i];
                temp2=arr[i-1];

                arr[i]=temp2;
                arr[i-1]=temp1;



            }


            cout<<endl;
            cout<<endl;
         for(int i=0; i<5; i++)
        {
            cout<< arr[i] <<" " <<endl;
        }
    return 0;
}
