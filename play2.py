try:
	n=int(raw_input())
	fact=1
	while(n!=0):
		fact=fact*n
		n=n-1
	print fact
except:
  	print "Error"