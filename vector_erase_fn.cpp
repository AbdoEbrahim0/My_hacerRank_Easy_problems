//in
// 6
// 1 4 6 2 8 9
// 2
// 2 4
//out
// 3
// 1 8 9
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//in 956133519 775903982 622784820 95208688 921490983 415165691 379615994 474543625 387549021 70789301
//out 415165691 379615994 474543625 387549021 70789301
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int numOfElements;
    int in;
    vector<int>vec;
    cin>> numOfElements;
    for (int i=0;i<numOfElements;i++)
    {
        cin>>in;
        vec.push_back(in);     
    }
    int erasedIndex;
    cin>>erasedIndex;//2
    
    vec.erase(vec.begin()+(erasedIndex-1));
    // for (int val:vec)
    // {
    //     cout<< val<<" ";
    // }
    // cout<<"\n";
    // cout<<"Enter range:\n ";
    int r1,r2; //2-1=1  4-1=3 , 
    cin>>r1>>r2;
    // cout<<"-------------"<<endl;
    
    vec.erase(vec.begin()+r1-1,vec.begin()+r2-1);
    cout<<vec.size()<<endl;
    for (int val:vec)
    {
        cout<< val<<" ";
    }
    
    return 0;
}
