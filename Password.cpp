#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string password, check, save,tryagain, yes = "yes";
    bool again;
    do
    {
        again = 0;
        cout << "Enter password:";
        cin >> password;
        cout << "Check your password:";
        cin >> check;
        if (password != check)
        {
            cout << "Password is wrong!!" << endl;
            again = 1;
        }
        else
        {
            cout << "Do you want to save?" << endl;
            cin >> save;
            cout << save << endl;
            if (save == yes)
            {
                int count = 3;
                bool correct = 0;
                do
                {
                    cout << "Entr your password:" << endl;
                    string input;
                    cin >> input;
                    if (password == input)
                    {
                        cout << "pass" << endl;
                        correct = 1;
                    }
                    else
                    {
                        cout << "Password is wrong!!" << endl;
                        count--;
                        if (count == 1)
                        {
                            cout << "you have " << count << " chance" << endl;
                        }
                        else if (count == 0)
                        {
                            cout << "you have no chances" << endl;
                        }
                        else
                        {
                            cout << "you have " << count << " chances" << endl;
                        }
                    }
                } while (correct != 1 && count > 0);
            }
            else
            {
                cout << "Do you want to try again?" << endl;
                cin>>tryagain;
                if (tryagain == yes)
                {
                    again = 1;
                }
            }
        }
    } while (again);

    system("pause");
    return 0;
}
