#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include<string>
#include<sstream>

//23,4,56

// 23
// 4
// 56
/*
stringstream ss("23,4,56");
char ch;
int a, b, c;
ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56
*/
vector<int> parseInts(string str) {
	vector<int>out;
    stringstream ss(str);
    char comma;
    int num;
    // cout<<ss.str()<<endl;
    //1st way
    if (ss>>num)
    {
    // cout<<"num: "<<num<<"\n"; 
    out.push_back(num);   
    while(ss>>comma>>num)
    {
        // cout<<"num: "<<num<<"\n";
        out.push_back(num);
    }
    // cout<<"---------------\n";
    // for (int i=0;i<out.size();i++){cout<<out.at(i);}
    }

    //2nd way
    // while(ss>>num) //أنا عارف انه دايما هيبتدى ب رقم (طول م ال سترينج بتاعى فيه رقم طب لو مش برقم يسكيب)
    // {  
    // // if(ss>>num){cout<<"this is integer num \n";} try remove comment and see behavior
    // // cout<<"num: "<<num<<"\n";    
    // out.push_back(num);
    // // cout<<"count"<<count<<"\n";
    // if(ss>>comma){    // cout<<"this is , \n";
    //     continue; // try to comment and see behavio r of output
    //              }
    // }
    return out;
}

int main() {
    /*
Operator >> Extracts formatted data.
Operator << Inserts formatted data.
Method str() Gets the contents of underlying string device object.
Method str(string) Sets the contents of underlying string device object.

    */

    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }


    return 0;
}
