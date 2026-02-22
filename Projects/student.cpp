//WAP to degin and develop a student info system, where student detail given by user/constructor i.e. id,name,marks of subjects. calculate total marks, percentage and grade. 

#include <iostream>
using namespace std;
class student
{
    int id;
    int n;
    char name[30];
    float marks[30];
    float tm=0.0,p;
    char g;
    public:
    void input();
    void cal();
    void print(){
        cout<<"Id"<<"\t Name "<<"\tTotal Marks"<<"\tPercentage"<<"\tGrade"<<endl;
        cout<<id<<"\t"<<name<<"\t"<<tm<<"\t\t"<<p<<"\t\t"<<g<<endl;
    };
};
    void student :: input(){
        cout<<"Enter student id"<<endl;
        cin>>id;
        cout<<"Enter Name"<<endl;
        cin>>name;
        cout<<"Enter no. of subjects"<<endl;
        cin>>n;
        cout<<"Enter Marks of subjects"<<endl;
        for(int i=0; i<n; i++){
            cin>>marks[i];
        }
    }
    void student ::cal(){
        for(int i=0;i<n;i++){
            tm+=marks[i];
        }
        p = tm/n;
        if(p>=90){
            g='O';
        }
        else if (p<80 && p>=70){
            g = 'A';
        }
        else if(p<70 && p>=60){
            g = 'B';
        }
       
        else if (p<60 && p>=50){
            g = 'C';
        }
        else if (p<50  && p>=40){
             g = 'P';
        }
        else if (p<40){
            g = 'F';
        }
    }
int main(){
    student s;
    s.input();
    s.cal();
    s.print();
    return 0;
}