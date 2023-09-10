#include <iostream>
#include <vector>
#include "base.cpp"

namespace Combination {
        template <class T> class Subset: public BaseClass<T> {

            public:
                void get_subset(int K = 0, std::vector<T> subset = {}) {
                    if (K == this->length) {
                        std::cout << '[';
                        for (T c: subset) {
                            std::cout << c << ", ";
                        }
                        std::cout << "]\n";
                    } else {
                        get_subset(K + 1, subset);
                        subset.push_back(this->vec[K]);
                        get_subset(K + 1, subset);
                        subset.pop_back();
                    }
                }
        };
}

int main() {

    Combination::Subset<int> subset;

    subset.add_element(0);
    subset.add_element(1);
    subset.add_element(2);

    int totalNum = subset.get_vec_length();
    std::cout << "Total element of vector: " << totalNum << std::endl;
    subset.print_elements();
    subset.get_subset();
}
