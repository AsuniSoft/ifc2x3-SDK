// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef IFC2X3_IFCCOVERING_H
#define IFC2X3_IFCCOVERING_H
#include "DefinedTypes.h"
#include "ifc2x3Export.h"

#include "IfcBuildingElement.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcCovering Entity.
     * 
     */
    class IFC2X3_EXPORT IfcCovering : public IfcBuildingElement {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'PredefinedType'.
         * 
         */
        virtual IfcCoveringTypeEnum getPredefinedType();
        /**
         * (const) Returns the value of the explicit attribute 'PredefinedType'.
         * 
         * @return the value of the explicit attribute 'PredefinedType'
         */
        virtual const IfcCoveringTypeEnum getPredefinedType() const;
        /**
         * Sets the value of the explicit attribute 'PredefinedType'.
         * 
         * @param value
         */
        virtual void setPredefinedType(IfcCoveringTypeEnum value);
        /**
         * unset the attribute 'PredefinedType'.
         * 
         */
        virtual void unsetPredefinedType();
        /**
         * Test if the attribute 'PredefinedType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPredefinedType() const;
        /**
         * Gets the value of the inverse attribute 'CoversSpaces'.
         * 
         */
        virtual Inverse_Set_IfcRelCoversSpaces_0_1 &getCoversSpaces();
        /**
         * (const) Returns the value of the explicit attribute 'CoversSpaces'.
         * 
         * @return the value of the explicit attribute 'CoversSpaces'
         */
        const virtual Inverse_Set_IfcRelCoversSpaces_0_1 &getCoversSpaces() const;
        /**
         * Test if the attribute 'CoversSpaces' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCoversSpaces() const;
        /**
         * Gets the value of the inverse attribute 'Covers'.
         * 
         */
        virtual Inverse_Set_IfcRelCoversBldgElements_0_1 &getCovers();
        /**
         * (const) Returns the value of the explicit attribute 'Covers'.
         * 
         * @return the value of the explicit attribute 'Covers'
         */
        const virtual Inverse_Set_IfcRelCoversBldgElements_0_1 &getCovers() const;
        /**
         * Test if the attribute 'Covers' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCovers() const;
        friend class Inverted_IfcRelCoversBldgElements_RelatedCoverings_type;
        friend class IfcRelCoversBldgElements;
        friend class ExpressDataSet;
        friend class IfcRelCoversSpaces;
        friend class Inverted_IfcRelCoversSpaces_RelatedCoverings_type;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCovering(Step::Id id, Step::SPFData *args);
        virtual ~IfcCovering();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCovering &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcCoveringTypeEnum m_predefinedType;
        /**
         */
        Inverse_Set_IfcRelCoversSpaces_0_1 m_coversSpaces;
        /**
         */
        Inverse_Set_IfcRelCoversBldgElements_0_1 m_covers;

    };

}

#endif // IFC2X3_IFCCOVERING_H
