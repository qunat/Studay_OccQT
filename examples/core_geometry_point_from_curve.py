#!/usr/bin/env python
#coding=utf-8
##Copyright 2009-2014 Jelle Feringa (jelleferinga@gmail.com)
##
##This file is part of pythonOCC.
##
##pythonOCC is free software: you can redistribute it and/or modify
##it under the terms of the GNU Lesser General Public License as published by
##the Free Software Foundation, either version 3 of the License, or
##(at your option) any later version.
##
##pythonOCC is distributed in the hope that it will be useful,
##but WITHOUT ANY WARRANTY; without even the implied warranty of
##MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
##GNU Lesser General Public License for more details.
##
##You should have received a copy of the GNU Lesser General Public License
##along with pythonOCC.  If not, see <http://www.gnu.org/licenses/>.
from OCC.Core.BRep import BRep_Tool
from OCC.Core.BRepBuilderAPI import BRepBuilderAPI_MakeEdge, BRepBuilderAPI_MakeWire
from OCC.Core.GC import GC_MakeArcOfCircle
from OCC.Core.GeomAdaptor import GeomAdaptor_Curve
from OCC.Core.gp import gp_Pnt, gp_Pnt2d, gp_OX2d, gp_Dir, gp_Ax2, gp_Circ
from OCC.Core.Geom2d import Geom2d_Circle
from OCC.Core.Geom2dAdaptor import Geom2dAdaptor_Curve
from OCC.Core.GCPnts import GCPnts_UniformAbscissa

from OCC.Display.SimpleGui import init_display
display, start_display, add_menu, add_function_to_menu = init_display()


def points_from_curve():
    radius = 10.#半径
    abscissa = 0.5#步距
    Location = gp_Pnt(0, 0, 0)
    Axis = gp_Dir(0, 0, -1)
    CircleAxis = gp_Ax2(Location, Axis)
    Circle = gp_Circ(CircleAxis, 5)
    ArcofCircle0 = GC_MakeArcOfCircle(Circle, 0 / 180 * 3.14, 360 / 180 * 3.14, True)
    ArcofCircle1 = BRepBuilderAPI_MakeEdge(ArcofCircle0.Value())
    ArcofCircle = BRepBuilderAPI_MakeWire(ArcofCircle1.Edge())
    aCurve = BRep_Tool.Curve(ArcofCircle1.Edge())[0]
    ufirst=BRep_Tool.Curve(ArcofCircle1.Edge())[1]
    ulast=BRep_Tool.Curve(ArcofCircle1.Edge())[2]
    gac = GeomAdaptor_Curve(aCurve,ufirst,ulast)
    ua = GCPnts_UniformAbscissa(gac, abscissa)
    a_sequence = []
    if ua.IsDone():
        n = ua.NbPoints()
        print(n)
        for count in range(1, n):
            p = gp_Pnt()
            print(ua.Parameter(count))
            aCurve.D0(ua.Parameter(count), p)
            a_sequence.append(p)
    # convert analytic to bspline
    display.DisplayShape(ArcofCircle1.Shape(), update=True)
    i = 0
    for p in a_sequence:
        i = i + 1
        pstring = 'P%i : parameter %f' % (i, ua.Parameter(i))
        pnt = gp_Pnt(p.X(), p.Y(), 0)
        # display points
        display.DisplayShape(p, update=True)
        #display.DisplayMessage(p, pstring)

if __name__ == '__main__':
    points_from_curve()
    start_display()
