//
// C++ Interface: ConsoleAdapter
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
#ifndef EMBEROGRE_GUICONSOLEADAPTER_H
#define EMBEROGRE_GUICONSOLEADAPTER_H

#include <CEGUIEventArgs.h>

namespace CEGUI {
class Editbox;
}

namespace Ember {
class ConsoleBackend;
}

namespace EmberOgre {

namespace Gui {

/**
	@author Erik Hjortsberg <erik.hjortsberg@iteam.se>
*/
class ConsoleAdapter{
public:
    ConsoleAdapter(CEGUI::Editbox* inputBox);

    ~ConsoleAdapter();
protected:
	CEGUI::Editbox* mInputBox;
	Ember::ConsoleBackend* mBackend;

	bool consoleInputBox_KeyUp(const CEGUI::EventArgs& args);
	
	// the text of the current command line saved when browsing the history
	std::string mCommandLine;
	bool mTabPressed;
	int mSelected;

};

}

}

#endif