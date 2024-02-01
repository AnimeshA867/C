#include <iostream>
using namespace std;
int main()
{
    int month;
    cout << "Enter the month:(1-12)"
         << endl;
    cin >> month;
    switch (month)
    {
    
        case 1:
                    cout<<"You were born on January."<<endl;

         break;
        case 2:
                    cout<<"You were born on February."<<endl;

         break;
        case 3:
                    cout<<"You were born on March."<<endl;

         break;
        case 4:
                    cout<<"You were born on April."<<endl;

         break;
        case 5:
                    cout<<"You were born on May."<<endl;

         break;
        case 6:
                    cout<<"You were born on June."<<endl;

         break; 
        case 7:
                    cout<<"You were born on July."<<endl;

         break;
         case 8:
                    cout<<"You were born on August."<<endl;

         break; 
        case 9:
                    cout<<"You were born on September."<<endl;

         break; 
        case 10:
                    cout<<"You were born on October."<<endl;

         break;
         case 11:
                    cout<<"You were born on November."<<endl;
         break;
        case 12:
            cout<<"You were born on December."<<endl;
        break;
        default:
        cout<<"Error";
        break;
    }
}
    
