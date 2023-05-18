#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
    int a;
    vector<int> v;
    for (int i = 0; i < 3; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    for (int i = (int)v.size() - 1; i > 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                int tmp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < (int)v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    if (v[0] + v[1] <= v[2])
    {
        cout << "No" << endl;
    }
    else
    {
        if (v[0] * v[0] + v[1] * v[1] < v[2] * v[2])
        {
            cout << "Obtuse" << endl;
        }
        else if (v[0] * v[0] + v[1] * v[1] == v[2] * v[2])
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Acute" << endl;
        }
    }
    return 0;
}
