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
   void  *aws[100]; // Array of void Pointer

   int youtube[] = {100, 200, 300, 400};

  // int *android = &youtube; // error: cannot convert ‘int (*)[4]’ to ‘int*’ in initialization
    int *android = youtube;

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













return 0;
}
