#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int key;
    int mid;
    int flag=0;
    cin >> n;
    int array[n];
    for(i=0;i<n;i++)
    {
        cin >> array[i];
    }
    cin >> key;
    int low=0,high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==array[mid])
        {
            flag=1;
            break;
        }
        else if(key>array[mid])
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(flag==1)
    {
        cout << "the key : " << key << endl;
        cout << "the position : " << mid+1 ;
    }
    else{
        cout << "Nothing";
    }

}
