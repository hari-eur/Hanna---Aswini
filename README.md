The below are the exercise questions on Module 1 . 

1.Write a overview on the topics you covered in module 1.
2.The distance between two cities(in km.) is input. Write a program to convert and print this distance in meters, feet, inches and centimeters.
3.Write a program to find whether give number is odd or even and positive or negative integer, and absolute value of a number.
4.Write a program to determine whether the input is leap year or not. (NOTE: Use conditional operators)
5.Write a program to enter numbers till the user wants. At the end, as a output it should display the count of positive, negative and zeros entered.
6.Write a program to print all the ASCII values and their equivalent characters using while while loop.
7.Write a program to convert integer input to binary and its octet equivalent.
8.Write a program to generate all combinations of 4,5,6,7 using for loop.

_______________________________________________________________________________________________________________________________________________________________________

Module 2 questions:
1.write a program which covers all control statements, switch case syntax and its functionality.

                Program statement : 
                1. User should be able to view list of banks.
                 2. User should be able select a bank and to view its Banking operation and its various account details(Savings, Current, demat)
                 3. User should be able to list all the benefits of choosen account(interest etc).

2. Write a program to print full, inverted, half pyramid(rows = 7) using while and for loop(nested)

____________________________________________________________________________________________________________________________________________________________________

Module 3 questions:
1.Write complete function with macro that takes argument dynmically.
Sample Input:
        print("Welcome to %s",data);
        print("Hello to %s: Welcome to %s,data_1,data_2);
       Implent the print API in MACRO.

2.Write the program for following
Input:
n -> Size of matrix will always be odd number
m -> Element to be found

Output:
Replace all the occurance of m with number above it  except the elements in first row.

Sample 1:
Input:
n=3
m=8
Array:
1 2 3
8 5 6
7 8 9

Output:
1 2 3
1 5 6
7 5 9

Sample 2:
Input:
n=5
m=7

Array:
1 2 7 7 5
6 7 7 4 1
2 3 5 6 7
1 7 6 3 9
3 9 2 1 5

Output:
1 2 7 7 5
6 2 7 4 1
2 3 5 6 1
1 3 6 3 9
3 9 2 1 5

3.Read the input string and pass to a FUNCTION which returns string which is sorted in following format
String Input:
123434acibdf295869asdsd37695dfgasd
String Output:
123344abcdfi256899addss35679addfgs

Explanation:
sort numbers and alphabets in subsets
123434 - acibdf - 295869 - asdsd - 37695 - dfgasd
123344 - abcdfi - 256899 - addss - 35679 - addfgs

_______________________________________________________________________________________________________________________________________________________________________


 The exercise questions of Module 4:

 

Exercise questions:

1.Setup GDB and run it with program with strings and pointers program(below exercises of strings and pointers). Introduce segmentation fault in your code and use gdb to debug and fix the error step by step.[Upload steps/images and commands output]

 2. Write a program to handle strings
    i) Get string as input and store it in array 
    ii) Check string if it is 8 character length, contains atleast one lowercase and uppercase,one number and one special character with and without string functions/char lib functions.

 3. Create a fixed array and use pointers to transverse through elements and print the output.

 4. Write a program to Check string if it is 8 character length, contains atleast one lowercase and uppercase,one number,one special character and possible permutations using pointers

 5.Write a C program that dynamically allocates an array of integers using either malloc or calloc, populates it with values entered by the user, and then calculates and prints the sum of all the values in the array. The program should then use the free function to deallocate the memory used by the array
 
 _________________________________________________________________________________________________________________________________________________________________
 
 
 Exercise questions:

Write a c program with nested structure implementation with below data, 
Structure 1: Student_Detailes (Name,mailID,Mobile number,Percentage) 

Structure 2:Department(Dept Name,Struct Student_Details,TotalAveverage) 

Program takes input of all the fields above except Total Average per department. Calculate Total Average per department. 

Sample Input: 

Number of Inputs: 2 

Shiva shive@xxx.com 123456789 90% IT  

Giri giri@xxx.com 123456789 99% ECE 

Sample OutPut: 

Number of branches: 2 

Average percentage per Department: 

IT – 90% 

ECE – 99% 

2) Write structure with below mentioned variables and make the sizeof struct return 8 bytes only.But it should take input for all the below values and print the same. 

Variables in the structure: 

Hours 
Minutes 
Seconds 
Day 
Month  
Year 
3) Write a program to get the input from the file and create a new encrypted file and then read the encrypted file and decrypt the content. 

“You can use any logic for Encryption and decryption. When the Encrypted file is open it should not be in readable format ” 

 Sample Input/Output : 

Enter 

E to encrypt  
D to decrypt  
Q to quit 
E 

Enter the file to be Encrypted:/tmp/data.txt 

Encrypted File is /tmp/data_encrypted.txt 

Enter 

E to encrypt  
D to decrypt  
Q to quit 
D 

Enter the file to be decrypted:  /tmp/data_encrypted.txt 

Decrypted file is /tmp/data_decrypted.txt 

Enter 

E to encrypt  
D to decrypt  
Q to quit 
Q 

____________________________________________________________________________________________________________________________________________________________________

Exercise questions Module 6:

1. Create a file in a new directory using vi editor and ensure the filename doesn't exist already using shell commands.
2. Get the Absolute path and relative path of the file you created in Question 1.
3. Select a random file and do the following:
    a. Count the no. of lines, words in the file
    b. Display the list 10 lines of a file
    c. Display the entire file
    d. Search a word 'X' in the entire file and display the lines with it
