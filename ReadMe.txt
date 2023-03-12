To modify and build third party DGK 7.1 source:

1. Copy KC folder from the DGKernel_7_1_ThirdPartySrc.zip to DGKernel_7_1\ folder of DG Kernel installation directory
2. Copy ThirdParty folder to DGKernel_7_0\ folder. So that there is DGKernel_7_0\ThirdParty\OCCT\ folder

The provided projects are for Visual Studio 2022

There are two solutions to build:
3. ThirdParty\OCCT\OCCT.sln
4. ThirdParty\Ogre\build_x32\OGRE.sln

The two solutions are independent, apart from Orge uses Free Image dependency binaries from the OCCT folder

Build Release configuration of the required bitness. Building both is needed for AnyCPU apps and generally recommended.

The output dlls will overwrite the installed ones

Building Debug configuration is not supported.