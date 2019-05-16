import numpy as np
import matplotlib.pyplot as plt
import os

os.system ("g++ bifur.cpp")
os.system ("./a.out")

datos = np.loadtxt("bifur.dat")
x=datos[:,0]
y=datos[:,1]

plt.figure(figsize=(5,5))
plt.plot(x,y,'ko',ms=1,c="m")
plt.xlim(1.33,1.5)
plt.ylim(1,3)
plt.title("Diagrama de Bifurcación")
plt.xlabel('Fuerza')
plt.ylabel("Angulo")
plt.savefig("bifurcacion.png")
