#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(){
  int N;
  std::cin>>N;
  std::vector<std::string> w(N);

  for(auto i = w.begin();i != w.end();i++){
    std::cin>>*i;
  }
  std::vector<std::string> v;
  std::copy(w.begin(), w.end(), std::back_inserter(v));

  std::sort(v.begin(), v.end());
  v.erase(std::unique(v.begin(), v.end()), v.end());

  bool flag = false;
  for(auto i = w.begin();i != w.end()-1;i++){
    if((*i).back() != (*(i+1)).front()){
      flag = true;
      break;
    }
  }

  if(w.size() != v.size() || flag == true){
    std::cout<<"No"<<std::endl;
  }else{
    std::cout<<"Yes"<<std::endl;
  }
  return 0;
}
