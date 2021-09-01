#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; //to store size
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Array before sorting \n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl<<endl;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
        cout<<endl;
        for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";

    }
    cout<<"\n\nArray after sorting \n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";

    return 0;
}
