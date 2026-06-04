#include "include/list.h"

void List::print_menu() {
    int choice;

    cout << "************************\n";
    cout << "1. Print list\n";
    cout << "2. Add to list\n";
    cout << "3. Delete from list\n";
    cout << "4. Exit\n";
    cout << "Please select an option:\n";
    cin >> choice;

    if(choice ==4) {
        cout << "Goodbye \n";
        exit(0);
    }
    else if(choice == 1) {
        print_list();
    }
    else if(choice == 2) {
        add_item();
    }
    else if(choice == 3) {
        delete_item();
    }
   else {
        cout << "\n";
        cout << "Invalid option, Retry!" << endl;
        return;
        }
}

void List::add_item() {


    cout << "\n";
    cout << "** Add Item **\n";
    cout << "Enter item to add: ";
    string item;
    cin >> item;
    
    list.push_back(item);
    cout << "\n";
    cout << "\nItem added successfully!\n" << endl;
    cin.clear();
    
    print_menu();
}

void List::delete_item() {
    cout << "\n** Delete Item **\n";
        if (list.empty()) {
            cout << "\nList is empty!\n" << endl;
            print_menu();
            return;
        }
        for(std::size_t i = 0; i < list.size(); i++){
            cout << i << ": " << list[i] << "\n";
        }
        cout << "Enter index of item to delete: ";
        
        int index;
        cin >> index;

        if(index >= 0 && static_cast<std::size_t>(index) < std::size_t(list.size())) {
            list.erase(list.begin() + index);
            cout << "\nItem deleted successfully!\n";
            print_list();
        }
            else {
                cout << "\nInvalid index, Retry!\n" << endl;
            }
}

void List::print_list() {
        cout << "\n** Print Item(s) **\n";
        for(std::size_t list_index = 0; list_index < list.size(); list_index++) {
            cout << " * " << list[list_index] << endl;
        }

        cout << "\nM - Menu \n";
        char choice;
        cin >> choice;

        if(choice =='M' || choice == 'm') {
            cout << "\n";
            print_menu();
        }
        else {
            cout << "\n";
            cout << "\nInvalid option, Retry!\n";
            return;
        }
}