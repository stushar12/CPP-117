#include <bits/stdc++.h> 
using namespace std; 
void pos(int arr1[],int arr2[],int m,int n)
{
    int j=0;
    for(int i=0;i<m;)
    {
        if(arr2[j]<arr1[i])
        {
            swap(arr1[i],arr2[j]);
            sort(arr2,arr2+n);
        }
        else
        {
            i++;
        }
    }

}
void printing(int arr[], int m)
{
    cout<<"\n";
    for(int i=0;i<m;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main() 
{ 
    int arr1[] = {10}; 
    int arr2[]={2,3};
    int m = sizeof(arr1) / sizeof(arr1[0]) ;
    int n = sizeof(arr2) / sizeof(arr2[0]) ;
    pos(arr1,arr2,m,n);
    printing(arr1,m);
    printing(arr2,n);
} 
