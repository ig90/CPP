#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[])

    {
    float iloczyn=1;
    float srednia=0;
    float najblizsza, x;


   for(int i=1; i<argc ; i++)
    {
         iloczyn *= atof(argv[i]);
        }


        srednia = powl(iloczyn,1.0/(argc-1));

        x = fabs(srednia-atof(argv[1]));
        najblizsza = atof(argv[1]);

        for (int i=1; i<argc-1; i++)
        {

            if (fabs(srednia - atof(argv[i]) < x))

                x = fabs(srednia - atof(argv[i]));
                najblizsza = atof(argv[i]);


        }

        cout << "Argument najbliższy średniej geometrycznej " << srednia << " = " << najblizsza << endl;





        return 0;
}

