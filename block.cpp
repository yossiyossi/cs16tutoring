# include <iostream>
# include <string>

// using namespace std; NOOOOO!!!!

int main() {
    int rows, cols;
    
    while (true) {
        std::cout << "Enter number of rows and columns:" << std::endl;
        std::cin >> rows >> cols;
        
        if (rows == 0 && cols == 0) {
            break;
        }
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cout << "X.";
            }
            
            std::cout << std::endl;
        }
    }
}
