#include <iostream>
using namespace std;
int main()
{
    cout << " \n\n ";

    int survivors, killed, adventurers;
    const int GOLD_COINS = 500;
    string leader;

    cout << " WELCOME TO THE LOST TREASURE\n";
    cout << " Please enter the following details for personalized adventure:\n";
    cout << " Enter a number = ";
    cin >> adventurers;
    cout << " \n Enter another number less than the previous one =";
    cin >> killed;
    cout << " \n Enter your last name =";
    cin >> leader;
    survivors = adventurers - killed;
    cout << " \n A brave group of " << adventurers << " set off into the Whispering Mountains,";
    cout << " led by the seasoned explorer, " << leader << ".\n";
    cout << " With only rumors and a crumbling map,";
    cout << " they hiked through dense woods and crossed rivers under the cold stare of jagged cliffs.\n\n";
    cout << " Along the way, a storm caused a landslide killing " << killed << " from the group.";
    cout << " The remaining " << survivors << " were heartbroken but decided to bury their friends near a strange rock formation.";
    cout << " While digging the graves, their shovel hit something solid. They uncovered an old chest filled with " << GOLD_COINS << " gold coins lost for centuries.\n";
    cout << " \nThough they mourned their friends, they returned home with a secret fortune and a story they’d never forget. ";
    system("pause");

  return 0:
}
