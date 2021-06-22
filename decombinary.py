get_bin = lambda x: format(x, 'b')

n=int(input())
str=input()
num=int(str,2)
if((num&(num-1)==0) or (num&(num+1)==0) or num<2):
	print("-1")
else:
	print(get_bin(num-1)+" "+get_bin(num+1))