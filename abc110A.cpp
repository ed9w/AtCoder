#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  std::vector<int> v(3);
  std::cin>>v[0]>>v[1]>>v[2];

  std::sort(v.begin(), v.end());

  std::cout<<(10 * v[2]+ v[0] + v[1])<<std::endl;
  return 0;
}
