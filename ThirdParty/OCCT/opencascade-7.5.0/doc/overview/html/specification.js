var specification =
[
    [ "Boolean Operations", "specification__boolean_operations.html", [
      [ "Introduction", "specification__boolean_operations.html#specification__boolean_1", null ],
      [ "Overview", "specification__boolean_operations.html#specification__boolean_2", [
        [ "Operators", "specification__boolean_operations.html#specification__boolean_2_1", [
          [ "Boolean operator", "specification__boolean_operations.html#specification__boolean_2_1_1", null ],
          [ "General Fuse operator", "specification__boolean_operations.html#specification__boolean_2_1_2", null ],
          [ "Splitter operator", "specification__boolean_operations.html#specification__boolean_2_1_3", null ],
          [ "Section operator", "specification__boolean_operations.html#specification__boolean_2_1_4", null ]
        ] ],
        [ "Parts of algorithms", "specification__boolean_operations.html#specification__boolean_2_2", null ]
      ] ],
      [ "Terms and Definitions", "specification__boolean_operations.html#specification__boolean_3", [
        [ "Interferences", "specification__boolean_operations.html#specification__boolean_3_1", [
          [ "Vertex/Vertex interference", "specification__boolean_operations.html#specification__boolean_3_1_1", null ],
          [ "Vertex/Edge interference", "specification__boolean_operations.html#specification__boolean_3_1_2", null ],
          [ "Vertex/Face interference", "specification__boolean_operations.html#specification__boolean_3_1_3", null ],
          [ "Edge/Edge interference", "specification__boolean_operations.html#specification__boolean_3_1_4", null ],
          [ "Edge/Face interference", "specification__boolean_operations.html#specification__boolean_3_1_5", null ],
          [ "Face/Face Interference", "specification__boolean_operations.html#specification__boolean_3_1_6", null ],
          [ "Vertex/Solid Interference", "specification__boolean_operations.html#specification__boolean_3_1_7", null ],
          [ "Edge/Soild Interference", "specification__boolean_operations.html#specification__boolean_3_1_8", null ],
          [ "Face/Soild Interference", "specification__boolean_operations.html#specification__boolean_3_1_9", null ],
          [ "Solid/Soild Interference", "specification__boolean_operations.html#specification__boolean_3_1_10", null ],
          [ "Computation Order", "specification__boolean_operations.html#specification__boolean_3_1_11", null ],
          [ "Results", "specification__boolean_operations.html#specification__boolean_3_1_12", null ]
        ] ],
        [ "Paves", "specification__boolean_operations.html#specification__boolean_3_2", null ],
        [ "Pave Blocks", "specification__boolean_operations.html#specification__boolean_3_3", null ],
        [ "Shrunk Range", "specification__boolean_operations.html#specification__boolean_3_4", null ],
        [ "Common Blocks", "specification__boolean_operations.html#specification__boolean_3_5", null ],
        [ "FaceInfo", "specification__boolean_operations.html#specification__boolean_3_6", null ]
      ] ],
      [ "Data Structure", "specification__boolean_operations.html#specification__boolean_4", [
        [ "Arguments", "specification__boolean_operations.html#specification__boolean_4_1", null ],
        [ "Shapes", "specification__boolean_operations.html#specification__boolean_4_2", null ],
        [ "Interferences", "specification__boolean_operations.html#specification__boolean_4_3", null ],
        [ "Pave, PaveBlock and CommonBlock", "specification__boolean_operations.html#specification__boolean_4_4", null ],
        [ "Points and Curves", "specification__boolean_operations.html#specification__boolean_4_5", null ],
        [ "FaceInfo", "specification__boolean_operations.html#specification__boolean_4_6", null ]
      ] ],
      [ "Root Classes", "specification__boolean_operations.html#specification__boolean_root_classes", [
        [ "Class BOPAlgo_Options", "specification__boolean_operations.html#specification__boolean_root_classes_1", null ],
        [ "Class BOPAlgo_Algo", "specification__boolean_operations.html#specification__boolean_root_classes_2", null ]
      ] ],
      [ "Intersection Part", "specification__boolean_operations.html#specification__boolean_5", [
        [ "Initialization", "specification__boolean_operations.html#specification__boolean_5_1", null ],
        [ "Compute Vertex/Vertex Interferences", "specification__boolean_operations.html#specification__boolean_5_2", null ],
        [ "Compute Vertex/Edge Interferences", "specification__boolean_operations.html#specification__boolean_5_3", null ],
        [ "Update Pave Blocks", "specification__boolean_operations.html#specification__boolean_5_4", null ],
        [ "Compute Edge/Edge Interferences", "specification__boolean_operations.html#specification__boolean_5_5", null ],
        [ "Compute Vertex/Face Interferences", "specification__boolean_operations.html#specification__boolean_5_6", null ],
        [ "Compute Edge/Face Interferences", "specification__boolean_operations.html#specification__boolean_5_7", null ],
        [ "Build Split Edges", "specification__boolean_operations.html#specification__boolean_5_8", null ],
        [ "Compute Face/Face Interferences", "specification__boolean_operations.html#specification__boolean_5_9", null ],
        [ "Build Section Edges", "specification__boolean_operations.html#specification__boolean_5_10", null ],
        [ "Build P-Curves", "specification__boolean_operations.html#specification__boolean_5_11", null ],
        [ "Process Degenerated Edges", "specification__boolean_operations.html#specification__boolean_5_12", null ]
      ] ],
      [ "General description of the Building Part", "specification__boolean_operations.html#specification__boolean_6", null ],
      [ "General Fuse Algorithm", "specification__boolean_operations.html#specification__boolean_7", [
        [ "Arguments", "specification__boolean_operations.html#specification__boolean_7_1", null ],
        [ "Results", "specification__boolean_operations.html#specification__boolean_7_2", null ],
        [ "Options", "specification__boolean_operations.html#specification__boolean_7_3a", null ],
        [ "Usage", "specification__boolean_operations.html#specification__boolean_7_3b", null ],
        [ "Examples", "specification__boolean_operations.html#specification__boolean_7_3", [
          [ "Case 1: Three edges intersecting at a point", "specification__boolean_operations.html#specification__boolean_7_3_1", null ],
          [ "Case 2: Two wires and an edge", "specification__boolean_operations.html#specification__boolean_7_3_2", null ],
          [ "Case 3: An edge intersecting with a face", "specification__boolean_operations.html#specification__boolean_7_3_3", null ],
          [ "Case 4: An edge lying on a face", "specification__boolean_operations.html#specification__boolean_7_3_4", null ],
          [ "Case 5: An edge and a shell", "specification__boolean_operations.html#specification__boolean_7_3_5", null ],
          [ "Case 6: A wire and a shell", "specification__boolean_operations.html#specification__boolean_7_3_6", null ],
          [ "Case 7: Three faces", "specification__boolean_operations.html#specification__boolean_7_3_7", null ],
          [ "Case 8: A face and a shell", "specification__boolean_operations.html#specification__boolean_7_3_8", null ],
          [ "Case 9: A shell and a solid", "specification__boolean_operations.html#specification__boolean_7_3_9", null ],
          [ "Case 10: A compound and a solid", "specification__boolean_operations.html#specification__boolean_7_3_10", null ]
        ] ],
        [ "Class BOPAlgo_Builder", "specification__boolean_operations.html#specification__boolean_7_4", [
          [ "Fields", "specification__boolean_operations.html#specification__boolean_7_4_1", null ],
          [ "Initialization", "specification__boolean_operations.html#specification__boolean_7_4_2", null ],
          [ "Build Images for Vertices", "specification__boolean_operations.html#specification__boolean_7_4_3", null ],
          [ "Build Result of Type Vertex", "specification__boolean_operations.html#specification__boolean_7_4_4", null ],
          [ "Build Images for Edges", "specification__boolean_operations.html#specification__boolean_7_4_5", null ],
          [ "Build Result of Type Edge", "specification__boolean_operations.html#specification__boolean_7_4_6", null ],
          [ "Build Images for Wires", "specification__boolean_operations.html#specification__boolean_7_4_7", null ],
          [ "Build Result of Type Wire", "specification__boolean_operations.html#specification__boolean_7_4_8", null ],
          [ "Build Images for Faces", "specification__boolean_operations.html#specification__boolean_7_4_9", null ],
          [ "Build Result of Type Face", "specification__boolean_operations.html#specification__boolean_7_4_10", null ],
          [ "Build Images for Shells", "specification__boolean_operations.html#specification__boolean_7_4_11", null ],
          [ "Build Result of Type Shell", "specification__boolean_operations.html#specification__boolean_7_4_12", null ],
          [ "Build Images for Solids", "specification__boolean_operations.html#specification__boolean_7_4_13", null ],
          [ "Build Result of Type Solid", "specification__boolean_operations.html#specification__boolean_7_4_14", null ],
          [ "Build Images for Type CompSolid", "specification__boolean_operations.html#specification__boolean_7_4_15", null ],
          [ "Build Result of Type Compsolid", "specification__boolean_operations.html#specification__boolean_7_4_16", null ],
          [ "Build Images for Compounds", "specification__boolean_operations.html#specification__boolean_7_4_17", null ],
          [ "Build Result of Type Compound", "specification__boolean_operations.html#specification__boolean_7_4_18", null ],
          [ "Post-Processing", "specification__boolean_operations.html#specification__boolean_7_4_19", null ]
        ] ]
      ] ],
      [ "Splitter Algorithm", "specification__boolean_operations.html#specification__boolean_8", [
        [ "Arguments", "specification__boolean_operations.html#specification__boolean_8_1", null ],
        [ "Results", "specification__boolean_operations.html#specification__boolean_8_2", null ],
        [ "Usage", "specification__boolean_operations.html#specification__boolean_8_3", [
          [ "API", "specification__boolean_operations.html#specification__boolean_8_3_1", null ],
          [ "DRAW", "specification__boolean_operations.html#specification__boolean_8_3_2", null ]
        ] ],
        [ "Examples", "specification__boolean_operations.html#specification__boolean_8_4", [
          [ "Example 1", "specification__boolean_operations.html#specification__boolean_8_4_1", null ],
          [ "Example 2", "specification__boolean_operations.html#specification__boolean_8_4_2", null ],
          [ "Example 3", "specification__boolean_operations.html#specification__boolean_8_4_3", null ]
        ] ]
      ] ],
      [ "Boolean Operations Algorithm", "specification__boolean_operations.html#specification__boolean_9", [
        [ "Arguments", "specification__boolean_operations.html#specification__boolean_9_1", null ],
        [ "Results. General Rules", "specification__boolean_operations.html#specification__boolean_9_3", null ],
        [ "Examples", "specification__boolean_operations.html#specification__boolean_9_4", [
          [ "Case 1: Two Vertices", "specification__boolean_operations.html#specification__boolean_9_4_1", null ],
          [ "Case 2: A Vertex and an Edge", "specification__boolean_operations.html#specification__boolean_9_4_2", null ],
          [ "Case 3: A Vertex and a Face", "specification__boolean_operations.html#specification__boolean_9_4_3", null ],
          [ "Case 4: A Vertex and a Solid", "specification__boolean_operations.html#specification__boolean_9_4_4", null ],
          [ "Case 5: Two edges intersecting at one point", "specification__boolean_operations.html#specification__boolean_9_4_5", null ],
          [ "Case 6: Two edges having a common block", "specification__boolean_operations.html#specification__boolean_9_4_6", null ],
          [ "Case 7: An Edge and a Face intersecting at a point", "specification__boolean_operations.html#specification__boolean_9_4_7", null ],
          [ "Case 8: A Face and an Edge that have a common block", "specification__boolean_operations.html#specification__boolean_9_4_8", null ],
          [ "Case 9: An Edge and a Solid intersecting at a point", "specification__boolean_operations.html#specification__boolean_9_4_9", null ],
          [ "Case 10: An Edge and a Solid that have a common block", "specification__boolean_operations.html#specification__boolean_9_4_10", null ],
          [ "Case 11: Two intersecting faces", "specification__boolean_operations.html#specification__boolean_9_4_11", null ],
          [ "Case 12: Two faces that have a common part", "specification__boolean_operations.html#specification__boolean_9_4_12", null ],
          [ "Case 13: Two faces that have a common edge", "specification__boolean_operations.html#specification__boolean_9_4_13", null ],
          [ "Case 14: Two faces that have a common vertex", "specification__boolean_operations.html#specification__boolean_9_4_14", null ],
          [ "Case 15: A Face and a Solid that have an intersection curve.", "specification__boolean_operations.html#specification__boolean_9_4_15", null ],
          [ "Case 16: A Face and a Solid that have overlapping faces.", "specification__boolean_operations.html#specification__boolean_9_4_16", null ],
          [ "Case 17: A Face and a Solid that have overlapping edges.", "specification__boolean_operations.html#specification__boolean_9_4_17", null ],
          [ "Case 18: A Face and a Solid that have overlapping vertices.", "specification__boolean_operations.html#specification__boolean_9_4_18", null ],
          [ "Case 19: Two intersecting Solids.", "specification__boolean_operations.html#specification__boolean_9_4_19", null ],
          [ "Case 20: Two Solids that have overlapping faces.", "specification__boolean_operations.html#specification__boolean_9_4_20", null ],
          [ "Case 21: Two Solids that have overlapping edges.", "specification__boolean_operations.html#specification__boolean_9_4_21", null ],
          [ "Case 22: Two Solids that have overlapping vertices.", "specification__boolean_operations.html#specification__boolean_9_4_22", null ],
          [ "Case 23: A Shell and a Wire cut by a Solid.", "specification__boolean_operations.html#specification__boolean_9_4_23", null ],
          [ "Case 24: Two Wires that have overlapping edges.", "specification__boolean_operations.html#specification__boolean_9_4_24", null ]
        ] ],
        [ "Class BOPAlgo_BOP", "specification__boolean_operations.html#specification__boolean_9_5", null ],
        [ "Building Draft Result", "specification__boolean_operations.html#specification__boolean_9_6", null ],
        [ "Building the Result", "specification__boolean_operations.html#specification__boolean_9_7", null ],
        [ "Boolean operations on open solids", "specification__boolean_operations.html#specification__boolean_bop_on_opensolids", null ]
      ] ],
      [ "Section Algorithm", "specification__boolean_operations.html#specification__boolean_10a", [
        [ "Arguments", "specification__boolean_operations.html#specification__boolean_10a_1", null ],
        [ "Results and general rules", "specification__boolean_operations.html#specification__boolean_10a_2", null ],
        [ "Examples", "specification__boolean_operations.html#specification__boolean_10a_3", [
          [ "Case 1: Two Vertices", "specification__boolean_operations.html#specification__boolean_10a_3_1", null ],
          [ "Case 1: Case 2: A Vertex and an Edge", "specification__boolean_operations.html#specification__boolean_10a_3_2", null ],
          [ "Case 1: Case 2: A Vertex and a Face", "specification__boolean_operations.html#specification__boolean_10a_3_3", null ],
          [ "Case 4: A Vertex and a Solid", "specification__boolean_operations.html#specification__boolean_10a_3_4", null ],
          [ "Case 5: Two edges intersecting at one point", "specification__boolean_operations.html#specification__boolean_10a_3_5", null ],
          [ "Case 6: Two edges having a common block", "specification__boolean_operations.html#specification__boolean_10a_3_6", null ],
          [ "Case 7: An Edge and a Face intersecting at a point", "specification__boolean_operations.html#specification__boolean_10a_3_7", null ],
          [ "Case 8: A Face and an Edge that have a common block", "specification__boolean_operations.html#specification__boolean_10a_3_8", null ],
          [ "Case 9: An Edge and a Solid intersecting at a point", "specification__boolean_operations.html#specification__boolean_10a_3_9", null ],
          [ "Case 10: An Edge and a Solid that have a common block", "specification__boolean_operations.html#specification__boolean_10a_3_10", null ],
          [ "Case 11: Two intersecting faces", "specification__boolean_operations.html#specification__boolean_10a_3_11", null ],
          [ "Case 12: Two faces that have a common part", "specification__boolean_operations.html#specification__boolean_10a_3_12", null ],
          [ "Case 13: Two faces that have overlapping edges", "specification__boolean_operations.html#specification__boolean_10a_3_13", null ],
          [ "Case 14: Two faces that have overlapping vertices", "specification__boolean_operations.html#specification__boolean_10a_3_14", null ],
          [ "Case 15: A Face and a Solid that have an intersection curve", "specification__boolean_operations.html#specification__boolean_10a_3_15", null ],
          [ "Case 16: A Face and a Solid that have overlapping faces.", "specification__boolean_operations.html#specification__boolean_10a_3_16", null ],
          [ "Case 17: A Face and a Solid that have overlapping edges.", "specification__boolean_operations.html#specification__boolean_10a_3_17", null ],
          [ "Case 18: A Face and a Solid that have overlapping vertices.", "specification__boolean_operations.html#specification__boolean_10a_3_18", null ],
          [ "Case 19: Two intersecting Solids", "specification__boolean_operations.html#specification__boolean_10a_3_19", null ],
          [ "Case 20: Two Solids that have overlapping faces", "specification__boolean_operations.html#specification__boolean_10a_3_20", null ],
          [ "Case 21: Two Solids that have overlapping edges", "specification__boolean_operations.html#specification__boolean_10a_3_21", null ],
          [ "Case 22: Two Solids that have overlapping vertices", "specification__boolean_operations.html#specification__boolean_10a_3_22", null ]
        ] ],
        [ "Class BOPAlgo_Section", "specification__boolean_operations.html#specification__boolean_10a_4", null ],
        [ "Building the Result", "specification__boolean_operations.html#specification__boolean_10a_5", null ]
      ] ],
      [ "Volume Maker Algorithm", "specification__boolean_operations.html#specification__boolean_10b", [
        [ "Usage", "specification__boolean_operations.html#specification__boolean_10b_1", null ],
        [ "Examples", "specification__boolean_operations.html#specification__boolean_10b_2", null ]
      ] ],
      [ "Cells Builder algorithm", "specification__boolean_operations.html#specification__boolean_10c_Cells", [
        [ "Usage", "specification__boolean_operations.html#specification__boolean_10c_Cells_1", null ],
        [ "Examples", "specification__boolean_operations.html#specification__boolean_10c_Cells_2", null ]
      ] ],
      [ "Algorithm Limitations", "specification__boolean_operations.html#specification__boolean_10", [
        [ "Arguments", "specification__boolean_operations.html#specification__boolean_10_1", [
          [ "Common requirements", "specification__boolean_operations.html#specification__boolean_10_1_1", null ],
          [ "Pure self-interference", "specification__boolean_operations.html#specification__boolean_10_1_3", null ],
          [ "Self-interferences due to tolerances", "specification__boolean_operations.html#specification__boolean_10_1_4", null ],
          [ "Parametric representation", "specification__boolean_operations.html#specification__boolean_10_1_5", null ],
          [ "Using tolerances of vertices to fix gaps", "specification__boolean_operations.html#specification__boolean_10_1_6", null ]
        ] ],
        [ "Intersection problems", "specification__boolean_operations.html#specification__boolean_11_1", [
          [ "Pure intersections and common zones", "specification__boolean_operations.html#specification__boolean_11_1_1", null ],
          [ "Tolerances and inaccuracies", "specification__boolean_operations.html#specification__boolean_11_2_2", null ],
          [ "Acquired Self-interferences", "specification__boolean_operations.html#specification__boolean_11_2_3", null ]
        ] ]
      ] ],
      [ "Advanced Options", "specification__boolean_operations.html#specification__boolean_11a", [
        [ "Fuzzy Boolean Operation", "specification__boolean_operations.html#specification__boolean_11a_1", [
          [ "Examples", "specification__boolean_operations.html#specification__boolean_11a_1_1", null ]
        ] ],
        [ "Gluing Operation", "specification__boolean_operations.html#specification__boolean_11a_2", [
          [ "Usage", "specification__boolean_operations.html#specification__boolean_11a_2_1", null ],
          [ "Examples", "specification__boolean_operations.html#specification__boolean_11a_2_2", null ]
        ] ],
        [ "Safe processing mode", "specification__boolean_operations.html#specification__boolean_11a_3", [
          [ "Usage", "specification__boolean_operations.html#specification__boolean_11a_3_1", null ]
        ] ],
        [ "How to disable check of input solids for inverted status", "specification__boolean_operations.html#specification__boolean_11a_4", [
          [ "Usage", "specification__boolean_operations.html#specification__boolean_11a_4_1", null ]
        ] ],
        [ "Usage of Oriented Bounding Boxes", "specification__boolean_operations.html#specification__boolean_11a_5_obb", [
          [ "Usage", "specification__boolean_operations.html#specification__boolean_11a_5_obb_1", null ]
        ] ]
      ] ],
      [ "Errors and warnings reporting system", "specification__boolean_operations.html#specification__boolean_ers", null ],
      [ "History Information", "specification__boolean_operations.html#specification__boolean_history", [
        [ "Examples", "specification__boolean_operations.html#specification__boolean_history_ex", [
          [ "Deleted shapes", "specification__boolean_operations.html#specification__boolean_history_ex_del", null ],
          [ "Modified shapes", "specification__boolean_operations.html#specification__boolean_history_ex_modif", null ],
          [ "Generated shapes", "specification__boolean_operations.html#specification__boolean_history_gen", null ]
        ] ]
      ] ],
      [ "BOP result simplification", "specification__boolean_operations.html#specification__boolean_simplification", [
        [ "Examples", "specification__boolean_operations.html#specification__boolean_simplification_examples", null ]
      ] ],
      [ "Usage", "specification__boolean_operations.html#specification__boolean_11b", [
        [ "Package BRepAlgoAPI", "specification__boolean_operations.html#specification__boolean_11b_1", null ],
        [ "Package BOPTest", "specification__boolean_operations.html#specification__boolean_11b_2", [
          [ "Case 1. General Fuse operation", "specification__boolean_operations.html#specification__boolean_11b_2_1", null ],
          [ "Case 2. Splitting operation", "specification__boolean_operations.html#specification__boolean_11b_2_2", null ],
          [ "Case 3. Common operation", "specification__boolean_operations.html#specification__boolean_11b_2_3", null ],
          [ "Case 4. Fuse operation", "specification__boolean_operations.html#specification__boolean_11b_2_4", null ],
          [ "Case 5. Cut operation", "specification__boolean_operations.html#specification__boolean_11b_2_5", null ],
          [ "Case 6. Section operation", "specification__boolean_operations.html#specification__boolean_11b_2_6", null ]
        ] ]
      ] ]
    ] ],
    [ "BRep Format", "specification__brep_format.html", [
      [ "Introduction", "specification__brep_format.html#specification__brep_format_1", null ],
      [ "Storage of shapes", "specification__brep_format.html#specification__brep_format_2", null ],
      [ "Format Common Structure", "specification__brep_format.html#specification__brep_format_3", null ],
      [ "Locations", "specification__brep_format.html#specification__brep_format_4", null ],
      [ "Geometry", "specification__brep_format.html#specification__brep_format_5", [
        [ "3D curves", "specification__brep_format.html#specification__brep_format_5_1", [
          [ "Line - <3D curve record 1>", "specification__brep_format.html#specification__brep_format_5_1_1", null ],
          [ "Circle - <3D curve record 2>", "specification__brep_format.html#specification__brep_format_5_1_2", null ],
          [ "Ellipse - <3D curve record 3>", "specification__brep_format.html#specification__brep_format_5_1_3", null ],
          [ "Parabola - <3D curve record 4>", "specification__brep_format.html#specification__brep_format_5_1_4", null ],
          [ "Hyperbola - <3D curve record 5>", "specification__brep_format.html#specification__brep_format_5_1_5", null ],
          [ "Bezier Curve - <3D curve record 6>", "specification__brep_format.html#specification__brep_format_5_1_6", null ],
          [ "B-Spline Curve - <3D curve record 7>", "specification__brep_format.html#specification__brep_format_5_1_7", null ],
          [ "Trimmed Curve - <3D curve record 8>", "specification__brep_format.html#specification__brep_format_5_1_8", null ],
          [ "Offset Curve - <3D curve record 9>", "specification__brep_format.html#specification__brep_format_5_1_9", null ]
        ] ],
        [ "Surfaces", "specification__brep_format.html#specification__brep_format_5_2", [
          [ "Plane - < surface record 1 >", "specification__brep_format.html#specification__brep_format_5_2_1", null ],
          [ "Cylinder - < surface record 2 >", "specification__brep_format.html#specification__brep_format_5_2_2", null ],
          [ "Cone - < surface record 3 >", "specification__brep_format.html#specification__brep_format_5_2_3", null ],
          [ "Sphere - < surface record 4 >", "specification__brep_format.html#specification__brep_format_5_2_4", null ],
          [ "Torus - < surface record 5 >", "specification__brep_format.html#specification__brep_format_5_2_5", null ],
          [ "Linear Extrusion - < surface record 6 >", "specification__brep_format.html#specification__brep_format_5_2_6", null ],
          [ "Revolution Surface - < surface record 7 >", "specification__brep_format.html#specification__brep_format_5_2_7", null ],
          [ "Bezier Surface - < surface record 8 >", "specification__brep_format.html#specification__brep_format_5_2_8", null ],
          [ "B-spline Surface - < surface record 9 >", "specification__brep_format.html#specification__brep_format_5_2_9", null ],
          [ "Rectangular Trim Surface - < surface  record 10 >", "specification__brep_format.html#specification__brep_format_5_2_10", null ],
          [ "Offset Surface - < surface record 11 >", "specification__brep_format.html#specification__brep_format_5_2_11", null ]
        ] ],
        [ "2D curves", "specification__brep_format.html#specification__brep_format_5_3", [
          [ "Line - <2D curve record 1>", "specification__brep_format.html#specification__brep_format_5_3_1", null ],
          [ "Circle - <2D curve record 2>", "specification__brep_format.html#specification__brep_format_5_3_2", null ],
          [ "Ellipse - <2D curve record 3>", "specification__brep_format.html#specification__brep_format_5_3_3", null ],
          [ "Parabola - <2D curve record 4>", "specification__brep_format.html#specification__brep_format_5_3_4", null ],
          [ "Hyperbola - <2D curve record 5>", "specification__brep_format.html#specification__brep_format_5_3_5", null ],
          [ "Bezier Curve - <2D curve record 6>", "specification__brep_format.html#specification__brep_format_5_3_6", null ],
          [ "B-spline Curve -  <2D curve record 7>", "specification__brep_format.html#specification__brep_format_5_3_7", null ],
          [ "Trimmed Curve - <2D curve record 8>", "specification__brep_format.html#specification__brep_format_5_3_8", null ],
          [ "Offset Curve - <2D curve record 9>", "specification__brep_format.html#specification__brep_format_5_3_9", null ]
        ] ],
        [ "3D polygons", "specification__brep_format.html#specification__brep_format_5_4", null ],
        [ "Triangulations", "specification__brep_format.html#specification__brep_format_6_4", null ],
        [ "Polygons on triangulations", "specification__brep_format.html#specification__brep_format_6_5", null ],
        [ "Geometric Sense of a Curve", "specification__brep_format.html#specification__brep_format_6_6", null ]
      ] ],
      [ "Shapes", "specification__brep_format.html#specification__brep_format_7", [
        [ "Common Terms", "specification__brep_format.html#specification__brep_format_7_1", null ],
        [ "Vertex data", "specification__brep_format.html#specification__brep_format_7_2", null ],
        [ "Edge data", "specification__brep_format.html#specification__brep_format_7_3", null ],
        [ "Face data", "specification__brep_format.html#specification__brep_format_7_4", null ]
      ] ],
      [ "Appendix", "specification__brep_format.html#specification__brep_format_8", null ]
    ] ],
    [ "PBR math (rasterization)", "specification__pbr_math.html", [
      [ "Preface", "specification__pbr_math.html#pbr_preface", null ],
      [ "Notation", "specification__pbr_math.html#pbr_notation", null ],
      [ "Illumination model", "specification__pbr_math.html#pbr_illumination_model", null ],
      [ "Practical application", "specification__pbr_math.html#pbr_practical_application", null ],
      [ "Image based lighting", "specification__pbr_math.html#pbr_image_based_lighting", null ],
      [ "Monte-Carlo numeric integration", "specification__pbr_math.html#pbr_monte_carlo_integration", null ],
      [ "Split sum", "specification__pbr_math.html#pbr_split_sum", null ],
      [ "Importance sampling", "specification__pbr_math.html#pbr_importance_sampling", null ],
      [ "Specular map", "specification__pbr_math.html#pbr_specular_map", null ],
      [ "Spherical harmonics", "specification__pbr_math.html#pbr_spherical_harmonics", null ],
      [ "Transparent materials", "specification__pbr_math.html#pbr_transparency", null ],
      [ "Low discrepancy sequence", "specification__pbr_math.html#pbr_low_discrepancy", null ],
      [ "References", "specification__pbr_math.html#pbr_references", null ]
    ] ]
];