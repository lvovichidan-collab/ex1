/******************
Name:idan lcocixh
ID:
Assignment:ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main()
{

    // Ascii
    printf("Ascii:\n");
    /*. Scan one character from the user.
        Then, refer to it as an integer.
        a. Print its value.
        b:
        Print “0”, if its integer representation is even.
        print “1” if its integer representation is odd. */
  
  char letter;      
printf("please enter a character");
scanf("%c",&letter);
printf("its numerical value is:%d\n", letter);
printf("0 for even, 1 for odd: %d \n" , (letter & 1));

    printf("\n2's complement to other representations:\n");

    /*. Scan a negative integer. [2’s complement].
        Print its value in 1’s complement.
        Print its value as unsigned. */
        
    char number;
    printf("please enter a negatve interger");
    scanf(" %d", &number); 
    printf("1' complement: - %d \n",(~number) );
    printf("unsigned: %u",number); 
    
    // Shifting right and left
    printf("\nShifting right and left:\n");
    /*. Scan 3 integers.
        The first one - the value you will play with.
        The second and the third - how much to shift right and left, respectively.
        Print the value after shifting right and then shifting left. */
        int integer1 , integer2 , integer3;
      
printf("please enter 3 intergers \n");
scanf(" %d%d%d",&integer1 ,&integer2 ,&integer3);
 printf("%d% " ,(integer1>>integer2)<<integer3);

    // Even - Odd
    printf("\nEven - Odd:\n");
    /* Scan 3 Integers.
    If at least two of them are even - print 0.
    If at least two of them are odd - print 1. */
    
    int Firstinteger , Secondinteger ,Thirdinteger;
printf("please enter 3 integers \n");
scanf("%d%d%d",&Firstinteger,&Secondinteger,&Thirdinteger);
printf("0- most of them are even, 1- most of them are odd: %d" , ((Firstinteger & 1) & (Secondinteger  & 1)) | ((Secondinteger  & 1) & (Thirdinteger& 1)) | ((Firstinteger & 1) & (Thirdinteger & 1)));

    // Different Bases
    printf("\nDifferent Bases:\n");
    /*  Scan two numbers:
        One in octal base, one in Hexadecimal base.
        Print their LSB’s.
        Print their MSB’s. */
int  octal , hexadecimal;
printf("please enter two numbers in octal and hexadecimal bases \n");
scanf(" %x %o",&octal , &hexadecimal);
printf("LBSs:%d%d \n" , octal & 1 , hexadecimal & 1 );
printf("MSBs:%d%d \n" , (octal>>31) & 1 , (hexadecimal>>31) &1 );
    printf("Bye!\n");

    return 0;
}
