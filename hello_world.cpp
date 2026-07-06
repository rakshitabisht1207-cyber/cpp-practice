/* The first c++ program
"hello world  " -> a tradition to start any programming language .

i will be explaning the code below so that anyone as a beginner can learn or follow along .


#include<iostream> -> this line includes the library iostream which stands for input-output stream .
it gives us access to tools for displaying output and input.

using namespace std; -> std -> standards . everything from standard library 

int main() -> starting point of execution

cout -> used to print text to console 
<< -> this is insertion operator and it sends whatever writes after it to cout for display.

cin -> used to take input from the user
>> -> this is an extraction operator 

endl -> moves cursor to a new line after printing 

return 0; -> it tells the operating system that the program is finished . 
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"hello,world";
    return 0;
}