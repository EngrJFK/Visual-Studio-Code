#from math import radians
import matplotlib.pyplot as plt
import numpy as np
#import mpl_toolkits
from mpl_toolkits.mplot3d import Axes3D
import skrf as rf
from pylab import*
rf.stylely()
#fig = plt.figure()
#ax = fig.add_subplot(111, projection ='3d')

#for c, z in zip (['r', 'g', 'b', 'y'], [30, 20, 10, 0]): 
#    xs = np.arange(20)
#    ys = np.random.rand(20)

#    cs = [c] * len(xs)
#    cs[0] = 'c'
#    ax.bar(xs, ys, zs = z, zdir = 'y', color = cs, alpha = 0.8)

#    ax.set_xlabel('X')
#    ax.set_ylabel('Y')
#    ax.set_zlabel('Z')

#    plt.show()


#def main():
#    x = np.arange(0, radians(1800), radians(12))
#    plt.plot(x, np.cos(x), 'b')
#    plt.plot(x, np.sin(x), 'r')
#    plt.grid()
#    plt.show()
#main()

#def add(x, y):
#    return x + y

#def subtract(x, y):
#    return x - y

#def multiply(x, y):
#    return x*y 
#def divide (x, y): 
#    return x/y


#while True:
#    choice = input("Enter choice(1/2/3/4)")
    
#    if choice in('1', '2' , '3', '4'):
#        num1 = float(input("Enter first number: "))
#        num2 = float(input ("Enter second number: "))

#        if choice =='1': 
#            print(num1, "+", num2, "=", add(num1, num2))

#        elif choice =='2': 
#            print(num1, "-", num2, "=", subtract(num1, num2))

#        elif choice == '3': 
#            print(num1, "*", num2, "=", multiply(num1, num2))

#        elif choice == '4': 
#            print(num1, "/", num2, "=", divide(num1, num2))
#        break
#    else: 
#        print("invalid input")



