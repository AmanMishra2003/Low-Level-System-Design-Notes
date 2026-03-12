#include <iostream>

using namespace std;

class Student{
    int* id;
    string* name;

    public:
        Student(int id, string name){
            this->id = new int((id));
            this->name = new string(name);
            cout<<"Contructed"<<endl;
        }

        //destructor starts with (~)sign and it only delete memory allocated in heap
        ~Student(){
            delete id;
            delete name;
            cout<<"Destroyed"<<endl;
        }
};

int main(){
    Student s1(1, "jack");
    return 0;
}