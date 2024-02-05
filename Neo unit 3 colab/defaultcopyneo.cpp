#include <iostream>
#include <vector>

class DataStore {
public:
    DataStore() {
        // Initialize an empty data store
        data_.clear();
    }

    DataStore(const DataStore& old_datastore) {
        // Copy constructor to create a copy of an existing data store
        data_ = old_datastore.data_;
    }

    ~DataStore() {
        // Destructor to ensure the data store is empty upon destruction
        if (!data_.empty()) {
            std::cerr << "Error: Destroying a nonempty datastore" << std::endl;
        }
    }

    void add(int value) {
        // Add an integer to the data store
        data_.push_back(value);
    }

    void remove(int count) {
        // Remove integers from the data store
        if (count > data_.size()) {
            std::cerr << "Error: Removing more elements than available" << std::endl;
        } else {
            for (int i = 0; i < count; ++i) {
                data_.pop_back();
            }
        }
    }

    int size() const {
        // Get the current size of the data store
        return data_.size();
    }

private:
    std::vector<int> data_;
};

int main() {
    int n, value, remove_count1, remove_count2;
    std::cin >> n;

    DataStore ds1, ds2;

    for (int i = 0; i < n; ++i) {
        std::cin >> value;
        ds1.add(value);
    }

    std::cin >> remove_count1;
    std::cin >> remove_count2;

    // Create a copy of ds1
    DataStore ds2_copy(ds1);

    ds1.remove(remove_count1);
    ds2.remove(remove_count2);

    if (ds1.size() == remove_count1) {
        std::cout << "Success" << std::endl;
    } else {
        std::cerr << "Error: Destroying a nonempty datastore" << std::endl;
    }

    if (ds2.size() == remove_count2) {
        std::cout << "Success" << std::endl;
    } else {
        std::cerr << "Error: Destroying a nonempty datastore" << std::endl;
    }

    return 0;
}

