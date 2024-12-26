#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#include <queue>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    //  vector<int>vec={14471476,365354610,530873347,420795654,815018770,704756372,246818675,490841892};
    // vector<int>vec={1,6,10,8,4};
     vector <int>vec;
    //out>>//14471476 246818675 365354610 420795654 490841892 530873347 704756372 815018770 
    vector<int>sortedVec;
    int in,numOfElements;
    cin>>numOfElements;
    for(int x=0;x<numOfElements;x++)
    {
        cin>>in;
        vec.push_back(in);
    }
    int vec_size=vec.size();
    int min;
    // cout<<"----------before erase: ------------"<<endl; 
    //     for (int val :vec)
    //             cout<<val<<" ";
    //         cout<<"\n";
        
    for(int i=0;i<vec_size;i++)
    {
        // cout<<"outer loop"<<endl;
        // cout<<"vec[i]"<<vec[0]<<" "<<endl;
        min=vec.at(0);
        for(int j=0;j<vec.size();j++)
        {
            // cout<<vec[j]<<" ";
        if (vec[j]<=min)
        {
        min=vec[j];
        // cout<<vec[i]<<endl;
        //  cout<<"min : "<<min<<endl;
        }
            
        }
        // cout<<"min : "<<min<<endl;
        vec.erase(remove(vec.begin(),vec.end(),min));
        sortedVec.push_back(min);
        // cout<<"----------After erase: ------------"<<endl;
        // for (int val :vec)
        //     {
        //         cout<<val<<" ";
        //     }
        //     cout<<"\n";
    }
    // sortedVec.pop_back();
    // sortedVec.push_back(vec.at(0));
    // sortedVec.push_back(vec.at(0));
    for (int val :sortedVec)
    {
        cout<<val<<" ";
    }

    //using built in fn 
    // cout<<"\n-------------using built in fn n(log n)-------------\n";
    // sort(vec.begin(),vec.end());
    // for (int val :vec)
    // {
    //     cout<<val<<" ";
    // }
    //using Min-Heap: (nlogn)
    // cout<<"\n-------------Min-Heap: (nlogn)-------------\n";
    // priority_queue<int, vector<int>, greater<int>> minHeap;

    // // Push all elements into the Min-Heap
    // for (int val : vec) {
    //     minHeap.push(val);
    // }
    // while (!minHeap.empty()) {
    //     cout << minHeap.top() << " ";
    //     minHeap.pop();
    // }
    return 0;
}
