#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
 int num, guess;
 int attempts;

 srand(time(0));
 num = rand()%100;

 cout << "How many max attempts" << endl;
 cin >> attempts;




while(attempts--)
{
  cout << "Enter your guess between 0 and 100" << endl;
  cin >> guess;
  if(guess>num)
    cout << "Your guess is higher" << endl;
  else if(guess < num)
    cout << "Your guess is lower" << endl;
  else
    break;
}

 if(guess==num)
cout << "Success " << endl;
else
cout <<"Attempts expired" << endl;

return 0;





}
