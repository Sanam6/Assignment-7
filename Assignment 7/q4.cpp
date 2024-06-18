#include<iostream>
using namespace std;
int minele(int arr[],int n){
    int min=arr[0];
    for(int i =0;i<n;i++){
        if(min>arr[i])
        min=arr[i];
    }
    return min;
}
int main()
{
int n;
cin>>n;
int arr1[n],arr2[n];
cout<<"Enter Elements of First Array:"<<endl;
for(int i =0;i<n;i++){
    cin>>arr1[i];
}
cout<<"Enter Elements of Second Array"<<endl;
for(int i =0;i<n;i++){
    cin>>arr2[i];
}
cout<<"Sum = "<<minele(arr1,n)+minele(arr2,n);

return 0;
}