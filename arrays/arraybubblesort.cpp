#include<iostream>
using namespace std;

void traversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "   ";
    }
}

int main(){
     int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];    
    } 

   traversal(arr,n);
   cout<<endl;

   for(int i=0;i<n-1;i++){
       for(int j=0;j<n-i;j++){
           if(arr[j+1]<arr[j]){
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }
       }
   }

   traversal(arr,n);
    return 0;
}