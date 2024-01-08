#include <iostream> 

using namespace std;
void mood()
{

  int choice;
  string mood[] = {"Depressed" , "Sad", "Anxious", "Suicidal", };
  //Mental Health App 

  string positive[] = {"Hang On"}; 

  cout << "Welcome " << endl << endl;

  cout << "Are you ? : \n" << endl;
  cout << "(1)" << mood[0] << endl; 
  cout << "(2)" << mood[1] << endl; 
  cout << "(3)" <<mood[2] << endl; 
  cout << "(4)" <<mood[3] << "\n" << endl;

  cout << "Enter choice : "; 
  cin >> choice; 

  if (choice == 1)
  {
    cout << "Your mood is " << mood[0] << endl;

    cout << "Here is a list of ways to combat being " << mood[0] << endl;  

    cout << "List ... " << endl; 
  }
 
  if (choice == 2)
  {
    cout << "Your mood is " << mood[1] << endl;

    cout << "Here is a list of ways to combat being " << mood[1] << endl;  

    cout << "List ... " << endl; 
  }

  if (choice == 3)
  {
    cout << "Your mood is " << mood[2] << endl;

    cout << "Here is a list of ways to combat being " << mood[2] << endl;  

    cout << "List ... " << endl; 
  }

  if (choice == 4)
  {
    cout << "Your mood is " << mood[3] << endl;

    cout << "Immediatly call  " << mood[3] << endl;  

    cout << "List ... " << endl; 
  }

}

int main()
{
  mood(); 
  return 0;
}