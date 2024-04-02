#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
    int i;
    for (i = 0; i < argc; i++)
    {
        cout << "Entrada" << i << ": " << argv[i] << endl;
    }

    /*int x = atoi(argv[1]);
    float y = atof(argv[2]);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "x + y = " << x + y << endl;
    */
    return 0;
}