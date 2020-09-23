hrs = input("Enter Hours:")
a = float(hrs)
rate = input("rate")
b= float(rate)
p = computepay(a,b)
print("Pay",p)

def computepay(h,r):
    if h > 40 :
        c =float(h*(r/2 + r))
    else :
        c = float (h*r)
return c