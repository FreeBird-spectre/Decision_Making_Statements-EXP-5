// Abir Seth
// PRN- 24070123003
// Entc A1

#include <iostream>
using namespace std;
int main() {
    int choice;
cout << "Enter the type of genre"<<endl;
cout<< endl<<"1.action"<<endl<<"2.Crime"<<endl<<"3.Thriller"<<endl<<"4.Mystery"<<endl;
cout << " : ";
    cin >> choice;
    
    switch(choice){
    case 1:
cout << "The Fall Guy";
        break;
case 2:
        cout << "Seven";
        break;
    case 3:
        cout << "Prisoners";
        break;
      case 4:
        cout << "Deep Water";
        break;
    }
    return 0;
}

Enter the type of genre

1.action
2.Crime
3.Thriller
4.Mystery
 : 3
Prisoners

=== Code Execution Successful ===
