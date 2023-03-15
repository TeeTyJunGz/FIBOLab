#include "Person.h"
#include<iostream>
using namespace std;

int main(){

    Person *TeeTy = new Person("TeeTy",168,19);
    
    Student *TuuTu = new Student("TuuTu",169,69,51,10);

    Teacher Newsogood;

    Newsogood.setSubject("Programming");
    Newsogood.setName("Newsogood");
    Newsogood.setHeight(175);
    Newsogood.setAge(30);

    cout << "---------Person---------" << endl;
    TeeTy->showPersonInfo();
    cout << "---------Student---------" << endl;
    TuuTu->showStudenInfo();
    cout << "---------Teacher---------" << endl;
    Newsogood.showTeacherInfo();

    return 0;
}

