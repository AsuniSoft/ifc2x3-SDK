/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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

#ifndef IFC2X3_IFCREFERENCECURVEALIGNMENT2D_H
#define IFC2X3_IFCREFERENCECURVEALIGNMENT2D_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcReferenceCurve.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurve;

    /**
     * Object Placement.
     * 
     */
    class IFC2X3_DLL_DEF IfcReferenceCurveAlignment2D : public IfcReferenceCurve {
    public:
        /**
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
        /**
         */
        static Step::ClassType getClassType();
        /**
         */
        virtual Step::ClassType getType() const;
        /**
         * @param t
         */
        virtual bool isOfType(Step::ClassType t);
        /**
         */
        IfcCurve *getHorizontalAlignment();
        /**
         * Sets the value of the explicit attribute 'HorizontalAlignment'.
         * 
         * @param value
         */
        void setHorizontalAlignment(const Step::RefPtr< IfcCurve > &value);
        /**
         */
        IfcCurve *getVerticalAlignment();
        /**
         * Sets the value of the explicit attribute 'VerticalAlignment'.
         * 
         * @param value
         */
        void setVerticalAlignment(const Step::RefPtr< IfcCurve > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcReferenceCurveAlignment2D(Step::Id id, Step::SPFData *args);
        virtual ~IfcReferenceCurveAlignment2D();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcReferenceCurveAlignment2D &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCurve > m_horizontalAlignment;
        /**
         */
        Step::RefPtr< IfcCurve > m_verticalAlignment;

    };

}

#endif // IFC2X3_IFCREFERENCECURVEALIGNMENT2D_H