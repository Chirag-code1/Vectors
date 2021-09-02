#include<iostream>
#include<vector>
using namespace std;
int main()
{   
    int pos=0;
    vector<string> v;
    v.push_back("Hey");
    v.push_back("Hello");
    v.push_back("Howdy");

    v.insert(v.begin(), "#");

    for(int i=1 ; i< v.size(); i+=2){
        v.insert(v.begin()+i+1, "#");
    }


    for(auto x: v){
        cout<<x<<" ";
    }
   return 0;
}
