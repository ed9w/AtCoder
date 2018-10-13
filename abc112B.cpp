#include <iostream>

int main(){
  int N, T;
  std::cin>>N>>T;
  const long long NUM = 1000000000;
  long long k_c = NUM;

  for(int i = 0;i < N;i++){
    int c, t;
    std::cin>>c>>t;
    if(t <= T && c < k_c){
      k_c = c;
    }
  }
  if(k_c == NUM){
    std::cout<<"TLE"<<std::endl;
  }else{
    std::cout<<k_c<<std::endl;
  }
  return 0;
}
