#include <string>
#include <vector>

using namespace std;
int count = 0;
int func(const vector<int>& numbers, int idx, int sum, const int& target){
    if(idx == numbers.size()){
        if(sum == target){
            count += 1;
        }
        return 0;
    }
    func(numbers, idx+1, sum+numbers[idx], target);
    func(numbers, idx+1, sum-numbers[idx], target);
    return count;
}

int solution(vector<int> numbers, int target) {
    return func(numbers, 0, 0, target);
}