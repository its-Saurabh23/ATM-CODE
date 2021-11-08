#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number of arry\n";
    cin>>n;
    cout<<"Enter the of elements ";
    int arr[n];
    for (int  i = 0; i <n; i++)        //loop for taking input//
    {
        cin>>arr[i];
    }
for (int  i = 0; i <n-1; i++)           

    for (int j = i+1; j <n; j++)
    {
    if (arr[j]<arr[i])                     //comparing//
    {
     int temp = arr[j];                    //swapping.//
     arr[j] = arr[i];
     arr[i] = temp;
    }
    
    }
    

for (int i = 0; i <n; i++)
{
    cout<<arr[i]<<" ";
    cout<<endl;
}


    
    return 0;
}