print "Hello from Lua"

local ffi = require('ffi')

ffi.cdef([[
void test_ffi();
]])
local C = ffi.C

C.test_ffi()
