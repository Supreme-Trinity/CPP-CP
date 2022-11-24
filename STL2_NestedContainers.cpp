#include <bits/stdc++.h>

using namespace std;

void printvec(vector <int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main()
{   //Vector of pairs
    vector <pair <int,int>> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    
    swap(v[0],v[1]);
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
    
    //Array of vectors
    
    vector <int> ve[10]; //Initialized 10 vectors of datatype int
    int m;
    cin>>m;
    vector<int> vec[m];
    for(int i=0;i<m;i++){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            vec[i].push_back(a);
        }
    }
    
    for(int i=0;i<m;i++){
        printvec(vec[i]);
    }
    
    //Vector of vectors
    vector <vector <int>> vect;
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int o;
        cin>>o;
        vector <int> temp;
        for(int i=0;i<o;i++){
            int a;
            cin>>a;
            temp.push_back(a);
        }
        vect.push_back(temp);
    }
    
    for(int i=0;i<vect.size();i++){
        printvec(vect[i]);
    }
    return 0;
}
