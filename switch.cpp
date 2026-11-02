#include<bits/stdc++.h>
using namespace std;

/*
Concept of break:

If we dont use break, then whicever case we
wanna execute, that case and its following cases, all 
will be executed as well, so that's why we use break.
to avoid that
*/

int main(){
    int day; 
    cin>> day;

    switch(day){

        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;

        default:
            cout<< "not valid!";

        }

        cout << "Check";
        return 0;
}