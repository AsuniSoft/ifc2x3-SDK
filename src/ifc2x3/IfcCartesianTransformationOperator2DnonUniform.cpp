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
#include <ifc2x3/IfcCartesianTransformationOperator2DnonUniform.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCartesianTransformationOperator2DnonUniform::IfcCartesianTransformationOperator2DnonUniform(Step::SPFData *args) : IfcCartesianTransformationOperator2D(args) {
  m_scale2 = getUnset(m_scale2);
}


IfcCartesianTransformationOperator2DnonUniform::~IfcCartesianTransformationOperator2DnonUniform() {
}

bool IfcCartesianTransformationOperator2DnonUniform::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCartesianTransformationOperator2DnonUniform(this);
}

const char *IfcCartesianTransformationOperator2DnonUniform::type() {
  return "IfcCartesianTransformationOperator2DnonUniform";
}

Step::ClassType IfcCartesianTransformationOperator2DnonUniform::getClassType() {
  return IfcCartesianTransformationOperator2DnonUniform::s_type;
}

Step::ClassType IfcCartesianTransformationOperator2DnonUniform::getType() const {
  return IfcCartesianTransformationOperator2DnonUniform::s_type;
}

bool IfcCartesianTransformationOperator2DnonUniform::isOfType(Step::ClassType t) {
  return IfcCartesianTransformationOperator2DnonUniform::s_type == t ? true : IfcCartesianTransformationOperator2D::isOfType(t);
}

Real IfcCartesianTransformationOperator2DnonUniform::getScale2() {
  if (Step::BaseObject::inited()) {
    return m_scale2;
  }
  else {
    return getUnset(m_scale2);
  }
}

void IfcCartesianTransformationOperator2DnonUniform::setScale2(Real value) {
  m_scale2 = value;
}

void IfcCartesianTransformationOperator2DnonUniform::release() {
  IfcCartesianTransformationOperator2D::release();
}

bool IfcCartesianTransformationOperator2DnonUniform::init() {
  bool status = IfcCartesianTransformationOperator2D::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_scale2 = getUnset(m_scale2);
  }
  else {
    m_scale2 = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCartesianTransformationOperator2DnonUniform::s_type = new Step::ClassType_class("IfcCartesianTransformationOperator2DnonUniform");
IfcCartesianTransformationOperator2DnonUniform_Factory::IfcCartesianTransformationOperator2DnonUniform_Factory() {
}

IfcCartesianTransformationOperator2DnonUniform_Factory::~IfcCartesianTransformationOperator2DnonUniform_Factory() {
  clear(true);
}

void IfcCartesianTransformationOperator2DnonUniform_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCartesianTransformationOperator2DnonUniform_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCartesianTransformationOperator2DnonUniform_Factory::end() {
  return m_idMap.end();
}

IfcCartesianTransformationOperator2DnonUniform *IfcCartesianTransformationOperator2DnonUniform_Factory::get(Step::StepId id) {
  IfcCartesianTransformationOperator2DnonUniform *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCartesianTransformationOperator2DnonUniform * > (it->second);
  }
  else {
    LOG_ERROR("IfcCartesianTransformationOperator2DnonUniform_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCartesianTransformationOperator2DnonUniform * > (create(id));
  }
}

Step::BaseObject *IfcCartesianTransformationOperator2DnonUniform_Factory::create(Step::StepId id) {
  IfcCartesianTransformationOperator2DnonUniform *ret = new IfcCartesianTransformationOperator2DnonUniform(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCartesianTransformationOperator2DnonUniform_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCartesianTransformationOperator2DnonUniform *ret = new IfcCartesianTransformationOperator2DnonUniform(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCartesianTransformationOperator2DnonUniform_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCartesianTransformationOperator2DnonUniform *ret = new IfcCartesianTransformationOperator2DnonUniform(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCartesianTransformationOperator2DnonUniform *IfcCartesianTransformationOperator2DnonUniform_Factory::generate() {
  return static_cast< IfcCartesianTransformationOperator2DnonUniform * > (create(m_model->getNewId()));
}

IfcCartesianTransformationOperator2DnonUniform *IfcCartesianTransformationOperator2DnonUniform_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCartesianTransformationOperator2DnonUniform * > (it->second);
  }
  else {
    return NULL;
  }
}
