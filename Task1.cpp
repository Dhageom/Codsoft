#include <iostream>
#include <ctime>

using namespace std;

int main()
{

    srand(time(0));
    int x,y,z = rand() % 100;
    string s;
start:
    cout << "we will guess a number for you\n";
    for (int i = 10; i >= 0; i--)
    {

        cin >> x;
        s = (x > y) ? "Try a lower number\n" : "Try a Higher Number\n";
        if (x == y)
        {
            cout << "Congratulations you have guessed the number " << y << endl
                 << "Enter 1 to restart the game & 0 to exit\n";
            cin >> z;
            if (z == 1)
            {
                goto start;
            }
            else if (z == 0)
            {
                goto end;
            }
            else
            {
                cout << "Enter a  Input\n";
            }
        }
        cout << "Tries Left " << i << endl;
        cout << s;
    }

end:
    return 0;
}

