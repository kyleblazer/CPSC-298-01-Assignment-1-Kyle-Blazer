#include <iostream>

using namespace std;

int main()
{
    double weightInOz;
    double conversionValue = 35273.92;
    double weightInTons;
    double boxesOfCereal;
    cout << "Enter the weight of your package of cereal in ounces" << endl;
    cin >> weightInOz;
    weightInTons = weightInOz/conversionValue;
    cout << "The weight in tons of a package of cereal is " << weightInTons << "." << endl;
    boxesOfCereal = conversionValue/weightInOz;
    cout << "The number of boxes you need to yeild one metric ton of cereal is " << boxesOfCereal << "." << endl;

    return 0;
}
