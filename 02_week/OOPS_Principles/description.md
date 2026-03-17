# C++ OOPS Principles
There are 4 main Principles in OOPS
1. Encapsulation
2. Abstraction
3. Polymorphism
4. Inheritance



## Encapsulation
Binding data and function together in a single unit(class) and restricting direct access to data.

> Data + Method  = Encapsulation

Without encapsulation

```
Class Bank{
    public:
        int balance;
};
```
Anyone can access data and modify it
```
Bank obj;
obj.balance = 10000;
```

### Benefits of encapsulation
1. Data Protection
2. Control data modification
3. Make code modular
4. Improve maintainability



## Inheritance
Allow  a child to acquire access properties and behaivious of a parent class.

> Real world Example \
Animal -> Dog \
Dog Automatically has eat() and sleep() behaiviour

### Inheritance is used
1. Code Reusage
2. Extensibility
3. Hierarchical Classification

### Syntax
```
Class subclass: accessModifier ParentClass
```

```
c++

class Dog: public Animal
```

### Type of Inheritance
1. #### Single Inheritance 
    ```
        A -> B
    ```
2. #### MultiLevel Inheritance
    ```
        A -> B -> C
    ```
3. #### Mulitple Inheritance
    ```
        A         B 
        |         |
          -> C <-
    ```
4. #### Hierarchical Inheritance
    ```
        <- A ->
        B      D
        |
        c
    ```


## Abstraction
Hide complex implementation and show only necessary features.

C++ Abstraction
1. Abstract Class.
2. Pure Virtual Function.



>Pure Virtual function \
a function declared like this
```
virtual void draw()=0;
```
>make class abstract

### Key Rules
If a class has at least one pure virtual function is cannot be instantiated.

Meaning this is illegal
```
Shape S;
```
but this is allowed
```
Shape *S;
```

### Abstraction use
1. Reduce complexity
2. Improve security
3. Focus on what , not how

## Polymorphism
Meaning many forms

### Complile time polymorphism
1. function overloading
2. operator overloading

same function name 
but 
1. different return type
2. different parameter

### Run Time polymorphism
1. function overriding
2. virtual function

```
#include <iostream>
using namespace std;

class Animal{
    public :
        virtual void sound(){
            cout<<"Animal sound"<<endl;
        }
}

class Dog: public Animal{
    public: 
        void sound(){
            cout<<"Dog barking"<<endl;
        }
}

int main(){
    Animal* a;
    Dog d;
    a = &d;
    a->sound();
}
```
Because child function overrides parent functions

Final Comparison
| Concept | Focus |
|---------|-------|
|Encapsulation | Data protection |
| Inheritance | Code Reuse |
| Abstraction | Hide Implementation|
| Polymorphism | Multiple Behaiviour |