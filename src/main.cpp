#include <iostream>
#include <string>
#include <vector>
#include <game.h>

using namespace std;

int main (int argc, char *argv[])
{
    if (argc < 2)
    {
        cout << "Argument(s) missing : At least one map file name required" << endl;
        return 0;
    }

    for (int i (1); i < argc; ++i)
    {
        Game (argv[i]);
    }
    return 0;
}