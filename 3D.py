import Rhino.Geometry as rg
import random as rnd

points=[]

for i in range(n):
    for j in range(n):
        point=rg.Point3d(i*S,j*S,rnd.randint(0,20))
        points.append(point)