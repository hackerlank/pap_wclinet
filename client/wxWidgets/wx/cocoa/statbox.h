/////////////////////////////////////////////////////////////////////////////
// Name:        wx/cocoa/statbox.h
// Purpose:     wxStaticBox class
// Author:      David Elliott
// Modified by:
// Created:     2003/03/18
// RCS-ID:      $Id:
// Copyright:   (c) 2003 David Elliott
// Licence:   	wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef __WX_COCOA_STATBOX_H__
#define __WX_COCOA_STATBOX_H__

#include "wx/cocoa/NSBox.h"

// ========================================================================
// wxStaticBox
// ========================================================================
class WXDLLEXPORT wxStaticBox: public wxStaticBoxBase, protected wxCocoaNSBox
{
    DECLARE_DYNAMIC_CLASS(wxStaticBox)
    DECLARE_EVENT_TABLE()
    WX_DECLARE_COCOA_OWNER(NSBox,NSView,NSView)
// ------------------------------------------------------------------------
// initialization
// ------------------------------------------------------------------------
public:
    wxStaticBox() { }
    wxStaticBox(wxWindow *parent, wxWindowID winid, const wxString& title,
            const wxPoint& pos = wxDefaultPosition,
            const wxSize& size = wxDefaultSize,
            long style = 0, const wxString& name = wxStaticBoxNameStr)
    {
        Create(parent, winid, title, pos, size, style, name);
    }

    bool Create(wxWindow *parent, wxWindowID winid, const wxString& title,
            const wxPoint& pos = wxDefaultPosition,
            const wxSize& size = wxDefaultSize,
            long style = 0, const wxString& name = wxStaticBoxNameStr);
    virtual ~wxStaticBox();

// ------------------------------------------------------------------------
// Cocoa callbacks
// ------------------------------------------------------------------------
protected:
    // Static boxes cannot be enabled/disabled
    virtual void CocoaSetEnabled(bool enable) { }
// ------------------------------------------------------------------------
// Implementation
// ------------------------------------------------------------------------
public:
    virtual void GetBordersForSizer(int *borderTop, int *borderOther) const;
protected:
};

#endif // __WX_COCOA_STATBOX_H__
