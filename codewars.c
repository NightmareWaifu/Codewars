#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//funcs
char *to_weird_case (char *string);

int main(){
    //127 & 1023
    char str[] = "A AA AAA AAAA";
    to_weird_case(str);
}

//7 kyu - Find the calculation type
/*
char calc_type(double a, double b, double c) {
    //The possible return strings are: "addition", "subtraction", "multiplication", "division".
    //    'A' for addition
    //    'S' for subraction
    //    'M' for multiplication
    //    'D' for division

    //idk the only thing that comes to mind is hard coding it im curious to see what the algorithmic way is

    if (a + b == c)
    {
        return 'S';
    } else if (a - b == c)
    {
        return 'S';
    } else if (a * b == c)
    {
        return 'M';
    } 
    //woah some guy used a 1 liner using ternary operators
    //if +, return A, then open another operator
    
    
    return 'D';
}
*/

//6 kyu - IEEE 754 floating point numbers
//i give up this one makes no fucking sense
/*
char *float_to_IEEE_754(float number)
{

    return calloc(1,1);
}

char *double_to_IEEE_754(double number)
{
    return calloc(1,1);
}
*/

//6kyu - Weird String Case
char *to_weird_case (char *string)
{
    // mutate string and return it
    char character[2];
    character[1] = '\0';
    int index = 0;
    for (size_t i = 0; i < strlen(string); i++)
    {
        character[0] = string[i];
        if (character[0] == ' ')
        {
            index = 0;
        } else
        {
            string[i] = index % 2 == 0 ? string[i] = toupper(character[0]) : tolower(character[0]);
            index++;
        }

    }
	return string;
}