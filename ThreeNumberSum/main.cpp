//
//  main.cpp
//  ThreeNumberSum
//
//  Created by chenyufeng on 10/18/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 *  三数和问题
 *
 */

void ThreeNumberSum(vector<int> vec, int sum);

int main(int argc, const char * argv[])
{
    int arr[] = {5,1,9,0,4,2,7,8};
    vector<int> vv(arr, arr + sizeof(arr)/sizeof(int));
    ThreeNumberSum(vv, 13);


    return 0;
}

void ThreeNumberSum(vector<int> vec, int sum)
{
    long p,q,r;
    // 先排序
    sort(vec.begin(), vec.end());

    for (p = 0; p < vec.size() - 2; p++)
    {
        q = p + 1;
        r = vec.size() - 1;
        int remain = sum  - vec[p];
        while (q < r)
        {
            int temp = vec[q] + vec[r];
            if (temp == remain)
            {
                // 找到这三个数
                cout << vec[p] << " " << vec[q] << " " << vec[r] << endl;
                break;
            }
            else if(temp < remain)
            {
                q++;
            }
            else if (temp > remain)
            {
                r--;
            }
        }
    }
}




















