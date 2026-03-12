# Class and objects

Class is a userdefined data type , a blue print for an object. it defines data(variables) of object and behaiviour(methods) of object

Object is a instance of a class. (Instance means occurance of something).
    The process of creating object of a class is called instanciation.

Class is blueprint of a house and Object is house build using blueprint.

**Code Example**
-
#### Defining Class 
```
Class Student{
    public: 
        //Variable (Data Members)
        int id;
        string name;

        //Member functions
        void getStudent(){
            cout<<"Id: "<<id<<" name: "<<name<<endl;
        }
}
```

Creating Object
```
    Student s1; //creating object
```

Imp--> when we create object memory is allocated

Accessing Class members
```
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

```

## Access Specifier in C++

Access specifier do what the name suggest 
>They describes the accessibility of the class variable and class methods.

There are three type of access specifier in c++
1. public - vairable and methods can be accessed from anywhere in the class.
2. private - accessible only with the class and by public methods. (Protect data provide encapsulation)
3. protected - accessible by child class.

