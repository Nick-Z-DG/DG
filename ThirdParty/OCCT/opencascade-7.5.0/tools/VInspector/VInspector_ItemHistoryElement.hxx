// Created on: 2017-06-16
// Created by: Natalia ERMOLAEVA
// Copyright (c) 2017 OPEN CASCADE SAS
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

#ifndef VInspector_ItemHistoryElement_H
#define VInspector_ItemHistoryElement_H

#include <Standard.hxx>
#include <inspector/VInspector_ItemBase.hxx>

class VInspector_ItemHistoryElement;
typedef QExplicitlySharedDataPointer<VInspector_ItemHistoryElement> VInspector_ItemHistoryElementPtr;

//! \class VInspector_ItemHistoryElement
//! Item shows name, pointer and shape type values of item history type information
//! Parent is item history type, there are no children.
class VInspector_ItemHistoryElement : public VInspector_ItemBase
{

public:

  //! Creates an item wrapped by a shared pointer
  static VInspector_ItemHistoryElementPtr CreateItem (TreeModel_ItemBasePtr theParent, const int theRow, const int theColumn)
  { return VInspector_ItemHistoryElementPtr (new VInspector_ItemHistoryElement (theParent, theRow, theColumn)); }

  //! Destructor
  virtual ~VInspector_ItemHistoryElement() {}

  //! Inits the item, fills internal containers
  Standard_EXPORT virtual void Init() Standard_OVERRIDE;

  //! Resets cached values
  virtual void Reset() Standard_OVERRIDE { TreeModel_ItemBase::Reset(); }

  //! Returns pointer string value
  QString PointerInfo() const { return myPointerInfo; }

  //! \return number of children.
  virtual int initRowCount() const Standard_OVERRIDE { return 0; }

  //! Returns item information for the given role. Fills internal container if it was not filled yet
  //! \param theItemRole a value role
  //! \return the value
  Standard_EXPORT virtual QVariant initValue(const int theItemRole) const Standard_OVERRIDE;

protected:

  //! Initialize the current item. It is empty because Reset() is also empty.
  virtual void initItem() const Standard_OVERRIDE;

  //! Creates a child item in the given position.
  //! \param theRow the child row position
  //! \param theColumn the child column position
  //! \return the created item
  virtual TreeModel_ItemBasePtr createChild (int theRow, int theColumn) Standard_OVERRIDE
  { (void)theRow; (void)theColumn; return TreeModel_ItemBasePtr(); }

  //! Returns the item text value, initialize item if it has not been initialized yet
  QString getName() const;

  //! Returns the item pointer value, initialize item if it has not been initialized yet
  QString GetPointerInfo() const;

  //! Returns the shape type text value, initialize item if it has not been initialized yet
  QString GetShapeTypeInfo() const;

private:

  //! Constructor
  //! \param theParent a parent item
  VInspector_ItemHistoryElement(TreeModel_ItemBasePtr theParent, const int theRow, const int theColumn)
  : VInspector_ItemBase(theParent, theRow, theColumn) {}

private:

  QString myName;  //!< cached text value
  QString myPointerInfo;  //!< cached pointer text value
  QString myShapeTypeInfo;  //!<cached shape type text value 
};

#endif
