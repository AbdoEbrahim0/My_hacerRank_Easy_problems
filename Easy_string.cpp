#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include<string>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     abcd
// // ef
// 4 2
// abcdef
// ebcd af
    string a,b;
    //a="abcd";b="ef";
    cin >>a>>b;
    int len_a=a.size(); int len_b=b.size();
    cout<<len_a<<" "<<len_b<<endl;
    cout<<a+b<<endl;
    char swapped=a[0];
    a[0]=b[0];
    b[0]=swapped;
    cout<<a <<" "<<b<<endl;

    return 0;
}
