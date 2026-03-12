#include <iostream>

using namespace std;

class Student{
    int val = 0;
    public:
        Student(int val){
            this->val = val;
        }

        //explicit copy contructor
        // Student(Student& obj){
        //     this->val = obj.val;
        // }

        void displayValue(){
            cout<<"val: "<<val<<endl;
        }
};

int main(){

    Student s1(10);

    Student s2(s1);

    s1.displayValue(); //output 10
    s2.displayValue(); //output 10

    return 0;
}