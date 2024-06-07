#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
   if(cnt>=M){
      for(int i=0;i<vec.size();i++){
         cout<< vec[i]<<" ";
      }
      cout<<endl;
      return;
   }
   int start;
   if(vec.size()==0){
      start = 1;
   }else{
      start = vec.back()+1;
   }
   for(int i=start;i<=N;i++){
      vec.push_back(i);
      func(cnt+1);
      vec.erase(vec.end()-1);
   }
}

int main() {
   cin >> N >> M;
   func(0);
}
