#ifndef PERSON_H
#define PERSON_H

#include<string>
using namespace std;

class Person
{
    public:
        string name;
        int height;
        int age;
        Person();
        Person(string n, int h, int a);
        ~Person();
        void showPersonInfo();
        void setName(string newName);
        void setHeight(int newHeight);
        void setAge(int newAge);
};

class Student: public Person
{
    public:
        int id;
        int grade;
        Student();
        Student(string name, int height, int age, int i,int g);
        ~Student();
        void showStudenInfo();
};

class Teacher: public Person 
{
    private:
        string Subject;
    public:
        Teacher();
        ~Teacher();
        string getSubject();
        void setSubject(string newSubject);
        void showTeacherInfo();
};

#endif
