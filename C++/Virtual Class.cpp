#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//-----------------------------
class Person{
    protected:
    int age;
    string name;

    public:
        static int profId;
        static int stuId;
        virtual void getdata() = 0;     //pure virtual functions, must be overridden in inherited class
        virtual void putdata() = 0;
};

int Person::profId = 0;
int Person::stuId = 0;

class Professor: public Person
{
private:
    int publications;
    int id;

public:
    Professor(){
        ++profId;
    }
    void getdata();
    void putdata();
};

void Professor::getdata(){
    cin >> name >> age >> publications;
    id = profId;
}

void Professor::putdata(){
    cout << name << ' ' << age << ' ' << publications << ' ' << id << endl;
}

class Student : public Person
{
private:
    int marks[6];
    int marksSum;
    int id;

public:
    Student(){
        ++stuId;
        marksSum = 0;
    }

    void getdata(){
        cin >> name >> age;
        for(int i= 0; i < 6; i++){
            cin >> marks[i];
            marksSum += marks[i];
        }
        id = stuId;
    }

    void putdata(){
        cout << name << ' ' << age << ' ' << marksSum << ' ' << id << endl;
    }
};
//-------------------------------
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
