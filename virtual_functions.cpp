#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person {
    public:
        string name;
        int age;
        virtual void getdata(){}
        virtual void putdata(){}
    };
class Professor: public Person   {
    int  publications , cur_id;
    public:
        static int student_counter(){
            static int cur_id = 1;
            return cur_id++;
        }
        void getdata(){
            cin>>name;
            cin>>age;
            cin>>publications;
        }
        void putdata(){
            cout<<name<<" "<<age<<" "<<publications<<" "<<student_counter()<<endl;
            
        }
};
class Student:public Person{
    int marks[6],cur_id;
    int sum=0;
    public:
    static int student_counter()
    {
        static int cur_id = 1;
        return cur_id++;
    }
    void getdata(){
        cin>>name;
        cin>> age;
        for(int i=0;i<6;i++){
            cin>>marks[i];
        }
        
    }
    void putdata(){
        for(int i=0;i<6;i++){
            sum=sum+marks[i];
        }
        cout<<name<<" "<<age<<" "<<sum<<" "<<student_counter()<<endl;
        
    }
};
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
