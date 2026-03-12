# Constructor

>Constructor is a special type of method that automatically run when object is created.

### Rules
1. Same name as class.
2. no return type.

Code:
```
class Student{
    public:
        //constructor
        Student(){
            cout<<"Hello Student"<<endl;
        }
};

int main(){
    Student s1;
    return 0;
}
```

##  Type of `Constructor`
1. **Default Constructor:**

    When there is no contructor defined C++ compiler automatically create a constructor. it take no arguments and intialize variable with default values. If programmer explicitly defines a contructor then default contructor is not generated.

2. **Parameterized Constructor:**

    A parameterized constructor lets us pass arguments to initialize an object's members. It is created by adding parameters to the constructor and using them to set the values of the data members.

    Code Example:-
    ```
    class Student {
        public:
            string name;
            int age;

            Student(string n, int a) {
                name = n;
                age = a;
            }

            void display() {
                cout << name << " " << age << endl;
            }
    };
    ```
    ```
        Student s1("Aman",21);
        s1.display();
    ```

3. **Copy Contructor:**
  
    A copy constructor is a member function that initializes an object using another object of the same class. Copy constructor takes a reference to an object of the same class as an argument.

    Code:
    ```
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
    ```
    >Note: If no copy or move constructor is defined, the compiler automatically creates an implicit copy constructor, unlike the default constructor which is removed when any constructor is defined.

4. **Move Contructor:** 

    Allows stealing resources from a temporary object and provide those resources to some other objects. when we want to transfer ownership of data from one object to another object.

    Code Example-
    ```
    #include <iostream>

    using namespace std;

    class newString{
        char* data ;
        
        public:
            newString(const char* s){
                data = new char[strlen(s)+1];
                strcpy(data, s);
                cout<<"Contructed"<<endl;
            }

            //move constructor --> passing rvalue object reference
            newString(newString&& other){
                data = other.data;
                other.data = nullptr;
                cout<<"Moved!!"<<endl;
            }

            ~newString(){
                delete data;
                cout<<"Destroyed!!"<<endl;
            }

            void print(){
                if(data){
                    cout<<data<<endl;
                }else{
                    cout<<"EMPTY!!"<<endl;
                }
            }

    };

    int main(){
        newString s1("Hello world!");
        newString s2 =  std::move(s1);

        s1.print();
        s2.print();
        return 0;
    }
    ```





    


