#include <iostream>
#include <vector>
#include "base.cpp"

namespace Permutation {
    template <typename T> class PermutationSet: public BaseClass<T> {
        
        public:
            void get_permutation(int index = 0) {
                if (index == this->length) {
                    for (int num : this->vec) {
                        std::cout << num << " ";
                    }
                    std::cout << std::endl;
                }

                for (int i = index; i < this->length; i++) {
                    std::swap(this->vec[index], this->vec[i]);
                    get_permutation(index + 1);
                    std::swap(this->vec[index], this->vec[i]);
                }
            }
    };
}

int main() {
    Permutation::PermutationSet<int> permutationSet;
    permutationSet.add_element(1);
    permutationSet.add_element(2);
    permutationSet.add_element(3);

    int amount = permutationSet.get_vec_length();
    std::cout << "amount is " << amount << std::endl;

    // permutationSet.print_elements();
    permutationSet.get_permutation();
}
