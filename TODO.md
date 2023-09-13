[ ] Can I add another library on which one of my externs is dependent?
[ ] Should I use Fetch for all my libs?
[ ] If I do, will sublibs be able to use those fetched libs?

[ ] Emulate EmbeddedOs & Common


# Including header files is not sufficient
[X] Should I include only extended-project/include include so I don't build the app?
```
CMake Error at extern/modern-cmake/examples/extended-project/src/CMakeLists.txt:21 (source_group):
  source_group ROOT: /Users/kody/Development/mycmake/include is not a prefix
  of file:
  /Users/kody/Development/mycmake/extern/modern-cmake/examples/extended-project/include/modern/lib.hpp
```