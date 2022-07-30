#!/usr/bin/env python
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

from OCC.Core.BRepPrimAPI import BRepPrimAPI_MakeBox
from OCC.Core.AIS import AIS_Shape
from OCC.Core.Prs3d import Prs3d_LineAspect
from OCC.Core.Quantity import Quantity_Color
from OCC.Display.SimpleGui import init_display
from OCC.Display.OCCViewer import rgb_color
from OCC.Core.Quantity import (Quantity_Color, Quantity_TOC_RGB, Quantity_NOC_WHITE,
                               Quantity_NOC_BLACK, Quantity_NOC_BLUE1,
                               Quantity_NOC_CYAN1, Quantity_NOC_RED,
                               Quantity_NOC_GREEN, Quantity_NOC_ORANGE, Quantity_NOC_YELLOW)

display, start_display, add_menu, add_function_to_menu = init_display()

myBox = BRepPrimAPI_MakeBox(60, 60, 50).Shape()
context = display.Context
context.SetAutoActivateSelection(True)

aisShape = AIS_Shape(myBox)
aisShape.SetColor(rgb_color(0.5,0.5,0.5))
aisShape.SetDisplayMode(1)
context.Display(aisShape, True)

# Set shape transparency, a float number from 0.0 to 1.0
context.SetTransparency(aisShape, 0.5, True)

owner = aisShape.GetOwner()
drawer = aisShape.DynamicHilightAttributes()

# TODO: how do we set the color ? Quantity_NOC_RED
new_Prs3d_LineAspect=Prs3d_LineAspect(Quantity_NOC_RED,0.1)
context.HilightWithColor(aisShape, drawer, False)

display.View_Iso()
display.FitAll()
start_display()
