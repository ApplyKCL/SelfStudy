#include <iostream>
using namespace std;

void question1();
void question2(long);
void question3FistPrint();
void question3SecondPrint();
void question3();
void question4(unsigned int age);
void question5();
void question6();
void question7();

int main() {
    question1();
    question2(10);
    question3();
    question4(29);
    question5();
    question6();
    question7();
    return 0;
}

void question1(){
    cout << "ApplyKCL"<<endl;
    cout << "KCL's Home"<<endl;
}

void question2(long x){
    cout << x*220 << endl;
}

void question3FistPrint(){
    cout << "Three blind mice" << endl;
}

void question3SecondPrint(){
    cout << "See how they run" << endl;
}

void question3(){
    question3FistPrint();
    question3FistPrint();
    question3SecondPrint();
    question3SecondPrint();
}

void question4(unsigned int age){
    cout << "Your age in months is: " << age*12 << endl;
}

void question5(){
    cout << "Please Enter a Celsius Value:"<<endl;
    int celsius = 0;
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << celsius*1.8+32 << " degrees Fahrenheit" << endl;
}

void question6(){
    cout << "Enter the number of light years:"<<endl;
    double lightYears = 0.0;
    cin >> lightYears;
    cout << lightYears << " light years = " << lightYears*63240 << " astronomical units" << endl;
}

void question7(){
    cout << "Enter the number of hours:"<<endl;
    int hours = 0;
    cin >> hours;
    cout << "Enter the number of minutes:"<<endl;
    int minutes = 0;
    cin >> minutes;
    cout << "Time: " << hours << ":" << minutes << endl;
}