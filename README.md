# DataStructuresAndAlgorithms

https://leetcode.com/problems/product-of-array-except-self/

Explaination: 

Approach 1:

Use two vectors: 

1. left and right
2. left array will store the products of numbers to the left of current number. e.g. for [1,2,3,4], the left = [1, 1, 2, 6]
3. right array will store the products of numbers to the right of current number e.g. for [1,2,3,4], the right = [24, 12, 4, 1]
4. Multiply left with right and form the output array.

Approach 2:

1. Use one vector output.
2. Perform the same operation as done for left using output array.
3. Use a local variable initialized to 1.
4. for (int i = size - 1; i >= 0; i--) {
        output[i] *= result;
        result *= nums[i];
    }