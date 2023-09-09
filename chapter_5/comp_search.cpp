#include <iostream>
#include <vector>

namespace CompleteSearch {
        template <typename T> class Subset {
            private:
                int length = 0;
            public:
                std::vector<T> vec;

                void increment_length() {
                    length += 1;
                }

                void decrement_length() {
                    length -= 1;
                }
                
                void add_element(T K) {
                    vec.push_back(K);
                    increment_length();
                }

                void remove_element(T K) {
                    vec.pop_back(K);
                    decrement_length();
                }

                int get_vec_length() {
                    return length;
                }

                void get_subset(T K = 0, std::vector<T> subset = {}) {
                    if (K == length) {
                        std::cout << '[';
                        for (T c: subset) {
                            std::cout << c << ", ";
                        }
                        std::cout << "]\n";
                    } else {
                        get_subset(K + 1, subset);
                        subset.push_back(vec[K]);
                        get_subset(K + 1, subset);
                        subset.pop_back();
                    }
                }
        };
}

int main() {

    CompleteSearch::Subset<int> subset;

    subset.add_element(0);
    subset.add_element(1);
    subset.add_element(2);

    int totalNum = subset.get_vec_length();
    std::cout << "Total element of vector: " << totalNum << std::endl;

    subset.get_subset();
    // std::cout << "Total element of vector: " << subs.get_vec_length() << std::endl;
}
