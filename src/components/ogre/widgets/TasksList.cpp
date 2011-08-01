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

#include "TasksList.h"

#include "../EmberOgre.h"
#include <Atlas/Objects/Entity.h>
#include <Atlas/Objects/Operation.h>
#include <Atlas/Objects/Anonymous.h>
#include <Atlas/Objects/ObjectsFwd.h>
#include <Eris/Account.h>
#include <Eris/TypeInfo.h>
#include <Eris/Connection.h>
#include <Eris/Avatar.h>
#include "../EmberEntity.h"

#include "services/EmberServices.h"
#include "services/server/ServerService.h"
#include "components/ogre/World.h"

#include <iostream>

using namespace Atlas::Message;
using namespace Ember;
namespace Ember
{
namespace OgreView
{

namespace Gui
{

TasksList::TasksList()
{
	
}

TasksList::~TasksList()
{
	
}

Atlas::Message::ListType elist;

void TasksList::getList(const int& eid)
{
	
	elist.push_back(eid);  
}

void TasksList::sendList(Eris::Avatar *avatar)
{
	Atlas::Objects::Operation::Set s;
	Atlas::Objects::Entity::Anonymous obj;
	obj->setAttr("TasksList", elist);
	s->setArgs1(obj);

	s->setFrom(avatar->getId());
	avatar->getConnection()->send(s);

}

}
}
}
