#coding=utf-8
from OCC.Core.BRep import BRep_Tool
from OCC.Core.BRepBuilderAPI import BRepBuilderAPI_MakeEdge
from OCC.Core.BRepGProp import brepgprop_LinearProperties
from OCC.Core.GProp import GProp_GProps
from OCC.Core.GeomAPI import GeomAPI_Interpolate
from OCC.Core.GeomAdaptor import GeomAdaptor_Curve
from OCC.Core.GCPnts import GCPnts_UniformAbscissa
from OCC.Core.TColgp import TColgp_HArray1OfPnt
from OCC.Core.gp import gp_Pnt

mycurve=TColgp_HArray1OfPnt(1,2)
p1=gp_Pnt(0,1,2)
p2=gp_Pnt(2,1,3)

aCurve = BRep_Tool.Curve(aEdge)[0]   # 先把它转换为Geom_Curve


system = GProp_GProps()


#       print("system.Mass(): ", system.Mass())
nb_ = system.Mass() / 10   # step是步长，这句话的意思是等步长平分周长，nb_是平分的点的数目
gac = GeomAdaptor_Curve(aCurve)
ua = GCPnts_UniformAbscissa(gac, nb_)
if ua.IsDone():
    n = ua.NbPoints()
    pts = []
    for count in range(1, n + 1):  # 索引从1开始，到n结束
        p = gp_Pnt()
        aCurve.D0(ua.Parameter(count), p)  # 获取坐标
        pts.append(p)