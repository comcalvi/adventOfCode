#include <iostream>
#include <fstream>

using namespace std;

int main() {
    std::ifstream input;
    input.open("input");
    std::string str;
    int runningSum = 0;
    int maxSum = 0;

    while (getline(input, str))
    {
        if (str == "") {
            if (runningSum > maxSum) {
                maxSum = runningSum;
            }
            
            runningSum = 0;
            
            continue;
        }
        
        runningSum += std::stoi(str);
        str = "";
    }
    
    cout << maxSum << '\n';
}
