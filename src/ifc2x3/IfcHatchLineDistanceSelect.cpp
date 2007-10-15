/*
// ////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik modified generator           //
//  Powered by : Eve CSTB                    //
// ////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2005 CSTB                                             *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the                 *
 *         Free Software Foundation, Inc.                                  *
 *         59 Temple Place, Suite 330                                      *
 *         Boston, MA  02111-1307                                          *
 *         USA                                                             *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Eve, CSTB                                                       *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include <MemoryLeak.h>
#include <ifc2x3/IfcHatchLineDistanceSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcOneDirectionRepeatFactor.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcHatchLineDistanceSelect::IfcHatchLineDistanceSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcHatchLineDistanceSelect::IfcHatchLineDistanceSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcHatchLineDistanceSelect::~IfcHatchLineDistanceSelect() {
  deleteUnion();
}

bool IfcHatchLineDistanceSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcHatchLineDistanceSelect(this);
}

bool IfcHatchLineDistanceSelect::init() {
  return false;
}

const char *IfcHatchLineDistanceSelect::type() {
  return "IfcHatchLineDistanceSelect";
}

Step::ClassType IfcHatchLineDistanceSelect::getClassType() {
  return IfcHatchLineDistanceSelect::s_type;
}

Step::ClassType IfcHatchLineDistanceSelect::getType() const {
  return IfcHatchLineDistanceSelect::s_type;
}

bool IfcHatchLineDistanceSelect::isOfType(Step::ClassType t) {
  return IfcHatchLineDistanceSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcHatchLineDistanceSelect::currentTypeName() {
  switch(m_type) {
  case IFCONEDIRECTIONREPEATFACTOR:
    return "IfcOneDirectionRepeatFactor";
    break;
  case IFCPOSITIVELENGTHMEASURE:
    return "IfcPositiveLengthMeasure";
    break;
  default:
    return "UNSET";
  }
}

IfcHatchLineDistanceSelect::IfcHatchLineDistanceSelect_select IfcHatchLineDistanceSelect::currentType() {
  return m_type;
}

void IfcHatchLineDistanceSelect::deleteUnion() {
  switch(m_type) {
  case IFCONEDIRECTIONREPEATFACTOR:
    m_IfcHatchLineDistanceSelect_union.m_IfcOneDirectionRepeatFactor->unref();
    break;
    }
  m_type = UNSET;
}

IfcOneDirectionRepeatFactor *IfcHatchLineDistanceSelect::getIfcOneDirectionRepeatFactor() {
  return m_IfcHatchLineDistanceSelect_union.m_IfcOneDirectionRepeatFactor;
}

void IfcHatchLineDistanceSelect::setIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcHatchLineDistanceSelect_union.m_IfcOneDirectionRepeatFactor = value;
  if (value) {
    value->ref();
    m_type = IFCONEDIRECTIONREPEATFACTOR;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCONEDIRECTIONREPEATFACTOR;
}

IfcPositiveLengthMeasure IfcHatchLineDistanceSelect::getIfcPositiveLengthMeasure() {
  return m_IfcHatchLineDistanceSelect_union.m_IfcPositiveLengthMeasure;
}

void IfcHatchLineDistanceSelect::setIfcPositiveLengthMeasure(IfcPositiveLengthMeasure value) {
  deleteUnion();
  m_IfcHatchLineDistanceSelect_union.m_IfcPositiveLengthMeasure = value;
  m_type = IFCPOSITIVELENGTHMEASURE;
}

void IfcHatchLineDistanceSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcOneDirectionRepeatFactor::getClassType())) {
    setIfcOneDirectionRepeatFactor(static_cast< IfcOneDirectionRepeatFactor* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcHatchLineDistanceSelect::s_type = new Step::ClassType_class("IfcHatchLineDistanceSelect");