#include <iostream>

int rep(int k){
  if(k == 1){
    return 9;
  }else{
    return 1;
  }
}

int main(){
  int n;
  std::cin>>n;

  int a = n / 100;
  int b = (n - 100 * a) / 10;
  int c = n - 100 * a - 10 * b;

  a = rep(a);
  b = rep(b);
  c = rep(c);
  std::cout<<(100 * a + 10 * b + c)<<std::endl;
  return 0;
}
