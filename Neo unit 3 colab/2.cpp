#include <iostream>
#include <vector>

class Professor {
public:
    Professor(int id = 0, int salary = 0) : id_(id), salary_(salary) {}

    void display() const {
        cout << id_ << " " << salary_ << endl;
    }

    bool isSalaryGreaterThanEqual(int limit) const {
        return salary_ >= limit;
    }

private:
    int id_;
    int salary_;
};

int main() {
    int N;
    cin >> N;

    vector<Professor> professors;

    for (int i = 0; i < N; ++i) {
        int id, salary;
        std::cin >> id >> salary;
        professors.push_back(Professor(id, salary));
    }

    int salaryLimit = 20000;

    for (int i = 0; i < N; ++i) {
        if (professors[i].isSalaryGreaterThanEqual(salaryLimit)) {
            professors[i].display();
        }
    }

    return 0;
}
//output
//2
//100123 100000
//100124 200000
//100123 100000
//100124 200000

