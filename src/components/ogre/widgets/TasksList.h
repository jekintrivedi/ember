//
// C++ Implementation: TasksList
//
// Description:
//
//
// Author: Jekin Trivedi<jekintrivedi@gmail.com>, (C) 2011
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

#ifndef EMBEROGRE_TasksList_H
#define EMBEROGRE_TasksList_H


#include "framework/Singleton.h"
#include <string>
#include <list>
#include <iterator>

#include "../EmberOgre.h"
#include "../Avatar.h"
#include <Atlas/Objects/Entity.h>
#include <Atlas/Objects/Operation.h>
#include <Atlas/Objects/Anonymous.h>
#include <Atlas/Objects/ObjectsFwd.h>
#include <Eris/Account.h>
#include <Eris/TypeInfo.h>
#include <Eris/Connection.h>
#include "../EmberEntity.h"
#include "components/ogre/World.h"
#include "services/EmberServices.h"
#include "services/server/ServerService.h"
#include <iostream>


namespace Ember {
namespace OgreView {

class World;

namespace Gui {


/**

@brief Interface for passing list of Entities'id 


*/
class TasksList 
{
public:
	/**
	 * @brief Constructor
	 */
	TasksList();

	/**
	 * @brief Destructor
	 */
	virtual ~TasksList();

	/**
	 * @brief Add the message to the front of the list and update the widget.
	 * @params message The new message we're adding.
	 */
	Atlas::Message::ListType elist;

	void getList(const int& eid);
        void sendList(Eris::Avatar *avatar);
	

};

}
}
}

#endif
