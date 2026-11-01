#include<bits/stdc++.h>
using namespace std;

int main(){

    int age;
    cin >> age;

    if(age >= 18){
        cout << "You are an adult!";
    }
    else if( age <10){
        cout << "You are a child!";
    }
    else{
        cout << "You are not an adult!";
    }
    return 0;
}

/*
concept of else if:

If we use if for every condition, then every condition
will get checked and it will take a lot of
time, that's why we use else if , so if the 1st 
condition is true, the other conditions will not 
be checked..
*/