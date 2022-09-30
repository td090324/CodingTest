#include <iostream>

using namespace std;


int main()
{
    int daysDist = 0;
    int nightDist = 0;
    int m = 0;
    int day = 0;

    cin >> daysDist;
    cin >> nightDist;
    cin >> m;


    day = (m - daysDist) / (daysDist - nightDist) + 1;
    int temp = (m - daysDist) % (daysDist - nightDist);

    if (temp != 0)
        ++day;

    cout << day << endl;

    return 0;
}