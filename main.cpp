#include <iostream>
#include <algorithm>
#include "freadfwrite.cpp"
using namespace std;
struct Person{
    int id;
    int age;
};
string fun1(const string &str,string str1){
    char* strss=(char *)str.data();
    str1=strss;
    return str1;
}
int main() {
    /*Person* persons=(Person*)malloc(10*sizeof(Person));
    for (int i = 0; i < 10; ++i) {
        persons[i].id=i;
        persons[i].age=10;
        cout<<persons[i].id<<endl;
        cout<<persons[i].age<<endl;
    }*/
    string str;
    string strs="aaa";
    str=fun1((const string)strs,str);
    cout<<str<<endl;
    cout<<&strs<<endl;
    cout<<&str<<endl;
    return 0;
}
