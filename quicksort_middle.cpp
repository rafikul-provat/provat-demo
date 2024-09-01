#include <iostream>
#include <algorithm>
using namespace std;
int partition(int arr[],int low,int hi){
    int mid=(low+hi)/2;
    int pivot=arr[mid];
    swap(arr[mid],arr[hi]);
    int i=low-1;
    for(int j=low;j<hi;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[hi]);
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

