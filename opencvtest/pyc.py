import sys
import ctypes

so = ctypes.cdll.LoadLibrary("./libtest.so")
so.do_main()
