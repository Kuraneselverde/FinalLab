import numpy as np
import matplotlib.pyplot as plt
import os

os.system ("g++ pen.cpp")
os.system ("./a.out")

a = np.loadtxt ("regu1.dat")
b = np.loadtxt ("regu2.dat")
c = np.loadtxt ("regu3.dat")
d = np.loadtxt ("caot1.dat")
e = np.loadtxt ("caot2.dat")
f = np.loadtxt ("caot3.dat")

def ajuste(A):
    a = np.zeros(len(A))
    for i in range (0,len(A)):
        if (A[i] > np.pi):
            while (A[i] > np.pi):
                A[i] = A[i] - np.pi
        if (A[i] < -np.pi):
            while (A[i] < -np.pi):
                A[i] = A[i] + np.pi
        a[i] = A[i]
    return a

def Log (x,y):
    return np.log(np.abs(x-y))

X = a.shape[0]

a1 = ajuste (a[:,0])
a2 = ajuste (a[:,1])
b1 = ajuste (b[:,0])
b2 = ajuste (b[:,1])
c1 = ajuste (c[:,0])
c2 = ajuste (c[:,1])
d1 = ajuste (d[:,0])
d2 = ajuste (d[:,1])
e1 = ajuste (e[:,0])
e2 = ajuste (e[:,1])
f1 = ajuste (f[:,0])
f2 = ajuste (f[:,1])

t = np.linspace(0.0,100.0,X)




plt.figure(figsize = (20,15))

plt.subplot(2,3,1)
plt.plot(t,np.log(np.abs(a1-a2)),label = 'F = 0.314',c="r")
plt.title("|θ1-θ2| = 0.15, regular") 
plt.xlabel("Tiempo")
plt.ylabel("Log|θ1-θ2|")
plt.legend(loc = 0)

plt.subplot(2,3,2)
plt.plot(t,np.log(np.abs(b1-b2)),label = 'F = 0.314',c="b")
plt.title("|θ1-θ2| = 0.1, regular") 
plt.xlabel("Tiempo")
plt.ylabel("Log|θ1-θ2|")
plt.legend(loc = 0)

plt.subplot(2,3,3)
plt.plot(t,np.log(np.abs(c1-c2)),label = 'F = 0.314',c="g")
plt.title("|θ1-θ2| = 0.25, regular") 
plt.xlabel("Tiempo")
plt.ylabel("Log|θ1-θ2|")
plt.legend(loc = 0)

plt.subplot(2,3,4)
plt.plot(t,np.log(np.abs(d1-d2)),label = 'F = 1.62',c="y")
plt.title("|θ1-θ2| = 0.15, caotico") 
plt.xlabel("Tiempo")
plt.ylabel("Log|θ1-θ2|")
plt.legend(loc = 0)

plt.subplot(2,3,5)
plt.plot(t,np.log(np.abs(e1-e2)),label = 'F = 1.62',c="m")
plt.title("|θ1-θ2| = 0.1, caotico") 
plt.xlabel("Tiempo")
plt.ylabel("Log|θ1-θ2|")
plt.legend(loc = 0)

plt.subplot(2,3,6)
plt.plot(t,np.log(np.abs(f1-f2)),label = 'F = 1.62',c="k")
plt.title("|θ1-θ2| = 0.25, caotico") 
plt.xlabel("Tiempo")
plt.ylabel("Log|θ1-θ2|")
plt.legend(loc = 0)

plt.savefig("Graficas_Lyapunov.png")            
            