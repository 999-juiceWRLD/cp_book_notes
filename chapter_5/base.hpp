#include <vector>

namespace Basis {
    template <typename T> class BasisClass {
        protected:
            int length = 0;
        public:
            // std::vector<T>; vec;
            void increment_length() { }
            void decrement_length() { }
            void add_element(T K) { }
            void remove_element(T K) { }
            int get_vec_length() { }
    };
}
