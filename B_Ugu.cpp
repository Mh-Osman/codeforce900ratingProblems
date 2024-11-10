#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
using namespace std;

int main() {
//optimize();

int t;
cin>>t;
while(t--){

    int n;
    string s;
    cin>>n;
    cin>>s;
    int ans=0;
    if(s[n-1]== '0'){
         ans+=1;

    }
    int packet = 0;
    int idx=-1;
    for(int i=n-1;i>=0;--i){
         
         if(s[i]=='1'){

             if(idx == -1){
                    // cout<<"K";
                   idx = i;
                   packet+=1;//for checking unit of 1(continuous sequence without 0  of 1 is a unit )

             }
             

         }else{

            idx =-1;
            
         }


    }

     
    ans +=(packet-1)*2;
    if(ans < 0){

        cout<<0<<endl;
    }else{
          cout<<ans<<endl;

    }
    
}
return 0;
}
