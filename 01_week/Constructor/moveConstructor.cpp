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