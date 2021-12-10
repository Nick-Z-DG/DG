var build_upgrade =
[
    [ "Build OCCT", "build_upgrade__building_occt.html", [
      [ "Windows", "build_upgrade__building_occt.html#build_occt_windows", [
        [ "Building with CMake tool", "build_upgrade__building_occt.html#build_occt_win_cmake", [
          [ "Start CMake", "build_upgrade__building_occt.html#build_cmake_start", null ],
          [ "Configuration process", "build_upgrade__building_occt.html#build_cmake_conf", null ],
          [ "3rd party search mechanism", "build_upgrade__building_occt.html#build_cmake_3rdparty", null ],
          [ "Projects generation", "build_upgrade__building_occt.html#build_cmake_gen", null ],
          [ "Building", "build_upgrade__building_occt.html#build_cmake_build", null ],
          [ "Installation", "build_upgrade__building_occt.html#build_cmake_install", null ]
        ] ],
        [ "Building with Code::Blocks", "build_upgrade__building_occt.html#build_occt_win_codeblocks", [
          [ "Third-party libraries", "build_upgrade__building_occt.html#build_codeblocks_3rdparty", null ],
          [ "Configuration", "build_upgrade__building_occt.html#build_codeblocks_conf", null ],
          [ "Projects generation", "build_upgrade__building_occt.html#build_codeblocks_gen", null ],
          [ "Building", "build_upgrade__building_occt.html#build_codeblocks_build", null ]
        ] ],
        [ "Building with Genproj tool", "build_upgrade__building_occt.html#build_occt_genproj", [
          [ "Third-party libraries", "build_upgrade__building_occt.html#build_msvc_3rdparty", null ],
          [ "Configuration", "build_upgrade__building_occt.html#build_msvc_conf", null ],
          [ "Projects generation", "build_upgrade__building_occt.html#build_msvc_generate", null ],
          [ "Building", "build_upgrade__building_occt.html#build_msvc_build", null ]
        ] ]
      ] ],
      [ "Linux", "build_upgrade__building_occt.html#build_occt_linux", null ],
      [ "Android (cross-compiling)", "build_upgrade__building_occt.html#build_occt_crossplatform_cmake", [
        [ "Configuration", "build_upgrade__building_occt.html#build_occt_crossplatform_cmake_config", null ],
        [ "Generate Makefiles", "build_upgrade__building_occt.html#build_occt_crossplatform_cmake_generation", null ],
        [ "Build Makefiles", "build_upgrade__building_occt.html#build_occt_crossplatform_cmake_building", null ],
        [ "Install OCCT Libraries", "build_upgrade__building_occt.html#build_occt_crossplatform_cmake_install", null ]
      ] ],
      [ "Mac OS X", "build_upgrade__building_occt.html#build_occt_macos", [
        [ "Building with Xcode", "build_upgrade__building_occt.html#build_occt_macos_xcode", null ],
        [ "Building with Code::Blocks", "build_upgrade__building_occt.html#build_occt_code_blocks", null ]
      ] ]
    ] ],
    [ "Build 3rd-parties", "build_upgrade_building_3rdparty.html", [
      [ "Windows", "build_upgrade_building_3rdparty.html#dev_guides__building_3rdparty_win_1", [
        [ "Tcl/Tk", "build_upgrade_building_3rdparty.html#dev_guides__building_3rdparty_win_2", null ],
        [ "FreeType", "build_upgrade_building_3rdparty.html#dev_guides__building_3rdparty_win_2_2", null ],
        [ "TBB", "build_upgrade_building_3rdparty.html#dev_guides__building_3rdparty_win_3_1", null ],
        [ "FreeImage", "build_upgrade_building_3rdparty.html#dev_guides__building_3rdparty_win_3_3", null ],
        [ "VTK", "build_upgrade_building_3rdparty.html#dev_guides__building_3rdparty_win_3_4", null ]
      ] ],
      [ "Linux", "build_upgrade_building_3rdparty.html#build_3rdparty_linux", [
        [ "Tcl/Tk", "build_upgrade_building_3rdparty.html#dev_guides__building_3rdparty_linux_2_1", null ],
        [ "FreeType", "build_upgrade_building_3rdparty.html#dev_guides__building_3rdparty_linux_2_2", null ],
        [ "TBB", "build_upgrade_building_3rdparty.html#dev_guides__building_3rdparty_linux_3_1", null ],
        [ "FreeImage", "build_upgrade_building_3rdparty.html#dev_guides__building_3rdparty_linux_3_3", null ],
        [ "VTK", "build_upgrade_building_3rdparty.html#dev_guides__building_3rdparty_linux_3_4", null ],
        [ "Installation From Official Repositories", "build_upgrade_building_3rdparty.html#dev_guides__building_3rdparty_linux_4", null ]
      ] ],
      [ "Mac OS X", "build_upgrade_building_3rdparty.html#build_3rdparty_macos", [
        [ "Tcl/Tk 8.5", "build_upgrade_building_3rdparty.html#dev_guides__building_3rdparty_osx_2_1", null ],
        [ "FreeType 2.4.10", "build_upgrade_building_3rdparty.html#dev_guides__building_3rdparty_osx_2_2", null ],
        [ "TBB 3.x or 4.x", "build_upgrade_building_3rdparty.html#dev_guides__building_3rdparty_osx_3_1", null ],
        [ "FreeImage 3.14.1 or 3.15.x", "build_upgrade_building_3rdparty.html#dev_guides__building_3rdparty_osx_3_3", null ]
      ] ]
    ] ],
    [ "Build Documentation", "build_upgrade__building_documentation.html", null ],
    [ "Debugging tools and hints", "occt__debug.html", [
      [ "Introduction", "occt__debug.html#occt_debug_intro", null ],
      [ "Compiler macro to enable extended debug messages", "occt__debug.html#occt_debug_macro", null ],
      [ "Calling JIT debugger on exception", "occt__debug.html#occt_debug_exceptions", null ],
      [ "Self-diagnostics in Boolean operations algorithm", "occt__debug.html#occt_debug_bop", null ],
      [ "Functions for calling from debugger", "occt__debug.html#occt_debug_call", [
        [ "Interacting with DRAW", "occt__debug.html#occt_debug_call_draw", null ],
        [ "Saving and dumping shapes and geometric objects", "occt__debug.html#occt_debug_call_brep", null ]
      ] ],
      [ "Dump OCCT objects into Json", "occt__debug.html#occt_debug_dump_json", [
        [ "Implementation in object", "occt__debug.html#occt_debug_dump_json_object", null ],
        [ "Using in DRAW", "occt__debug.html#occt_debug_dump_json_draw", null ]
      ] ],
      [ "Using Visual Studio debugger", "occt__debug.html#occt_debug_vstudio", [
        [ "Command window", "occt__debug.html#occt_debug_vstudio_command", null ],
        [ "Customized display of variables content", "occt__debug.html#occt_debug_vstudio_watch", null ]
      ] ],
      [ "Performance measurement tools", "occt__debug.html#occt_debug_perf", null ],
      [ "Use of compiler sanitizers", "occt__debug.html#occt_debug_sanitizers", [
        [ "Linux", "occt__debug.html#occt_debug_sanitizers_linux", null ],
        [ "Windows", "occt__debug.html#occt_debug_sanitizers_windows", null ]
      ] ]
    ] ],
    [ "Upgrade from older OCCT versions", "occt__upgrade.html", [
      [ "Introduction", "occt__upgrade.html#upgrade_intro", [
        [ "Precautions", "occt__upgrade.html#upgrade_intro_precautions", null ],
        [ "Disclaimer", "occt__upgrade.html#upgrade_intro_disclaim", null ]
      ] ],
      [ "Upgrade to OCCT 6.5.0", "occt__upgrade.html#upgrade_65", null ],
      [ "Upgrade to OCCT 6.5.1", "occt__upgrade.html#upgrade_651", null ],
      [ "Upgrade to OCCT 6.5.2", "occt__upgrade.html#upgrade_652", null ],
      [ "Upgrade to OCCT 6.5.3", "occt__upgrade.html#upgrade_653", null ],
      [ "Upgrade to OCCT 6.5.4", "occt__upgrade.html#upgrade_654", null ],
      [ "Upgrade to OCCT 6.6.0", "occt__upgrade.html#upgrade_660", null ],
      [ "Upgrade to OCCT 6.7.0", "occt__upgrade.html#upgrade_670", [
        [ "Object-level clipping and capping algorithm.", "occt__upgrade.html#upgrade_670_clipping", null ],
        [ "Redesign of markers presentation", "occt__upgrade.html#upgrade_670_markers", null ],
        [ "Default views are not created automatically", "occt__upgrade.html#upgrade_670_views", null ],
        [ "Improved dimensions implementation", "occt__upgrade.html#upgrade_670_dimensions", null ],
        [ "NCollection_Set replaced by List collection", "occt__upgrade.html#upgrade_670_list_collection", null ]
      ] ],
      [ "Upgrade to OCCT 6.8.0", "occt__upgrade.html#upgrade_680", [
        [ "Changes in NCollection classes", "occt__upgrade.html#upgrade_680_ncollection", null ],
        [ "3D View Camera", "occt__upgrade.html#upgrade_680_view_camera", null ],
        [ "Redesign of Connected Interactive Objects", "occt__upgrade.html#upgrade_680_connected_objects", null ],
        [ "Support of UNICODE Characters", "occt__upgrade.html#upgrade_680_unicode", null ],
        [ "Elimination of Projection Shift Concept", "occt__upgrade.html#upgrade_680_projection_shift", null ]
      ] ],
      [ "Upgrade to OCCT 6.9.0", "occt__upgrade.html#upgrade_690", [
        [ "3D Viewer initialization", "occt__upgrade.html#upgrade_690_shaders", null ],
        [ "Changes in Selection", "occt__upgrade.html#upgrade_690_selection", null ],
        [ "Changes in Adaptor3d_Curve class", "occt__upgrade.html#upgrade_690_adaptor3d-curve", null ],
        [ "Changes in V3d_View class", "occt__upgrade.html#upgrade_690_v3d_view", null ]
      ] ],
      [ "Upgrade to OCCT 7.0.0", "occt__upgrade.html#upgrade_700", [
        [ "Removal of legacy persistence", "occt__upgrade.html#upgrade_700_persist", null ],
        [ "Removal of CDL and WOK", "occt__upgrade.html#upgrade_occt700_cdl", [
          [ "Automatic upgrade", "occt__upgrade.html#upgrade_occt700_cdl_auto", null ],
          [ "Possible compiler errors", "occt__upgrade.html#upgrade_occt700_cdl_compiler", null ],
          [ "Possible runtime problems", "occt__upgrade.html#upgrade_occt700_cdl_runtime", null ],
          [ "Option to avoid cast of handle to reference to base type", "occt__upgrade.html#upgrade_occt700_cdl_nocast", null ],
          [ "Preserving compatibility with OCCT 6.x", "occt__upgrade.html#upgrade_occt700_cdl_compat", null ],
          [ "Applications based on CDL and WOK", "occt__upgrade.html#upgrade_occt700_cdl_wok", null ]
        ] ],
        [ "Separation of BSpline cache", "occt__upgrade.html#upgrade_occt700_bspline", null ],
        [ "Structural result of Boolean operations", "occt__upgrade.html#upgrade_occt700_booleanresult", null ],
        [ "BRepExtrema_ExtCC finds one solution only", "occt__upgrade.html#upgrade_occt700_brepextrema", null ],
        [ "Removal of SortTools package", "occt__upgrade.html#upgrade_occt700_sorttools", null ],
        [ "On-screen objects and ColorScale", "occt__upgrade.html#upgrade_occt700_2dlayers", null ],
        [ "UserDraw and Visual3d", "occt__upgrade.html#upgrade_occt700_userdraw", null ],
        [ "Deprecation of Local Context", "occt__upgrade.html#upgrade_occt700_localcontext", null ],
        [ "Separation of visualization part from TKCAF", "occt__upgrade.html#upgrade_occt700_separate_caf_visualisation", null ],
        [ "Correction of interpretation of Euler angles in gp_Quaternion", "occt__upgrade.html#upgrade_euler_angles", null ],
        [ "Zoom Persistent Selection", "occt__upgrade.html#upgrade_zoom_persistent_selection", null ],
        [ "Texture mapping of objects", "occt__upgrade.html#upgrade_occt700_correction_of_texture", null ],
        [ "Shape presentation builders", "occt__upgrade.html#upgrade_occt700_wfshape", null ]
      ] ],
      [ "Upgrade to OCCT 7.1.0", "occt__upgrade.html#upgrade_occt710", [
        [ "Presentation attributes", "occt__upgrade.html#upgrade_710_aspects", null ],
        [ "Typedefs", "occt__upgrade.html#upgrade_710_types", null ],
        [ "Programmable Pipeline", "occt__upgrade.html#upgrade_710_ffp", null ],
        [ "Transformation persistence", "occt__upgrade.html#upgrade_710_trsfpers", null ],
        [ "Dynamic highlight and selection properties", "occt__upgrade.html#upgrade_710_selprops", null ],
        [ "Correction in TObj_Model class", "occt__upgrade.html#upgrade_occt710_correction_of_TObj_Model", null ],
        [ "Redundant environment variables", "occt__upgrade.html#upgrade_710_env", null ],
        [ "Removed features", "occt__upgrade.html#upgrade_710_removed", null ],
        [ "Other changes", "occt__upgrade.html#upgrade_710_changed_methods", null ]
      ] ],
      [ "Upgrade to OCCT 7.2.0", "occt__upgrade.html#upgrade_occt720", [
        [ "Removed features", "occt__upgrade.html#upgrade_720_removed", null ],
        [ "Corrections in BRepOffset API", "occt__upgrade.html#upgrade_occt720_reshape_oriented_removed", null ],
        [ "Corrections in BRepOffset API", "occt__upgrade.html#upgrade_occt720_correction_of_Offset_API", null ],
        [ "Highlight style", "occt__upgrade.html#upgrade_720_highlight", null ],
        [ "Elimination of implicit 3D Viewer updates", "occt__upgrade.html#upgrade_720_implicit_viewer_update", null ],
        [ "Elimination of Quantity_NameOfColor from TKV3d interface classes", "occt__upgrade.html#upgrade_720_v3d_colorname", null ],
        [ "Result of Boolean operations on containers", "occt__upgrade.html#upgrade_720_Result_Of_BOP_On_Containers", null ],
        [ "Other changes", "occt__upgrade.html#upgrade_720_changes_methods", null ],
        [ "BOP - Pairs of interfering indices", "occt__upgrade.html#upgrade_720_BOP_DataStructure", null ],
        [ "Removal of the Draw commands based on old Boolean operations", "occt__upgrade.html#upgrade_720_Removal_Of_Old_Boolean_Operations_Draw", null ],
        [ "Change of Face/Face intersection in Boolean operations", "occt__upgrade.html#upgrade_720_Change_Of_FaceFace_Intersection", null ],
        [ "Restore OCCT 6.9.1 persistence", "occt__upgrade.html#upgrade_720_persistence", null ],
        [ "Change in BRepLib_MakeFace algorithm", "occt__upgrade.html#upgrade_720_Change_In_BRepLib_MakeFace_Algo", null ],
        [ "Change in BRepFill_OffsetWire algorithm", "occt__upgrade.html#upgrade_720_Change_In_BRepFill_OffsetWire", null ],
        [ "Change in Geom(2d)Adaptor_Curve::IsPeriodic", "occt__upgrade.html#upgrade_720_Change_In_GeomAdaptor_Curve", null ],
        [ "Change in algorithm ShapeUpgrade_UnifySameDomain", "occt__upgrade.html#upgrade_720_UnifySameDomain", null ],
        [ "Changes in STL Reader / Writer", "occt__upgrade.html#upgrade_720_Change_In_RWStl", null ],
        [ "Refactoring of the Error/Warning reporting system in Boolean Component", "occt__upgrade.html#upgrade_720_New_Error_Warning_system_in_BOA", null ]
      ] ],
      [ "Upgrade to OCCT 7.2.1", "occt__upgrade.html#upgrade_occt721", [
        [ "Changes in ShapeUpgrade_UnifySameDomain", "occt__upgrade.html#upgrade_721_Changes_In_USD", null ],
        [ "Moving BuildPCurveForEdgeOnPlane from BOPTools_AlgoTools2D to BRepLib", "occt__upgrade.html#upgrade_721_Move_BuildPCurveForEdgeOnPlane", null ],
        [ "Removed features", "occt__upgrade.html#upgrade_721_removed", null ]
      ] ],
      [ "Upgrade to OCCT 7.3.0", "occt__upgrade.html#upgrade_occt730", [
        [ "Light sources", "occt__upgrade.html#upgrade_730_lights", null ],
        [ "Shading Models", "occt__upgrade.html#upgrade_730_shadingmodels", null ],
        [ "Custom low-level OpenGL elements", "occt__upgrade.html#upgrade_730_tkopengl", null ],
        [ "Changes in BOPAlgo_Section", "occt__upgrade.html#upgrade_730_BOPAlgo_Section", null ],
        [ "Changes in BRepAdaptor_CompCurve", "occt__upgrade.html#upgrade_730_BRepAdaptor_CompCurve", null ],
        [ "Removed features", "occt__upgrade.html#upgrade_730_removed", null ],
        [ "Boolean Operations - Solid Builder algorithm", "occt__upgrade.html#upgrade_730_BuilderSolid", null ],
        [ "Boolean Operation classes in BRepAlgo are deprecated", "occt__upgrade.html#upgrade_730_BRepAlgoBO", null ],
        [ "Unification of the Error/Warning reporting system of Application Framework", "occt__upgrade.html#upgrade_730_replace_CDM_MessageDriver_interface_by_Message_Messenger", null ]
      ] ],
      [ "Upgrade to OCCT 7.4.0", "occt__upgrade.html#upgrade_occt740", [
        [ "Changes in BRepPrimAPI_MakeRevol algorithm", "occt__upgrade.html#upgrade_740_BRepPrimAPI_MakeRevol", null ],
        [ "Removed features", "occt__upgrade.html#upgrade_740_removed", null ],
        [ "Local Context removal", "occt__upgrade.html#upgrade_740_localcontext", null ],
        [ "Changes in behavior of Convert algorithms", "occt__upgrade.html#upgrade_740_geomconvert", null ],
        [ "Changes in selection API and picked point calculation algorithm.", "occt__upgrade.html#upgrade_740_selection", null ],
        [ "Document format version management improvement.", "occt__upgrade.html#upgrade_740_ocafpersistence", null ],
        [ "BRepMesh - revision of the data model", "occt__upgrade.html#upgrade_740_changed_api_of_brepmesh", null ],
        [ "Changes in API of Chamfer algorithms", "occt__upgrade.html#upgrade_740_chamfer", null ],
        [ "Aspects unification", "occt__upgrade.html#upgrade_740_aspects", null ],
        [ "Material definition", "occt__upgrade.html#upgrade_740_materials", null ],
        [ "Changes in Graphic3d_Text and OpenGl_Text API", "occt__upgrade.html#upgrade_740_text", null ],
        [ "Presentation invalidation", "occt__upgrade.html#upgrade_740_prsupdate", null ],
        [ "Interior styles", "occt__upgrade.html#upgrade_740_interiorstyles", null ],
        [ "PrsMgr and SelectMgr hierarchy clean up", "occt__upgrade.html#upgrade_740_modedprs", null ],
        [ "Polygon offset defaults", "occt__upgrade.html#upgrade_740_offset", null ],
        [ "Adding ZLayers in given position", "occt__upgrade.html#upgrade_740_zlayer", null ],
        [ "Modified enumerations", "occt__upgrade.html#upgrade_740_enum_changed", null ],
        [ "Custom defines within env.bat", "occt__upgrade.html#upgrade_740_geproj", null ],
        [ "Switching Boolean Operations algorithm to use BVH tree instead of UB tree", "occt__upgrade.html#upgrade_740_BVH_in_BOP", null ],
        [ "Standard_Stream.hxx no more has \"using std::\" statements", "occt__upgrade.html#upgrade_740_stdnamespace", null ]
      ] ],
      [ "Upgrade to OCCT 7.5.0", "occt__upgrade.html#upgrade_occt750", [
        [ "RGB color definition", "occt__upgrade.html#upgrade_750_srgb_color", null ],
        [ "Aspect_Window interface change", "occt__upgrade.html#upgrade_750_aspectwindow", null ],
        [ "Renaming of types", "occt__upgrade.html#upgrade_750_rename", null ],
        [ "change in construction of offset faces", "occt__upgrade.html#upgrade_750_BRepOffset_MakeOffset", null ],
        [ "TKV3d/TKService toolkits changes", "occt__upgrade.html#upgrade_750_tkv3d", null ],
        [ "Prs3d_Drawer deviation angle", "occt__upgrade.html#upgrade_750_hlrangle", null ],
        [ "Changes in HLR presentation API", "occt__upgrade.html#upgrade_750_hlrprs", null ],
        [ "Dimension and Relation presentations moved from AIS to PrsDim", "occt__upgrade.html#upgrade_750_dimensions", null ],
        [ "Select3D_SensitiveEntity interface change", "occt__upgrade.html#upgrade_750_sensitiveEntity", null ],
        [ "Changes in Boolean operations algorithm", "occt__upgrade.html#upgrade_750_Booleans", null ],
        [ "Offset direction change", "occt__upgrade.html#upgrade_750_Adaptor2d_OffsetCurve", null ],
        [ "Change of progress indication API", "occt__upgrade.html#upgrade_750_ProgressIndicator", null ],
        [ "Message_Messenger interface change", "occt__upgrade.html#upgrade_750_message_messenger", null ],
        [ "Message_Printer interface change", "occt__upgrade.html#upgrade_750_message_printer", null ],
        [ "Prs3d_Root deprecation", "occt__upgrade.html#upgrade_750_prd3d_root", null ],
        [ "Support of multiple OCAF application instances", "occt__upgrade.html#upgrade_750_cdf_session", null ],
        [ "Draw Harness hotkeys", "occt__upgrade.html#upgrade_750_draw_hotkeys", null ],
        [ "Utf-8 encoding for message files", "occt__upgrade.html#upgrade_750_msgfile_utf8", null ]
      ] ]
    ] ]
];