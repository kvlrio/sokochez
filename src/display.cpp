#include <display.h>

using namespace std;

void ClearScreen ()
{
    cout << "\033[H\033[2J";
}

void Color (const string & coul)
{
    cout << "\033[" << coul <<"m";
}

void ShowMatrix (const CMatrix & Mat)
{
    for (unsigned i (0); i < Mat.size(); ++i)
    {
        for (unsigned j (0); j < Mat[i].size(); ++j)
        {
            if (    (0 == j) || (Mat[i][j] != Mat[i][j-1]))
                switch (Mat[i][j])
                {
                case KTokenBlock :
                    Color (KColBlock);
                    break;
                case KTokenEmpty :
                    Color (KColEmpty);
                    break;
                case KTokenPlayer1 :
                    Color (KColP1);
                    break;
                case KTokenPlayer2 :
                    Color (KColP2);
                    break;
                case KTokenWall :
                    Color (KColWall);
                    break;
                }
            cout << Mat[i][j];
        }
        cout << endl;
    }
    Color(KReset);
}