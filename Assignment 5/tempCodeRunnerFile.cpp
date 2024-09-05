#include <iostream>
using namespace std;

class NumberStats {
private:
    static int numbers[5];
public:
    NumberStats(int num, int index) {
        numbers[index]=num;
    }
    static double getAverage() {
        double sum=0;
        for (int i = 0; i < 5; ++i) {
            sum += numbers[i];
        }
        return sum/5;
    }
};
int NumberStats::numbers[5] = {0};
int main() {
    int arr[5]={5, 6, 7, 7, 7}
    for (int i = 0; i < 5; ++i) {
        NumberStats stat(arr[i], i);
    }
    cout << "Average of entered numbers: " << NumberStats::getAverage() << endl;
    return 0;
}
