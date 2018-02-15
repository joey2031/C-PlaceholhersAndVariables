#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char** argv) {
    // a conversion character is a placeholder to put something like a string in.
    // %s means a placeholder for a string, only for text.
    // %d is for whole numbers
    // %f is for numbers with decimal places.    

    printf("%s is the best person ever\n", "joey");
    // here after the "," is what you are 
    // storing in the placeholder.
    // output: joey is the best person ever

    // can use multiple conversion characters/ place holders in one print statement.
    printf("%s likes to eat %s and %s \n", "billy", "apples", "oranges");

    // print statement using %d:
    printf("I ate %d apples today\n", 2); // notice the 2 is not in "" since it 
    // is a number and not a string.

    // print statement using %f:
    printf("The value of pi is %f\n", 3.14159265358979323);

    // note for decimal numbers: by default it prints 6 decimal places
    // this now rounds pi to 2 decimal places.
    printf("The value of pi is %.2f\n", 3.14159265358979323);

    // 10 decimal places.  
    printf("The value of pi is %.10f\n", 3.14159265358979323);
    // These notes and code was made by watching Buckys (the new boston), video
    // on conversion characters (c programming tutorial 6)

    //
    //
    //
    // The notes and code below this comment was made by 
    //watching Buckys (the new boston), video
    // on Variables (C Programming Tutorial - 7)
    // Variables- just a place holder for something. Don't name one the same 
    // name as a function.
    int number = 10;
    int number2 = 4 + 5;

    int addNumb1 = 23;
    int addNumb2 = 34;
    int sum = addNumb1 + addNumb2;



    printf("I am printing %d from the variable number\n", number);
    printf("This number is being printed form another variable where some math was done on it. The number is %d\n", number2);
    printf("I am going to print %d just to show another thing you can do with variables", sum);



    return (EXIT_SUCCESS);
}

