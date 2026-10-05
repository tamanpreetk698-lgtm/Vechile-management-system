#include <iostream>
using namespace std;

class Vehicle
{
public:
    int id;
    string number;
    string owner;
    string type;
};

int main()
{
    Vehicle v[50];
    int n = 0;
    int choice;

    do
    {
        cout << "\n--- VEHICLE MANAGEMENT SYSTEM ---\n";
        cout << "1. Add Vehicle\n";
        cout << "2. Display Vehicles\n";
        cout << "3. Search Vehicle\n";
        cout << "4. Update Vehicle\n";
        cout << "5. Delete Vehicle\n";
        cout << "6. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Vehicle ID: ";
            cin >> v[n].id;

            cout << "Enter Vehicle Number: ";
            cin >> v[n].number;

            cout << "Enter Owner Name: ";
            cin >> v[n].owner;

            cout << "Enter Vehicle Type: ";
            cin >> v[n].type;

            n++;

            cout << "Vehicle added successfully!\n";
        }

        else if (choice == 2)
        {
            for (int i = 0; i < n; i++)
            {
                cout << "\nVehicle ID: " << v[i].id;
                cout << "\nVehicle Number: " << v[i].number;
                cout << "\nOwner: " << v[i].owner;
                cout << "\nType: " << v[i].type << "\n";
            }
        }

        else if (choice == 3)
        {
            int id;
            cout << "Enter Vehicle ID to search: ";
            cin >> id;

            bool found = false;

            for (int i = 0; i < n; i++)
            {
                if (v[i].id == id)
                {
                    cout << "Vehicle Found!\n";
                    cout << "Number: " << v[i].number << "\n";
                    cout << "Owner: " << v[i].owner << "\n";
                    cout << "Type: " << v[i].type << "\n";

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Vehicle not found.\n";
        }

        else if (choice == 4)
        {
            int id;
            cout << "Enter Vehicle ID to update: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (v[i].id == id)
                {
                    cout << "Enter new Owner Name: ";
                    cin >> v[i].owner;

                    cout << "Enter new Vehicle Type: ";
                    cin >> v[i].type;

                    cout << "Vehicle updated successfully!\n";
                }
            }
        }

        else if (choice == 5)
        {
            int id;
            cout << "Enter Vehicle ID to delete: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (v[i].id == id)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        v[j] = v[j + 1];
                    }

                    n--;

                    cout << "Vehicle deleted successfully!\n";
                    break;
                }
            }
        }

    } while (choice != 6);

    return 0;
