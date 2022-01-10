#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int count, i, j, r;
    cin >> count;
    cout << endl;
    for (j = 1; j <= count; j++)
    {
        for (i = 1; i <= j; i++)
        {
            cout << i;
        }
        cout << endl;
    }
    system("pause");
    cout << endl;
    for (j = count; j >= 1; j--)
    {
        for (i = 1; i <= j; i++)
        {
            cout << i;
        }
        cout << endl;
    }
    system("pause");
    cout << endl;
    for (j = 1; j <= count; j++)
    {
        for (i = count; i >= j; i--)
        {
            cout << i;
        }
        cout << endl;
    }
    system("pause");
    cout << endl;
    for (j = 1; j <= count; j++)
    {
        for (i = 1; i < count + 1 - j; i++)
        {
            cout << " ";
        }
        for (int g = 1; g < j * 2; g++)
        {
            cout << g;
        }
        cout << endl;
    }
    system("pause");
    cout << endl;
    for (j = 1; j <= count; j++)
    {
        for (i = 1; i < j; i++)
        {
            cout << " ";
        }
        for (int g = 1; g < 2 * (count - j + 1); g++)
        {
            cout << g;
        }
        cout << endl;
    }
    for (j = 1; j <= count; j++)
    {
        for (i = 1; i < count + 1 - j; i++)
        {
            cout << " ";
        }
        for (int g = 1; g < j * 2; g++)
        {
            cout << g;
        }
        cout << endl;
    }
    system("pause");
    cout << endl;
    for (j = 1; j < count; j++)
    {
        for (i = 1; i < j; i++)
        {
            cout << " ";
        }
        for (int g = 1; g < 2 * (count - j + 1); g++)
        {
            cout << g;
        }
        cout << endl;
    }
    for (j = 1; j <= count; j++)
    {
        for (i = 1; i < count + 1 - j; i++)
        {
            cout << " ";
        }
        for (int g = 1; g < j * 2; g++)
        {
            cout << g;
        }
        cout << endl;
    }
    system("pause");
    cout << endl;
    for (int u = 1; u <= count; u++)
    {
        for (j = 1; j < count; j++)
        {
            for (i = 1; i < j; i++)
            {
                cout << " ";
            }
            for (int g = 1; g < 2 * (count - j + 1); g++)
            {
                cout << g;
            }
            cout << endl;
        }
        for (j = 1; j <= count; j++)
        {
            for (i = 1; i < count + 1 - j; i++)
            {
                cout << " ";
            }
            for (int g = 1; g < j * 2; g++)
            {
                cout << g;
            }
            cout << endl;
        }
    }

    system("pause");
    return 0;
}
