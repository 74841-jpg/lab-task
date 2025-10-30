#include <iostream>
using namespace std;
int main()
 {
    int choice;
    double num1, num2;

    while (true)
	 {
        cout<<"\nSimple Calculator Menu\n";
        cout<<"1. Add\n";
        cout<<"2. Subtract\n";
        cout<<"3. Exit\n";
        cout<<"Enter your choice (1-3):";
        cin>>choice;

        switch (choice) 
		{
            case 1:
                cout<<"Enter two numbers:";
                cin>>num1>>num2;
                cout<<"Result:"<<num1 + num2<< endl;
                break;
            case 2:
                cout<<"Enter two numbers:";
                cin>>num1>>num2;
                cout<<"Result:"<<num1 - num2<<endl;
                break;
            case 3:
                cout<<"Exiting program";
                break;
            default:
                cout<<"Invalid choice!";
        }
    }

    return 0;
}
