 #include <bits/stdc++.h>

using namespace std;

int main()
{
    //Pair STL in C++
    pair <int,int> p;
    p.first=3;
    p.second=4;
    pair <int,int> p2=p; //Passed without reference (means copying the values of p at this present moment)
    p.first=2;
    cout<<p2.first<<" "<<p2.second<<endl;
    pair <int,int> &p3=p; //Passing by reference (points to the memory of p, and changes in p will be reflected in p3 too)
    p.first=1;
    cout<<p3.first<<" "<<p3.second<<endl;
    
    int arr[3]={1,2,3};
    int arr2[3]={4,5,6};
    pair <int,int> p_array[3];
    for(int i=0;i<3;i++){
        p_array[i].first=arr[i];
        p_array[i].second=arr2[i];
    }
    
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    
    vector <int> v(10);
    v.push_back(7);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<v.size()<<endl;
    
    vector <bool> b(10,true);
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<endl;
    }
    
    vector <int> v2=v; //Passing without reference means copying the values at that moment
    v.push_back(5);
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<endl;
    }
    vector <int> &v3=v; //Passing with reference means pointing to that address in memory
    v.push_back(6);
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<endl;
    }
    
    

    return 0;
}
