#include <iostream>
#include <string>
using namespace std;
int main(){
int ID;
string talk;
string name;
string mymovie;
string freetime;
cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
cin >> name;
cout << "Fahsai: Wow!!! " << name << " that is a really cool name.\n";
cout << "Fahsai: I think you are Engineering student. What is your student ID?\n";
cout << name <<": ";
cin >> ID;
int Y = ID/10000000-12;
cout << "Fahsai: I think you may be GEAR." << Y  <<  " I have a free movie tickets for you.\n";
cout << "Fahsai: Let's go to cinema together!!!\n";
cout << "Fahsai: What movie do you want to watch?\n";
cout << name << ": ";
cin >> mymovie;
cout << "Fahsai: So....which day are you free to go with me?\n";
cout << name;
cin >> freetime;
cout << "Fahsai:" << freetime << "that is OK!!! I'm looking forward to" << mymovie << "with you.\n";
cout  << name << ": ";
cin >> talk;
cout << " seeyou " << freetime << " Bye Bye \(^ ^)/ ";
return 0;

}
