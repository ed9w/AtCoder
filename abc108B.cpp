#include <iostream>

int main(){
    int x1, y1, x2, y2;
    std::cin>>x1>>y1>>x2>>y2;

    int dx = -(y2 - y1);
    int dy = x2 - x1;
    int x3, y3, x4, y4;
    x3 = x2 + dx;
    y3 = y2 + dy;
    x4 = x1 + dx;
    y4 = y1 + dy;

    std::cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<std::endl;
    return 0;
}
