/*code fragment in question*/

std::cout << "The sum of " << v1;      
    << " and " << v2;      
    << " is " << v1 + v2 << std::endl;

/*it is illegal, cause by adding a semi colon at the end of v1
you're closing the line of code much like how a full stop works with sentences in english) thus 
it causes a syntax error because you have used insertion operators without std::cout*/

/* there are two ways to fix the code fragment, you can 
either simply include std::cout before the operand or
remove the semicolons infront of mid output statement */


