#include <iostream>

using namespace std;

int main()
{
    int input;


    cout<< "How many elements do you want to input? "<<"\n";
    cin>>input;

     int arr[input];

    for(int i = 0; i<input; i++)
    {
        cout<<"enter the " <<i+1 <<" number" <<"\n";
        cin>>arr[i];
        }

    for(int j=0; j<input; j++)
    {
        cout<<"Unsorted array " <<arr[j] <<"\n";
    }

    ///using selection sort


    for(int i=1; i<input; i++)
    {
        for(int m=0; m<(input-1); m++)
        {
            int k = m+1;
            int a = arr[m];
            int b = arr[k];


            ///swapping condition

            if(b<a)
            {
                int swap1 = a;
                int swap2 = b;

                arr[m] = b;
                arr[k] = a;
            }


        }

    }
        cout<<"Sorted array " <<"\n";
        for(int c=0; c<input; c++)
        {
            cout<<arr[c] <<endl;

        }







}
