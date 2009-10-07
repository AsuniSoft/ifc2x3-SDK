/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2009 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include "ifc2x3/IfcMaterialSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcMaterial.h"
#include "ifc2x3/IfcMaterialLayer.h"
#include "ifc2x3/IfcMaterialLayerSet.h"
#include "ifc2x3/IfcMaterialLayerSetUsage.h"
#include "ifc2x3/IfcMaterialList.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

using namespace ifc2x3;

IfcMaterialSelect::IfcMaterialSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcMaterialSelect::IfcMaterialSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcMaterialSelect::~IfcMaterialSelect() {
    deleteUnion();
}

bool IfcMaterialSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMaterialSelect(this);
}

bool IfcMaterialSelect::init() {
    return false;
}

const std::string &IfcMaterialSelect::type() const {
    return IfcMaterialSelect::s_type.getName();
}

const Step::ClassType &IfcMaterialSelect::getClassType() {
    return IfcMaterialSelect::s_type;
}

const Step::ClassType &IfcMaterialSelect::getType() const {
    return IfcMaterialSelect::s_type;
}

bool IfcMaterialSelect::isOfType(const Step::ClassType &t) const {
    return IfcMaterialSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcMaterialSelect::copy(const IfcMaterialSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCMATERIAL:
        setIfcMaterial((IfcMaterial *) (copyop(obj.m_IfcMaterialSelect_union.m_IfcMaterial)));
        break;
    case IFCMATERIALLIST:
        setIfcMaterialList((IfcMaterialList *) (copyop(obj.m_IfcMaterialSelect_union.m_IfcMaterialList)));
        break;
    case IFCMATERIALLAYERSETUSAGE:
        setIfcMaterialLayerSetUsage((IfcMaterialLayerSetUsage *) (copyop(obj.m_IfcMaterialSelect_union.m_IfcMaterialLayerSetUsage)));
        break;
    case IFCMATERIALLAYERSET:
        setIfcMaterialLayerSet((IfcMaterialLayerSet *) (copyop(obj.m_IfcMaterialSelect_union.m_IfcMaterialLayerSet)));
        break;
    case IFCMATERIALLAYER:
        setIfcMaterialLayer((IfcMaterialLayer *) (copyop(obj.m_IfcMaterialSelect_union.m_IfcMaterialLayer)));
        break;
        }
}

std::string IfcMaterialSelect::currentTypeName() const {
    switch(m_type) {
    case IFCMATERIAL:
        return "IfcMaterial";
        break;
    case IFCMATERIALLIST:
        return "IfcMaterialList";
        break;
    case IFCMATERIALLAYERSETUSAGE:
        return "IfcMaterialLayerSetUsage";
        break;
    case IFCMATERIALLAYERSET:
        return "IfcMaterialLayerSet";
        break;
    case IFCMATERIALLAYER:
        return "IfcMaterialLayer";
        break;
    default:
        return "UNSET";
    }
}

IfcMaterialSelect::IfcMaterialSelect_select IfcMaterialSelect::currentType() const {
    return m_type;
}

void IfcMaterialSelect::deleteUnion() {
    switch(m_type) {
    case IFCMATERIAL:
        m_IfcMaterialSelect_union.m_IfcMaterial->unref();
        break;
    case IFCMATERIALLIST:
        m_IfcMaterialSelect_union.m_IfcMaterialList->unref();
        break;
    case IFCMATERIALLAYERSETUSAGE:
        m_IfcMaterialSelect_union.m_IfcMaterialLayerSetUsage->unref();
        break;
    case IFCMATERIALLAYERSET:
        m_IfcMaterialSelect_union.m_IfcMaterialLayerSet->unref();
        break;
    case IFCMATERIALLAYER:
        m_IfcMaterialSelect_union.m_IfcMaterialLayer->unref();
        break;
        }
    m_type = UNSET;
}

IfcMaterial *IfcMaterialSelect::getIfcMaterial() const {
    if (m_type == IFCMATERIAL) {
        return m_IfcMaterialSelect_union.m_IfcMaterial;
    }
    else {
        return NULL;
    }
}

void IfcMaterialSelect::setIfcMaterial(IfcMaterial *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcMaterialSelect_union.m_IfcMaterial = value;
    if (value) {
        value->ref();
        m_type = IFCMATERIAL;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCMATERIAL;
}

IfcMaterialList *IfcMaterialSelect::getIfcMaterialList() const {
    if (m_type == IFCMATERIALLIST) {
        return m_IfcMaterialSelect_union.m_IfcMaterialList;
    }
    else {
        return NULL;
    }
}

void IfcMaterialSelect::setIfcMaterialList(IfcMaterialList *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcMaterialSelect_union.m_IfcMaterialList = value;
    if (value) {
        value->ref();
        m_type = IFCMATERIALLIST;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCMATERIALLIST;
}

IfcMaterialLayerSetUsage *IfcMaterialSelect::getIfcMaterialLayerSetUsage() const {
    if (m_type == IFCMATERIALLAYERSETUSAGE) {
        return m_IfcMaterialSelect_union.m_IfcMaterialLayerSetUsage;
    }
    else {
        return NULL;
    }
}

void IfcMaterialSelect::setIfcMaterialLayerSetUsage(IfcMaterialLayerSetUsage *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcMaterialSelect_union.m_IfcMaterialLayerSetUsage = value;
    if (value) {
        value->ref();
        m_type = IFCMATERIALLAYERSETUSAGE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCMATERIALLAYERSETUSAGE;
}

IfcMaterialLayerSet *IfcMaterialSelect::getIfcMaterialLayerSet() const {
    if (m_type == IFCMATERIALLAYERSET) {
        return m_IfcMaterialSelect_union.m_IfcMaterialLayerSet;
    }
    else {
        return NULL;
    }
}

void IfcMaterialSelect::setIfcMaterialLayerSet(IfcMaterialLayerSet *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcMaterialSelect_union.m_IfcMaterialLayerSet = value;
    if (value) {
        value->ref();
        m_type = IFCMATERIALLAYERSET;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCMATERIALLAYERSET;
}

IfcMaterialLayer *IfcMaterialSelect::getIfcMaterialLayer() const {
    if (m_type == IFCMATERIALLAYER) {
        return m_IfcMaterialSelect_union.m_IfcMaterialLayer;
    }
    else {
        return NULL;
    }
}

void IfcMaterialSelect::setIfcMaterialLayer(IfcMaterialLayer *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcMaterialSelect_union.m_IfcMaterialLayer = value;
    if (value) {
        value->ref();
        m_type = IFCMATERIALLAYER;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCMATERIALLAYER;
}

void IfcMaterialSelect::set(Step::BaseObject *v) {
    if (v && v->isOfType(IfcMaterial::getClassType())) {
        setIfcMaterial(static_cast< IfcMaterial* > (v));
    }
    else if (v && v->isOfType(IfcMaterialList::getClassType())) {
        setIfcMaterialList(static_cast< IfcMaterialList* > (v));
    }
    else if (v && v->isOfType(IfcMaterialLayerSetUsage::getClassType())) {
        setIfcMaterialLayerSetUsage(static_cast< IfcMaterialLayerSetUsage* > (v));
    }
    else if (v && v->isOfType(IfcMaterialLayerSet::getClassType())) {
        setIfcMaterialLayerSet(static_cast< IfcMaterialLayerSet* > (v));
    }
    else if (v && v->isOfType(IfcMaterialLayer::getClassType())) {
        setIfcMaterialLayer(static_cast< IfcMaterialLayer* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcMaterialSelect::s_type("IfcMaterialSelect");
