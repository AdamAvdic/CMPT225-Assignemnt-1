// include the name of 
#include "Deque.h"
// for last test case
#include <string.h>

#include <iostream>
int main() {
    Deque<int>deq1;
    // ░▒▓█ ░▒▓█ ░▒▓█ ░▒▓█
    // < 4=3, 5=4, 6=6, 7=12, 0=7, 1=14, 2=21, 3=28, >
    // [ 0=7, 1=14, 2=21, 3=28, 4=3, 5=4, 6=6, 7=12, ]
    // tests display, ddisplay, and jump
    cout << "\nAdding simple values:\n";
    int n = 0;
    while (n < 5) {
        deq1.enqueue(n);
    //    deq1.jump(12 / n);
        n++;
    }
    deq1.display();
    deq1.jump(12);
    deq1.display();
    deq1.ddisplay();
    // < 12=-8, 13=3, 14=4, 15=6, 16=12, 0=7, 1=14, >
    // [ 0=7, 1=14, 2=21, 3=28, 4=3, 5=0, 6=0, 7=0, 8=0, 9=0, 10=0, 11=0, 12=-8, 13=3, 14=4, 15=6, 16=12, ]
    // tests eject, and reserve
    cout << "\nExpanding\n";
    deq1.jump(-8);
    deq1.jump(-8);
    deq1.dequeue(); // remove -8
    deq1.eject();   // remove 28
    deq1.eject();   // remove 21
    deq1.display();
    deq1.ddisplay();

    // <>
    // [ 0=0, 1=0, 2=0, 3=0, 4=0, 5=0, 6=0, 7=0, ]
    // tests clear, and reserve edge cases
    cout << "\nEmpty deque:\n";
    deq1.clear();
    deq1.reserve(2);

    deq1.display();
    deq1.ddisplay();

    // < 0=I, 1=love, 2=you, >
    // [ 0=I, 1=love, 2=you, 3=, 4=, 5=, 6=, 7=, ]
    // mostly a test to see if you used objects, and array implementation
    cout << "\nAlternative queue\n";
    Deque<string> deq2;
    deq2.enqueue("I");
    deq2.enqueue("hate");
    deq2.enqueue("you");
    deq2.jump("die");
    deq2.jump("Go");

    // The following code is for part 3 of assignment.
    // Will crash if the [] operator is not implemented

    
    deq2[0] = "I'm";
    deq2[1] = "sorry";
    deq2[3] = "love";
    

    deq2.display();
    deq2.ddisplay();

    /* Friends, DO NOT commit plagarism by submitting this test
    case in your final code. I don't want so see any of you hurt. 
    Thank you for your cooperation. */
}