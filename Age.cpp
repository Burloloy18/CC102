#include <iostream>

 using namespace std; 
 
int main () { 
    int age;
	    cout << "What is your age: ";
	    cin >> age;
     if (age < 16 ){
	      cout << "Too Young to Drive" << endl; 
     } else if (age == 16) {
		    cout << "Better Clear the road" << endl;
	   } else if (age > 16 & age < 65) {
		    cout << "You are getting pretty old" << endl;
	   }
	   return 0;
}
