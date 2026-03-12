# What is a Destructor?

A destructor is a special function that is automatically called when an object is destroyed.

It is mainly used to free resources like:
1. dynamic memory
2. file handles
3. network connections

Code
```
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

```

Syntax of Destructor
-
Rules:
1. Same name as class
2. Starts with ~
3. No return type
4. No parameters

When Destructor is Called
-
Stack Object
```
Student s1;
```

Destructor runs automatically when scope ends.

Example:
```
int main(){
    {
        Student s1;
    } // destructor called here
}
```
Heap Object

```
Student* s1 = new Student();
```

Destructor runs only when you delete the object.
```
delete s1;
```

Example:
```
Student* s1 = new Student();
delete s1;
```
Output
```
Constructor called\
Destructor called
```

If you forget delete → memory leak.

Important Rules
-
1. Only  one destructor	Cannot overload
2. No parameters	Destructor() only
3. Automatic call	No manual call needed
4. Called in reverse order	LIFO order

## How `delete` Works with Destructors (Brief)

### 1. Rule of `delete`

Whenever you write:

```cpp
delete ptr;
```
C++ always does:

Call the destructor of the object pointed by ptr

Deallocate the memory

Conceptually:
```

ptr->~ClassName();  // destructor runs
free(ptr);          // memory released
```
### 2. Example
```
class Student {
    int* id;
    string* name;

public:
    Student(int i, string n) {
        id = new int(i);
        name = new string(n);
    }

    ~Student() {
        delete id;
        delete name;
    }
};
```
Usage:
```

Student* s = new Student(1,"Jack");
delete s
```

### 3. Execution Flow
```
delete s
   ↓
~Student() called
   ↓
delete id
   ↓
free int memory

delete name
   ↓
call string destructor
   ↓
free string memory

~Student() finishes
   ↓
free Student object memory
```