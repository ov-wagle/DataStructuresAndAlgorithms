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

6. https://www.algoexpert.io/questions/Smallest%20Difference

Smallest Difference

Time complexity : O(nlogn + mlogm) Space complexity : O(1)

1. Sort both the arrays.
2. calculate the difference between two elements.
3. if result < maxResult, store result in it, store both the values in two local variables.
4. Increment the index of array having a smaller number for current i and j.
5. Add the two local variables to a vector and return the vector.

7. https://www.algoexpert.io/questions/Move%20Element%20To%20End

Move elements to the end

Time complexity : O(n) Space complexity : O(1)

1. Use two pointer method. Initialise i = 0 and j to n - 1.
2. Use i to track the element to move and j to track non moving elements.
3. When both stop at an index, swap those indexes and increment i and decrement j.
4. Continue this till i < j

8. https://www.algoexpert.io/questions/Monotonic%20Array

Monotonic Array

1. Use two counters to maintain if the array is increasing or decreasing
2. Increment incCount if array[i - 1] < array[i].
3. Increment decCount if array[i - 1] > array[i].
4. Increment both if array[i - 1] == array[i].
5. Check if either of them = size - 1, then return true.

9. https://www.algoexpert.io/questions/First%20Duplicate%20Value

First Duplicate Value

Approach 1: use a hashmap

Approach 2: Use a variable to store the presence of a number in the bit equal to number.

1. Retreive the bit using the following formula : bit = (trackKeeper & (1 << array[i])) >> array[i];
2. If bit is 0, set that bit else return array[i].

Approach 3: 

1. As the elements in the array are 1 <= array[i] <= n, we can use the numbers to iterate in the array.
2. if array[abs(array[i]) - 1] < 0, means this number is already visited, return array[i].
3. else multiply this number with -1.

10. https://www.algoexpert.io/questions/Array%20Of%20Products 

Array of Products

Refer Problem 1 in the sheet

11. https://www.algoexpert.io/questions/Three%20Number%20Sum

Three Number sum

1. No numbers are repeated. Sort the array
2. Use 3 variables currentNum = i, left = i + 1, right = size - 1
3. iterate the currentNum from 0 to size - 1.
4. Calculate sum = currentNum + array[left] + array[right]
5. If sum = targetSum, add currentNum, array[left], array[right] to a vector and add that vector to output vector. left++ and right--
6. if sum > targetSum, decrement right by 1 if sum < targetSum, increment left by 1.
7. Continue this till left < right

12. https://leetcode.com/problems/3sum/

3Sum

1. Numbers can be repeated. Sort the array
2. Use 3 variables currentNum = i, left = i + 1, right = size - 1
3. iterate the currentNum from 0 to size - 1.
4. Calculate sum = currentNum + array[left] + array[right]
5. If sum = 0, add currentNum, array[left], array[right] to a vector and add that vector to output vector. left++ and right--
6. Check if the same number is present after the current left. Use while (left < right and array[left] == array[left + 1]) left++;
7. Check if the same number is present before the current right. Use while (left < right and array[right] == array[right - 1]) right--;
6. if sum > 0, decrement right by 1 if sum < 0, increment left by 1.
7. Continue this till left < right

13. https://www.algoexpert.io/questions/Longest%20Peak

Longest Peak

Approach:
1. An element is a peak if its left and right adjacent elements are strictly decreasing e.g [3, 4, 0], 4 is the peak.
2. Use a single for loop to iterate over the elements of the array.
3. Initially we search for peaks such that array[i - 1] < array[i] and array[i] > array[i + 1].
4. The length of the peak is always >= 3.
5. Once one peak is found, we find the length of the peak.
6. As we know that array[i - 1] and array[i + 1] are already decreasing, we start left pointer from i - 2 and right from i + 2.
7. 
// This condition checks if every element on the left is strictly decreasing
while (left >= 0) {
	if (array[left + 1] > array[left]) {
		peakLen++;
		left--;
	} else {
		break;
	}
}
		
// This condition checks if every element on the right is strictly decreasing	
while (right < size) {
	if (array[right - 1] > array[right]) {
		peakLen++;
		right++;
	} else {
		break;
	}
}

14. https://www.algoexpert.io/questions/Subarray%20Sort

Subarray Sort

Approach
1. Search for elements in the array such that either its previous element is larger or next element is smaller than the current element.
2. use two variables, start and end initialized to -1.
3. When first such element is encountered, assign start and end with its index.
4. Iterate through the array and check if the start element > current number, assign i to start.
if (start == -1 or array[start] > array[i]) {
	start = i;
}
5. Similarly, check if the end element < current element, assign i to end.
if (end == -1 or array[end] < array[i]) {
	end = i;
}
6. Once start and end index are retrieved, we will iterate through the array once again to check where these elements can be placed.
7. Start element should belong to a place where its next element is greater than it.
8. Similarly, end element should be placed such that the end element is less than end + 1 element.

15. https://leetcode.com/problems/remove-nth-node-from-end-of-list/ 
https://leetcode.com/problems/swapping-nodes-in-a-linked-list/


Above two problems uses the same two pointer approach

Two pointer approach

1. Initialise two dummy pointers with head of the list.
2. Use one dummy to iterate till nth node from the beginning.

	while (--n) {
		currentNode = currentNode->next;
	}
3. The currentNode is already at the nth node from the start.
4. Use the position of the currentNode to help make second dummy variable reach nth position from the end.

	while (currentNode->next != nullptr) {
            currentNode = currentNode->next;
            prevNode = removeNode;
            removeNode = removeNode->next;
        }
5. Thus once currentNode reaches its end, remove node will reach to the nth position from the end.
6. There are two cases, the nth node from the end could be any node or it can be the head node.

	if (prevNode == nullptr) {		// nth node is the head node. Hence no prevNode to the headNode.
            prevNode = new ListNode();
            prevNode->next = removeNode->next;
            delete head;
            head = prevNode->next;
        } else {
            prevNode->next = removeNode->next;
        }


16. https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/submissions/

Approach 1: 

1. Calculate the length of the list by iterating through the list till you reach nullptr.
2. Calculate the middle node
3. Iterate through the loop again and when the node reaches the middle node, if the middle node is head node, 

	if (prevNode == nullptr) {
                prevNode = new ListNode();
                delete head;
                head = prevNode->next;
        } else {
        	prevNode->next = currentNode->next;
        }

Approach 2:
1. Use 2 pointers, fast and slow. fast will jump 2 place while slow will iterate one node at a time.
2. This way, fast will reach the end while slow will remain on the middle node.
3. 
	if (prevNode == nullptr) {
                prevNode = new ListNode();
                delete head;
                head = prevNode->next;
        } else {
        	prevNode->next = currentNode->next;
        }

17. https://leetcode.com/problems/rotate-array/

Approach 1: Time complexity: O(n),  Space complexity : O(n)

1. Initialise a vector of size equal to size of input array.
2. use the following formula to calculate k
	remainder = k % size;
        k = (remainder == 0) ? size : remainder;

        // This calculates the actual value of k when k > length of the input array.]
3. Use two for loops, one from size - k to size to place those items in the output array, second from 0 to size - k to place the rest items in the array.

Approach 2: Time complexity : O(n) SPace complexity : O(1)

1. Calculate k using k %= size.
2. Write a reverse function that swaps the elements until start < end.
3. Call reverse function 3 times one from  0 to size - 1, 0 to k - 1 and last k to size - 1

// Input Array : [1 2 3 4 5 6 7], k = 3 Expected op array : [5 6 7 1 2 3 4]

k = 3 % 7 = 3
reverse(nums, 0, size - 1) -> [7 6 5 4 3 2 1]
reverse(nums, 0 k - 1) -> [5 6 7 4 3 2 1]
reverse(nums, k, size - 1) -> [5 6 7 1 2 3 4]