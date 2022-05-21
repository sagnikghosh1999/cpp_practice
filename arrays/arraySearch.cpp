#include<iostream>
using namespace std;


int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    int iter=1;

    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            cout<<iter<<"th iteration"<<endl;
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
            iter++;
        }
        else{
            s=mid+1;
            iter++;
        }
    }
    return -1;
}


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];    
    } 

    int key;
    cin>>key;

    cout<<binarySearch(arr,n,key);



    return 0;
}