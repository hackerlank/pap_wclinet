/************************************************************************
    filename:   CEGUIFalPropertyInitialiser.h
    created:    Mon Jun 13 2005
    author:     Paul D Turner <paul@cegui.org.uk>
*************************************************************************/
/*************************************************************************
    Crazy Eddie's GUI System (http://www.cegui.org.uk)
    Copyright (C)2004 - 2005 Paul D Turner (paul@cegui.org.uk)
 
    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.
 
    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.
 
    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*************************************************************************/
#ifndef _CEGUIFalPropertyInitialiser_h_
#define _CEGUIFalPropertyInitialiser_h_

#include "CEGUIPropertySet.h"


// Start of CEGUI namespace section
namespace CEGUI
{
    /*!
    \brief
        Class that holds information about a property and it's required initial value.
    */
    class CEGUIEXPORT PropertyInitialiser
    {
    public:
        /*!
        \brief
            Constructor

        \param property
            String holding the name of the property targetted by this PropertyInitialiser.

        \param value
            String holding the value to be set by this PropertyInitialiser.
        */
        PropertyInitialiser(const String& property, const String& value);

        /*!
        \brief
            Apply this property initialiser to the specified target Window object.

        \param target
            Window object to be initialised by this PropertyInitialiser.

        \return
            Nothing.
        */
        void apply(Window& target) const;

        /*!
        \brief
            Return the name of the property targetted by this PropertyInitialiser.

        \return
            String object holding the name of the target property.
        */
        const String& getTargetPropertyName() const;

        /*!
        \brief
            Return the value string to be set on the property targetted by this PropertyInitialiser.

        \return
            String object holding the value string.
        */
        const String& getInitialiserValue() const;

        /*!
        \brief
            Writes an xml representation of this PropertyInitialiser to \a out_stream.

        \param out_stream
            Stream where xml data should be output.

        \return
            Nothing.
        */
        void writeXMLToStream(OutStream& out_stream) const;

    private:
        CEGUI::String   d_propertyName;     //!< Name of a property to be set.
        CEGUI::String   d_propertyValue;    //!< Value string to be set on the property.
    };

} // End of  CEGUI namespace section


#endif  // end of guard _CEGUIFalPropertyInitialiser_h_
