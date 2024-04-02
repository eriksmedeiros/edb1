#include <iostream>

using namespace std;

void order(int *a, int s)
{

    int count = 0;

    for (int i = 0; i < s - 1; i++)
    {
        if (a[i + 1] < a[i])
        {
            count++;
        }
    }

    if (count == s - 1)
    {
        cout << "Decrescente" << endl;
    }
    else
    {

        count = 0;

        for (int i = 0; i < s - 1; i++)
        {

            if (a[i + 1] > a[i])
            {
                count++;
            }
        }

        if (count == s - 1)
        {
            cout << "Crescente" << endl;
        }
        else
        {
            cout << "Lista não ordenada!" << endl;
        }
    }
}

int main()
{

    int size;
    cout << "Digite a quantidade de elementos: ";
    cin >> size;

    int a[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Digite o " << i + 1 << "o elemento: ";
        cin >> a[i];
    }

    order(a, size);

    return 0;
}
