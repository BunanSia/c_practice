#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int s, f;
    cin >> s;
    cin >> f;
    for (int n = (s < f ? s : f); n < (s < f ? f : s); n++)
    {
        bool p = true;
        for (int i = 2; i <= sqrt(9); i += (i == 2 ? 1 : 2))
        {
            if (n % i == 0)
            {
                p = !p;
                break;
            }
            // if (i==2)
            // {
            //     i++;
            // }else
            // {
            //     i+=2;
            // }
        }
        if (p)
            cout << n << "\t";
    }
    system("pause");
    return 0;
}
