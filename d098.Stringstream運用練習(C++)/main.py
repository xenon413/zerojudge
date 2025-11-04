try :
	while True:
		vec=input().split()
		ans=0
		for i in vec:
			if i.isdigit():
				ans+=eval(i)
		print(ans)
except :
	pass