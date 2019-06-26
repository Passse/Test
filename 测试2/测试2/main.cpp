//
//  main.cpp
//  测试2
//
//  Created by s20181102933 on 2019/6/26.
//  Copyright © 2019 s20181102933. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

class A{
public:
    void display(){
        count<<x<<endl;
    }
    int getX(){
        return x;
        friend B;
    }
};
class B{
public:
    void set(int i);
    void display();
private:
    A a;
};

void B::set(int i){
    a.x=i;
}
