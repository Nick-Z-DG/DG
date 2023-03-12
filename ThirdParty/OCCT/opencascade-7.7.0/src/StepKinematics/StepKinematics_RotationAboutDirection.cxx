// Created on : Sat May 02 12:41:14 2020 
// Created by: Irina KRYLOVA
// Generator:	Express (EXPRESS -> CASCADE/XSTEP Translator) V3.0
// Copyright (c) Open CASCADE 2020
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <StepKinematics_RotationAboutDirection.hxx>

IMPLEMENT_STANDARD_RTTIEXT(StepKinematics_RotationAboutDirection, StepGeom_GeometricRepresentationItem)

//=======================================================================
//function : StepKinematics_RotationAboutDirection
//purpose  :
//=======================================================================
StepKinematics_RotationAboutDirection::StepKinematics_RotationAboutDirection ()
{
}

//=======================================================================
//function : Init
//purpose  :
//=======================================================================
void StepKinematics_RotationAboutDirection::Init (const Handle(TCollection_HAsciiString)& theRepresentationItem_Name,
                                                  const Handle(StepGeom_Direction)& theDirectionOfAxis,
                                                  const Standard_Real theRotationAngle)
{
  StepGeom_GeometricRepresentationItem::Init(theRepresentationItem_Name);

  myDirectionOfAxis = theDirectionOfAxis;

  myRotationAngle = theRotationAngle;
}

//=======================================================================
//function : DirectionOfAxis
//purpose  :
//=======================================================================
Handle(StepGeom_Direction) StepKinematics_RotationAboutDirection::DirectionOfAxis () const
{
  return myDirectionOfAxis;
}

//=======================================================================
//function : SetDirectionOfAxis
//purpose  :
//=======================================================================
void StepKinematics_RotationAboutDirection::SetDirectionOfAxis (const Handle(StepGeom_Direction)& theDirectionOfAxis)
{
  myDirectionOfAxis = theDirectionOfAxis;
}

//=======================================================================
//function : RotationAngle
//purpose  :
//=======================================================================
Standard_Real StepKinematics_RotationAboutDirection::RotationAngle () const
{
  return myRotationAngle;
}

//=======================================================================
//function : SetRotationAngle
//purpose  :
//=======================================================================
void StepKinematics_RotationAboutDirection::SetRotationAngle (const Standard_Real theRotationAngle)
{
  myRotationAngle = theRotationAngle;
}
