#include <iostream>
#include <vector>

template <class T> class BaseClass {
    protected:
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

        void print_elements() {
            std::cout << "Elements in vector: " << std::endl;
            for (T c: vec) {
                std::cout << c << ' ';
            }
            std::cout << std::endl;
        }
};

