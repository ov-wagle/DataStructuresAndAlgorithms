# DataStructuresAndAlgorithms

1. https://leetcode.com/problems/product-of-array-except-self/

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

2. https://www.algoexpert.io/questions/Two%20Number%20Sum

Two Sum 

Approach 1 : Time complexity : O(nlogn) Space Complexity : O(1)

1. Sort the array in ascending order
2. Use two pointers one starting from 0 and the other from size - 1.
3. If the sum of array[i] and array[j] < target, that means we can move the left pointer ahead and if it is >, then we can move the right pointer to the left.

Approach 2: Time complexity : O(n) Space complexity : O(n)

1. We will use a hash map to store all the values in the array.
2. If the number is not present in the hash map, add it to the hash map.
3. Calculate the difference of target with array[i].
4. If the difference matches array[i], neglect as the arrays don't have any repeating elements.
5. If difference is present in the hash map, the pair is found

3. https://www.algoexpert.io/questions/Validate%20Subsequence

Validate Subsequence

Time complexity : O(n) and Space complexity : O(1)

1. Iterate through the array list.
2. Maintain a variable j for sequence.
3. If match found, j++. As the subsequence should be in same order as that in array, this would work

4. https://www.algoexpert.io/questions/Tournament%20Winner

Tournament Winner

Time complexity : O(n) Space complexity : O(k) where k is the number of participants

1. Use a hash map to store the participants.
2. Check the results array. If member is 0, away(1) index won and if member is 1, home(0) index won.
3. Once all the members are assigned with their points, iterate from start till end of the map.
4. String having maximum points is returned as winner.

5. https://www.algoexpert.io/questions/Non-Constructible%20Change

Non constructible change

Time complexity : O(nlogn) Space complexity : O(1)

1. Sort the array in ascending order
2. The logic here is if coins[i] > change + 1, we don't have coins to make change for value (change + 1) else change += coins and we return change + 1.
3. coins = [1, 2, 5]. 
	iterattion 1 : change = 0
					if (coins[i] > change + 1) ie (1 > 0 + 1) fail
					change = 1

	Iteration 2: change = 1
				 if (2 > 1 + 1) fail
				 change = 3

	iteration 3 : change = 3
				  if (5 > 3 + 1) pass
				  we return 4 as with above coins we cannot make 4.

