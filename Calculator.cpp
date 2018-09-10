#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main () {
    const double long EULERS_VAL =  2.71828;
    const double long PI_VAL = 3.14159;
    double long num1;
    double long num2;
    double long answer;
    double long side1Val;
    double long side2Val;
    
    int root;
    
    char convert;
    char reply;
    char op;
    char divider = '|';
    
    string spacesForTopDiv = "  ";
    string spacesForValDiv = "       " + spacesForTopDiv;
    string spacesForNoVal = "            ";
    string spacesForNoValDiv  = spacesForNoVal + spacesForValDiv;
    
    string side1;
    string side2;
    
    cout << "This is my calculator." << endl << endl;
    
    cout << "Constants include: " << spacesForTopDiv << divider << spacesForTopDiv <<  "Methods of operations include:"<< endl;
    cout << "e  = " << EULERS_VAL << spacesForValDiv << divider << spacesForTopDiv << "* = Multiplication" << endl;
    cout << "pi = " << PI_VAL << spacesForValDiv << divider << spacesForTopDiv << "/ = Division" << endl;
    cout << spacesForNoValDiv << divider << spacesForTopDiv << "+ = Addition" << endl;
    cout << spacesForNoValDiv << divider << spacesForTopDiv << "- = Subtraction" << endl;
    cout << spacesForNoValDiv << divider << spacesForTopDiv << "^ = To the power of" << endl << endl;
    
    cout << "Do you want to: take the root of a number (input 'r')," << " take the log of a value (input 'l')," << endl;
    cout << "take the percentage of a number to another (input 'p')," << " find the angle of a right triangle (input 'a')," << endl;
    cout << "or use regular operators (input 'o')." << endl << endl;
    cout << "Enter your response here: ";
    cin  >> reply;
    cout << endl;
    
    switch (reply) {
        
        case 'r':
            cout << "To what root do you wish to take the number: ";
            cin  >> root;
            cout << endl;
        
            cout << "Enter the value you wish to take the " << root << " root of: ";
            cin  >> num1;
            cout << endl;
        
            answer = pow (num1, (1.0 / root));
        
            cout << root << " root of " << num1 << " equals " << answer << "." << endl; 
            break;
        
        case 'l':
            cout << "What base value do you want to use: ";
            cin  >> num1;
            cout << endl;
            
            cout << "What value do you want to use the log of: ";
            cin  >> num2;
            cout << endl;
            
            answer = (log10 (num2)) / (log10 (num1));
            
            cout << "Log base " << num1 << " of " << num2 << " equals " << answer << "." << endl; 
            break;
        
        case 'p':  
            cout << "Enter first number value: ";
            cin  >> num1;
            cout << endl;
                    
            cout << "Enter second number value: ";
            cin  >> num2; 
            cout << endl;
                    
            answer = 100 * (num1 / num2);
                    
            cout << num1 << " is " << answer << "% of " << num2  << "." << endl; 
            break;
                    
        case 'a':
            cout << "Given that it is a right triangle, ";
            cout << "what two sides are given (input one at a time)?" << endl << endl;
            cout << "What is the first side given (hyp), (opp) or (adj): ";
            cin  >> side1;
            cout << endl;
            
            cout << "What is the second side given (hyp), (opp) or (adj): ";
            cin  >> side2;
            cout << endl;
                        
            if (((side1 == "opp") && (side2 == "hyp")) || ((side1 == "hyp") && (side2 =="opp"))) {
                cout << "To find the angle we use the arcsine function." << endl << endl;
                cout << "Enter the value of the opposite side: ";
                cin  >> side1Val;
                cout << endl;
                cout << "Enter the value of the hypotenuse side: ";
                cin  >> side2Val;
                cout << endl;
                
                answer = asin(side1Val / side2Val);
                
                cout << "The angle of the right triangle computs to: arcsin(" << side1Val << " / ";
                cout << side2Val << ") = " << answer  << " in radians." << endl << endl;
                cout << "Do you want to convert the angle into degrees (y) or (n): ";
                cin  >> convert;
                cout << endl;
                
                if (convert == 'y') {
                    double long conv = answer * (180 / PI_VAL);
                    cout << "The angle of the right triangle computs to: arcsin(" << side1Val << " / ";
                    cout << side2Val << ") = " << conv  << " in degrees." << endl;
                } else { 
                    cout << " ";
                }
            } else if (((side1 == "adj") && (side2 == "hyp")) || ((side1 == "hyp") && (side2 == "adj"))) {
                cout << "To find the angle we use the arccosine function." << endl << endl;
                cout << "Enter the value of the adjacent side: ";
                cin  >> side1Val;
                cout << endl;
                cout << "Enter the value of the hypotenuse side: ";
                cin  >> side2Val;
                cout << endl;
                
                answer = acos(side1Val / side2Val);
                
                cout << "The angle of the right triangle computs to: arccos(" << side1Val << " / ";
                cout << side2Val << ") = " << answer  << " in radians." << endl << endl;
                cout << "Do you want to convert the angle into degrees (y) or (n): ";
                cin  >> reply;
                cout << endl;
                
                if (reply == 'y') {
                    double long conv = answer * (180 / PI_VAL);
                    cout << "The angle of the right triangle computs to: arccos(" << side1Val << " / ";
                    cout << side2Val << ") = " << conv  << " in degrees." << endl;
                } else { 
                    cout << " ";
                }
            } else if (((side1 == "opp") && (side2 == "adj")) || ((side1 == "adj") && (side2 == "opp"))) {
                cout << "To find the angle we use the arctangent function." << endl << endl;
                cout << "Enter the value of the opposite side: ";
                cin  >> side1Val;
                cout << endl;
                cout << "Enter the value of the adjacent side: ";
                cin  >> side2Val;
                cout << endl;
                
                answer = atan(side1Val / side2Val);
                
                cout << "The angle of the right triangle computs to: arctan(" << side1Val << " / ";
                cout << side2Val << ") = " << answer  << " in radians." << endl << endl;
                cout << "Do you want to convert the angle into degrees (y) or (n): ";
                cin  >> reply;
                cout << endl;
                
                if (reply == 'y') {
                    double long conv = answer * (180 / PI_VAL);
                    cout << "The angle of the right triangle computs to: arctan(" << side1Val << " / ";
                    cout << side2Val << ") = " << conv  << " in degrees." << endl;
                } else { 
                    cout << " ";
                }
                break;
        case 'o':        
	        cout << "Input two values and a method of operations." << endl << endl;
            cout << "Enter first number value: ";
            cin  >> num1;
            cout << endl;
            
            cout << "Enter your method of operation: ";
            cin  >> op;
            cout << endl;
            
            cout << "Enter second number value: ";
            cin  >> num2;
            cout << endl;
            
            switch (op) {
                case '*':
                    answer = num1 * num2;
                    break;
                
                case '/':
                    answer = num1 / num2;
                    break;
                    
                case '+':
                    answer = num1 + num2;
                    break;
                    
                case '-':
                    answer = num1 - num2;
                    break;
                    
                case '^':
                    answer = pow (num1, num2);
                    break;
                    
                default:
                    cout << "Invalid Input" << endl;
            }
            if (op != '^') {
                cout << num1 << " " << op << " " << num2 << " = " << answer << "." << endl;
            } else {
                cout << num1 << op << num2 << " = " << answer << "." << endl;    
            }
            break;
            
        default:
            cout << "Invalid Response!";
            break;
    } 
    return 0;
}
}
