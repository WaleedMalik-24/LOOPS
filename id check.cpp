#include <iostream>
#include <string>
using namespace std;

int main() {
    string userId, password;
    cout << "Enter your ID: ";
    cin >> userId;
    switch (0) {
    case 0:
   if (userId == "user1") 
	{
  cout << "Enter your password: ";
  cin >> password;
  switch (0) {
  case 0:
  if (password == "password123") 
  {
  cout << "Welcome, user1!" << endl;
  } else {
  cout << "Incorrect Password" << endl;
  }
  break;
  }
  } else if (userId == "user2") 
  {
  cout << "Enter your password: ";
  cin >> password;
  switch (0) {
  case 0:
  if (password == "securepass") 
  {
  cout << "Welcome, user2!" << endl;
  } else {
   cout << "Incorrect Password" << endl;
  }
   break;
  }              
  cout << "Incorrect ID" << endl;
  }
  }
     return 0;
}

