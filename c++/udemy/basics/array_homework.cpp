#include<iostream>

using namespace std;

int main()
{
    int inputs;  // no of elements
    int query;   //  no of query elements 

    cout << " Enter the value of input: "<< flush;
    cin >> inputs;
    cout << " Eneter the query element array size ";
    cin >> query;

    int arr[20] ={0};
    int queryarray[5] ={0};
    cout << "Enter the input  array: "<< endl;
    for (int i=0; i< inputs; i++)
    {
        cin >> arr[i];
    }

    cout << " The array entered is:" << endl;
    for(int i=0; i<inputs; i++)
    {
        cout << arr[i] << ", " ;
    }
    cout << endl;

    cout << "Enter the query array: "<< endl;

    for (int i=0; i< query; i++)
    {
        cin >> queryarray[i];

    }
    cout << "The query list is: " << endl ;
    for (int i = 0; i< 5; i++)
    {
        cout << queryarray[i] << ", " ;
    }
    cout << endl;

    for (int i =0; i < query; i++)
    {
        bool found = false;
        int index =0;
        for (int j =0; j < inputs; j++)
        {
            if (arr[j] == queryarray[i])
            {
                index = j;
                found = true;
            }
        }
        if (found)
        {
            cout << "number " << arr[index] << " found at" << index << endl;
        }
    }



}
