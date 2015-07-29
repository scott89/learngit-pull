''' sort'''
def print_num(x):
 i=0;
 while i<x:
   print(i)
   i+=1;

def sort(x):
 n = len(x)
 for i in range(0,n-1):
   xmin = x[i];
   idmin = i;
   for j in range(i+1,n):
     if x[j]<xmin:
       xmin = x[j]
       idmin = j;
   x[idmin] = x[i];
   x[i]=xmin;
 return x


print_num(8) 
