#include <bits/stdc++.h>

using namespace std;

int main()
{
    Iterators in STL
    vector <int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    vector <int> :: iterator it=v.begin();
    for(it=v.begin();it!=v.end();it++){
        cout<<*it+2<<endl;
    }
    
    
    vector <pair<int,int>> vec;
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        vec.push_back(make_pair(a,b));
    }
    vector<pair<int,int>> :: iterator it=vec.begin();
    
    for(it=vec.begin();it!=vec.end();it++){
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    
    return 0;
}
