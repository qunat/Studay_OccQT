from OCC.Core import BRepGProp, TopExp
from OCC.Core.BRep import BRep_Tool
from OCC.Core.BRepBuilderAPI import BRepBuilderAPI_MakeEdge
from OCC.Core.BRepGProp import brepgprop_LinearProperties
from OCC.Core.GProp import GProp_GProps
from OCC.Core.Geom2dAPI import Geom2dAPI_Interpolate
from OCC.Core.GeomAdaptor import GeomAdaptor_Curve
from OCC.Core.GCPnts import GCPnts_UniformAbscissa
from OCC.Core.TColgp import TColgp_HArray1OfPnt2d
from OCC.Core.TopExp import topexp
from OCC.Core.gp import gp_Pnt, gp_Pnt2d

from OCC.Display.SimpleGui import init_display
display, start_display, add_menu, add_function_to_menu = init_display()

aPnt1 = gp_Pnt(1, 1, 30)
aPnt2 = gp_Pnt(1, 100, 1)

aEdge1 = BRepBuilderAPI_MakeEdge(aPnt1, aPnt2).Edge()
aCurve = BRep_Tool.Curve(aEdge1)[0]   # 先把它转换为Geom_Curve
system = GProp_GProps()
brepgprop_LinearProperties(aEdge1, system)#获取线段属性
step=0.1
n=float(system.Mass()/step)
mVer1 = topexp.FirstVertex(aEdge1, True)#起点
mVer2 = topexp.LastVertex(aEdge1, True)#终点

P1 = BRep_Tool.Pnt(mVer1)
P2=BRep_Tool.Pnt(mVer2)
print(P1.X(),P1.Y(),P1.Z())
mVec = (P2.XYZ()-P1.XYZ())
display.DisplayShape(aEdge1, update=True)

for i in range(int(n)):
    print(i)
    mPVec1 = mVec.Normalized() *step *i
    P3=gp_Pnt(mPVec1.X()+ P1.X(), mPVec1.Y() + P1.Y(),mPVec1.Z()+ P1.Z())
    display.DisplayShape(P3, update=True)



'''
step=50
print("system.Mass(): ", system.Mass())
nb_ = system.Mass() / step    # step是步长，这句话的意思是等步长平分周长，nb_是平分的点的数目
print(nb_)
gac = GeomAdaptor_Curve(aCurve)
ua = GCPnts_UniformAbscissa(gac, nb_)
print(ua.IsDone())
if ua.IsDone():
    n = ua.NbPoints()
    pts = []
    for count in range(1, n + 1):  # 索引从1开始，到n结束
        p = gp_Pnt()
        aCurve.D0(ua.Parameter(count), p)  # 获取坐标
        pts.append(p)
        print(count)

'''
start_display()