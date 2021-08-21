def fib(fibonacciList, number):
	if number == len(fibonacciList):
		return sum(fibonacciList)
	result = fibonacciList[len(fibonacciList) - 1] + fibonacciList[len(fibonacciList) - 2]
	fibonacciList.append(result)
	return fib(fibonacciList, number)

if __name__ == '__main__':
	fibonacciList = list()
	fibonacciList.append(0)
	fibonacciList.append(1)

	number = int(input("Enter the fibonacci series : "))
	if number > 2:
		result = fib(fibonacciList, number)
	else:
		result = sum(fibonacciList)
	
	print(fibonacciList)
	print(result)