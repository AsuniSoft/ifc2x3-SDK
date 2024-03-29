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

#ifndef IFC2X3_IFCRELCONNECTSPORTTOELEMENT_H
#define IFC2X3_IFCRELCONNECTSPORTTOELEMENT_H
#include "DefinedTypes.h"
#include "ifc2x3Export.h"

#include "IfcRelConnects.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcElement;
    class IfcPort;

    /**
     * Generated class for the IfcRelConnectsPortToElement Entity.
     * 
     */
    class IFC2X3_EXPORT IfcRelConnectsPortToElement : public IfcRelConnects {
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
         * Gets the value of the explicit attribute 'RelatingPort'.
         * 
         */
        virtual IfcPort *getRelatingPort();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingPort'.
         * 
         * @return the value of the explicit attribute 'RelatingPort'
         */
        virtual const IfcPort *getRelatingPort() const;
        /**
         * Sets the value of the explicit attribute 'RelatingPort'.
         * 
         * @param value
         */
        virtual void setRelatingPort(const Step::RefPtr< IfcPort > &value);
        /**
         * unset the attribute 'RelatingPort'.
         * 
         */
        virtual void unsetRelatingPort();
        /**
         * Test if the attribute 'RelatingPort' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingPort() const;
        /**
         * Gets the value of the explicit attribute 'RelatedElement'.
         * 
         */
        virtual IfcElement *getRelatedElement();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedElement'.
         * 
         * @return the value of the explicit attribute 'RelatedElement'
         */
        virtual const IfcElement *getRelatedElement() const;
        /**
         * Sets the value of the explicit attribute 'RelatedElement'.
         * 
         * @param value
         */
        virtual void setRelatedElement(const Step::RefPtr< IfcElement > &value);
        /**
         * unset the attribute 'RelatedElement'.
         * 
         */
        virtual void unsetRelatedElement();
        /**
         * Test if the attribute 'RelatedElement' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedElement() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelConnectsPortToElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelConnectsPortToElement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelConnectsPortToElement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcPort > m_relatingPort;
        /**
         */
        Step::RefPtr< IfcElement > m_relatedElement;

    };

}

#endif // IFC2X3_IFCRELCONNECTSPORTTOELEMENT_H
