#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    //Vector way
    int n ,q;
    cin>> n>>q;
    int sizeOfSeq;
    vector<vector<int>> matrix(n);
    for (int i=0;i<n;i++)
    {
        // cout<<"enter sizeOfSeq: "<<endl;
        cin>>sizeOfSeq;
        matrix[i].resize(sizeOfSeq); //expand
        for (int j=0;j<sizeOfSeq;j++)
        {
           //  cout<<"enter element : ";
            int e;  cin>>e; matrix[i][j]=e;
        }
    }
    // cout<<"----------print mtrix after assign--------"<<endl;
    //  for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<matrix[i].size();j++)
    //     {
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    // cout<<"--------"<<endl;
    // cout<<"\n";
    /////////////////////////
    // cout<<"search for num using i , j :"<<endl;
    int ii,jj;
    int arr_answers[q];
    for (int numOfQ=0;numOfQ<q;numOfQ++)
    {
    // cout<<"enter indices i , j : "<<endl;
    cin >>ii>>jj;
    //cout<<"num is : "<<matrix[ii][jj]<<"\n";
    arr_answers[numOfQ]=matrix[ii][jj];
    }
    for (int numOfQ=0;numOfQ<q;numOfQ++)
    {
    cout<<arr_answers[numOfQ]<<endl;
    }
    return 0;
}
