//
//  main.cpp
//  测试
//
//  Created by s20181102933 on 2019/6/19.
//  Copyright © 2019 s20181102933. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <sstream>
using namespace std;

struct Referee{
    string number1;
    string name1;
    string c1[7];
}s1[7];

template <class Type>
Type stringToNum(const string& str)
{
    istringstream iss(str);
    Type num;
    iss>>num;
    return num;
}//参考CSDN


int main()
{
    int i;
    int sum=0;
    ifstream ef2("/Users/s20181102933/Desktop/裁判信息的副本.txt");
    
    for(i=0;i<7;i++){
        
        ef2>>s1[i].number1>>s1[i].name1;
        for(int j=0;j<7;++j)
            ef2>>s1[i].c1[j];
    }
    int k[7];
    int s;
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            k[j]=stringToNum<int>(s1[i].c1[j]);}
        
            for(int h=0;h<7;h++){
                for(int g=1;g<7;g++){
                    if(k[g]<k[g-1]){
                        s=k[g];
                        k[g]=k[g-1];
                        k[g-1]=s;
                    }
                }
            }
        for(int y=0;y<7;++y)
            cout<<k[y]<<" ";
        cout<<endl;
    }
    return 0;
}
