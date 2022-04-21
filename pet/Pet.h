#ifndef PET_H
#define PET_H
#include <string>

class Pet {
    private:
        string name;
        string type;
        int age;
    public:
        Pet(){
            name = "";
            type = "";
            age = 0;
        } 
        Pet(string n,){
            name = n;
            type = "";
            age = 0;
        }
        Pet(string n, string t){
            name = n;
            type = t;
            age = 0;
        }
        Pet(string n, string t, int a){
            name = n;
            type = t;
            age = a;
        }
        ~Pet(){
            delete [] name;
            delete [] type;
        }
        void setName(string n){
            name = n;
        }
        void setType(string t){
            type = t;
        }
        void setAge(int a) {
            age = a;
        }
        string getName() const{
            return name;
        }
        string getType() const{
            return type;
        }
        string getAge() const
        {   return age; }
};  

#endif