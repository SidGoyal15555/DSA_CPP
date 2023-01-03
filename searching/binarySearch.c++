#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr,int size)
{
    //base condition
    if (size==0 || size==1)
    {
        return true ;
    }
    
    //recursive relation
    if(arr[0]>arr[1])
    {
        return false;
    }
    else
    {
        bool remainingPart = isSorted(arr+1,size-1);
        return remainingPart;
    }
}

int main(){

    freopen("input.txt","r",stdin); //can need to change file . this one for taking input
    freopen("output.txt","w",stdout); // this one for output
    int arr[5] = {2,4,6,9,8};
    int size  = 5;

    bool ans = isSorted(arr,size);
    if(ans){
        cout<<"Array is Sorted"<<endl;
    }else
        cout<<"Array is not sorted"<<endl;

}
