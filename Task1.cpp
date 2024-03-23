#include <iostream>

struct IntPair {
    int first;
    int second;
};

IntPair* zip(const int* arr1, const int* arr2, size_t size) {
    IntPair* result = new IntPair[size];

    for (size_t i = 0; i < size; ++i) {
        result[i].first = arr1[i];
        result[i].second = arr2[i];
    }

    return result;
}

int main() {
    
	int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8};
    size_t size = sizeof(arr1) / sizeof(arr1[0]);

    IntPair* zipped = zip(arr1, arr2, size); 

    for (size_t i = 0; i < size; ++i) {
        std::cout << "(" << zipped[i].first << ", " << zipped[i].second << ") ";
    }
    std::cout << std::endl;
    
    delete[] zipped;

    return 0;
}

