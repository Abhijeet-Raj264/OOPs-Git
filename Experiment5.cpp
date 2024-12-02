#include<bits/stdc++.h>
using namespace std;
class Student{
    string name;
    int roll_no;
    float marks;
    public:
    Student(){
        name=" ";
        roll_no=0;
        marks=0.0;
    }
    Student(string name,int roll_no,float marks){
        this->name=name;
        this->roll_no=roll_no;
        this->marks=marks;
    }
    Student(Student &obj){
        name=obj.name;
        roll_no=obj.roll_no;
        marks=obj.marks;
    }
};
int main(){
    string name;
    int roll_no;
    float marks;
    cin>>name>>roll_no>>marks;
    Student s1;
    Student s2(name,roll_no,marks);
    Student s3=s2;
    return 0;
}