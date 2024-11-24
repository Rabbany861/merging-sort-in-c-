
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int na,nb;
    cin>>na>>nb;
    int arr1[na];
    int arr2[nb];
    for(int i=0; i<na; i++)
    {
        cin>>arr1[i];
    }
    for(int i=0; i<nb; i++)
    {
        cin>>arr2[i];
    }

     for(int i=0; i<na; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<nb; i++)
    {
       cout<<arr2[i]<<" ";
    }
    cout<<endl;
    int arr3[na+nb];
    int i=0;
    int j=0;
    int k=0;
    while(i<na&&j<nb)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k] =arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] =arr2[j];
            j++;
            k++;
        }

    }
    while(i<na)
    {
        arr3[k] =arr1[i];
        i++;
        k++;
    }
    while(j<nb)
    {
        arr3[k] =arr2[j];
        j++;
        k++;
    }
    for(int i=0; i<(na+nb); i++)
    {
        cout<<arr3[i]<<" ";
       // return 0;
    }
    return 0;
}
