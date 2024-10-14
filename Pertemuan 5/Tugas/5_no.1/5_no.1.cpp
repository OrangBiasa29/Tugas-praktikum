#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<string> angka;
	
	for (int i=1; i<=100; i++) {
		if (i % 5 == 0 && i % 3 == 0)
		angka.push_back ("FizzBuzz");
	
	else if (i % 5 == 0) {
		angka.push_back ("Buzz");
	}
	
	else if (i % 3 == 0) {
		angka.push_back("Fizz"); 
	}
    else {
    	string x = to_string(i);
    	angka.push_back(x);
	}
	
	}
		for (int i=0; i<=100; i++)
		cout << angka[i] << endl;

    vector<string> input;
    string n;
    cout << "[";
    while ((cin>>n && n !="]")) {
	    input.push_back(n);
    }
    cout << "[";
    for (int i = input.size()-1; i >= 0; i--) {
        cout << input[i] << " ";
    }
    cout << "]";
}

