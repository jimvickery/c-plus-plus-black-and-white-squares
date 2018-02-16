/* 
 * File:   main.cpp
 * Author: jimrv8
 *
 * Created on May 26, 2015, 4:24 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const string black  = "*****************";
    const string white  = "                 ";
    
    string blackRows = black + white + black + white;
    string whiteRows = white + black + white + black;
    
    cout << blackRows << endl;
    cout << blackRows << endl;
    cout << blackRows << endl;
    cout << blackRows << endl;
    cout << blackRows << endl;
   
    cout << whiteRows << endl;
    cout << whiteRows << endl;
    cout << whiteRows << endl;
    cout << whiteRows << endl;
    cout << whiteRows << endl;
    
        
    cout << blackRows << endl;
    cout << blackRows << endl;
    cout << blackRows << endl;
    cout << blackRows << endl;
    cout << blackRows << endl;
   
    cout << whiteRows << endl;
    cout << whiteRows << endl;
    cout << whiteRows << endl;
    cout << whiteRows << endl;
    cout << whiteRows << endl;
    
    return 0;
}

