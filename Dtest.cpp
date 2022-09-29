// include the name of 
#include "Deque.h"
// for last test case
#include <string.h>

#include <iostream>

using namespace std;

int main() {
    Deque<int>deq;

    //Test case 1) simple cases

    cout << "Test Case 1: \n------------------------------------\n";

    int n = 0;
  //  deq.enqueue(1);
    deq.display();
    deq.ddisplay();
    while (n < 9) {
        deq.enqueue(n);
    //    deq1.jump(12 / n);
        n++;
    }
    deq.display();
    deq.ddisplay();

    cout<<"\nTest Case 2: \n ------------------------------------\n";
    deq.jump(22);
    deq.display();
    deq.ddisplay();
    deq.eject();
    deq.display();
    deq.ddisplay();
};
