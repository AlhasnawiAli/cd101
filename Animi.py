import Rhino.Geometry as rg 
import scriptcontext as sc


if not state:
    sc.sticky["t"]=0.0
else:
    sc.sticky["t"]+=0.015


points=[]
for i,pt in enumerate(circ_pts):
    rect_pts[i].Interpolate(pt, rect_pts[i], sc.sticky["t"])
    points.append(rect_pts[i])