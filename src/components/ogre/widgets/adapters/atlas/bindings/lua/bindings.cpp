/*
** Lua binding: atlas_adapters
** Generated automatically by tolua++-1.0.92 on Sun Apr 15 16:31:53 2007.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_atlas_adapters_open (lua_State* tolua_S);

#include "../../AdapterBase.h"
#include "../../AdapterFactory.h"
#include "../../StringAdapter.h"
#include "../../NumberAdapter.h"
#include "../../SizeAdapter.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_EmberOgre__Gui__Adapters__Atlas__AdapterBase (lua_State* tolua_S)
{
 EmberOgre::Gui::Adapters::Atlas::AdapterBase* self = (EmberOgre::Gui::Adapters::Atlas::AdapterBase*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_EmberOgre__Gui__Adapters__Atlas__AdapterFactory (lua_State* tolua_S)
{
 EmberOgre::Gui::Adapters::Atlas::AdapterFactory* self = (EmberOgre::Gui::Adapters::Atlas::AdapterFactory*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_EmberOgre__Gui__Adapters__Atlas__SizeAdapter (lua_State* tolua_S)
{
 EmberOgre::Gui::Adapters::Atlas::SizeAdapter* self = (EmberOgre::Gui::Adapters::Atlas::SizeAdapter*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_EmberOgre__Gui__Adapters__Atlas__StringAdapter (lua_State* tolua_S)
{
 EmberOgre::Gui::Adapters::Atlas::StringAdapter* self = (EmberOgre::Gui::Adapters::Atlas::StringAdapter*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_EmberOgre__Gui__Adapters__Atlas__NumberAdapter (lua_State* tolua_S)
{
 EmberOgre::Gui::Adapters::Atlas::NumberAdapter* self = (EmberOgre::Gui::Adapters::Atlas::NumberAdapter*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"EmberOgre::Gui::Adapters::Atlas::AdapterBase");
 tolua_usertype(tolua_S,"EmberOgre::Gui::Adapters::Atlas::SizeAdapter");
 tolua_usertype(tolua_S,"CEGUI::Slider");
 tolua_usertype(tolua_S,"EmberOgre::Gui::Adapters::Atlas::NumberAdapter");
 tolua_usertype(tolua_S,"EmberOgre::Gui::Adapters::Atlas::AdapterFactory");
 tolua_usertype(tolua_S,"sigc::signal<void>");
 tolua_usertype(tolua_S,"EmberOgre::Gui::Adapters::Atlas::StringAdapter");
 tolua_usertype(tolua_S,"Atlas::Message::Element");
 tolua_usertype(tolua_S,"CEGUI::Window");
}

/* method: delete of class  EmberOgre::Gui::Adapters::Atlas::AdapterBase */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterBase_delete00
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterBase_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::AdapterBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EmberOgre::Gui::Adapters::Atlas::AdapterBase* self = (EmberOgre::Gui::Adapters::Atlas::AdapterBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setValue of class  EmberOgre::Gui::Adapters::Atlas::AdapterBase */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterBase_setValue00
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterBase_setValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::AdapterBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EmberOgre::Gui::Adapters::Atlas::AdapterBase* self = (EmberOgre::Gui::Adapters::Atlas::AdapterBase*)  tolua_tousertype(tolua_S,1,0);
  Atlas::Message::Element* element = ((Atlas::Message::Element*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setValue'",NULL);
#endif
  {
   self->setValue(*element);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getValue of class  EmberOgre::Gui::Adapters::Atlas::AdapterBase */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterBase_getValue00
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterBase_getValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::AdapterBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EmberOgre::Gui::Adapters::Atlas::AdapterBase* self = (EmberOgre::Gui::Adapters::Atlas::AdapterBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getValue'",NULL);
#endif
  {
   Atlas::Message::Element& tolua_ret = (Atlas::Message::Element&)  self->getValue();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"Atlas::Message::Element");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOriginalValue of class  EmberOgre::Gui::Adapters::Atlas::AdapterBase */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterBase_getOriginalValue00
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterBase_getOriginalValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const EmberOgre::Gui::Adapters::Atlas::AdapterBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const EmberOgre::Gui::Adapters::Atlas::AdapterBase* self = (const EmberOgre::Gui::Adapters::Atlas::AdapterBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOriginalValue'",NULL);
#endif
  {
   const Atlas::Message::Element& tolua_ret = (const Atlas::Message::Element&)  self->getOriginalValue();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Atlas::Message::Element");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOriginalValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: EventValueChanged of class  EmberOgre::Gui::Adapters::Atlas::AdapterBase */
#ifndef TOLUA_DISABLE_tolua_get_EmberOgre__Gui__Adapters__Atlas__AdapterBase_EventValueChanged
static int tolua_get_EmberOgre__Gui__Adapters__Atlas__AdapterBase_EventValueChanged(lua_State* tolua_S)
{
  EmberOgre::Gui::Adapters::Atlas::AdapterBase* self = (EmberOgre::Gui::Adapters::Atlas::AdapterBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'EventValueChanged'",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->EventValueChanged,"sigc::signal<void>");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: EventValueChanged of class  EmberOgre::Gui::Adapters::Atlas::AdapterBase */
#ifndef TOLUA_DISABLE_tolua_set_EmberOgre__Gui__Adapters__Atlas__AdapterBase_EventValueChanged
static int tolua_set_EmberOgre__Gui__Adapters__Atlas__AdapterBase_EventValueChanged(lua_State* tolua_S)
{
  EmberOgre::Gui::Adapters::Atlas::AdapterBase* self = (EmberOgre::Gui::Adapters::Atlas::AdapterBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'EventValueChanged'",NULL);
  if (!tolua_isusertype(tolua_S,2,"sigc::signal<void>",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->EventValueChanged = *((sigc::signal<void>*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateGui of class  EmberOgre::Gui::Adapters::Atlas::AdapterBase */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterBase_updateGui00
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterBase_updateGui00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::AdapterBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EmberOgre::Gui::Adapters::Atlas::AdapterBase* self = (EmberOgre::Gui::Adapters::Atlas::AdapterBase*)  tolua_tousertype(tolua_S,1,0);
  const Atlas::Message::Element* element = ((const Atlas::Message::Element*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateGui'",NULL);
#endif
  {
   self->updateGui(*element);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateGui'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasChanges of class  EmberOgre::Gui::Adapters::Atlas::AdapterBase */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterBase_hasChanges00
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterBase_hasChanges00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::AdapterBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EmberOgre::Gui::Adapters::Atlas::AdapterBase* self = (EmberOgre::Gui::Adapters::Atlas::AdapterBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasChanges'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasChanges();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasChanges'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  EmberOgre::Gui::Adapters::Atlas::AdapterFactory */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterFactory_new00
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterFactory_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::AdapterFactory",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::string prefix = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   EmberOgre::Gui::Adapters::Atlas::AdapterFactory* tolua_ret = (EmberOgre::Gui::Adapters::Atlas::AdapterFactory*)  new EmberOgre::Gui::Adapters::Atlas::AdapterFactory(prefix);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"EmberOgre::Gui::Adapters::Atlas::AdapterFactory");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  EmberOgre::Gui::Adapters::Atlas::AdapterFactory */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterFactory_new00_local
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterFactory_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::AdapterFactory",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::string prefix = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   EmberOgre::Gui::Adapters::Atlas::AdapterFactory* tolua_ret = (EmberOgre::Gui::Adapters::Atlas::AdapterFactory*)  new EmberOgre::Gui::Adapters::Atlas::AdapterFactory(prefix);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"EmberOgre::Gui::Adapters::Atlas::AdapterFactory");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  EmberOgre::Gui::Adapters::Atlas::AdapterFactory */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterFactory_delete00
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterFactory_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::AdapterFactory",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EmberOgre::Gui::Adapters::Atlas::AdapterFactory* self = (EmberOgre::Gui::Adapters::Atlas::AdapterFactory*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createStringAdapter of class  EmberOgre::Gui::Adapters::Atlas::AdapterFactory */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterFactory_createStringAdapter00
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterFactory_createStringAdapter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::AdapterFactory",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EmberOgre::Gui::Adapters::Atlas::AdapterFactory* self = (EmberOgre::Gui::Adapters::Atlas::AdapterFactory*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::Window* container = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
  const std::string adapterPrefix = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const Atlas::Message::Element* element = ((const Atlas::Message::Element*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createStringAdapter'",NULL);
#endif
  {
   EmberOgre::Gui::Adapters::Atlas::StringAdapter* tolua_ret = (EmberOgre::Gui::Adapters::Atlas::StringAdapter*)  self->createStringAdapter(container,adapterPrefix,*element);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"EmberOgre::Gui::Adapters::Atlas::StringAdapter");
   tolua_pushcppstring(tolua_S,(const char*)adapterPrefix);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createStringAdapter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createNumberAdapter of class  EmberOgre::Gui::Adapters::Atlas::AdapterFactory */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterFactory_createNumberAdapter00
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterFactory_createNumberAdapter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::AdapterFactory",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EmberOgre::Gui::Adapters::Atlas::AdapterFactory* self = (EmberOgre::Gui::Adapters::Atlas::AdapterFactory*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::Window* container = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
  const std::string adapterPrefix = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const Atlas::Message::Element* element = ((const Atlas::Message::Element*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createNumberAdapter'",NULL);
#endif
  {
   EmberOgre::Gui::Adapters::Atlas::NumberAdapter* tolua_ret = (EmberOgre::Gui::Adapters::Atlas::NumberAdapter*)  self->createNumberAdapter(container,adapterPrefix,*element);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"EmberOgre::Gui::Adapters::Atlas::NumberAdapter");
   tolua_pushcppstring(tolua_S,(const char*)adapterPrefix);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createNumberAdapter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createSizeAdapter of class  EmberOgre::Gui::Adapters::Atlas::AdapterFactory */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterFactory_createSizeAdapter00
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterFactory_createSizeAdapter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::AdapterFactory",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EmberOgre::Gui::Adapters::Atlas::AdapterFactory* self = (EmberOgre::Gui::Adapters::Atlas::AdapterFactory*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::Window* container = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
  const std::string adapterPrefix = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const Atlas::Message::Element* element = ((const Atlas::Message::Element*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createSizeAdapter'",NULL);
#endif
  {
   EmberOgre::Gui::Adapters::Atlas::SizeAdapter* tolua_ret = (EmberOgre::Gui::Adapters::Atlas::SizeAdapter*)  self->createSizeAdapter(container,adapterPrefix,*element);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"EmberOgre::Gui::Adapters::Atlas::SizeAdapter");
   tolua_pushcppstring(tolua_S,(const char*)adapterPrefix);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createSizeAdapter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  EmberOgre::Gui::Adapters::Atlas::StringAdapter */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_StringAdapter_new00
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_StringAdapter_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::StringAdapter",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CEGUI::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* element = ((const Atlas::Message::Element*)  tolua_tousertype(tolua_S,2,0));
  CEGUI::Window* textWindow = ((CEGUI::Window*)  tolua_tousertype(tolua_S,3,0));
  {
   EmberOgre::Gui::Adapters::Atlas::StringAdapter* tolua_ret = (EmberOgre::Gui::Adapters::Atlas::StringAdapter*)  new EmberOgre::Gui::Adapters::Atlas::StringAdapter(*element,textWindow);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"EmberOgre::Gui::Adapters::Atlas::StringAdapter");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  EmberOgre::Gui::Adapters::Atlas::StringAdapter */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_StringAdapter_new00_local
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_StringAdapter_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::StringAdapter",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CEGUI::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* element = ((const Atlas::Message::Element*)  tolua_tousertype(tolua_S,2,0));
  CEGUI::Window* textWindow = ((CEGUI::Window*)  tolua_tousertype(tolua_S,3,0));
  {
   EmberOgre::Gui::Adapters::Atlas::StringAdapter* tolua_ret = (EmberOgre::Gui::Adapters::Atlas::StringAdapter*)  new EmberOgre::Gui::Adapters::Atlas::StringAdapter(*element,textWindow);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"EmberOgre::Gui::Adapters::Atlas::StringAdapter");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  EmberOgre::Gui::Adapters::Atlas::StringAdapter */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_StringAdapter_delete00
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_StringAdapter_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::StringAdapter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EmberOgre::Gui::Adapters::Atlas::StringAdapter* self = (EmberOgre::Gui::Adapters::Atlas::StringAdapter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateGui of class  EmberOgre::Gui::Adapters::Atlas::StringAdapter */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_StringAdapter_updateGui00
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_StringAdapter_updateGui00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::StringAdapter",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EmberOgre::Gui::Adapters::Atlas::StringAdapter* self = (EmberOgre::Gui::Adapters::Atlas::StringAdapter*)  tolua_tousertype(tolua_S,1,0);
  const Atlas::Message::Element* element = ((const Atlas::Message::Element*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateGui'",NULL);
#endif
  {
   self->updateGui(*element);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateGui'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  EmberOgre::Gui::Adapters::Atlas::NumberAdapter */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_NumberAdapter_new00
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_NumberAdapter_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::NumberAdapter",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CEGUI::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* element = ((const Atlas::Message::Element*)  tolua_tousertype(tolua_S,2,0));
  CEGUI::Window* textWindow = ((CEGUI::Window*)  tolua_tousertype(tolua_S,3,0));
  {
   EmberOgre::Gui::Adapters::Atlas::NumberAdapter* tolua_ret = (EmberOgre::Gui::Adapters::Atlas::NumberAdapter*)  new EmberOgre::Gui::Adapters::Atlas::NumberAdapter(*element,textWindow);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"EmberOgre::Gui::Adapters::Atlas::NumberAdapter");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  EmberOgre::Gui::Adapters::Atlas::NumberAdapter */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_NumberAdapter_new00_local
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_NumberAdapter_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::NumberAdapter",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CEGUI::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* element = ((const Atlas::Message::Element*)  tolua_tousertype(tolua_S,2,0));
  CEGUI::Window* textWindow = ((CEGUI::Window*)  tolua_tousertype(tolua_S,3,0));
  {
   EmberOgre::Gui::Adapters::Atlas::NumberAdapter* tolua_ret = (EmberOgre::Gui::Adapters::Atlas::NumberAdapter*)  new EmberOgre::Gui::Adapters::Atlas::NumberAdapter(*element,textWindow);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"EmberOgre::Gui::Adapters::Atlas::NumberAdapter");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  EmberOgre::Gui::Adapters::Atlas::NumberAdapter */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_NumberAdapter_delete00
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_NumberAdapter_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::NumberAdapter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EmberOgre::Gui::Adapters::Atlas::NumberAdapter* self = (EmberOgre::Gui::Adapters::Atlas::NumberAdapter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateGui of class  EmberOgre::Gui::Adapters::Atlas::NumberAdapter */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_NumberAdapter_updateGui00
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_NumberAdapter_updateGui00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::NumberAdapter",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EmberOgre::Gui::Adapters::Atlas::NumberAdapter* self = (EmberOgre::Gui::Adapters::Atlas::NumberAdapter*)  tolua_tousertype(tolua_S,1,0);
  const Atlas::Message::Element* element = ((const Atlas::Message::Element*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateGui'",NULL);
#endif
  {
   self->updateGui(*element);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateGui'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  EmberOgre::Gui::Adapters::Atlas::SizeAdapter */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_SizeAdapter_new00
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_SizeAdapter_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::SizeAdapter",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CEGUI::Window",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"CEGUI::Window",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"CEGUI::Window",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,6,"CEGUI::Window",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,7,"CEGUI::Window",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,8,"CEGUI::Window",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,9,"CEGUI::Slider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,10,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* element = ((const Atlas::Message::Element*)  tolua_tousertype(tolua_S,2,0));
  CEGUI::Window* lowerXWindow = ((CEGUI::Window*)  tolua_tousertype(tolua_S,3,0));
  CEGUI::Window* lowerYWindow = ((CEGUI::Window*)  tolua_tousertype(tolua_S,4,0));
  CEGUI::Window* lowerZWindow = ((CEGUI::Window*)  tolua_tousertype(tolua_S,5,0));
  CEGUI::Window* upperXWindow = ((CEGUI::Window*)  tolua_tousertype(tolua_S,6,0));
  CEGUI::Window* upperYWindow = ((CEGUI::Window*)  tolua_tousertype(tolua_S,7,0));
  CEGUI::Window* upperZWindow = ((CEGUI::Window*)  tolua_tousertype(tolua_S,8,0));
  CEGUI::Slider* scaler = ((CEGUI::Slider*)  tolua_tousertype(tolua_S,9,0));
  {
   EmberOgre::Gui::Adapters::Atlas::SizeAdapter* tolua_ret = (EmberOgre::Gui::Adapters::Atlas::SizeAdapter*)  new EmberOgre::Gui::Adapters::Atlas::SizeAdapter(*element,lowerXWindow,lowerYWindow,lowerZWindow,upperXWindow,upperYWindow,upperZWindow,scaler);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"EmberOgre::Gui::Adapters::Atlas::SizeAdapter");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  EmberOgre::Gui::Adapters::Atlas::SizeAdapter */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_SizeAdapter_new00_local
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_SizeAdapter_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::SizeAdapter",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CEGUI::Window",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"CEGUI::Window",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"CEGUI::Window",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,6,"CEGUI::Window",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,7,"CEGUI::Window",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,8,"CEGUI::Window",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,9,"CEGUI::Slider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,10,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* element = ((const Atlas::Message::Element*)  tolua_tousertype(tolua_S,2,0));
  CEGUI::Window* lowerXWindow = ((CEGUI::Window*)  tolua_tousertype(tolua_S,3,0));
  CEGUI::Window* lowerYWindow = ((CEGUI::Window*)  tolua_tousertype(tolua_S,4,0));
  CEGUI::Window* lowerZWindow = ((CEGUI::Window*)  tolua_tousertype(tolua_S,5,0));
  CEGUI::Window* upperXWindow = ((CEGUI::Window*)  tolua_tousertype(tolua_S,6,0));
  CEGUI::Window* upperYWindow = ((CEGUI::Window*)  tolua_tousertype(tolua_S,7,0));
  CEGUI::Window* upperZWindow = ((CEGUI::Window*)  tolua_tousertype(tolua_S,8,0));
  CEGUI::Slider* scaler = ((CEGUI::Slider*)  tolua_tousertype(tolua_S,9,0));
  {
   EmberOgre::Gui::Adapters::Atlas::SizeAdapter* tolua_ret = (EmberOgre::Gui::Adapters::Atlas::SizeAdapter*)  new EmberOgre::Gui::Adapters::Atlas::SizeAdapter(*element,lowerXWindow,lowerYWindow,lowerZWindow,upperXWindow,upperYWindow,upperZWindow,scaler);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"EmberOgre::Gui::Adapters::Atlas::SizeAdapter");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  EmberOgre::Gui::Adapters::Atlas::SizeAdapter */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_SizeAdapter_delete00
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_SizeAdapter_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::SizeAdapter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EmberOgre::Gui::Adapters::Atlas::SizeAdapter* self = (EmberOgre::Gui::Adapters::Atlas::SizeAdapter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateGui of class  EmberOgre::Gui::Adapters::Atlas::SizeAdapter */
#ifndef TOLUA_DISABLE_tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_SizeAdapter_updateGui00
static int tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_SizeAdapter_updateGui00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EmberOgre::Gui::Adapters::Atlas::SizeAdapter",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EmberOgre::Gui::Adapters::Atlas::SizeAdapter* self = (EmberOgre::Gui::Adapters::Atlas::SizeAdapter*)  tolua_tousertype(tolua_S,1,0);
  const Atlas::Message::Element* element = ((const Atlas::Message::Element*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateGui'",NULL);
#endif
  {
   self->updateGui(*element);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateGui'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_atlas_adapters_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"EmberOgre",0);
  tolua_beginmodule(tolua_S,"EmberOgre");
   tolua_module(tolua_S,"Gui",0);
   tolua_beginmodule(tolua_S,"Gui");
    tolua_module(tolua_S,"Adapters",0);
    tolua_beginmodule(tolua_S,"Adapters");
     tolua_module(tolua_S,"Atlas",0);
     tolua_beginmodule(tolua_S,"Atlas");
      #ifdef __cplusplus
      tolua_cclass(tolua_S,"AdapterBase","EmberOgre::Gui::Adapters::Atlas::AdapterBase","",tolua_collect_EmberOgre__Gui__Adapters__Atlas__AdapterBase);
      #else
      tolua_cclass(tolua_S,"AdapterBase","EmberOgre::Gui::Adapters::Atlas::AdapterBase","",NULL);
      #endif
      tolua_beginmodule(tolua_S,"AdapterBase");
       tolua_function(tolua_S,"delete",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterBase_delete00);
       tolua_function(tolua_S,"setValue",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterBase_setValue00);
       tolua_function(tolua_S,"getValue",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterBase_getValue00);
       tolua_function(tolua_S,"getOriginalValue",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterBase_getOriginalValue00);
       tolua_variable(tolua_S,"EventValueChanged",tolua_get_EmberOgre__Gui__Adapters__Atlas__AdapterBase_EventValueChanged,tolua_set_EmberOgre__Gui__Adapters__Atlas__AdapterBase_EventValueChanged);
       tolua_function(tolua_S,"updateGui",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterBase_updateGui00);
       tolua_function(tolua_S,"hasChanges",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterBase_hasChanges00);
      tolua_endmodule(tolua_S);
     tolua_endmodule(tolua_S);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"EmberOgre",0);
  tolua_beginmodule(tolua_S,"EmberOgre");
   tolua_module(tolua_S,"Gui",0);
   tolua_beginmodule(tolua_S,"Gui");
    tolua_module(tolua_S,"Adapters",0);
    tolua_beginmodule(tolua_S,"Adapters");
     tolua_module(tolua_S,"Atlas",0);
     tolua_beginmodule(tolua_S,"Atlas");
      #ifdef __cplusplus
      tolua_cclass(tolua_S,"AdapterFactory","EmberOgre::Gui::Adapters::Atlas::AdapterFactory","",tolua_collect_EmberOgre__Gui__Adapters__Atlas__AdapterFactory);
      #else
      tolua_cclass(tolua_S,"AdapterFactory","EmberOgre::Gui::Adapters::Atlas::AdapterFactory","",NULL);
      #endif
      tolua_beginmodule(tolua_S,"AdapterFactory");
       tolua_function(tolua_S,"new",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterFactory_new00);
       tolua_function(tolua_S,"new_local",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterFactory_new00_local);
       tolua_function(tolua_S,".call",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterFactory_new00_local);
       tolua_function(tolua_S,"delete",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterFactory_delete00);
       tolua_function(tolua_S,"createStringAdapter",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterFactory_createStringAdapter00);
       tolua_function(tolua_S,"createNumberAdapter",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterFactory_createNumberAdapter00);
       tolua_function(tolua_S,"createSizeAdapter",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_AdapterFactory_createSizeAdapter00);
      tolua_endmodule(tolua_S);
     tolua_endmodule(tolua_S);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"EmberOgre",0);
  tolua_beginmodule(tolua_S,"EmberOgre");
   tolua_module(tolua_S,"Gui",0);
   tolua_beginmodule(tolua_S,"Gui");
    tolua_module(tolua_S,"Adapters",0);
    tolua_beginmodule(tolua_S,"Adapters");
     tolua_module(tolua_S,"Atlas",0);
     tolua_beginmodule(tolua_S,"Atlas");
      #ifdef __cplusplus
      tolua_cclass(tolua_S,"StringAdapter","EmberOgre::Gui::Adapters::Atlas::StringAdapter","EmberOgre::Gui::Adapters::Atlas::AdapterBase",tolua_collect_EmberOgre__Gui__Adapters__Atlas__StringAdapter);
      #else
      tolua_cclass(tolua_S,"StringAdapter","EmberOgre::Gui::Adapters::Atlas::StringAdapter","EmberOgre::Gui::Adapters::Atlas::AdapterBase",NULL);
      #endif
      tolua_beginmodule(tolua_S,"StringAdapter");
       tolua_function(tolua_S,"new",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_StringAdapter_new00);
       tolua_function(tolua_S,"new_local",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_StringAdapter_new00_local);
       tolua_function(tolua_S,".call",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_StringAdapter_new00_local);
       tolua_function(tolua_S,"delete",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_StringAdapter_delete00);
       tolua_function(tolua_S,"updateGui",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_StringAdapter_updateGui00);
      tolua_endmodule(tolua_S);
     tolua_endmodule(tolua_S);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"EmberOgre",0);
  tolua_beginmodule(tolua_S,"EmberOgre");
   tolua_module(tolua_S,"Gui",0);
   tolua_beginmodule(tolua_S,"Gui");
    tolua_module(tolua_S,"Adapters",0);
    tolua_beginmodule(tolua_S,"Adapters");
     tolua_module(tolua_S,"Atlas",0);
     tolua_beginmodule(tolua_S,"Atlas");
      #ifdef __cplusplus
      tolua_cclass(tolua_S,"NumberAdapter","EmberOgre::Gui::Adapters::Atlas::NumberAdapter","EmberOgre::Gui::Adapters::Atlas::AdapterBase",tolua_collect_EmberOgre__Gui__Adapters__Atlas__NumberAdapter);
      #else
      tolua_cclass(tolua_S,"NumberAdapter","EmberOgre::Gui::Adapters::Atlas::NumberAdapter","EmberOgre::Gui::Adapters::Atlas::AdapterBase",NULL);
      #endif
      tolua_beginmodule(tolua_S,"NumberAdapter");
       tolua_function(tolua_S,"new",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_NumberAdapter_new00);
       tolua_function(tolua_S,"new_local",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_NumberAdapter_new00_local);
       tolua_function(tolua_S,".call",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_NumberAdapter_new00_local);
       tolua_function(tolua_S,"delete",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_NumberAdapter_delete00);
       tolua_function(tolua_S,"updateGui",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_NumberAdapter_updateGui00);
      tolua_endmodule(tolua_S);
     tolua_endmodule(tolua_S);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"EmberOgre",0);
  tolua_beginmodule(tolua_S,"EmberOgre");
   tolua_module(tolua_S,"Gui",0);
   tolua_beginmodule(tolua_S,"Gui");
    tolua_module(tolua_S,"Adapters",0);
    tolua_beginmodule(tolua_S,"Adapters");
     tolua_module(tolua_S,"Atlas",0);
     tolua_beginmodule(tolua_S,"Atlas");
      #ifdef __cplusplus
      tolua_cclass(tolua_S,"SizeAdapter","EmberOgre::Gui::Adapters::Atlas::SizeAdapter","EmberOgre::Gui::Adapters::Atlas::AdapterBase",tolua_collect_EmberOgre__Gui__Adapters__Atlas__SizeAdapter);
      #else
      tolua_cclass(tolua_S,"SizeAdapter","EmberOgre::Gui::Adapters::Atlas::SizeAdapter","EmberOgre::Gui::Adapters::Atlas::AdapterBase",NULL);
      #endif
      tolua_beginmodule(tolua_S,"SizeAdapter");
       tolua_function(tolua_S,"new",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_SizeAdapter_new00);
       tolua_function(tolua_S,"new_local",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_SizeAdapter_new00_local);
       tolua_function(tolua_S,".call",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_SizeAdapter_new00_local);
       tolua_function(tolua_S,"delete",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_SizeAdapter_delete00);
       tolua_function(tolua_S,"updateGui",tolua_atlas_adapters_EmberOgre_Gui_Adapters_Atlas_SizeAdapter_updateGui00);
      tolua_endmodule(tolua_S);
     tolua_endmodule(tolua_S);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_atlas_adapters (lua_State* tolua_S) {
 return tolua_atlas_adapters_open(tolua_S);
};
#endif
