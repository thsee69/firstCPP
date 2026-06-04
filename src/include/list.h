#include <iostream>
#include <vector>
using namespace std;

class List {
    private:
    protected:
    public:

        List() {
            // Constructor

        }
        ~List() {
            // Destructor
        }

        
    vector<string> list;
    string name;

    void print_menu();
    void delete_item();
    void add_item();
    void print_list();
};