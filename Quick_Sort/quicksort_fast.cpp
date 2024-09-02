#include <iostream>
#include <algorithm>
using namespace std;
int partition(int arr[],int low,int hi){
    int pivot=arr[low];
    int i=low;
    for(int j=low+1;j<=hi;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[low],arr[i]);
    return i;
}

void quicksort(int arr[],int low, int hi){
  if(low<hi){
    int pivot=partition(arr,low,hi);

    quicksort(arr,low,pivot-1);
    quicksort(arr,pivot+1,hi);
  }
}

void printarr(int arr[],int x){
  for(int i=0;i<x;i++){
    cout<<arr[i]<<" ";
  }
}

int main (){
   int x;
cout<<"Enter array size"<<endl;
cin>>x;
int arr[x];
cout<<"Enter arrays element"<<endl;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
cout<<"\nArray        : ";
printarr(arr,x);
quicksort(arr,0,x-1);
cout<<"\nSorted array : ";
printarr(arr,x);
    return 0;
}
