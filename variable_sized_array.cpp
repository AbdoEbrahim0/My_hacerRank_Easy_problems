#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    //Vector way
    //in
    // 2 2
    // 3    1 5 4
    // 5    1 2 8 9 3
    // 0 1
    // 1 3
    //out
    //5
    //9
    int n ,q;
    cin>> n>>q;
    int sizeOfSeq;
    vector<vector<int>> matrix(n, vector<int>(q, 0));
    for (int i=0;i<n;i++)
    {
        // cout<<"enter sizeOfSeq: "<<endl;
        
        cin>>sizeOfSeq;
        for (int j=0;j<sizeOfSeq;j++)
        {
            // cout<<"enter element : ";
            int e;
            cin>>e;
            matrix[i][j]=e;

        }
    }
    cout<<"----------print mtrix after assign--------"<<endl;
     for (int i=0;i<n;i++)
    {
        for (int j=0;j<sizeOfSeq;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    // cout<<matrix[0][0]<<" "; //1
    // cout<<matrix[0][1]<<" "; //2
    // cout<<"\n";
    // cout<<matrix[1][0]<<" "; //10
    // cout<<matrix[1][1]<<" "; //20
    // cout<<matrix[1][2]<<" "; //30
    // cout<<"\n";
    /////////////////////////
    // cout<<"search for num using i , j :"<<endl;
    // int ii,jj;
    // int arr_answers[2];
    // for (int numOfQ=0;numOfQ<q;numOfQ++)
    // {
    // cout<<"enter indices i , j : "<<endl;
    // cin >>ii>>jj;
    // cout<<"num is : "<<matrix[ii][jj]<<"\n";
    // //arr_answers[numOfQ]=matrix[ii][jj];
    // }
    // for (int numOfQ=0;numOfQ<q;numOfQ++)
    // {
    // cout<<arr_answers[numOfQ]<<endl;
    // }
    

    
    
    //     for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<matrix[i].size();j++)
    //     {
    //         matrix[i] = vector<int>(q, 0);
    //     }
    // }

    return 0;
    
}
