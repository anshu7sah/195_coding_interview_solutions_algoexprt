# time=O(n) and space=O(d)

def productSum(mixed,multiplier=1):
	sum=0
	for element in mixed:
		if type(element) is list:
			sum+=productSum(element,multiplier+1)
		else:
			sum+=element
	return sum*multiplier



print(productSum([2,3,[4,5]]))