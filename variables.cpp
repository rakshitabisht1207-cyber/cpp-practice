/*practicing variables today
A variables is basically a container to store a data.
Syntax = datatype variable_name =value;
types of datatypes :
1. built in datatypes (int,float,double,bool,char)
2. user-defined data types(struct,union,enum)
3.derived data types(array,function,pointer)

built-in data types are discussed in the code below:
int,char,float,bool,double
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    int age = 18;//int-> to store a whole number
    float height = 5.3;//float->store decimal number(low precision)
    string name = "Rakshita";//store texts(needs #include<string> to use this datatype)
    double pi = 3.14159265;//double->store decimal number more precision than float
    char grade ='A';//char->store a single character(in single quotes)
    bool isstudent= true;//bool->store true or false only

    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Height"<<height<<endl;
    cout<<"value of pi"<<pi<<endl;
    cout<<"Grade"<<grade<<endl;
    cout<<"Is a student?"<< isstudent <<endl;

    // you can also change the value later in your code
     age =19;
     cout<<"updated age"<<age<<endl;

    //can declare multiple same data type variables together
    // int x=1,y=2,z=3;

    //const -> a keyword using this you can't change the value of the variable later 
    const int monthInyear = 12;
    cout<<"month in a year ="<< monthInyear<<endl;
    
    //monthInyear=13;
    //this would throw an error since its const


return 0;
}  
