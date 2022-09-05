#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=(start/2)/(end/2);
    while(start<=end){
if(arr[mid]==key){
    return mid;
}else if(arr[mid]<key){
    start=mid+1;
}else{
    end=mid-1;
}
mid=(start/2)+(end/2);
    }
    return -1;
}
int main(){
 int   arr[5]={12,18,25,36,71};
 int index=binarySearch(arr,5,36);
 cout<<" is located at index "<<index<<endl;
}