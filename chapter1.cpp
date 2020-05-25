/*
 C++ primer exercise
 Author: Chen
 */
#include <iostream>

int main(){
 
    // demo
    std::cout << "Enter two numbers: " << std::endl;
    int v1=0, v2 =0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of "<< v1 <<" and "<< v2 <<" is "<< v1+v2 << std::endl;

    
    //exercise 1.3 print hello world
    std::cout << "Hello World!"<< std::endl;
    
    //1.4 try *, multiplication
    std::cout << "the product is " << v1*v2<< std::endl;
    
    //1.5 rewrite line 13 into separate statement to print each operand
    std::cout << "the sum of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1+v2;
    std::cout << std::endl;
    
    /*1.6 determine whether the following program fragment is legal
    std::cout << "The sum of " << v1;
    << " and " << v2;
    << " is " << v1 +v2 << std::endl;
    
    ILLEAGL. lost part of operands, left operand must be an ostream object
     Compiler Error
     */
    
    return 0;
    
    
    
}



/*
 std, standard, cout = c out
 namespace
 std::
 expalins where the function cout comes from
 cout: object, console output object
 
 alternative: using directive
 #include <iostream>
 using namespace std;
 int main{
    cout<<"hello world\n";
 }
 
//using declaration
 #include <iostream>
 using std::cout;
 
 int main(){
    cout<<"Hello world\n";
 }
 
 
 */