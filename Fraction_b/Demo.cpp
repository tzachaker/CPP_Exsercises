/**
 * Demo file for the exercise on binary tree
 *
 * @author Evgeny Hershkovitch Neiterman
 * @since 2023-03
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "sources/Fraction.hpp"

using namespace ariel;


int main() {
    // Fraction a(5,3), b(14,21);
    // cout << "a: " << a << "b: " << b << endl;
    // cout << "a+b" << a+b << endl; 
    // cout << "a-b" << a-b << endl; 
    // cout << "a/b" << a/b << endl; 
    // cout << "a*b" << a*b << endl; 
    // cout << "2.3*b" << 2.3*b << endl; 
    // cout << "a+2.421" << a+2.421 << endl; 
    // Fraction c = a+b-1;
    // cout << c++ << endl;
    // cout << --c << endl;

    // cout << "c >=b ? : " << (c >= b) << endl;
    // if (a > 1.1) cout << " a is bigger than 1.1" << endl;
    // else cout << " a is smaller than 1.1" << endl;

    //My additions :
    printf("\nMy additions: \n");
    Fraction a(2,7), b(-5,2);
    cout << "a: " << a << " b: " << b << endl;
    cout << "a+b: " << a+b << endl; 
    cout << "a-b: " << a-b << endl; 
    cout << "a/b: " << a/b << endl; 
    cout << "a*b: " << a*b << endl;
    Fraction c(1,2), d(1,2);
    cout << c++ << endl;
    cout << ++c << endl;
    cout << c-- << endl; 
    cout << --c << endl; 
    if(a>b)
        cout << "a is bigger than b" << endl;
    if(a<b)
        cout << "a is smaller than b" << endl;
    if(a==b)
        cout << "a is equal to b" << endl;
    if(c>=d)
        cout << "c is bigger than and equal d" << endl;
    if(c<=d)
        cout << "c is smaller than and equal d" << endl;



}
