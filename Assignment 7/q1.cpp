#include<iostream>
using namespace std;


int main()
{
int n;
cin>>n;
int arr[n];
cout<<"Enter Elements:"<<endl;
for(int i =0;i<n;i++){
    cin>>arr[i];
}
int odd=0,even=0;
for(int i =0;i<n;i++){
    if (arr[i]%2==0)
    {
        even++;
    }
else{
    odd++;
}    
}
cout<<"Odd Numbers = "<<odd<<endl;
cout<<"Even Numbers = "<<even<<endl;


return 0;
}