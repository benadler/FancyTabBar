I ripped FancyTabBar out of QtCreator's codebase on 2012-10-06 and

 - removed a load of dependencies,
 - removed the corner and progress widgets (at the bottom in QtCreator's TabBar),
 - enabled placement on left, right, top, bottom edges (instead of just left)
 - created a small demo program to show it off

This is what the FancyTabBar looks like on all four edges:

![screenshot](https://raw.github.com/benadler/FancyTabBar/master/screenshot.png "Screenshot")

Concerning the license, please see the qtcreator source and leave me alone.

If you're interested in improving this, please send me patches or pull requests.
