// CPP program to illustrate implementation 
// of remove_if function

#include <forward_list>
#include <iostream>

using namespace std;

// Predicate implement as a function
bool even(const int& value) {
	
	return (value % 2 ) == 0;

}

// Driver Code
int main() {
    
	forward_list<int> myforwardlist{ 1, 2, 2, 2, 5, 6, 7 };
    myforwardlist.remove_if(even);
    for (auto it = myforwardlist.begin();
         it != myforwardlist.end(); ++it)
        cout << ' ' << *it;
    
	return 0;

} // End driver