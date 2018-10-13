#include <iostream>

int digit(int x){
  return 100 * x + 10 * x + x;
}

int main(){
  int n;
  std::cin>>n;

  int a = n / 100;
  int b = (n - 100 * a) / 10;
  int c = n - 100 * a - 10 * b;

  int x = digit(a);
  int y = digit(a + 1);
  std::cout<<(n<=x ?x:y)<<std::endl;
  return 0;
}
