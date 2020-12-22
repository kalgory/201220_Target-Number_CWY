#include <string>
#include <vector>
#include <utility>
using namespace std;
int count;
int number_vec_size;
int target;
vector<int> number_vec;

void func(int idx, int sum){
    if(idx == number_vec_size){
        if(sum == target){
            count += 1;
        }
        return;
    }
    func(idx+1, sum+ number_vec[idx]);
    func(idx+1, sum- number_vec[idx]);
    return;
}

int solution(vector<int> _number_vec, int _target) {
	number_vec = move(_number_vec);
    target = _target;
	number_vec_size = number_vec.size();
    func(0, 0);
    return count;
}