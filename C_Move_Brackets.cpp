#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    int idx=0;
    int ans=0;
    while(idx<s.size()){
      if(s[idx]=='('){
        cnt++;
      }
      else{
        cnt--;
      }
      ans=min(ans,cnt);
      idx++;
    }
    cout<<abs(ans)<<endl;
  }
  return 0;
}