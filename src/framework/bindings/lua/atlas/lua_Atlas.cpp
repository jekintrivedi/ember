/*
** Lua binding: Atlas
** Generated automatically by tolua++-1.0.92 on Sun Apr 15 20:10:17 2007.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_Atlas_open (lua_State* tolua_S);

#include "required.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Atlas__Message__Element (lua_State* tolua_S)
{
 Atlas::Message::Element* self = (Atlas::Message::Element*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"std::vector<Atlas::Message::Element>");
 tolua_usertype(tolua_S,"Atlas::Message::Element");
 tolua_usertype(tolua_S,"std::map<std::string,Atlas::Message::Element>");
}

/* method: new of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new00
static int tolua_Atlas_Atlas_Message_Element_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Atlas::Message::Element");
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

/* method: new_local of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new00_local
static int tolua_Atlas_Atlas_Message_Element_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Atlas::Message::Element");
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

/* method: delete of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_delete00
static int tolua_Atlas_Atlas_Message_Element_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Atlas::Message::Element* self = (Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
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

/* method: new of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new01
static int tolua_Atlas_Atlas_Message_Element_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Atlas::Message::Element* obj = ((const Atlas::Message::Element*)  tolua_tousertype(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(*obj);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Atlas::Message::Element");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new01_local
static int tolua_Atlas_Atlas_Message_Element_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Atlas::Message::Element* obj = ((const Atlas::Message::Element*)  tolua_tousertype(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(*obj);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Atlas::Message::Element");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new02
static int tolua_Atlas_Atlas_Message_Element_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int v = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(v);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Atlas::Message::Element");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new02_local
static int tolua_Atlas_Atlas_Message_Element_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int v = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(v);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Atlas::Message::Element");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new03
static int tolua_Atlas_Atlas_Message_Element_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  bool v = ((bool)  tolua_toboolean(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(v);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Atlas::Message::Element");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new03_local
static int tolua_Atlas_Atlas_Message_Element_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  bool v = ((bool)  tolua_toboolean(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(v);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Atlas::Message::Element");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new04
static int tolua_Atlas_Atlas_Message_Element_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  long v = ((long)  tolua_tonumber(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(v);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Atlas::Message::Element");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new04_local
static int tolua_Atlas_Atlas_Message_Element_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  long v = ((long)  tolua_tonumber(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(v);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Atlas::Message::Element");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new05
static int tolua_Atlas_Atlas_Message_Element_new05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(v);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Atlas::Message::Element");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new05_local
static int tolua_Atlas_Atlas_Message_Element_new05_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(v);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Atlas::Message::Element");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new04_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new06
static int tolua_Atlas_Atlas_Message_Element_new06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(v);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Atlas::Message::Element");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new06_local
static int tolua_Atlas_Atlas_Message_Element_new06_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(v);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Atlas::Message::Element");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new05_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new07
static int tolua_Atlas_Atlas_Message_Element_new07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  void* v = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(v);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Atlas::Message::Element");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new07_local
static int tolua_Atlas_Atlas_Message_Element_new07_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  void* v = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(v);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Atlas::Message::Element");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new06_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new08
static int tolua_Atlas_Atlas_Message_Element_new08(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* v = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(v);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Atlas::Message::Element");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new07(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new08_local
static int tolua_Atlas_Atlas_Message_Element_new08_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* v = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(v);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Atlas::Message::Element");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new07_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new09
static int tolua_Atlas_Atlas_Message_Element_new09(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const std::string v = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(v);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Atlas::Message::Element");
   tolua_pushcppstring(tolua_S,(const char*)v);
  }
 }
 return 2;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new08(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new09_local
static int tolua_Atlas_Atlas_Message_Element_new09_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const std::string v = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(v);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Atlas::Message::Element");
   tolua_pushcppstring(tolua_S,(const char*)v);
  }
 }
 return 2;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new08_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new10
static int tolua_Atlas_Atlas_Message_Element_new10(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const std::map<std::string,Atlas::Message::Element>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const std::map<std::string,Atlas::Message::Element>* v = ((const std::map<std::string,Atlas::Message::Element>*)  tolua_tousertype(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(*v);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Atlas::Message::Element");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new09(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new10_local
static int tolua_Atlas_Atlas_Message_Element_new10_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const std::map<std::string,Atlas::Message::Element>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const std::map<std::string,Atlas::Message::Element>* v = ((const std::map<std::string,Atlas::Message::Element>*)  tolua_tousertype(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(*v);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Atlas::Message::Element");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new09_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new11
static int tolua_Atlas_Atlas_Message_Element_new11(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const std::vector<Atlas::Message::Element>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const std::vector<Atlas::Message::Element>* v = ((const std::vector<Atlas::Message::Element>*)  tolua_tousertype(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(*v);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Atlas::Message::Element");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new10(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_new11_local
static int tolua_Atlas_Atlas_Message_Element_new11_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const std::vector<Atlas::Message::Element>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const std::vector<Atlas::Message::Element>* v = ((const std::vector<Atlas::Message::Element>*)  tolua_tousertype(tolua_S,2,0));
  {
   Atlas::Message::Element* tolua_ret = (Atlas::Message::Element*)  new Atlas::Message::Element(*v);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Atlas::Message::Element");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_new10_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element__eq00
static int tolua_Atlas_Atlas_Message_Element__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
  const Atlas::Message::Element* o = ((const Atlas::Message::Element*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(*o);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element__eq01
static int tolua_Atlas_Atlas_Message_Element__eq01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
  long v = ((long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element__eq00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element__eq02
static int tolua_Atlas_Atlas_Message_Element__eq02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element__eq01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element__eq03
static int tolua_Atlas_Atlas_Message_Element__eq03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
  void* v = ((void*)  tolua_touserdata(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element__eq02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element__eq04
static int tolua_Atlas_Atlas_Message_Element__eq04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
  const char* v = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element__eq03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element__eq05
static int tolua_Atlas_Atlas_Message_Element__eq05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
  const std::string v = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)v);
  }
 }
 return 2;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element__eq04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element__eq06
static int tolua_Atlas_Atlas_Message_Element__eq06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const std::map<std::string,Atlas::Message::Element>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
  const std::map<std::string,Atlas::Message::Element>* v = ((const std::map<std::string,Atlas::Message::Element>*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(*v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element__eq05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element__eq07
static int tolua_Atlas_Atlas_Message_Element__eq07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const std::vector<Atlas::Message::Element>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
  const std::vector<Atlas::Message::Element>* v = ((const std::vector<Atlas::Message::Element>*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(*v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element__eq06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getType of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_getType00
static int tolua_Atlas_Atlas_Message_Element_getType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getType'",NULL);
#endif
  {
   Atlas::Message::Element::Type tolua_ret = (Atlas::Message::Element::Type)  self->getType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isNone of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_isNone00
static int tolua_Atlas_Atlas_Message_Element_isNone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isNone'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isNone();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isNone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isInt of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_isInt00
static int tolua_Atlas_Atlas_Message_Element_isInt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isInt'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isInt();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isInt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFloat of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_isFloat00
static int tolua_Atlas_Atlas_Message_Element_isFloat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFloat'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFloat();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFloat'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isPtr of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_isPtr00
static int tolua_Atlas_Atlas_Message_Element_isPtr00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isPtr'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isPtr();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isPtr'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isNum of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_isNum00
static int tolua_Atlas_Atlas_Message_Element_isNum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isNum'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isNum();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isNum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isString of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_isString00
static int tolua_Atlas_Atlas_Message_Element_isString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isString'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isString();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isMap of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_isMap00
static int tolua_Atlas_Atlas_Message_Element_isMap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isMap'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isMap();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isMap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isList of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_isList00
static int tolua_Atlas_Atlas_Message_Element_isList00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isList'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isList();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isList'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: asInt of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_asInt00
static int tolua_Atlas_Atlas_Message_Element_asInt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'asInt'",NULL);
#endif
  {
   long tolua_ret = (long)  self->asInt();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'asInt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Int of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_Int00
static int tolua_Atlas_Atlas_Message_Element_Int00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Int'",NULL);
#endif
  {
   long tolua_ret = (long)  self->Int();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Int'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: asFloat of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_asFloat00
static int tolua_Atlas_Atlas_Message_Element_asFloat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'asFloat'",NULL);
#endif
  {
   double tolua_ret = (double)  self->asFloat();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'asFloat'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Float of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_Float00
static int tolua_Atlas_Atlas_Message_Element_Float00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Float'",NULL);
#endif
  {
   double tolua_ret = (double)  self->Float();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Float'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: asNum of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_asNum00
static int tolua_Atlas_Atlas_Message_Element_asNum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'asNum'",NULL);
#endif
  {
   double tolua_ret = (double)  self->asNum();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'asNum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: asString of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_asString00
static int tolua_Atlas_Atlas_Message_Element_asString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'asString'",NULL);
#endif
  {
   const std::string tolua_ret = (const std::string)  self->asString();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'asString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: asString of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_asString01
static int tolua_Atlas_Atlas_Message_Element_asString01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Atlas::Message::Element* self = (Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'asString'",NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->asString();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_asString00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: String of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_String00
static int tolua_Atlas_Atlas_Message_Element_String00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'String'",NULL);
#endif
  {
   const std::string tolua_ret = (const std::string)  self->String();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'String'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: String of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_String01
static int tolua_Atlas_Atlas_Message_Element_String01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Atlas::Message::Element* self = (Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'String'",NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->String();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_String00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: asMap of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_asMap00
static int tolua_Atlas_Atlas_Message_Element_asMap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'asMap'",NULL);
#endif
  {
   const std::map<std::string,Atlas::Message::Element>& tolua_ret = (const std::map<std::string,Atlas::Message::Element>&)  self->asMap();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const std::map<std::string,Atlas::Message::Element>");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'asMap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: asMap of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_asMap01
static int tolua_Atlas_Atlas_Message_Element_asMap01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Atlas::Message::Element* self = (Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'asMap'",NULL);
#endif
  {
   std::map<std::string,Atlas::Message::Element>& tolua_ret = (std::map<std::string,Atlas::Message::Element>&)  self->asMap();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"std::map<std::string,Atlas::Message::Element>");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_asMap00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Map of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_Map00
static int tolua_Atlas_Atlas_Message_Element_Map00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Map'",NULL);
#endif
  {
   const std::map<std::string,Atlas::Message::Element>& tolua_ret = (const std::map<std::string,Atlas::Message::Element>&)  self->Map();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const std::map<std::string,Atlas::Message::Element>");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Map'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Map of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_Map01
static int tolua_Atlas_Atlas_Message_Element_Map01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Atlas::Message::Element* self = (Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Map'",NULL);
#endif
  {
   std::map<std::string,Atlas::Message::Element>& tolua_ret = (std::map<std::string,Atlas::Message::Element>&)  self->Map();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"std::map<std::string,Atlas::Message::Element>");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_Map00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: asList of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_asList00
static int tolua_Atlas_Atlas_Message_Element_asList00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'asList'",NULL);
#endif
  {
   const std::vector<Atlas::Message::Element>& tolua_ret = (const std::vector<Atlas::Message::Element>&)  self->asList();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const std::vector<Atlas::Message::Element>");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'asList'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: asList of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_asList01
static int tolua_Atlas_Atlas_Message_Element_asList01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Atlas::Message::Element* self = (Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'asList'",NULL);
#endif
  {
   std::vector<Atlas::Message::Element>& tolua_ret = (std::vector<Atlas::Message::Element>&)  self->asList();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"std::vector<Atlas::Message::Element>");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_asList00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: List of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_List00
static int tolua_Atlas_Atlas_Message_Element_List00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Atlas::Message::Element* self = (const Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'List'",NULL);
#endif
  {
   const std::vector<Atlas::Message::Element>& tolua_ret = (const std::vector<Atlas::Message::Element>&)  self->List();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const std::vector<Atlas::Message::Element>");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'List'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: List of class  Atlas::Message::Element */
#ifndef TOLUA_DISABLE_tolua_Atlas_Atlas_Message_Element_List01
static int tolua_Atlas_Atlas_Message_Element_List01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Atlas::Message::Element",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Atlas::Message::Element* self = (Atlas::Message::Element*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'List'",NULL);
#endif
  {
   std::vector<Atlas::Message::Element>& tolua_ret = (std::vector<Atlas::Message::Element>&)  self->List();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"std::vector<Atlas::Message::Element>");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Atlas_Atlas_Message_Element_List00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_Atlas_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"Atlas",0);
  tolua_beginmodule(tolua_S,"Atlas");
   tolua_module(tolua_S,"Message",0);
   tolua_beginmodule(tolua_S,"Message");
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"Element","Atlas::Message::Element","",tolua_collect_Atlas__Message__Element);
    #else
    tolua_cclass(tolua_S,"Element","Atlas::Message::Element","",NULL);
    #endif
    tolua_beginmodule(tolua_S,"Element");
     tolua_constant(tolua_S,"TYPE_NONE",Atlas::Message::Element::TYPE_NONE);
     tolua_constant(tolua_S,"TYPE_INT",Atlas::Message::Element::TYPE_INT);
     tolua_constant(tolua_S,"TYPE_FLOAT",Atlas::Message::Element::TYPE_FLOAT);
     tolua_constant(tolua_S,"TYPE_PTR",Atlas::Message::Element::TYPE_PTR);
     tolua_constant(tolua_S,"TYPE_STRING",Atlas::Message::Element::TYPE_STRING);
     tolua_constant(tolua_S,"TYPE_MAP",Atlas::Message::Element::TYPE_MAP);
     tolua_constant(tolua_S,"TYPE_LIST",Atlas::Message::Element::TYPE_LIST);
     tolua_function(tolua_S,"new",tolua_Atlas_Atlas_Message_Element_new00);
     tolua_function(tolua_S,"new_local",tolua_Atlas_Atlas_Message_Element_new00_local);
     tolua_function(tolua_S,".call",tolua_Atlas_Atlas_Message_Element_new00_local);
     tolua_function(tolua_S,"delete",tolua_Atlas_Atlas_Message_Element_delete00);
     tolua_function(tolua_S,"new",tolua_Atlas_Atlas_Message_Element_new01);
     tolua_function(tolua_S,"new_local",tolua_Atlas_Atlas_Message_Element_new01_local);
     tolua_function(tolua_S,".call",tolua_Atlas_Atlas_Message_Element_new01_local);
     tolua_function(tolua_S,"new",tolua_Atlas_Atlas_Message_Element_new02);
     tolua_function(tolua_S,"new_local",tolua_Atlas_Atlas_Message_Element_new02_local);
     tolua_function(tolua_S,".call",tolua_Atlas_Atlas_Message_Element_new02_local);
     tolua_function(tolua_S,"new",tolua_Atlas_Atlas_Message_Element_new03);
     tolua_function(tolua_S,"new_local",tolua_Atlas_Atlas_Message_Element_new03_local);
     tolua_function(tolua_S,".call",tolua_Atlas_Atlas_Message_Element_new03_local);
     tolua_function(tolua_S,"new",tolua_Atlas_Atlas_Message_Element_new04);
     tolua_function(tolua_S,"new_local",tolua_Atlas_Atlas_Message_Element_new04_local);
     tolua_function(tolua_S,".call",tolua_Atlas_Atlas_Message_Element_new04_local);
     tolua_function(tolua_S,"new",tolua_Atlas_Atlas_Message_Element_new05);
     tolua_function(tolua_S,"new_local",tolua_Atlas_Atlas_Message_Element_new05_local);
     tolua_function(tolua_S,".call",tolua_Atlas_Atlas_Message_Element_new05_local);
     tolua_function(tolua_S,"new",tolua_Atlas_Atlas_Message_Element_new06);
     tolua_function(tolua_S,"new_local",tolua_Atlas_Atlas_Message_Element_new06_local);
     tolua_function(tolua_S,".call",tolua_Atlas_Atlas_Message_Element_new06_local);
     tolua_function(tolua_S,"new",tolua_Atlas_Atlas_Message_Element_new07);
     tolua_function(tolua_S,"new_local",tolua_Atlas_Atlas_Message_Element_new07_local);
     tolua_function(tolua_S,".call",tolua_Atlas_Atlas_Message_Element_new07_local);
     tolua_function(tolua_S,"new",tolua_Atlas_Atlas_Message_Element_new08);
     tolua_function(tolua_S,"new_local",tolua_Atlas_Atlas_Message_Element_new08_local);
     tolua_function(tolua_S,".call",tolua_Atlas_Atlas_Message_Element_new08_local);
     tolua_function(tolua_S,"new",tolua_Atlas_Atlas_Message_Element_new09);
     tolua_function(tolua_S,"new_local",tolua_Atlas_Atlas_Message_Element_new09_local);
     tolua_function(tolua_S,".call",tolua_Atlas_Atlas_Message_Element_new09_local);
     tolua_function(tolua_S,"new",tolua_Atlas_Atlas_Message_Element_new10);
     tolua_function(tolua_S,"new_local",tolua_Atlas_Atlas_Message_Element_new10_local);
     tolua_function(tolua_S,".call",tolua_Atlas_Atlas_Message_Element_new10_local);
     tolua_function(tolua_S,"new",tolua_Atlas_Atlas_Message_Element_new11);
     tolua_function(tolua_S,"new_local",tolua_Atlas_Atlas_Message_Element_new11_local);
     tolua_function(tolua_S,".call",tolua_Atlas_Atlas_Message_Element_new11_local);
     tolua_function(tolua_S,".eq",tolua_Atlas_Atlas_Message_Element__eq00);
     tolua_function(tolua_S,".eq",tolua_Atlas_Atlas_Message_Element__eq01);
     tolua_function(tolua_S,".eq",tolua_Atlas_Atlas_Message_Element__eq02);
     tolua_function(tolua_S,".eq",tolua_Atlas_Atlas_Message_Element__eq03);
     tolua_function(tolua_S,".eq",tolua_Atlas_Atlas_Message_Element__eq04);
     tolua_function(tolua_S,".eq",tolua_Atlas_Atlas_Message_Element__eq05);
     tolua_function(tolua_S,".eq",tolua_Atlas_Atlas_Message_Element__eq06);
     tolua_function(tolua_S,".eq",tolua_Atlas_Atlas_Message_Element__eq07);
     tolua_function(tolua_S,"getType",tolua_Atlas_Atlas_Message_Element_getType00);
     tolua_function(tolua_S,"isNone",tolua_Atlas_Atlas_Message_Element_isNone00);
     tolua_function(tolua_S,"isInt",tolua_Atlas_Atlas_Message_Element_isInt00);
     tolua_function(tolua_S,"isFloat",tolua_Atlas_Atlas_Message_Element_isFloat00);
     tolua_function(tolua_S,"isPtr",tolua_Atlas_Atlas_Message_Element_isPtr00);
     tolua_function(tolua_S,"isNum",tolua_Atlas_Atlas_Message_Element_isNum00);
     tolua_function(tolua_S,"isString",tolua_Atlas_Atlas_Message_Element_isString00);
     tolua_function(tolua_S,"isMap",tolua_Atlas_Atlas_Message_Element_isMap00);
     tolua_function(tolua_S,"isList",tolua_Atlas_Atlas_Message_Element_isList00);
     tolua_function(tolua_S,"asInt",tolua_Atlas_Atlas_Message_Element_asInt00);
     tolua_function(tolua_S,"Int",tolua_Atlas_Atlas_Message_Element_Int00);
     tolua_function(tolua_S,"asFloat",tolua_Atlas_Atlas_Message_Element_asFloat00);
     tolua_function(tolua_S,"Float",tolua_Atlas_Atlas_Message_Element_Float00);
     tolua_function(tolua_S,"asNum",tolua_Atlas_Atlas_Message_Element_asNum00);
     tolua_function(tolua_S,"asString",tolua_Atlas_Atlas_Message_Element_asString00);
     tolua_function(tolua_S,"asString",tolua_Atlas_Atlas_Message_Element_asString01);
     tolua_function(tolua_S,"String",tolua_Atlas_Atlas_Message_Element_String00);
     tolua_function(tolua_S,"String",tolua_Atlas_Atlas_Message_Element_String01);
     tolua_function(tolua_S,"asMap",tolua_Atlas_Atlas_Message_Element_asMap00);
     tolua_function(tolua_S,"asMap",tolua_Atlas_Atlas_Message_Element_asMap01);
     tolua_function(tolua_S,"Map",tolua_Atlas_Atlas_Message_Element_Map00);
     tolua_function(tolua_S,"Map",tolua_Atlas_Atlas_Message_Element_Map01);
     tolua_function(tolua_S,"asList",tolua_Atlas_Atlas_Message_Element_asList00);
     tolua_function(tolua_S,"asList",tolua_Atlas_Atlas_Message_Element_asList01);
     tolua_function(tolua_S,"List",tolua_Atlas_Atlas_Message_Element_List00);
     tolua_function(tolua_S,"List",tolua_Atlas_Atlas_Message_Element_List01);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_Atlas (lua_State* tolua_S) {
 return tolua_Atlas_open(tolua_S);
};
#endif
