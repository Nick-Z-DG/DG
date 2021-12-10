#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "vtksys" for configuration "Release"
set_property(TARGET vtksys APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtksys PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtksys-6.1.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "ws2_32;Psapi"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtksys-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtksys )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtksys "${_IMPORT_PREFIX}/lib/vtksys-6.1.lib" "${_IMPORT_PREFIX}/bin/vtksys-6.1.dll" )

# Import target "vtkCommonCore" for configuration "Release"
set_property(TARGET vtkCommonCore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkCommonCore PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkCommonCore-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkCommonCore-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkCommonCore )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkCommonCore "${_IMPORT_PREFIX}/lib/vtkCommonCore-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkCommonCore-6.1.dll" )

# Import target "vtkCommonCoreJava" for configuration "Release"
set_property(TARGET vtkCommonCoreJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkCommonCoreJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkCommonCoreJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkCommonCoreJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkCommonCoreJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkCommonCoreJava "${_IMPORT_PREFIX}/lib/vtkCommonCoreJava.lib" "${_IMPORT_PREFIX}/bin/vtkCommonCoreJava.dll" )

# Import target "vtkCommonMath" for configuration "Release"
set_property(TARGET vtkCommonMath APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkCommonMath PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkCommonMath-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkCommonMath-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkCommonMath )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkCommonMath "${_IMPORT_PREFIX}/lib/vtkCommonMath-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkCommonMath-6.1.dll" )

# Import target "vtkCommonMathJava" for configuration "Release"
set_property(TARGET vtkCommonMathJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkCommonMathJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkCommonMathJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkCommonMathJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkCommonMathJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkCommonMathJava "${_IMPORT_PREFIX}/lib/vtkCommonMathJava.lib" "${_IMPORT_PREFIX}/bin/vtkCommonMathJava.dll" )

# Import target "vtkCommonMisc" for configuration "Release"
set_property(TARGET vtkCommonMisc APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkCommonMisc PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkCommonMisc-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkCommonMisc-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkCommonMisc )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkCommonMisc "${_IMPORT_PREFIX}/lib/vtkCommonMisc-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkCommonMisc-6.1.dll" )

# Import target "vtkCommonMiscJava" for configuration "Release"
set_property(TARGET vtkCommonMiscJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkCommonMiscJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkCommonMiscJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkCommonMiscJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkCommonMiscJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkCommonMiscJava "${_IMPORT_PREFIX}/lib/vtkCommonMiscJava.lib" "${_IMPORT_PREFIX}/bin/vtkCommonMiscJava.dll" )

# Import target "vtkCommonSystem" for configuration "Release"
set_property(TARGET vtkCommonSystem APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkCommonSystem PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkCommonSystem-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtksys"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkCommonSystem-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkCommonSystem )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkCommonSystem "${_IMPORT_PREFIX}/lib/vtkCommonSystem-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkCommonSystem-6.1.dll" )

# Import target "vtkCommonSystemJava" for configuration "Release"
set_property(TARGET vtkCommonSystemJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkCommonSystemJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkCommonSystemJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkCommonSystemJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkCommonSystemJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkCommonSystemJava "${_IMPORT_PREFIX}/lib/vtkCommonSystemJava.lib" "${_IMPORT_PREFIX}/bin/vtkCommonSystemJava.dll" )

# Import target "vtkCommonTransforms" for configuration "Release"
set_property(TARGET vtkCommonTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkCommonTransforms PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkCommonTransforms-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkCommonTransforms-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkCommonTransforms )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkCommonTransforms "${_IMPORT_PREFIX}/lib/vtkCommonTransforms-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkCommonTransforms-6.1.dll" )

# Import target "vtkCommonTransformsJava" for configuration "Release"
set_property(TARGET vtkCommonTransformsJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkCommonTransformsJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkCommonTransformsJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkCommonTransformsJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkCommonTransformsJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkCommonTransformsJava "${_IMPORT_PREFIX}/lib/vtkCommonTransformsJava.lib" "${_IMPORT_PREFIX}/bin/vtkCommonTransformsJava.dll" )

# Import target "vtkCommonDataModel" for configuration "Release"
set_property(TARGET vtkCommonDataModel APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkCommonDataModel PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkCommonDataModel-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtksys"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkCommonDataModel-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkCommonDataModel )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkCommonDataModel "${_IMPORT_PREFIX}/lib/vtkCommonDataModel-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkCommonDataModel-6.1.dll" )

# Import target "vtkCommonDataModelJava" for configuration "Release"
set_property(TARGET vtkCommonDataModelJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkCommonDataModelJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkCommonDataModelJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkCommonDataModelJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkCommonDataModelJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkCommonDataModelJava "${_IMPORT_PREFIX}/lib/vtkCommonDataModelJava.lib" "${_IMPORT_PREFIX}/bin/vtkCommonDataModelJava.dll" )

# Import target "vtkCommonColor" for configuration "Release"
set_property(TARGET vtkCommonColor APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkCommonColor PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkCommonColor-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkCommonColor-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkCommonColor )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkCommonColor "${_IMPORT_PREFIX}/lib/vtkCommonColor-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkCommonColor-6.1.dll" )

# Import target "vtkCommonColorJava" for configuration "Release"
set_property(TARGET vtkCommonColorJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkCommonColorJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkCommonColorJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkCommonColorJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkCommonColorJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkCommonColorJava "${_IMPORT_PREFIX}/lib/vtkCommonColorJava.lib" "${_IMPORT_PREFIX}/bin/vtkCommonColorJava.dll" )

# Import target "vtkCommonExecutionModel" for configuration "Release"
set_property(TARGET vtkCommonExecutionModel APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkCommonExecutionModel PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkCommonExecutionModel-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkCommonExecutionModel-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkCommonExecutionModel )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkCommonExecutionModel "${_IMPORT_PREFIX}/lib/vtkCommonExecutionModel-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkCommonExecutionModel-6.1.dll" )

# Import target "vtkCommonExecutionModelJava" for configuration "Release"
set_property(TARGET vtkCommonExecutionModelJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkCommonExecutionModelJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkCommonExecutionModelJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkCommonExecutionModelJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkCommonExecutionModelJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkCommonExecutionModelJava "${_IMPORT_PREFIX}/lib/vtkCommonExecutionModelJava.lib" "${_IMPORT_PREFIX}/bin/vtkCommonExecutionModelJava.dll" )

# Import target "vtkFiltersCore" for configuration "Release"
set_property(TARGET vtkFiltersCore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersCore PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersCore-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersCore-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersCore )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersCore "${_IMPORT_PREFIX}/lib/vtkFiltersCore-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersCore-6.1.dll" )

# Import target "vtkFiltersCoreJava" for configuration "Release"
set_property(TARGET vtkFiltersCoreJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersCoreJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersCoreJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersCoreJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersCoreJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersCoreJava "${_IMPORT_PREFIX}/lib/vtkFiltersCoreJava.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersCoreJava.dll" )

# Import target "vtkCommonComputationalGeometry" for configuration "Release"
set_property(TARGET vtkCommonComputationalGeometry APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkCommonComputationalGeometry PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkCommonComputationalGeometry-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkCommonComputationalGeometry-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkCommonComputationalGeometry )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkCommonComputationalGeometry "${_IMPORT_PREFIX}/lib/vtkCommonComputationalGeometry-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkCommonComputationalGeometry-6.1.dll" )

# Import target "vtkCommonComputationalGeometryJava" for configuration "Release"
set_property(TARGET vtkCommonComputationalGeometryJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkCommonComputationalGeometryJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkCommonComputationalGeometryJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkCommonComputationalGeometryJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkCommonComputationalGeometryJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkCommonComputationalGeometryJava "${_IMPORT_PREFIX}/lib/vtkCommonComputationalGeometryJava.lib" "${_IMPORT_PREFIX}/bin/vtkCommonComputationalGeometryJava.dll" )

# Import target "vtkFiltersGeneral" for configuration "Release"
set_property(TARGET vtkFiltersGeneral APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersGeneral PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersGeneral-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersGeneral-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersGeneral )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersGeneral "${_IMPORT_PREFIX}/lib/vtkFiltersGeneral-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersGeneral-6.1.dll" )

# Import target "vtkFiltersGeneralJava" for configuration "Release"
set_property(TARGET vtkFiltersGeneralJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersGeneralJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersGeneralJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersGeneralJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersGeneralJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersGeneralJava "${_IMPORT_PREFIX}/lib/vtkFiltersGeneralJava.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersGeneralJava.dll" )

# Import target "vtkImagingCore" for configuration "Release"
set_property(TARGET vtkImagingCore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkImagingCore PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkImagingCore-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkImagingCore-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkImagingCore )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkImagingCore "${_IMPORT_PREFIX}/lib/vtkImagingCore-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkImagingCore-6.1.dll" )

# Import target "vtkImagingCoreJava" for configuration "Release"
set_property(TARGET vtkImagingCoreJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkImagingCoreJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkImagingCoreJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkImagingCoreJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkImagingCoreJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkImagingCoreJava "${_IMPORT_PREFIX}/lib/vtkImagingCoreJava.lib" "${_IMPORT_PREFIX}/bin/vtkImagingCoreJava.dll" )

# Import target "vtkImagingFourier" for configuration "Release"
set_property(TARGET vtkImagingFourier APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkImagingFourier PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkImagingFourier-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtksys"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkImagingFourier-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkImagingFourier )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkImagingFourier "${_IMPORT_PREFIX}/lib/vtkImagingFourier-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkImagingFourier-6.1.dll" )

# Import target "vtkImagingFourierJava" for configuration "Release"
set_property(TARGET vtkImagingFourierJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkImagingFourierJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkImagingFourierJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkImagingFourierJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkImagingFourierJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkImagingFourierJava "${_IMPORT_PREFIX}/lib/vtkImagingFourierJava.lib" "${_IMPORT_PREFIX}/bin/vtkImagingFourierJava.dll" )

# Import target "vtkalglib" for configuration "Release"
set_property(TARGET vtkalglib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkalglib PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkalglib-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkalglib-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkalglib )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkalglib "${_IMPORT_PREFIX}/lib/vtkalglib-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkalglib-6.1.dll" )

# Import target "vtkFiltersStatistics" for configuration "Release"
set_property(TARGET vtkFiltersStatistics APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersStatistics PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersStatistics-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersStatistics-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersStatistics )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersStatistics "${_IMPORT_PREFIX}/lib/vtkFiltersStatistics-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersStatistics-6.1.dll" )

# Import target "vtkFiltersStatisticsJava" for configuration "Release"
set_property(TARGET vtkFiltersStatisticsJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersStatisticsJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersStatisticsJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersStatisticsJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersStatisticsJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersStatisticsJava "${_IMPORT_PREFIX}/lib/vtkFiltersStatisticsJava.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersStatisticsJava.dll" )

# Import target "vtkFiltersExtraction" for configuration "Release"
set_property(TARGET vtkFiltersExtraction APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersExtraction PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersExtraction-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersExtraction-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersExtraction )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersExtraction "${_IMPORT_PREFIX}/lib/vtkFiltersExtraction-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersExtraction-6.1.dll" )

# Import target "vtkFiltersExtractionJava" for configuration "Release"
set_property(TARGET vtkFiltersExtractionJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersExtractionJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersExtractionJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersExtractionJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersExtractionJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersExtractionJava "${_IMPORT_PREFIX}/lib/vtkFiltersExtractionJava.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersExtractionJava.dll" )

# Import target "vtkInfovisCore" for configuration "Release"
set_property(TARGET vtkInfovisCore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkInfovisCore PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkInfovisCore-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkInfovisCore-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkInfovisCore )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkInfovisCore "${_IMPORT_PREFIX}/lib/vtkInfovisCore-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkInfovisCore-6.1.dll" )

# Import target "vtkInfovisCoreJava" for configuration "Release"
set_property(TARGET vtkInfovisCoreJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkInfovisCoreJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkInfovisCoreJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkInfovisCoreJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkInfovisCoreJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkInfovisCoreJava "${_IMPORT_PREFIX}/lib/vtkInfovisCoreJava.lib" "${_IMPORT_PREFIX}/bin/vtkInfovisCoreJava.dll" )

# Import target "vtkFiltersGeometry" for configuration "Release"
set_property(TARGET vtkFiltersGeometry APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersGeometry PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersGeometry-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersGeometry-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersGeometry )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersGeometry "${_IMPORT_PREFIX}/lib/vtkFiltersGeometry-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersGeometry-6.1.dll" )

# Import target "vtkFiltersGeometryJava" for configuration "Release"
set_property(TARGET vtkFiltersGeometryJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersGeometryJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersGeometryJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersGeometryJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersGeometryJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersGeometryJava "${_IMPORT_PREFIX}/lib/vtkFiltersGeometryJava.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersGeometryJava.dll" )

# Import target "vtkFiltersSources" for configuration "Release"
set_property(TARGET vtkFiltersSources APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersSources PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersSources-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersSources-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersSources )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersSources "${_IMPORT_PREFIX}/lib/vtkFiltersSources-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersSources-6.1.dll" )

# Import target "vtkFiltersSourcesJava" for configuration "Release"
set_property(TARGET vtkFiltersSourcesJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersSourcesJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersSourcesJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersSourcesJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersSourcesJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersSourcesJava "${_IMPORT_PREFIX}/lib/vtkFiltersSourcesJava.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersSourcesJava.dll" )

# Import target "vtkRenderingCore" for configuration "Release"
set_property(TARGET vtkRenderingCore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingCore PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingCore-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtkFiltersSources;vtkFiltersGeometry;vtkFiltersExtraction;vtksys"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingCore-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingCore )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingCore "${_IMPORT_PREFIX}/lib/vtkRenderingCore-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingCore-6.1.dll" )

# Import target "vtkRenderingCoreJava" for configuration "Release"
set_property(TARGET vtkRenderingCoreJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingCoreJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingCoreJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingCoreJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingCoreJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingCoreJava "${_IMPORT_PREFIX}/lib/vtkRenderingCoreJava.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingCoreJava.dll" )

# Import target "vtkzlib" for configuration "Release"
set_property(TARGET vtkzlib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkzlib PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkzlib-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkzlib-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkzlib )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkzlib "${_IMPORT_PREFIX}/lib/vtkzlib-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkzlib-6.1.dll" )

# Import target "vtkfreetype" for configuration "Release"
set_property(TARGET vtkfreetype APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkfreetype PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkfreetype-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkfreetype-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkfreetype )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkfreetype "${_IMPORT_PREFIX}/lib/vtkfreetype-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkfreetype-6.1.dll" )

# Import target "vtkftgl" for configuration "Release"
set_property(TARGET vtkftgl APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkftgl PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkftgl-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkftgl-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkftgl )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkftgl "${_IMPORT_PREFIX}/lib/vtkftgl-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkftgl-6.1.dll" )

# Import target "vtkRenderingFreeType" for configuration "Release"
set_property(TARGET vtkRenderingFreeType APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingFreeType PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingFreeType-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingFreeType-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingFreeType )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingFreeType "${_IMPORT_PREFIX}/lib/vtkRenderingFreeType-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingFreeType-6.1.dll" )

# Import target "vtkRenderingFreeTypeJava" for configuration "Release"
set_property(TARGET vtkRenderingFreeTypeJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingFreeTypeJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingFreeTypeJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingFreeTypeJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingFreeTypeJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingFreeTypeJava "${_IMPORT_PREFIX}/lib/vtkRenderingFreeTypeJava.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingFreeTypeJava.dll" )

# Import target "vtkDICOMParser" for configuration "Release"
set_property(TARGET vtkDICOMParser APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkDICOMParser PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkDICOMParser-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkDICOMParser-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkDICOMParser )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkDICOMParser "${_IMPORT_PREFIX}/lib/vtkDICOMParser-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkDICOMParser-6.1.dll" )

# Import target "vtkIOCore" for configuration "Release"
set_property(TARGET vtkIOCore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOCore PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOCore-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtkzlib;vtksys"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOCore-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOCore )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOCore "${_IMPORT_PREFIX}/lib/vtkIOCore-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkIOCore-6.1.dll" )

# Import target "vtkIOCoreJava" for configuration "Release"
set_property(TARGET vtkIOCoreJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOCoreJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOCoreJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOCoreJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOCoreJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOCoreJava "${_IMPORT_PREFIX}/lib/vtkIOCoreJava.lib" "${_IMPORT_PREFIX}/bin/vtkIOCoreJava.dll" )

# Import target "vtkmetaio" for configuration "Release"
set_property(TARGET vtkmetaio APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkmetaio PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkmetaio-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkmetaio-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkmetaio )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkmetaio "${_IMPORT_PREFIX}/lib/vtkmetaio-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkmetaio-6.1.dll" )

# Import target "vtkjpeg" for configuration "Release"
set_property(TARGET vtkjpeg APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkjpeg PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkjpeg-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkjpeg-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkjpeg )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkjpeg "${_IMPORT_PREFIX}/lib/vtkjpeg-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkjpeg-6.1.dll" )

# Import target "vtkpng" for configuration "Release"
set_property(TARGET vtkpng APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkpng PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkpng-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkpng-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkpng )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkpng "${_IMPORT_PREFIX}/lib/vtkpng-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkpng-6.1.dll" )

# Import target "vtktiff" for configuration "Release"
set_property(TARGET vtktiff APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtktiff PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtktiff-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtktiff-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtktiff )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtktiff "${_IMPORT_PREFIX}/lib/vtktiff-6.1.lib" "${_IMPORT_PREFIX}/bin/vtktiff-6.1.dll" )

# Import target "vtkIOImage" for configuration "Release"
set_property(TARGET vtkIOImage APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOImage PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOImage-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtkjpeg;vtkpng;vtktiff;vtkmetaio;vtkDICOMParser;vtksys"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOImage-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOImage )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOImage "${_IMPORT_PREFIX}/lib/vtkIOImage-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkIOImage-6.1.dll" )

# Import target "vtkIOImageJava" for configuration "Release"
set_property(TARGET vtkIOImageJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOImageJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOImageJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOImageJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOImageJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOImageJava "${_IMPORT_PREFIX}/lib/vtkIOImageJava.lib" "${_IMPORT_PREFIX}/bin/vtkIOImageJava.dll" )

# Import target "vtkImagingHybrid" for configuration "Release"
set_property(TARGET vtkImagingHybrid APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkImagingHybrid PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkImagingHybrid-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkImagingHybrid-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkImagingHybrid )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkImagingHybrid "${_IMPORT_PREFIX}/lib/vtkImagingHybrid-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkImagingHybrid-6.1.dll" )

# Import target "vtkImagingHybridJava" for configuration "Release"
set_property(TARGET vtkImagingHybridJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkImagingHybridJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkImagingHybridJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkImagingHybridJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkImagingHybridJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkImagingHybridJava "${_IMPORT_PREFIX}/lib/vtkImagingHybridJava.lib" "${_IMPORT_PREFIX}/bin/vtkImagingHybridJava.dll" )

# Import target "vtkParseOGLExt" for configuration "Release"
set_property(TARGET vtkParseOGLExt APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkParseOGLExt PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkParseOGLExt-6.1.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkParseOGLExt )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkParseOGLExt "${_IMPORT_PREFIX}/bin/vtkParseOGLExt-6.1.exe" )

# Import target "vtkEncodeString" for configuration "Release"
set_property(TARGET vtkEncodeString APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkEncodeString PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkEncodeString-6.1.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkEncodeString )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkEncodeString "${_IMPORT_PREFIX}/bin/vtkEncodeString-6.1.exe" )

# Import target "vtkRenderingOpenGL" for configuration "Release"
set_property(TARGET vtkRenderingOpenGL APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingOpenGL PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingOpenGL-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtkImagingHybrid;vtksys"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingOpenGL-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingOpenGL )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingOpenGL "${_IMPORT_PREFIX}/lib/vtkRenderingOpenGL-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingOpenGL-6.1.dll" )

# Import target "vtkRenderingOpenGLJava" for configuration "Release"
set_property(TARGET vtkRenderingOpenGLJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingOpenGLJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingOpenGLJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingOpenGLJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingOpenGLJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingOpenGLJava "${_IMPORT_PREFIX}/lib/vtkRenderingOpenGLJava.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingOpenGLJava.dll" )

# Import target "vtkRenderingContext2D" for configuration "Release"
set_property(TARGET vtkRenderingContext2D APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingContext2D PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingContext2D-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtkCommonDataModel;vtkCommonMath;vtkCommonTransforms;vtkRenderingOpenGL;vtkRenderingFreeType"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingContext2D-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingContext2D )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingContext2D "${_IMPORT_PREFIX}/lib/vtkRenderingContext2D-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingContext2D-6.1.dll" )

# Import target "vtkRenderingContext2DJava" for configuration "Release"
set_property(TARGET vtkRenderingContext2DJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingContext2DJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingContext2DJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingContext2DJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingContext2DJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingContext2DJava "${_IMPORT_PREFIX}/lib/vtkRenderingContext2DJava.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingContext2DJava.dll" )

# Import target "vtkChartsCore" for configuration "Release"
set_property(TARGET vtkChartsCore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkChartsCore PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkChartsCore-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtkCommonColor;vtkInfovisCore"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkChartsCore-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkChartsCore )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkChartsCore "${_IMPORT_PREFIX}/lib/vtkChartsCore-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkChartsCore-6.1.dll" )

# Import target "vtkChartsCoreJava" for configuration "Release"
set_property(TARGET vtkChartsCoreJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkChartsCoreJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkChartsCoreJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkChartsCoreJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkChartsCoreJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkChartsCoreJava "${_IMPORT_PREFIX}/lib/vtkChartsCoreJava.lib" "${_IMPORT_PREFIX}/bin/vtkChartsCoreJava.dll" )

# Import target "vtkjsoncpp" for configuration "Release"
set_property(TARGET vtkjsoncpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkjsoncpp PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkjsoncpp-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkjsoncpp-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkjsoncpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkjsoncpp "${_IMPORT_PREFIX}/lib/vtkjsoncpp-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkjsoncpp-6.1.dll" )

# Import target "vtkIOGeometry" for configuration "Release"
set_property(TARGET vtkIOGeometry APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOGeometry PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOGeometry-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtkzlib;vtkjsoncpp;vtksys"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOGeometry-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOGeometry )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOGeometry "${_IMPORT_PREFIX}/lib/vtkIOGeometry-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkIOGeometry-6.1.dll" )

# Import target "vtkIOGeometryJava" for configuration "Release"
set_property(TARGET vtkIOGeometryJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOGeometryJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOGeometryJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOGeometryJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOGeometryJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOGeometryJava "${_IMPORT_PREFIX}/lib/vtkIOGeometryJava.lib" "${_IMPORT_PREFIX}/bin/vtkIOGeometryJava.dll" )

# Import target "vtkexpat" for configuration "Release"
set_property(TARGET vtkexpat APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkexpat PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkexpat-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkexpat-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkexpat )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkexpat "${_IMPORT_PREFIX}/lib/vtkexpat-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkexpat-6.1.dll" )

# Import target "vtkIOXMLParser" for configuration "Release"
set_property(TARGET vtkIOXMLParser APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOXMLParser PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOXMLParser-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtkexpat"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOXMLParser-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOXMLParser )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOXMLParser "${_IMPORT_PREFIX}/lib/vtkIOXMLParser-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkIOXMLParser-6.1.dll" )

# Import target "vtkIOXMLParserJava" for configuration "Release"
set_property(TARGET vtkIOXMLParserJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOXMLParserJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOXMLParserJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOXMLParserJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOXMLParserJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOXMLParserJava "${_IMPORT_PREFIX}/lib/vtkIOXMLParserJava.lib" "${_IMPORT_PREFIX}/bin/vtkIOXMLParserJava.dll" )

# Import target "vtkIOXML" for configuration "Release"
set_property(TARGET vtkIOXML APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOXML PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOXML-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtksys"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOXML-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOXML )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOXML "${_IMPORT_PREFIX}/lib/vtkIOXML-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkIOXML-6.1.dll" )

# Import target "vtkIOXMLJava" for configuration "Release"
set_property(TARGET vtkIOXMLJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOXMLJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOXMLJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOXMLJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOXMLJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOXMLJava "${_IMPORT_PREFIX}/lib/vtkIOXMLJava.lib" "${_IMPORT_PREFIX}/bin/vtkIOXMLJava.dll" )

# Import target "vtkDomainsChemistry" for configuration "Release"
set_property(TARGET vtkDomainsChemistry APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkDomainsChemistry PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkDomainsChemistry-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtkIOXML;vtkFiltersSources"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkDomainsChemistry-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkDomainsChemistry )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkDomainsChemistry "${_IMPORT_PREFIX}/lib/vtkDomainsChemistry-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkDomainsChemistry-6.1.dll" )

# Import target "vtkDomainsChemistryJava" for configuration "Release"
set_property(TARGET vtkDomainsChemistryJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkDomainsChemistryJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkDomainsChemistryJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkDomainsChemistryJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkDomainsChemistryJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkDomainsChemistryJava "${_IMPORT_PREFIX}/lib/vtkDomainsChemistryJava.lib" "${_IMPORT_PREFIX}/bin/vtkDomainsChemistryJava.dll" )

# Import target "vtkIOLegacy" for configuration "Release"
set_property(TARGET vtkIOLegacy APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOLegacy PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOLegacy-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtksys"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOLegacy-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOLegacy )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOLegacy "${_IMPORT_PREFIX}/lib/vtkIOLegacy-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkIOLegacy-6.1.dll" )

# Import target "vtkIOLegacyJava" for configuration "Release"
set_property(TARGET vtkIOLegacyJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOLegacyJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOLegacyJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOLegacyJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOLegacyJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOLegacyJava "${_IMPORT_PREFIX}/lib/vtkIOLegacyJava.lib" "${_IMPORT_PREFIX}/bin/vtkIOLegacyJava.dll" )

# Import target "vtkHashSource" for configuration "Release"
set_property(TARGET vtkHashSource APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkHashSource PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkHashSource-6.1.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkHashSource )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkHashSource "${_IMPORT_PREFIX}/bin/vtkHashSource-6.1.exe" )

# Import target "vtkParallelCore" for configuration "Release"
set_property(TARGET vtkParallelCore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkParallelCore PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkParallelCore-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtksys"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkParallelCore-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkParallelCore )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkParallelCore "${_IMPORT_PREFIX}/lib/vtkParallelCore-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkParallelCore-6.1.dll" )

# Import target "vtkParallelCoreJava" for configuration "Release"
set_property(TARGET vtkParallelCoreJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkParallelCoreJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkParallelCoreJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkParallelCoreJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkParallelCoreJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkParallelCoreJava "${_IMPORT_PREFIX}/lib/vtkParallelCoreJava.lib" "${_IMPORT_PREFIX}/bin/vtkParallelCoreJava.dll" )

# Import target "vtkFiltersAMR" for configuration "Release"
set_property(TARGET vtkFiltersAMR APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersAMR PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersAMR-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersAMR-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersAMR )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersAMR "${_IMPORT_PREFIX}/lib/vtkFiltersAMR-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersAMR-6.1.dll" )

# Import target "vtkFiltersAMRJava" for configuration "Release"
set_property(TARGET vtkFiltersAMRJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersAMRJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersAMRJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersAMRJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersAMRJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersAMRJava "${_IMPORT_PREFIX}/lib/vtkFiltersAMRJava.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersAMRJava.dll" )

# Import target "vtkFiltersFlowPaths" for configuration "Release"
set_property(TARGET vtkFiltersFlowPaths APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersFlowPaths PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersFlowPaths-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersFlowPaths-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersFlowPaths )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersFlowPaths "${_IMPORT_PREFIX}/lib/vtkFiltersFlowPaths-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersFlowPaths-6.1.dll" )

# Import target "vtkFiltersFlowPathsJava" for configuration "Release"
set_property(TARGET vtkFiltersFlowPathsJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersFlowPathsJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersFlowPathsJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersFlowPathsJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersFlowPathsJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersFlowPathsJava "${_IMPORT_PREFIX}/lib/vtkFiltersFlowPathsJava.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersFlowPathsJava.dll" )

# Import target "vtkFiltersGeneric" for configuration "Release"
set_property(TARGET vtkFiltersGeneric APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersGeneric PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersGeneric-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersGeneric-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersGeneric )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersGeneric "${_IMPORT_PREFIX}/lib/vtkFiltersGeneric-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersGeneric-6.1.dll" )

# Import target "vtkFiltersGenericJava" for configuration "Release"
set_property(TARGET vtkFiltersGenericJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersGenericJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersGenericJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersGenericJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersGenericJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersGenericJava "${_IMPORT_PREFIX}/lib/vtkFiltersGenericJava.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersGenericJava.dll" )

# Import target "vtkImagingSources" for configuration "Release"
set_property(TARGET vtkImagingSources APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkImagingSources PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkImagingSources-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkImagingSources-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkImagingSources )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkImagingSources "${_IMPORT_PREFIX}/lib/vtkImagingSources-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkImagingSources-6.1.dll" )

# Import target "vtkImagingSourcesJava" for configuration "Release"
set_property(TARGET vtkImagingSourcesJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkImagingSourcesJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkImagingSourcesJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkImagingSourcesJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkImagingSourcesJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkImagingSourcesJava "${_IMPORT_PREFIX}/lib/vtkImagingSourcesJava.lib" "${_IMPORT_PREFIX}/bin/vtkImagingSourcesJava.dll" )

# Import target "vtkFiltersHybrid" for configuration "Release"
set_property(TARGET vtkFiltersHybrid APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersHybrid PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersHybrid-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersHybrid-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersHybrid )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersHybrid "${_IMPORT_PREFIX}/lib/vtkFiltersHybrid-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersHybrid-6.1.dll" )

# Import target "vtkFiltersHybridJava" for configuration "Release"
set_property(TARGET vtkFiltersHybridJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersHybridJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersHybridJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersHybridJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersHybridJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersHybridJava "${_IMPORT_PREFIX}/lib/vtkFiltersHybridJava.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersHybridJava.dll" )

# Import target "vtkFiltersHyperTree" for configuration "Release"
set_property(TARGET vtkFiltersHyperTree APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersHyperTree PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersHyperTree-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersHyperTree-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersHyperTree )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersHyperTree "${_IMPORT_PREFIX}/lib/vtkFiltersHyperTree-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersHyperTree-6.1.dll" )

# Import target "vtkFiltersHyperTreeJava" for configuration "Release"
set_property(TARGET vtkFiltersHyperTreeJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersHyperTreeJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersHyperTreeJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersHyperTreeJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersHyperTreeJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersHyperTreeJava "${_IMPORT_PREFIX}/lib/vtkFiltersHyperTreeJava.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersHyperTreeJava.dll" )

# Import target "vtkImagingGeneral" for configuration "Release"
set_property(TARGET vtkImagingGeneral APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkImagingGeneral PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkImagingGeneral-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkImagingGeneral-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkImagingGeneral )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkImagingGeneral "${_IMPORT_PREFIX}/lib/vtkImagingGeneral-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkImagingGeneral-6.1.dll" )

# Import target "vtkImagingGeneralJava" for configuration "Release"
set_property(TARGET vtkImagingGeneralJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkImagingGeneralJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkImagingGeneralJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkImagingGeneralJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkImagingGeneralJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkImagingGeneralJava "${_IMPORT_PREFIX}/lib/vtkImagingGeneralJava.lib" "${_IMPORT_PREFIX}/bin/vtkImagingGeneralJava.dll" )

# Import target "vtkFiltersImaging" for configuration "Release"
set_property(TARGET vtkFiltersImaging APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersImaging PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersImaging-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersImaging-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersImaging )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersImaging "${_IMPORT_PREFIX}/lib/vtkFiltersImaging-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersImaging-6.1.dll" )

# Import target "vtkFiltersImagingJava" for configuration "Release"
set_property(TARGET vtkFiltersImagingJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersImagingJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersImagingJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersImagingJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersImagingJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersImagingJava "${_IMPORT_PREFIX}/lib/vtkFiltersImagingJava.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersImagingJava.dll" )

# Import target "vtkFiltersModeling" for configuration "Release"
set_property(TARGET vtkFiltersModeling APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersModeling PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersModeling-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersModeling-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersModeling )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersModeling "${_IMPORT_PREFIX}/lib/vtkFiltersModeling-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersModeling-6.1.dll" )

# Import target "vtkFiltersModelingJava" for configuration "Release"
set_property(TARGET vtkFiltersModelingJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersModelingJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersModelingJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersModelingJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersModelingJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersModelingJava "${_IMPORT_PREFIX}/lib/vtkFiltersModelingJava.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersModelingJava.dll" )

# Import target "vtkFiltersParallel" for configuration "Release"
set_property(TARGET vtkFiltersParallel APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersParallel PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersParallel-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersParallel-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersParallel )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersParallel "${_IMPORT_PREFIX}/lib/vtkFiltersParallel-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersParallel-6.1.dll" )

# Import target "vtkFiltersParallelJava" for configuration "Release"
set_property(TARGET vtkFiltersParallelJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersParallelJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersParallelJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersParallelJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersParallelJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersParallelJava "${_IMPORT_PREFIX}/lib/vtkFiltersParallelJava.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersParallelJava.dll" )

# Import target "vtkFiltersParallelImaging" for configuration "Release"
set_property(TARGET vtkFiltersParallelImaging APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersParallelImaging PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersParallelImaging-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersParallelImaging-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersParallelImaging )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersParallelImaging "${_IMPORT_PREFIX}/lib/vtkFiltersParallelImaging-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersParallelImaging-6.1.dll" )

# Import target "vtkFiltersParallelImagingJava" for configuration "Release"
set_property(TARGET vtkFiltersParallelImagingJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersParallelImagingJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersParallelImagingJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersParallelImagingJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersParallelImagingJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersParallelImagingJava "${_IMPORT_PREFIX}/lib/vtkFiltersParallelImagingJava.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersParallelImagingJava.dll" )

# Import target "vtkFiltersProgrammable" for configuration "Release"
set_property(TARGET vtkFiltersProgrammable APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersProgrammable PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersProgrammable-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersProgrammable-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersProgrammable )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersProgrammable "${_IMPORT_PREFIX}/lib/vtkFiltersProgrammable-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersProgrammable-6.1.dll" )

# Import target "vtkFiltersProgrammableJava" for configuration "Release"
set_property(TARGET vtkFiltersProgrammableJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersProgrammableJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersProgrammableJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersProgrammableJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersProgrammableJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersProgrammableJava "${_IMPORT_PREFIX}/lib/vtkFiltersProgrammableJava.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersProgrammableJava.dll" )

# Import target "vtkFiltersSMP" for configuration "Release"
set_property(TARGET vtkFiltersSMP APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersSMP PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersSMP-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersSMP-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersSMP )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersSMP "${_IMPORT_PREFIX}/lib/vtkFiltersSMP-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersSMP-6.1.dll" )

# Import target "vtkFiltersSMPJava" for configuration "Release"
set_property(TARGET vtkFiltersSMPJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersSMPJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersSMPJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersSMPJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersSMPJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersSMPJava "${_IMPORT_PREFIX}/lib/vtkFiltersSMPJava.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersSMPJava.dll" )

# Import target "vtkFiltersSelection" for configuration "Release"
set_property(TARGET vtkFiltersSelection APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersSelection PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersSelection-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersSelection-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersSelection )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersSelection "${_IMPORT_PREFIX}/lib/vtkFiltersSelection-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersSelection-6.1.dll" )

# Import target "vtkFiltersSelectionJava" for configuration "Release"
set_property(TARGET vtkFiltersSelectionJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersSelectionJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersSelectionJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersSelectionJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersSelectionJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersSelectionJava "${_IMPORT_PREFIX}/lib/vtkFiltersSelectionJava.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersSelectionJava.dll" )

# Import target "vtkFiltersTexture" for configuration "Release"
set_property(TARGET vtkFiltersTexture APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersTexture PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersTexture-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersTexture-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersTexture )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersTexture "${_IMPORT_PREFIX}/lib/vtkFiltersTexture-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersTexture-6.1.dll" )

# Import target "vtkFiltersTextureJava" for configuration "Release"
set_property(TARGET vtkFiltersTextureJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersTextureJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersTextureJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersTextureJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersTextureJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersTextureJava "${_IMPORT_PREFIX}/lib/vtkFiltersTextureJava.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersTextureJava.dll" )

# Import target "verdict" for configuration "Release"
set_property(TARGET verdict APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(verdict PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkverdict-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkverdict-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS verdict )
list(APPEND _IMPORT_CHECK_FILES_FOR_verdict "${_IMPORT_PREFIX}/lib/vtkverdict-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkverdict-6.1.dll" )

# Import target "vtkFiltersVerdict" for configuration "Release"
set_property(TARGET vtkFiltersVerdict APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersVerdict PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersVerdict-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersVerdict-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersVerdict )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersVerdict "${_IMPORT_PREFIX}/lib/vtkFiltersVerdict-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersVerdict-6.1.dll" )

# Import target "vtkFiltersVerdictJava" for configuration "Release"
set_property(TARGET vtkFiltersVerdictJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkFiltersVerdictJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkFiltersVerdictJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkFiltersVerdictJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkFiltersVerdictJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltersVerdictJava "${_IMPORT_PREFIX}/lib/vtkFiltersVerdictJava.lib" "${_IMPORT_PREFIX}/bin/vtkFiltersVerdictJava.dll" )

# Import target "vtkInfovisLayout" for configuration "Release"
set_property(TARGET vtkInfovisLayout APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkInfovisLayout PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkInfovisLayout-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkInfovisLayout-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkInfovisLayout )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkInfovisLayout "${_IMPORT_PREFIX}/lib/vtkInfovisLayout-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkInfovisLayout-6.1.dll" )

# Import target "vtkInfovisLayoutJava" for configuration "Release"
set_property(TARGET vtkInfovisLayoutJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkInfovisLayoutJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkInfovisLayoutJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkInfovisLayoutJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkInfovisLayoutJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkInfovisLayoutJava "${_IMPORT_PREFIX}/lib/vtkInfovisLayoutJava.lib" "${_IMPORT_PREFIX}/bin/vtkInfovisLayoutJava.dll" )

# Import target "vtkInteractionStyle" for configuration "Release"
set_property(TARGET vtkInteractionStyle APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkInteractionStyle PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkInteractionStyle-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtkFiltersSources;vtkFiltersExtraction"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkInteractionStyle-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkInteractionStyle )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkInteractionStyle "${_IMPORT_PREFIX}/lib/vtkInteractionStyle-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkInteractionStyle-6.1.dll" )

# Import target "vtkInteractionStyleJava" for configuration "Release"
set_property(TARGET vtkInteractionStyleJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkInteractionStyleJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkInteractionStyleJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkInteractionStyleJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkInteractionStyleJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkInteractionStyleJava "${_IMPORT_PREFIX}/lib/vtkInteractionStyleJava.lib" "${_IMPORT_PREFIX}/bin/vtkInteractionStyleJava.dll" )

# Import target "vtkImagingColor" for configuration "Release"
set_property(TARGET vtkImagingColor APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkImagingColor PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkImagingColor-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkImagingColor-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkImagingColor )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkImagingColor "${_IMPORT_PREFIX}/lib/vtkImagingColor-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkImagingColor-6.1.dll" )

# Import target "vtkImagingColorJava" for configuration "Release"
set_property(TARGET vtkImagingColorJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkImagingColorJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkImagingColorJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkImagingColorJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkImagingColorJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkImagingColorJava "${_IMPORT_PREFIX}/lib/vtkImagingColorJava.lib" "${_IMPORT_PREFIX}/bin/vtkImagingColorJava.dll" )

# Import target "vtkRenderingAnnotation" for configuration "Release"
set_property(TARGET vtkRenderingAnnotation APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingAnnotation PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingAnnotation-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtkFiltersSources"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingAnnotation-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingAnnotation )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingAnnotation "${_IMPORT_PREFIX}/lib/vtkRenderingAnnotation-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingAnnotation-6.1.dll" )

# Import target "vtkRenderingAnnotationJava" for configuration "Release"
set_property(TARGET vtkRenderingAnnotationJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingAnnotationJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingAnnotationJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingAnnotationJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingAnnotationJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingAnnotationJava "${_IMPORT_PREFIX}/lib/vtkRenderingAnnotationJava.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingAnnotationJava.dll" )

# Import target "vtkRenderingVolume" for configuration "Release"
set_property(TARGET vtkRenderingVolume APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingVolume PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingVolume-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingVolume-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingVolume )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingVolume "${_IMPORT_PREFIX}/lib/vtkRenderingVolume-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingVolume-6.1.dll" )

# Import target "vtkRenderingVolumeJava" for configuration "Release"
set_property(TARGET vtkRenderingVolumeJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingVolumeJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingVolumeJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingVolumeJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingVolumeJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingVolumeJava "${_IMPORT_PREFIX}/lib/vtkRenderingVolumeJava.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingVolumeJava.dll" )

# Import target "vtkInteractionWidgets" for configuration "Release"
set_property(TARGET vtkInteractionWidgets APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkInteractionWidgets PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkInteractionWidgets-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkInteractionWidgets-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkInteractionWidgets )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkInteractionWidgets "${_IMPORT_PREFIX}/lib/vtkInteractionWidgets-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkInteractionWidgets-6.1.dll" )

# Import target "vtkInteractionWidgetsJava" for configuration "Release"
set_property(TARGET vtkInteractionWidgetsJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkInteractionWidgetsJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkInteractionWidgetsJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkInteractionWidgetsJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkInteractionWidgetsJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkInteractionWidgetsJava "${_IMPORT_PREFIX}/lib/vtkInteractionWidgetsJava.lib" "${_IMPORT_PREFIX}/bin/vtkInteractionWidgetsJava.dll" )

# Import target "vtkViewsCore" for configuration "Release"
set_property(TARGET vtkViewsCore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkViewsCore PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkViewsCore-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkViewsCore-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkViewsCore )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkViewsCore "${_IMPORT_PREFIX}/lib/vtkViewsCore-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkViewsCore-6.1.dll" )

# Import target "vtkViewsCoreJava" for configuration "Release"
set_property(TARGET vtkViewsCoreJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkViewsCoreJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkViewsCoreJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkViewsCoreJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkViewsCoreJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkViewsCoreJava "${_IMPORT_PREFIX}/lib/vtkViewsCoreJava.lib" "${_IMPORT_PREFIX}/bin/vtkViewsCoreJava.dll" )

# Import target "vtkproj4" for configuration "Release"
set_property(TARGET vtkproj4 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkproj4 PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkproj4-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkproj4-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkproj4 )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkproj4 "${_IMPORT_PREFIX}/lib/vtkproj4-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkproj4-6.1.dll" )

# Import target "vtkGeovisCore" for configuration "Release"
set_property(TARGET vtkGeovisCore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkGeovisCore PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkGeovisCore-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkGeovisCore-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkGeovisCore )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkGeovisCore "${_IMPORT_PREFIX}/lib/vtkGeovisCore-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkGeovisCore-6.1.dll" )

# Import target "vtkGeovisCoreJava" for configuration "Release"
set_property(TARGET vtkGeovisCoreJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkGeovisCoreJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkGeovisCoreJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkGeovisCoreJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkGeovisCoreJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkGeovisCoreJava "${_IMPORT_PREFIX}/lib/vtkGeovisCoreJava.lib" "${_IMPORT_PREFIX}/bin/vtkGeovisCoreJava.dll" )

# Import target "vtkhdf5" for configuration "Release"
set_property(TARGET vtkhdf5 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkhdf5 PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkhdf5-6.1.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "vtkzlib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkhdf5-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkhdf5 )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkhdf5 "${_IMPORT_PREFIX}/lib/vtkhdf5-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkhdf5-6.1.dll" )

# Import target "vtkhdf5_hl" for configuration "Release"
set_property(TARGET vtkhdf5_hl APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkhdf5_hl PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkhdf5_hl-6.1.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "vtkhdf5"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkhdf5_hl-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkhdf5_hl )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkhdf5_hl "${_IMPORT_PREFIX}/lib/vtkhdf5_hl-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkhdf5_hl-6.1.dll" )

# Import target "vtkIOAMR" for configuration "Release"
set_property(TARGET vtkIOAMR APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOAMR PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOAMR-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtkhdf5_hl;vtkhdf5;vtksys"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOAMR-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOAMR )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOAMR "${_IMPORT_PREFIX}/lib/vtkIOAMR-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkIOAMR-6.1.dll" )

# Import target "vtkIOAMRJava" for configuration "Release"
set_property(TARGET vtkIOAMRJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOAMRJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOAMRJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOAMRJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOAMRJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOAMRJava "${_IMPORT_PREFIX}/lib/vtkIOAMRJava.lib" "${_IMPORT_PREFIX}/bin/vtkIOAMRJava.dll" )

# Import target "vtkIOEnSight" for configuration "Release"
set_property(TARGET vtkIOEnSight APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOEnSight PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOEnSight-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOEnSight-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOEnSight )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOEnSight "${_IMPORT_PREFIX}/lib/vtkIOEnSight-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkIOEnSight-6.1.dll" )

# Import target "vtkIOEnSightJava" for configuration "Release"
set_property(TARGET vtkIOEnSightJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOEnSightJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOEnSightJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOEnSightJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOEnSightJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOEnSightJava "${_IMPORT_PREFIX}/lib/vtkIOEnSightJava.lib" "${_IMPORT_PREFIX}/bin/vtkIOEnSightJava.dll" )

# Import target "vtkNetCDF" for configuration "Release"
set_property(TARGET vtkNetCDF APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkNetCDF PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkNetCDF-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkNetCDF-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkNetCDF )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkNetCDF "${_IMPORT_PREFIX}/lib/vtkNetCDF-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkNetCDF-6.1.dll" )

# Import target "vtkNetCDF_cxx" for configuration "Release"
set_property(TARGET vtkNetCDF_cxx APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkNetCDF_cxx PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkNetCDF_cxx-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkNetCDF_cxx-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkNetCDF_cxx )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkNetCDF_cxx "${_IMPORT_PREFIX}/lib/vtkNetCDF_cxx-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkNetCDF_cxx-6.1.dll" )

# Import target "vtkexoIIc" for configuration "Release"
set_property(TARGET vtkexoIIc APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkexoIIc PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkexoIIc-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkexoIIc-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkexoIIc )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkexoIIc "${_IMPORT_PREFIX}/lib/vtkexoIIc-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkexoIIc-6.1.dll" )

# Import target "vtkIOExodus" for configuration "Release"
set_property(TARGET vtkIOExodus APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOExodus PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOExodus-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtkexoIIc;vtksys"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOExodus-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOExodus )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOExodus "${_IMPORT_PREFIX}/lib/vtkIOExodus-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkIOExodus-6.1.dll" )

# Import target "vtkIOExodusJava" for configuration "Release"
set_property(TARGET vtkIOExodusJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOExodusJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOExodusJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOExodusJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOExodusJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOExodusJava "${_IMPORT_PREFIX}/lib/vtkIOExodusJava.lib" "${_IMPORT_PREFIX}/bin/vtkIOExodusJava.dll" )

# Import target "vtkgl2ps" for configuration "Release"
set_property(TARGET vtkgl2ps APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkgl2ps PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkgl2ps-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkgl2ps-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkgl2ps )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkgl2ps "${_IMPORT_PREFIX}/lib/vtkgl2ps-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkgl2ps-6.1.dll" )

# Import target "vtkRenderingGL2PS" for configuration "Release"
set_property(TARGET vtkRenderingGL2PS APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingGL2PS PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingGL2PS-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtkRenderingOpenGL;vtkRenderingFreeType;vtkgl2ps"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingGL2PS-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingGL2PS )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingGL2PS "${_IMPORT_PREFIX}/lib/vtkRenderingGL2PS-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingGL2PS-6.1.dll" )

# Import target "vtkRenderingGL2PSJava" for configuration "Release"
set_property(TARGET vtkRenderingGL2PSJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingGL2PSJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingGL2PSJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingGL2PSJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingGL2PSJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingGL2PSJava "${_IMPORT_PREFIX}/lib/vtkRenderingGL2PSJava.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingGL2PSJava.dll" )

# Import target "vtkRenderingLabel" for configuration "Release"
set_property(TARGET vtkRenderingLabel APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingLabel PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingLabel-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtkFiltersExtraction"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingLabel-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingLabel )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingLabel "${_IMPORT_PREFIX}/lib/vtkRenderingLabel-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingLabel-6.1.dll" )

# Import target "vtkRenderingLabelJava" for configuration "Release"
set_property(TARGET vtkRenderingLabelJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingLabelJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingLabelJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingLabelJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingLabelJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingLabelJava "${_IMPORT_PREFIX}/lib/vtkRenderingLabelJava.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingLabelJava.dll" )

# Import target "vtkIOExport" for configuration "Release"
set_property(TARGET vtkIOExport APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOExport PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOExport-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtkIOImage;vtkFiltersGeometry;vtkgl2ps"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOExport-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOExport )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOExport "${_IMPORT_PREFIX}/lib/vtkIOExport-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkIOExport-6.1.dll" )

# Import target "vtkIOExportJava" for configuration "Release"
set_property(TARGET vtkIOExportJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOExportJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOExportJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOExportJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOExportJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOExportJava "${_IMPORT_PREFIX}/lib/vtkIOExportJava.lib" "${_IMPORT_PREFIX}/bin/vtkIOExportJava.dll" )

# Import target "vtkIOImport" for configuration "Release"
set_property(TARGET vtkIOImport APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOImport PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOImport-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtkFiltersSources"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOImport-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOImport )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOImport "${_IMPORT_PREFIX}/lib/vtkIOImport-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkIOImport-6.1.dll" )

# Import target "vtkIOImportJava" for configuration "Release"
set_property(TARGET vtkIOImportJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOImportJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOImportJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOImportJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOImportJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOImportJava "${_IMPORT_PREFIX}/lib/vtkIOImportJava.lib" "${_IMPORT_PREFIX}/bin/vtkIOImportJava.dll" )

# Import target "vtklibxml2" for configuration "Release"
set_property(TARGET vtklibxml2 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtklibxml2 PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtklibxml2-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtklibxml2-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtklibxml2 )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtklibxml2 "${_IMPORT_PREFIX}/lib/vtklibxml2-6.1.lib" "${_IMPORT_PREFIX}/bin/vtklibxml2-6.1.dll" )

# Import target "vtkIOInfovis" for configuration "Release"
set_property(TARGET vtkIOInfovis APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOInfovis PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOInfovis-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtklibxml2;vtksys"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOInfovis-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOInfovis )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOInfovis "${_IMPORT_PREFIX}/lib/vtkIOInfovis-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkIOInfovis-6.1.dll" )

# Import target "vtkIOInfovisJava" for configuration "Release"
set_property(TARGET vtkIOInfovisJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOInfovisJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOInfovisJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOInfovisJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOInfovisJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOInfovisJava "${_IMPORT_PREFIX}/lib/vtkIOInfovisJava.lib" "${_IMPORT_PREFIX}/bin/vtkIOInfovisJava.dll" )

# Import target "vtkIOLSDyna" for configuration "Release"
set_property(TARGET vtkIOLSDyna APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOLSDyna PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOLSDyna-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtksys"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOLSDyna-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOLSDyna )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOLSDyna "${_IMPORT_PREFIX}/lib/vtkIOLSDyna-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkIOLSDyna-6.1.dll" )

# Import target "vtkIOLSDynaJava" for configuration "Release"
set_property(TARGET vtkIOLSDynaJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOLSDynaJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOLSDynaJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOLSDynaJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOLSDynaJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOLSDynaJava "${_IMPORT_PREFIX}/lib/vtkIOLSDynaJava.lib" "${_IMPORT_PREFIX}/bin/vtkIOLSDynaJava.dll" )

# Import target "vtkIOMINC" for configuration "Release"
set_property(TARGET vtkIOMINC APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOMINC PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOMINC-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtksys;vtkNetCDF;vtkNetCDF_cxx"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOMINC-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOMINC )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOMINC "${_IMPORT_PREFIX}/lib/vtkIOMINC-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkIOMINC-6.1.dll" )

# Import target "vtkIOMINCJava" for configuration "Release"
set_property(TARGET vtkIOMINCJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOMINCJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOMINCJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOMINCJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOMINCJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOMINCJava "${_IMPORT_PREFIX}/lib/vtkIOMINCJava.lib" "${_IMPORT_PREFIX}/bin/vtkIOMINCJava.dll" )

# Import target "vtkoggtheora" for configuration "Release"
set_property(TARGET vtkoggtheora APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkoggtheora PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkoggtheora-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkoggtheora-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkoggtheora )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkoggtheora "${_IMPORT_PREFIX}/lib/vtkoggtheora-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkoggtheora-6.1.dll" )

# Import target "vtkIOMovie" for configuration "Release"
set_property(TARGET vtkIOMovie APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOMovie PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOMovie-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOMovie-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOMovie )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOMovie "${_IMPORT_PREFIX}/lib/vtkIOMovie-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkIOMovie-6.1.dll" )

# Import target "vtkIOMovieJava" for configuration "Release"
set_property(TARGET vtkIOMovieJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOMovieJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOMovieJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOMovieJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOMovieJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOMovieJava "${_IMPORT_PREFIX}/lib/vtkIOMovieJava.lib" "${_IMPORT_PREFIX}/bin/vtkIOMovieJava.dll" )

# Import target "vtkIONetCDF" for configuration "Release"
set_property(TARGET vtkIONetCDF APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIONetCDF PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIONetCDF-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtksys;vtkNetCDF;vtkNetCDF_cxx"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIONetCDF-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIONetCDF )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIONetCDF "${_IMPORT_PREFIX}/lib/vtkIONetCDF-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkIONetCDF-6.1.dll" )

# Import target "vtkIONetCDFJava" for configuration "Release"
set_property(TARGET vtkIONetCDFJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIONetCDFJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIONetCDFJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIONetCDFJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIONetCDFJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIONetCDFJava "${_IMPORT_PREFIX}/lib/vtkIONetCDFJava.lib" "${_IMPORT_PREFIX}/bin/vtkIONetCDFJava.dll" )

# Import target "vtkIOPLY" for configuration "Release"
set_property(TARGET vtkIOPLY APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOPLY PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOPLY-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOPLY-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOPLY )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOPLY "${_IMPORT_PREFIX}/lib/vtkIOPLY-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkIOPLY-6.1.dll" )

# Import target "vtkIOPLYJava" for configuration "Release"
set_property(TARGET vtkIOPLYJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOPLYJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOPLYJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOPLYJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOPLYJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOPLYJava "${_IMPORT_PREFIX}/lib/vtkIOPLYJava.lib" "${_IMPORT_PREFIX}/bin/vtkIOPLYJava.dll" )

# Import target "vtkIOParallel" for configuration "Release"
set_property(TARGET vtkIOParallel APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOParallel PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOParallel-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtkexoIIc;vtkNetCDF;vtkNetCDF_cxx"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOParallel-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOParallel )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOParallel "${_IMPORT_PREFIX}/lib/vtkIOParallel-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkIOParallel-6.1.dll" )

# Import target "vtkIOParallelJava" for configuration "Release"
set_property(TARGET vtkIOParallelJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOParallelJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOParallelJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOParallelJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOParallelJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOParallelJava "${_IMPORT_PREFIX}/lib/vtkIOParallelJava.lib" "${_IMPORT_PREFIX}/bin/vtkIOParallelJava.dll" )

# Import target "vtksqlite" for configuration "Release"
set_property(TARGET vtksqlite APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtksqlite PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/vtksqlite-6.1.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtksqlite )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtksqlite "${_IMPORT_PREFIX}/lib/vtksqlite-6.1.lib" )

# Import target "vtkIOSQL" for configuration "Release"
set_property(TARGET vtkIOSQL APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOSQL PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOSQL-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtksys"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOSQL-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOSQL )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOSQL "${_IMPORT_PREFIX}/lib/vtkIOSQL-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkIOSQL-6.1.dll" )

# Import target "vtkIOSQLJava" for configuration "Release"
set_property(TARGET vtkIOSQLJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOSQLJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOSQLJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOSQLJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOSQLJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOSQLJava "${_IMPORT_PREFIX}/lib/vtkIOSQLJava.lib" "${_IMPORT_PREFIX}/bin/vtkIOSQLJava.dll" )

# Import target "vtkIOVideo" for configuration "Release"
set_property(TARGET vtkIOVideo APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOVideo PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOVideo-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtksys"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOVideo-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOVideo )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOVideo "${_IMPORT_PREFIX}/lib/vtkIOVideo-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkIOVideo-6.1.dll" )

# Import target "vtkIOVideoJava" for configuration "Release"
set_property(TARGET vtkIOVideoJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkIOVideoJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkIOVideoJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkIOVideoJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkIOVideoJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkIOVideoJava "${_IMPORT_PREFIX}/lib/vtkIOVideoJava.lib" "${_IMPORT_PREFIX}/bin/vtkIOVideoJava.dll" )

# Import target "vtkImagingMath" for configuration "Release"
set_property(TARGET vtkImagingMath APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkImagingMath PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkImagingMath-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkImagingMath-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkImagingMath )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkImagingMath "${_IMPORT_PREFIX}/lib/vtkImagingMath-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkImagingMath-6.1.dll" )

# Import target "vtkImagingMathJava" for configuration "Release"
set_property(TARGET vtkImagingMathJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkImagingMathJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkImagingMathJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkImagingMathJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkImagingMathJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkImagingMathJava "${_IMPORT_PREFIX}/lib/vtkImagingMathJava.lib" "${_IMPORT_PREFIX}/bin/vtkImagingMathJava.dll" )

# Import target "vtkImagingMorphological" for configuration "Release"
set_property(TARGET vtkImagingMorphological APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkImagingMorphological PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkImagingMorphological-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkImagingMorphological-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkImagingMorphological )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkImagingMorphological "${_IMPORT_PREFIX}/lib/vtkImagingMorphological-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkImagingMorphological-6.1.dll" )

# Import target "vtkImagingMorphologicalJava" for configuration "Release"
set_property(TARGET vtkImagingMorphologicalJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkImagingMorphologicalJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkImagingMorphologicalJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkImagingMorphologicalJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkImagingMorphologicalJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkImagingMorphologicalJava "${_IMPORT_PREFIX}/lib/vtkImagingMorphologicalJava.lib" "${_IMPORT_PREFIX}/bin/vtkImagingMorphologicalJava.dll" )

# Import target "vtkImagingStatistics" for configuration "Release"
set_property(TARGET vtkImagingStatistics APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkImagingStatistics PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkImagingStatistics-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkImagingStatistics-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkImagingStatistics )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkImagingStatistics "${_IMPORT_PREFIX}/lib/vtkImagingStatistics-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkImagingStatistics-6.1.dll" )

# Import target "vtkImagingStatisticsJava" for configuration "Release"
set_property(TARGET vtkImagingStatisticsJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkImagingStatisticsJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkImagingStatisticsJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkImagingStatisticsJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkImagingStatisticsJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkImagingStatisticsJava "${_IMPORT_PREFIX}/lib/vtkImagingStatisticsJava.lib" "${_IMPORT_PREFIX}/bin/vtkImagingStatisticsJava.dll" )

# Import target "vtkImagingStencil" for configuration "Release"
set_property(TARGET vtkImagingStencil APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkImagingStencil PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkImagingStencil-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkImagingStencil-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkImagingStencil )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkImagingStencil "${_IMPORT_PREFIX}/lib/vtkImagingStencil-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkImagingStencil-6.1.dll" )

# Import target "vtkImagingStencilJava" for configuration "Release"
set_property(TARGET vtkImagingStencilJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkImagingStencilJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkImagingStencilJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkImagingStencilJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkImagingStencilJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkImagingStencilJava "${_IMPORT_PREFIX}/lib/vtkImagingStencilJava.lib" "${_IMPORT_PREFIX}/bin/vtkImagingStencilJava.dll" )

# Import target "vtkInteractionImage" for configuration "Release"
set_property(TARGET vtkInteractionImage APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkInteractionImage PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkInteractionImage-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkInteractionImage-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkInteractionImage )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkInteractionImage "${_IMPORT_PREFIX}/lib/vtkInteractionImage-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkInteractionImage-6.1.dll" )

# Import target "vtkInteractionImageJava" for configuration "Release"
set_property(TARGET vtkInteractionImageJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkInteractionImageJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkInteractionImageJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkInteractionImageJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkInteractionImageJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkInteractionImageJava "${_IMPORT_PREFIX}/lib/vtkInteractionImageJava.lib" "${_IMPORT_PREFIX}/bin/vtkInteractionImageJava.dll" )

# Import target "vtkRenderingFreeTypeOpenGL" for configuration "Release"
set_property(TARGET vtkRenderingFreeTypeOpenGL APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingFreeTypeOpenGL PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingFreeTypeOpenGL-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingFreeTypeOpenGL-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingFreeTypeOpenGL )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingFreeTypeOpenGL "${_IMPORT_PREFIX}/lib/vtkRenderingFreeTypeOpenGL-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingFreeTypeOpenGL-6.1.dll" )

# Import target "vtkRenderingFreeTypeOpenGLJava" for configuration "Release"
set_property(TARGET vtkRenderingFreeTypeOpenGLJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingFreeTypeOpenGLJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingFreeTypeOpenGLJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingFreeTypeOpenGLJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingFreeTypeOpenGLJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingFreeTypeOpenGLJava "${_IMPORT_PREFIX}/lib/vtkRenderingFreeTypeOpenGLJava.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingFreeTypeOpenGLJava.dll" )

# Import target "vtkRenderingImage" for configuration "Release"
set_property(TARGET vtkRenderingImage APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingImage PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingImage-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingImage-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingImage )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingImage "${_IMPORT_PREFIX}/lib/vtkRenderingImage-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingImage-6.1.dll" )

# Import target "vtkRenderingImageJava" for configuration "Release"
set_property(TARGET vtkRenderingImageJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingImageJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingImageJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingImageJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingImageJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingImageJava "${_IMPORT_PREFIX}/lib/vtkRenderingImageJava.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingImageJava.dll" )

# Import target "vtkRenderingLIC" for configuration "Release"
set_property(TARGET vtkRenderingLIC APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingLIC PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingLIC-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtksys"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingLIC-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingLIC )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingLIC "${_IMPORT_PREFIX}/lib/vtkRenderingLIC-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingLIC-6.1.dll" )

# Import target "vtkRenderingLICJava" for configuration "Release"
set_property(TARGET vtkRenderingLICJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingLICJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingLICJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingLICJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingLICJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingLICJava "${_IMPORT_PREFIX}/lib/vtkRenderingLICJava.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingLICJava.dll" )

# Import target "vtkRenderingLOD" for configuration "Release"
set_property(TARGET vtkRenderingLOD APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingLOD PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingLOD-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingLOD-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingLOD )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingLOD "${_IMPORT_PREFIX}/lib/vtkRenderingLOD-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingLOD-6.1.dll" )

# Import target "vtkRenderingLODJava" for configuration "Release"
set_property(TARGET vtkRenderingLODJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingLODJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingLODJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingLODJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingLODJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingLODJava "${_IMPORT_PREFIX}/lib/vtkRenderingLODJava.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingLODJava.dll" )

# Import target "vtkRenderingVolumeAMR" for configuration "Release"
set_property(TARGET vtkRenderingVolumeAMR APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingVolumeAMR PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingVolumeAMR-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingVolumeAMR-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingVolumeAMR )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingVolumeAMR "${_IMPORT_PREFIX}/lib/vtkRenderingVolumeAMR-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingVolumeAMR-6.1.dll" )

# Import target "vtkRenderingVolumeAMRJava" for configuration "Release"
set_property(TARGET vtkRenderingVolumeAMRJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingVolumeAMRJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingVolumeAMRJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingVolumeAMRJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingVolumeAMRJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingVolumeAMRJava "${_IMPORT_PREFIX}/lib/vtkRenderingVolumeAMRJava.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingVolumeAMRJava.dll" )

# Import target "vtkRenderingVolumeOpenGL" for configuration "Release"
set_property(TARGET vtkRenderingVolumeOpenGL APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingVolumeOpenGL PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingVolumeOpenGL-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtksys;vtkFiltersGeneral;vtkFiltersSources"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingVolumeOpenGL-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingVolumeOpenGL )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingVolumeOpenGL "${_IMPORT_PREFIX}/lib/vtkRenderingVolumeOpenGL-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingVolumeOpenGL-6.1.dll" )

# Import target "vtkRenderingVolumeOpenGLJava" for configuration "Release"
set_property(TARGET vtkRenderingVolumeOpenGLJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkRenderingVolumeOpenGLJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkRenderingVolumeOpenGLJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkRenderingVolumeOpenGLJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkRenderingVolumeOpenGLJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkRenderingVolumeOpenGLJava "${_IMPORT_PREFIX}/lib/vtkRenderingVolumeOpenGLJava.lib" "${_IMPORT_PREFIX}/bin/vtkRenderingVolumeOpenGLJava.dll" )

# Import target "vtkViewsContext2D" for configuration "Release"
set_property(TARGET vtkViewsContext2D APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkViewsContext2D PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkViewsContext2D-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkViewsContext2D-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkViewsContext2D )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkViewsContext2D "${_IMPORT_PREFIX}/lib/vtkViewsContext2D-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkViewsContext2D-6.1.dll" )

# Import target "vtkViewsContext2DJava" for configuration "Release"
set_property(TARGET vtkViewsContext2DJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkViewsContext2DJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkViewsContext2DJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkViewsContext2DJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkViewsContext2DJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkViewsContext2DJava "${_IMPORT_PREFIX}/lib/vtkViewsContext2DJava.lib" "${_IMPORT_PREFIX}/bin/vtkViewsContext2DJava.dll" )

# Import target "vtkViewsInfovis" for configuration "Release"
set_property(TARGET vtkViewsInfovis APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkViewsInfovis PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkViewsInfovis-6.1.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "vtkFiltersGeometry"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkViewsInfovis-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkViewsInfovis )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkViewsInfovis "${_IMPORT_PREFIX}/lib/vtkViewsInfovis-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkViewsInfovis-6.1.dll" )

# Import target "vtkViewsInfovisJava" for configuration "Release"
set_property(TARGET vtkViewsInfovisJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkViewsInfovisJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkViewsInfovisJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkViewsInfovisJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkViewsInfovisJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkViewsInfovisJava "${_IMPORT_PREFIX}/lib/vtkViewsInfovisJava.lib" "${_IMPORT_PREFIX}/bin/vtkViewsInfovisJava.dll" )

# Import target "vtkViewsGeovis" for configuration "Release"
set_property(TARGET vtkViewsGeovis APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkViewsGeovis PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkViewsGeovis-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkViewsGeovis-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkViewsGeovis )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkViewsGeovis "${_IMPORT_PREFIX}/lib/vtkViewsGeovis-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkViewsGeovis-6.1.dll" )

# Import target "vtkViewsGeovisJava" for configuration "Release"
set_property(TARGET vtkViewsGeovisJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkViewsGeovisJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkViewsGeovisJava.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkViewsGeovisJava.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkViewsGeovisJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkViewsGeovisJava "${_IMPORT_PREFIX}/lib/vtkViewsGeovisJava.lib" "${_IMPORT_PREFIX}/bin/vtkViewsGeovisJava.dll" )

# Import target "vtkWrappingTools" for configuration "Release"
set_property(TARGET vtkWrappingTools APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkWrappingTools PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/vtkWrappingTools-6.1.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkWrappingTools )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkWrappingTools "${_IMPORT_PREFIX}/lib/vtkWrappingTools-6.1.lib" )

# Import target "vtkWrapHierarchy" for configuration "Release"
set_property(TARGET vtkWrapHierarchy APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkWrapHierarchy PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkWrapHierarchy-6.1.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkWrapHierarchy )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkWrapHierarchy "${_IMPORT_PREFIX}/bin/vtkWrapHierarchy-6.1.exe" )

# Import target "vtkWrapTcl" for configuration "Release"
set_property(TARGET vtkWrapTcl APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkWrapTcl PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkWrapTcl-6.1.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkWrapTcl )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkWrapTcl "${_IMPORT_PREFIX}/bin/vtkWrapTcl-6.1.exe" )

# Import target "vtkWrapTclInit" for configuration "Release"
set_property(TARGET vtkWrapTclInit APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkWrapTclInit PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkWrapTclInit-6.1.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkWrapTclInit )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkWrapTclInit "${_IMPORT_PREFIX}/bin/vtkWrapTclInit-6.1.exe" )

# Import target "vtkWrapPython" for configuration "Release"
set_property(TARGET vtkWrapPython APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkWrapPython PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkWrapPython-6.1.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkWrapPython )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkWrapPython "${_IMPORT_PREFIX}/bin/vtkWrapPython-6.1.exe" )

# Import target "vtkWrapPythonInit" for configuration "Release"
set_property(TARGET vtkWrapPythonInit APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkWrapPythonInit PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkWrapPythonInit-6.1.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkWrapPythonInit )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkWrapPythonInit "${_IMPORT_PREFIX}/bin/vtkWrapPythonInit-6.1.exe" )

# Import target "vtkParseJava" for configuration "Release"
set_property(TARGET vtkParseJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkParseJava PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkParseJava-6.1.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkParseJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkParseJava "${_IMPORT_PREFIX}/bin/vtkParseJava-6.1.exe" )

# Import target "vtkWrapJava" for configuration "Release"
set_property(TARGET vtkWrapJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkWrapJava PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkWrapJava-6.1.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkWrapJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkWrapJava "${_IMPORT_PREFIX}/bin/vtkWrapJava-6.1.exe" )

# Import target "vtkWrappingJava" for configuration "Release"
set_property(TARGET vtkWrappingJava APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkWrappingJava PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/vtkWrappingJava-6.1.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/vtkWrappingJava-6.1.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS vtkWrappingJava )
list(APPEND _IMPORT_CHECK_FILES_FOR_vtkWrappingJava "${_IMPORT_PREFIX}/lib/vtkWrappingJava-6.1.lib" "${_IMPORT_PREFIX}/bin/vtkWrappingJava-6.1.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
