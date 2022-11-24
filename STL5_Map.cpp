#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <int,string> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        string b;
        cin>>a>>b;
        m.insert(make_pair(a,b));
    }
    //Erase keyword in map 
     m.erase(1); //erase takes input of the key or the iterator we want to remove 
     
    for(auto val: m){
        cout<<val.first<<" "<<val.second<<endl; //Sorted printing according to keys
    }
    
    
    //find keyword in map : returns the pointer 
    
    auto fi= m.find(3);
   
    if(fi==m.end()){
        cout<<"NOT FOUND"<<endl;
    }
    else{
        cout<<fi->first<<" "<<fi->second<<endl;
    }
        
    //Insertion also depends on size of key eg, map <string,string> there will also be many comparisons in abstract data tree too 
    
    //Question on map: Print the given strings in lexicographic order according to their frequency 
    
    return 0;
}
