from OCC.Core.BRep import BRep_Tool
from OCC.Core.BRepBuilderAPI import BRepBuilderAPI_MakeEdge, BRepBuilderAPI_MakeWire
from OCC.Core.GC import GC_MakeArcOfCircle
from OCC.Core.GCPnts import GCPnts_UniformDeflection
from OCC.Core.GeomAPI import GeomAPI_Interpolate
from OCC.Core.GeomAdaptor import GeomAdaptor_Curve
from OCC.Core.TColgp import TColgp_HArray1OfPnt
from OCC.Core.gp import gp_Pnt, gp_Dir, gp_Ax2, gp_Circ
from OCC.Display.OCCViewer import rgb_color
from OCC.Display.SimpleGui import init_display



display, start_display, add_menu, add_function_to_menu = init_display()


#mycurve=TColgp_HArray1OfPnt(1,3)
#p1=gp_Pnt(0,1,2)
#p2=gp_Pnt(2,1,3)


#mycurve.SetValue(1,p1)
#mycurve.SetValue(2,p2)

#mycurve=GeomAPI_Interpolate(mycurve,False,0.0001)
#mycurve.Perform()

Location = gp_Pnt(0, 0, 0)
Axis = gp_Dir(0, 0, -1)
CircleAxis = gp_Ax2(Location, Axis)
Circle = gp_Circ(CircleAxis, 5)
ArcofCircle0 = GC_MakeArcOfCircle(Circle, 0 / 180 * 3.14, 180 / 180 * 3.14, True)
ArcofCircle1 = BRepBuilderAPI_MakeEdge(ArcofCircle0.Value())
ArcofCircle = BRepBuilderAPI_MakeWire(ArcofCircle1.Edge())
display.DisplayShape(ArcofCircle.Shape())
#display.DisplayShape(p1,update=True)
#display.DisplayShape(p2,update=True)
aCurve = BRep_Tool.Curve(ArcofCircle1.Edge())[0]
# C=Geom2dAdaptor_Curve(mycurve) #二维曲线采用此条代码
C=GeomAdaptor_Curve(aCurve)
Deflection=10
myAlgo=GCPnts_UniformDeflection()
myAlgo.Initialize ( C , Deflection )

if  myAlgo.IsDone() :
    nbr = myAlgo.NbPoints()
    print(nbr)
    for i in range(1,nbr+1):
        point=myAlgo.Value(i)
        display.DisplayShape(point,update=True,color=rgb_color(0,0,1))

start_display()

