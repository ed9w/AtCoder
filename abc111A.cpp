#include <iostream>

int n_19(int k){
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

  a = n_19(a);
  b = n_19(b);
  c = n_19(c);
  std::cout<<(100 * a + 10 * b + c)<<std::endl;
  return 0;
}
