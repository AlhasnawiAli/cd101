import Rhino.Geometry as rg
import random as rnd

points=[]
for i in range(n):
    point=rg.Point3d(i,rnd.randint(0,20),0)
    points.append(point)