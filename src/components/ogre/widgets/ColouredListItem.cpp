//
// C++ Implementation: ColouredListItem
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
#include "ColouredListItem.h"

namespace EmberOgre {

namespace Gui {

ColouredListItem::ColouredListItem(const CEGUI::String& text) : ListboxTextItem(text)
{
	setColours();
}

ColouredListItem::ColouredListItem(const CEGUI::String& text, unsigned int item_id) : ListboxTextItem(text, item_id)
{
	setColours();
}

ColouredListItem::ColouredListItem(const CEGUI::String& text, unsigned int item_id, void *item_data) : ListboxTextItem(text, item_id, item_data)
{
	setColours();
}

void ColouredListItem::setColours()
{
	setSelectionColours(CEGUI::colour(50,50,50));
	setTextColours(CEGUI::colour(0,0,0));
	try {
		setSelectionBrushImage("EmberLook", "MultiListSelectionBrush");
	} catch (...) {}

}

CEGUI::ListboxItem* ColouredListItem::createColouredListItem(const CEGUI::String& text)
{
	return new ColouredListItem(text);
}

CEGUI::ListboxItem* ColouredListItem::createColouredListItem(const CEGUI::String& text, unsigned int item_id)
{
	return new ColouredListItem(text, item_id);
}

CEGUI::ListboxItem* ColouredListItem::createColouredListItem(const CEGUI::String& text, unsigned int item_id, void *item_data)
{
	return new ColouredListItem(text, item_id, item_data);
}


}

}