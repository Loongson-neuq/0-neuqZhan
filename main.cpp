#include ".assignment/test.h"

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result &result)
{
// 定义 Result 结构体
struct Result
{
    int min;
    int mid;
    int max;
};

// 比较三个数的大小

    // 找出最小值
    if (a <= b && a <= c) {
        result.min = a;
    } else if (b <= a && b <= c) {
        result.min = b;
    } else {
        result.min = c;
    }

    // 找出最大值
    if (a >= b && a >= c) {
        result.max = a;
    } else if (b >= a && b >= c) {
        result.max = b;
    } else {
        result.max = c;
    }

    // 找出中间值
    result.mid = a + b + c - result.min - result.max;


// 在这里完成你的代码
    result.min = 最小值;
    result.mid = 中间值;
    result.max = 最大值;
}
