#include<iostream>

using namespace std;

//class
class Student{
    //variable (data)
        int id;
        string name;
     public: 
     //constructor
        Student(int id, string name){
            this->id = id;
            this->name = name;
        }

    //behaiviour
        void getStudent(){
            cout<<"id: "<<id<<endl;
            cout<<"name: "<<name<<endl;
        }

};

int main(){

    Student s1(101,"Aman");

    s1.getStudent();


    return 0;
}