// example 01
#include<iostream>
using namespace std;

class bio {
	public:
		string name, school, college, course; 

		void intro() {
			cout << name << endl;
			cout << school << endl;
			cout << college << endl;
			cout << course << endl;
		}
};

int main() {
	bio b1 ;

	b1.name = "Abhinav Abhilash";
	b1.school = "St.George High School";
	b1.college = "Jain University";
	b1.course = "BCA FullStack + AI";

	b1.intro();

	return 0;
}


// example 02
#include<iostream>
using namespace std;

int age;
double marks;

int main() {

	cout << "Enter your age: ";
	cin >> age;
	
	cout << "Enter your marks: ";
	cin >> marks;
	
	// cout << "You are " << age << " years old" << " and my mark is " << marks << "." << endl;
    cout << "You are " << age << " years old ";
    cout << "and my marks is " << marks << ".";
}


// example 03
#include<iostream>
using namespace std;

int main() {
	string name;
	int age;
	double marks;

	cout << "Enter your name: ";
	cin >> name;

	cout << "Enter your age: ";
	cin >> age;

	cout << "Enter your marks: ";
	cin >> marks;

	cout << "My name is: " << name << endl;
	cout << "My age is : " << age << endl;
	cout << "My marks are: " << marks << endl;
	
}