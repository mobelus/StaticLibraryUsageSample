# StaticLibraryUsageSample
Example of how to builde a static library in one project and how (and what) to add in an other project to use the methods defined in that static library.

1) StaticLibrarySample - The Static Library Project. Build it first to get the ".lib" File. By defaukt the Project is set to Debug-build.
2) StaticLibraryApp - Project that uses the Library Project. The "StaticLibrarySample.h" file in this project was added directly from the Library path (Add -> Existing Item -> "..\StaticLibrarySample\StaticLibrarySample\StaticLibrarySample.h")

Additional Steps for StaticLibraryApp if you create you own project from the Start.

// In VC++ Directories:
// -> Include Directories we added:
// $(MSBuildProjectDirectory)\..\..\StaticLibrarySample\StaticLibrarySample

// -> Library Directories [for Debug] we added:
// $(MSBuildProjectDirectory)\..\..\StaticLibrarySample\Debug
// -> Library Directories [for Release] we added:
// $(MSBuildProjectDirectory)\..\..\StaticLibrarySample\Release

