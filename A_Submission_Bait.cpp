
#include <bits/stdc++.h>
using namespace std;

int main() {


int t;
cin>>t;
while(t--){

int n;
cin>>n;
vector<int>v(n);
for(auto &i:v)cin>>i;

sort(v.begin(), v.end());

int mx=0;
bool a=1;
int c=0;
int p=0;
int maxinumbers= 1;
map<int,int>m;

for(int i=n-1;i>=0;--i){

 
     m[v[i]]+=1;

}
int f=0;
for(auto it = m.begin();it != m.end();++it){

     
    int num= it->second;
   // cout<<it->first<<" "<<it->second<<endl;;
    if(num & 1){

       
        f=1;
        break;
    }




}

if(f==0){

    cout<<"NO"<<endl;
}else{

     cout<<"YES"<<endl;
}










}
    return 0;
}