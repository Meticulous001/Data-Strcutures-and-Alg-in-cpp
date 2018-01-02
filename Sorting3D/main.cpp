#include <iostream>

using namespace std;

int main()
{
    int arr[2][2] = {{18,3},{9,11}};

    int row = 2, col = 2;

    cout<<"before sorting" <<endl;
    for(int i=0; i<row; i++)
    {

        for(int j=0; j<col; j++)
    {
        cout<< arr[i][j] <<" ";
    }
        cout<<endl;
    }

    ///using bubble sort

    for(int i =0; i<row; i++)
    {
        for(int j=0; j<col; j++)

       {

        for(int k=0; j<row; k++)
           {

        for(int m=0; m<col;m++)
        {
        if(arr[k][m]<arr[k+1][m+1])
            swap(arr[k][m],arr[k+1][m+1]);
        }
           }
       }
    }


        cout<<"after sorting" <<endl;
    for(int i=0; i<row; i++)
    {

        for(int j=0; j<col; j++)
    {
        cout<< arr[i][j] <<" ";
    }
        cout<<endl;
    }



    return 0;
}
