#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  int N, M, X, Y;
  std::cin>>N>>M>>X>>Y;

  std::vector<int> x(N);
  std::vector<int> y(M);
  for(auto i = x.begin();i != x.end();i++){
    std::cin>>*i;
  }
  for(auto i = y.begin();i != y.end();i++){
    std::cin>>*i;
  }
  int max_x = *std::max_element(x.begin(), x.end());
  int min_y = *std::min_element(y.begin(), y.end());

  if((max_x < min_y) && ((X < max_x+1) && (min_y <= Y))){
    std::cout<<"No War"<<std::endl;
  }else{
    std::cout<<"War"<<std::endl;
  }
  return 0;
}
