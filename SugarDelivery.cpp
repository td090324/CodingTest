#include <iostream>
#include <vector>

using namespace std;

void Division(int& value, int sugarKg);


int main()
{
    int value = 0;
    int kg = 0;;

    cin >> kg;

    Division(value, kg);


    cout << value << endl;

    return 0;
}

void Division(int& value, int sugarKg)
{
    int fiveKg = 5;
    int threeKg = 3;
    int fRemain = sugarKg % fiveKg;
    int tRemain = sugarKg % threeKg;
    value = sugarKg / fiveKg;
    int temp = 0;
    int tempRemain = 0;

    if (fRemain == 0)
    {
        return;
    }
    else
    {
        value = 0;
        tempRemain = sugarKg / fiveKg;

        while (true)
        {
            temp = sugarKg - (tempRemain * 5);
            value = tempRemain;

            if (temp % threeKg == 0)
            {
                value += temp / threeKg;
                return;
            }

            --tempRemain;

            if (tempRemain <= 0 && fRemain == 4 && fRemain % 3 != 0 && tRemain % 3 == 0)
            {
                value = sugarKg / threeKg;
                return;
            }
            else if (tempRemain <= 0 && tRemain % 3 == 0)
            {
                value = sugarKg / threeKg;
            }
            else if (tempRemain <= 0)
                break;
        }
    }

    value = -1;
}

