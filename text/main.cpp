//
//  main.cpp
//  text
//
//  Created by fzk on 18/7/7.
//  Copyright © 2018年 fzk. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <String>
using namespace std;
struct Student
{
    string name;
    string sex;
    string Program;
    string form;
    string Class;
    string tel;
    int f;
    double score[10];
    double min;
    double max;
};
struct Referee
{
    string name;
    string sex;
    string tel;
};
void Sort()
{
    
}
void input(Student *s,int n )
{
    int i;
    for(i=0;i<=n;i++)
    {
        cout<<"输入第"<<i+1<<"个学生成绩"<<endl;
        cin>>s[i].score[0];
        cin>>s[i].score[1];
        cin>>s[i].score[2];
        cin>>s[i].score[3];
        cin>>s[i].score[4];
    }
}

int inputs(Student *s)
{
    int n;
    cout<<"请输入参赛者人数";
    cin>>n;
    s[0].f=0;
    for(int i=0; i<n; i++)
    {
        cout<<"请输入姓名：";
        cin>>s[i].name;
        cout<<"请输入性别：";
        cin>>s[i].sex;
        cout<<"请输入节目名称：";
        cin>>s[i].Program;
        cout<<"请输入表演形式：";
        cin>>s[i].form;
        cout<<"请输入班级：";
        cin>>s[i].Class;
        cout<<"请输入电话号:";
        cin>>s[i].tel;
        s[0].f++;
    }
    return n;
}
void inputr(Referee *r)
{
    int i;
    for(i=0; i<5; i++)
    {
        cout<<"请输入第"<<i+1<<"号裁判的姓名:";
        cin>>r[i].name;
        cout<<"请输入第"<<i+1<<"号裁判的性别:";
        cin>>r[i].sex;
        cout<<"请输入第"<<i+1<<"号裁判的电话号:";
        cin>>r[i].tel;
    }
}
void output(Student *s,int n,Referee *r)
{
    int i;
    int j;
    for(i=0; i<n; i++)
    {
        s[i].min=s[i].score[0];
        for(j=0; j<5; j++)
        {
            if(s[i].score[j]<s[i].min)
            {
                s[i].min=s[i].score[j];
            }
        }
    }
    for(i=0; i<n; i++)
    {
        s[i].max=s[i].score[0];
        for(j=0; j<5; j++)
        {
            if(s[i].score[j]>s[i].max)
            {
                s[i].max=s[i].score[j];
            }
        }
    }
    
    for(i=0; i<s[0].f; i++)
    {
        cout<<"第"<<i+1<<"学生";
        cout<<"姓名是：";
        cout<<s[i].name<<endl;
        cout<<"性别：";
        cout<<s[i].sex<<endl;
        cout<<"节目名称：";
        cout<<s[i].Program<<endl;
        cout<<"表演形式：";
        cout<<s[i].form<<endl;
        cout<<"班级：";
        cout<<s[i].Class<<endl;
        cout<<"电话号：";
        cout<<s[i].tel<<endl;
        cout<<"第一个评委"<<r[0].name<<"的打分为：";
        cout<<s[i].score[0]<<endl;
        cout<<"第二个评委"<<r[1].name<<"的打分为：";
        cout<<s[i].score[1]<<endl;
        cout<<"第三个评委"<<r[2].name<<"的打分为：";
        cout<<s[i].score[2]<<endl;
        cout<<"第四个评委"<<r[3].name<<"的打分为：";
        cout<<s[i].score[3]<<endl;
        cout<<"第五个评委"<<r[4].name<<"的打分为：";
        cout<<s[i].score[4]<<endl;
        cout<<"去掉一个最低成绩为：";
        cout<<s[i].min<<endl;
        cout<<"去掉一个最高成绩为：";
        cout<<s[i].max<<endl;
        cout<<"平均分是：";
        cout<<(s[i].score[0]+s[i].score[1]+s[i].score[2]+s[i].score[3]+s[i].score[4]-s[i].min-s[i].max)/3<<endl;
        
    }
}
int main(int argc, const char * argv[]) {
    struct Student s[100];
    struct Referee r[100];
    inputs(s);
    inputr(r);
    input(s,s[0].f);
    
    output(s,s[0].f,r);
    int i;
    while(1)
    {
        cout << "|--------------------------------------|\n";
        cout << "|----------欢迎使用系统------------------|\n";
        cout << "|--------------------------------------|\n";
        cout << "|------   1:输入参赛者信息         -------|\n";
        cout << "|------   2:修改裁判员信息         -------|\n";
        cout << "|------   3:du"
    }
    return 0;
}
