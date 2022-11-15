#include <iostream>
#include <iomanip>
using namespace std;
#include "sorting.h"
void print_menu();
//#include "teacher.h"
int main() {
  LL a;
 int choice;
 print_menu();
  cin>>choice;
  
while(choice!=3){  
  
  switch (choice){
  case 1: a.insert(); break;
 
  case 2: a.print_board(); break;

default: cout<<"invalid choice"<<endl;
  break;
}
  cout<<"?";
  cin>>choice;
  if(choice==3) cout<<"End of the programme"<<endl;
}


  }

void print_menu(){

 cout<<"Choose the number in the menu"<<endl;
 cout<<"1.Rate teacher(s)"<<endl;
 cout<<"2.Show the leaderboard"<<endl;
 cout<<"3.End the programme"<<endl;


  
}