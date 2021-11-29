#include "header.h"


int main() {
    float a;
    float b;
    float c;
    float discriminant;
    double x1;
    double x2;

    cout << "Input a, b, and, c: " ;
    cin >> a >> b>> c;

    discriminant = b*b - 4*a*c;

    if (discriminant < 0){

        cout << "No real roots." <<endl;

    }
    else{

        discriminant  = sqrt(discriminant);
        x1 = ((-1 * b)+ discriminant ) / ( 2 * a );
        x2 = ((-1*b)-discriminant)/(2*a);

        cout<<"Root 1 is = "<< x1 <<"\nRoot 2 is = "<< x2 << endl;

    }


    return 0;
}