#include<iostream>
#include<vector>

using namespace std;

int main()

{

cout<<"*******************************Google Mission - 23-July-20202****************************"<<endl;

   int array[2] = {10, 20};

   cout<< array[-1] << "\n"
       << array[0] <<"\n"
       << array[1] <<"\n"
       << array[2] <<"\n"
       << array[3] <<"\n";

   cout<<"=========================================================="<<endl;

   int google[5];

   for (int i = 0 ; i < 5 ; i++) {

     cout <<"Address of ["<< i <<"] is: " << &google[i]<<"\n";
   }

   cout<<"=========================================================="<<endl;

  // void  alexa[]; // error: declaration of ‘alexa’ as array of void
  // Note  Array of void is not possible in c++

   void  *aws[100]; // Array of void Pointer

   int youtube[] = {100, 200, 300, 400}; // int (*)[4]

   //int *android = &youtube; // error: cannot convert ‘int (*)[4]’ to ‘int*’ in initialization

   cout<<"Address of &youtube : " << &youtube <<endl;


    int *android1 = youtube;

    cout<<"Address of youtube  : " << youtube <<endl;


cout<<"=========================================================="<<endl;


// Array member access using pointer arithmetics.


int googlepay[] = {1 , 2 , 3 , 4 , 5 , 6};

int *gpay = googlepay;

int c;

for (c= 0 ; c < 6 ; c++) {

cout << "Array members:"<<"*(gpay + c)-> "<<*(gpay + c) << " \t "<<"googlepay[c]-> "<<googlepay[c] << "\n" ;

cout<<"=========================================================="<<endl;
}
cout<<"=========================================================="<<endl;

vector<int> googlevector;

for (int i = 0 ; i < 5 ; i++)
{

   googlevector.push_back(i);
}

cout <<"Out"<<endl;

for (auto value = googlevector.begin(); value != googlevector.end() ; value++)
{
   cout<< *value <<endl;
}

cout<<"=========================================================="<<endl;
cout<<"*******************************Google Mission - 24-July-20202****************************"<<endl;



------------------------------------------------------

Pointer to Array:- Pointer to an array is also known as Array pointer.
We are using the pointer to access the components of the array.
-------------------

Data-type (*variable-name)[size of array];

int (*ptr)[10];

int (*ptr)[10] = NULL; // Pointer to array of ten numbers

Ex :-

int (*ptr)[5];   // Pointer to interger of five numbers

int fun[5] = {1, 2, 3, 4, 5}


ptr = &array  // Point to whole array of fun

int i = 0;

for (i = 0 ; i < 5 ; i++) {

cout << "Element of the array : " << *(*ptr + i) <<endl;

}
================================
Array of Pointer:- is an array of the pointer variable .
It is also know as pointer array.


Data-type *variable[size of array];

int *ptr[1o];



Ex:-


int ptr[5] = {1, 2, 3, 4, 5};

int *fun[5];

int i;


for (i = 0 ; i < 5 ; i++) {

fun[i] = &ptr[i];

}


// Printing value using Pointer


for (int i = 0 ; i < ptr ; i++) {

cout << "Print the value of array : " << *(*ptr +i) <<::std::endl;

}

=====================================
// Array of pointer

char *name[] = {
                "Mukesh",
                "RojarFast",
                "Hanuman"
}

for (int i = 0 ; i < 3 ; i++) {

cout << "Elements are :" << *(name+i) <<::std::endl;

}

==========================

int (*Pointer-to-array)[5];

int *array-point-to-zero-location;
int array-point-to-whole-location[5];


array-point-to-zero-location = Pointer-to-array; // Points to 0th element of the arr.
    p = arr;

array-point-to-whole-location = &Pointer-to-array; // Points to the whole array arr.


========================
int arr[3][4] = {
                    {10, 11, 12, 13},
                    {20, 21, 22, 23},
                    {30, 31, 32, 33}
                  };
  int (*ptr)[4];
  ptr = arr;
  printf("%p %p %p\n", ptr, ptr + 1, ptr + 2);
  printf("%p %p %p\n", *ptr, *(ptr + 1), *(ptr + 2));
  printf("%d %d %d\n", **ptr, *(*(ptr + 1) + 2), *(*(ptr + 2) + 3));
  printf("%d %d %d\n", ptr[0][0], ptr[1][2], ptr[2][3]);

===============================================================================================
***********************************************************************************************
===============================================================================================


return 0;

}
