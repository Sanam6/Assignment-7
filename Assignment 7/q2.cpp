#include<iostream>
using namespace std;
int sumofminandmax(int arr[],int n){
    int min=arr[0];
int max=arr[0];
for(int i=0;i<n;i++)
{
    if(max<arr[i]){
        min=arr[i];
    }
    if(min>arr[i]){
        min=arr[i];
    }
}
return min+max;
}

int main()
{
int n;
cin>>n;
int arr[n];
cout<<"Enter Elements:"<<endl;
for(int i =0;i<n;i++){
    cin>>arr[i];
}

cout<<"Sum = "<<sumofminandmax(arr,n);

return 0;
}