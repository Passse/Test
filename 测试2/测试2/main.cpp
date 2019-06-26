//
//  main.cpp
//  测试2
//
//  Created by s20181102933 on 2019/6/26.
//  Copyright © 2019 s20181102933. All rights reserved.
//

#include <iostream>
using namespace std;

class Point{
public:
    Point(int xx=0,int yy=0){
        x=xx;
        y=yy;
    }
    Point(Point &p){
        x=p.x;
        y=p.y;
        cout<<"Callint the copy constructor"<<endl;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
private:
    int x,y;
};

void fun1(Point p){
    cout<<p.getX()<<endl;
}
Point fun2(){
    Point a(1,2);
    return a;
}

int main()
{
    Point a(4,5);
    Point b=a;//1

    cout<<b.getX()<<endl;
    
    fun1(b);//2
    
    b=fun2();//3
    cout<<b.getX()<<endl;
    return 0;
}
/*Point::Point(Point &p) {
 x=p.x;
 y=p.y;
 cout<<endl;
 }*/
