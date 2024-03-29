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

#ifndef IFC2X3_IFCCONSTRAINTAGGREGATIONRELATIONSHIP_H
#define IFC2X3_IFCCONSTRAINTAGGREGATIONRELATIONSHIP_H
#include "DefinedTypes.h"
#include "ifc2x3Export.h"

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <stdexcept>
#include <string>

namespace ifc2x3 {

    class IfcConstraint;
    class IfcConstraintAggregationRelationship;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type : public List_IfcConstraint_1_n {
    public:
        /**
         */
        typedef List_IfcConstraint_1_n::iterator iterator;

        /**
         */
        Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type();
        /**
         * Insert a value in the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual void push_back(const Step::RefPtr< IfcConstraint > &value) throw(std::out_of_range);
        /**
         * Remove a value from the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual iterator erase(const Step::RefPtr< IfcConstraint > &value);
        /**
         * Remove all values from the aggregate.
         * 
         */
        void clear();
        friend class IfcConstraintAggregationRelationship;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcConstraintAggregationRelationship *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcConstraintAggregationRelationship *owner);

    };

    class CopyOp;

    /**
     * Generated class for the IfcConstraintAggregationRelationship Entity.
     * 
     */
    class IFC2X3_EXPORT IfcConstraintAggregationRelationship : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcLabel getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcLabel getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcLabel &value);
        /**
         * unset the attribute 'Name'.
         * 
         */
        virtual void unsetName();
        /**
         * Test if the attribute 'Name' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testName() const;
        /**
         * Gets the value of the explicit attribute 'Description'.
         * 
         */
        virtual IfcText getDescription();
        /**
         * (const) Returns the value of the explicit attribute 'Description'.
         * 
         * @return the value of the explicit attribute 'Description'
         */
        virtual const IfcText getDescription() const;
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        virtual void setDescription(const IfcText &value);
        /**
         * unset the attribute 'Description'.
         * 
         */
        virtual void unsetDescription();
        /**
         * Test if the attribute 'Description' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDescription() const;
        /**
         * Gets the value of the explicit attribute 'RelatingConstraint'.
         * 
         */
        virtual IfcConstraint *getRelatingConstraint();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingConstraint'.
         * 
         * @return the value of the explicit attribute 'RelatingConstraint'
         */
        virtual const IfcConstraint *getRelatingConstraint() const;
        /**
         * Sets the value of the explicit attribute 'RelatingConstraint'.
         * 
         * @param value
         */
        virtual void setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value);
        /**
         * unset the attribute 'RelatingConstraint'.
         * 
         */
        virtual void unsetRelatingConstraint();
        /**
         * Test if the attribute 'RelatingConstraint' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingConstraint() const;
        /**
         * Gets the value of the explicit attribute 'RelatedConstraints'.
         * 
         */
        virtual List_IfcConstraint_1_n &getRelatedConstraints();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedConstraints'.
         * 
         * @return the value of the explicit attribute 'RelatedConstraints'
         */
        virtual const List_IfcConstraint_1_n &getRelatedConstraints() const;
        /**
         * unset the attribute 'RelatedConstraints'.
         * 
         */
        virtual void unsetRelatedConstraints();
        /**
         * Test if the attribute 'RelatedConstraints' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedConstraints() const;
        /**
         * Gets the value of the explicit attribute 'LogicalAggregator'.
         * 
         */
        virtual IfcLogicalOperatorEnum getLogicalAggregator();
        /**
         * (const) Returns the value of the explicit attribute 'LogicalAggregator'.
         * 
         * @return the value of the explicit attribute 'LogicalAggregator'
         */
        virtual const IfcLogicalOperatorEnum getLogicalAggregator() const;
        /**
         * Sets the value of the explicit attribute 'LogicalAggregator'.
         * 
         * @param value
         */
        virtual void setLogicalAggregator(IfcLogicalOperatorEnum value);
        /**
         * unset the attribute 'LogicalAggregator'.
         * 
         */
        virtual void unsetLogicalAggregator();
        /**
         * Test if the attribute 'LogicalAggregator' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLogicalAggregator() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcConstraintAggregationRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcConstraintAggregationRelationship();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcConstraintAggregationRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_name;
        /**
         */
        Step::String m_description;
        /**
         */
        Step::RefPtr< IfcConstraint > m_relatingConstraint;
        /**
         */
        Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type m_relatedConstraints;
        /**
         */
        IfcLogicalOperatorEnum m_logicalAggregator;

    };

}

#endif // IFC2X3_IFCCONSTRAINTAGGREGATIONRELATIONSHIP_H
