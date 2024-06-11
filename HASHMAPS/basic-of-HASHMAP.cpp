

#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    //creation
    unordered_map<string,int> m;
    
    //insertion method 1
    pair<string,int> p=make_pair("ramaiah",2);
    m.insert(p);
    
    //insertion method 2
    pair<string,int> m2("babbar",2);
    m.insert(m2);
    
    //insertion method 3
    m["ms"]=1;
    
    m["ms"]=2;
    
    //search
    cout<<m["ms"]<<endl;
    cout<<m.at("ramaiah")<<endl;
    
    //size 
    cout<<m.size()<<endl;
    
    //to check the presence
    cout<<m.count("ms")<<endl;
    
    //erase-> to delete
    m.erase("ms");
    cout<<m.size()<<endl;
    
    //iterator
    unordered_map<string,int>::iterator it=m.begin();
    while(it!=m.end())
    {
        cout<<it->first<<" "<<it->second <<endl;
        it++;
    }

    return 0;
}
