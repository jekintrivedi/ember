//
// C++ Interface: StackableContainer
//
// Description: 
//
//
// Author: Erik Hjortsberg <erik.hjortsberg@iteam.se>, (C) 2007
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.//
//
#ifndef EMBEROGRE_GUISTACKABLECONTAINER_H
#define EMBEROGRE_GUISTACKABLECONTAINER_H

#include <CEGUI.h>
#include <list>

namespace CEGUI {
class Window;
}

namespace EmberOgre {

namespace Gui {

/**
	@author Erik Hjortsberg <erik.hjortsberg@iteam.se>
*/
class StackableContainer{
public:
	enum FlowDirection {
		Horizontal = 0,
		Vertical = 1
	};

    StackableContainer(CEGUI::Window* window);

    virtual ~StackableContainer();
	
	void setInnerContainerWindow(CEGUI::Window* window);
	
	CEGUI::Window* getWindow();
	
	void setPadding(int padding);

	float getAbsoluteHeight();
	float getAbsoluteWidth();
	
	void setFlowDirection(FlowDirection flowDirection);
	FlowDirection getFlowDirection() const;
	
	/**
	Repositions all windows as they are added and removed to the list.
	*/
	void repositionWindows();

protected:
	
	CEGUI::Window* mWindow;
	CEGUI::Window* mInnerContainerWindow;
	
	
	int mPadding;
	FlowDirection mFlowDirection;
	
	bool window_ChildAdded(const CEGUI::EventArgs& e);
	bool window_ChildRemoved(const CEGUI::EventArgs& e);
	
};

}

}

#endif