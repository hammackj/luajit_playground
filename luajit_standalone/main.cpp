#include <iostream>
#include <luajit-2.0/lua.hpp>

extern "C"
{
	void test_ffi()
	{
		std::cout << "Hello from C++" << std::endl;
	}
}

int main(int argc, char const *argv[])
{
	lua_State *L = luaL_newstate();
	luaL_openlibs(L);

	const char *path = "luatest.lua";

	if (luaL_loadfile(L, path) || lua_pcall(L, 0, LUA_MULTRET, 0))
	{
		std::cerr << "Couldn't load file " << path << " : " << lua_tostring(L, -1) << std::endl;
	}

	lua_close(L);

	return 0;
}
