SUFFIXES: .cxx .pkg .lo .la .cpp .o .obj

.pkg.cxx:
	cd $(srcdir) && TOLUAXX=${TOLUAXX} $(abs_top_srcdir)/scripts/update_lua_bindings.sh `basename $@ .cxx` `basename $@ .cxx`.pkg $(abs_builddir)/`basename $@` $<

INCLUDES = -I$(top_srcdir)/src -I$(srcdir) -I$(top_builddir)/src -DPREFIX=\"@prefix@\"

noinst_LIBRARIES = liblua_Varconf.a
liblua_Varconf_a_SOURCES = Varconf.cxx

CLEANFILES = Varconf.cxx
TOLUA_PKGS = Varconf.pkg variable.pkg
EXTRA_DIST = $(TOLUA_PKGS)
Varconf.cxx: $(TOLUA_PKGS)

bindings: clean all
