#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <pair<int,int>> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    
    //Range based loops
    for(pair <int,int> value : v){
        cout<<value.first<<" "<<value.second<<endl;
    }
    
    
    
    //Auto operator : Can find out which operator is being talked about by itself
    for(auto it:v){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    

    return 0;
}
