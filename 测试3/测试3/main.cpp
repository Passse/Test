//
//  main.cpp
//  测试3
//
//  Created by s20181102933 on 2019/6/27.
//  Copyright © 2019 s20181102933. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;

class a{
private:
    double score;
    double* name;
    int j;
public:
    void s();
    a (double j1=0,double score1=0);
};

a::a(double j1,double score1){
    j=j1;
    name=new double [j1];
    score=score1;
}

void a::s(){
    double sum=0,min=0,max=0;
    int i=0;
    for(i=0;i<j;i++){
        cin>>name[i];
        sum+=name[i];
        if(i==0) min=name[i];
        if(name[i]<min){
            min=name[i];
        }
        if(name[i]>max){
            max=name[i];
        }
    }
    printf("average = %.2f\n",sum/j);
    printf("max = %.2f\n",max);
    printf("min = %.2f\n",min);
}
int main()
{
    int j=0;
    cin>>j;
    a aa(j);
    aa.s();
    return 0;
}

