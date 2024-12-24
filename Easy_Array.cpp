#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    //Vector way
    short int n;
        cout<<"enter n :"<<endl;
    scanf("%d",&n);
    vector<int>arr;
    for (int i=0 ; i<n;i++)
    {
        int val;
        cout<<"enter "<<endl;
        //scanf("%d ",&val);
        cin>>val;
        arr.push_back(val);
    }

    for (int i=n-1 ;i>=0;i--)
    {
        printf("%d ",arr.at(i));
    }
    // Array way
    // short int N;
    // scanf("%d",&N);
    // int arr[N];
    // for(int i=0 ;i<N ;i++)
    // {
    //     scanf("%d",&arr[i]);
    //     //cin>>arr[i];
    // }
    // for(int i=N-1 ;i !=-1 ;--i)
    // {
    //   printf("%d ",arr[i]);
    //   //cout<<arr[i]<<" " ;
    // }cout<<"\n";
    return 0;
    
}
