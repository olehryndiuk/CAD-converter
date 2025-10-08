namespace {
double dummy = 0;
}

#include "src/graphics/graphics_object_driver.h"
#include "src/io_gmio/io_gmio_amf_writer.cpp"
#include "src/io_image/io_image.cpp"
#include "src/io_occ/io_occ_common.h"
#include "src/io_occ/io_occ_stl.cpp"
#include "src/io_occ/io_occ_gltf_writer.cpp"
#include "src/io_ply/io_ply_writer.cpp"
#include "src/app/app_module.h"
#include "src/app/widget_model_tree_builder_xde.h"

static void messages() {
    // App
    Bohdan::AppModuleProperties::textId("SI");
    Bohdan::AppModuleProperties::textId("ImperialUK");

    Bohdan::AppModuleProperties::textId("VeryCoarse");
    Bohdan::AppModuleProperties::textId("Coarse");
    Bohdan::AppModuleProperties::textId("Normal");
    Bohdan::AppModuleProperties::textId("Precise");
    Bohdan::AppModuleProperties::textId("VeryPrecise");
    Bohdan::AppModuleProperties::textId("UserDefined");

    Bohdan::AppModuleProperties::textId("None");
    Bohdan::AppModuleProperties::textId("ReloadIfUserConfirm");
    Bohdan::AppModuleProperties::textId("ReloadSilently");

    Bohdan::WidgetModelTreeBuilder_Xde::textId("Instance");
    Bohdan::WidgetModelTreeBuilder_Xde::textId("Product");
    Bohdan::WidgetModelTreeBuilder_Xde::textId("Both");

    // Graphics
    Bohdan::GraphicsObjectDriverI18N::textId("GraphicsShapeObjectDriver");
    Bohdan::GraphicsObjectDriverI18N::textId("GraphicsMeshObjectDriver");
    Bohdan::GraphicsObjectDriverI18N::textId("GraphicsPointCloudObjectDriver");

    // I/O
    Bohdan::IO::GmioAmfWriter::Properties::textId("Decimal");
    Bohdan::IO::GmioAmfWriter::Properties::textId("Scientific");
    Bohdan::IO::GmioAmfWriter::Properties::textId("Shortest");

    Bohdan::IO::OccCommon::textId("Undefined"); // RWMesh_CoordinateSystem_Undefined
    Bohdan::IO::OccCommon::textId("posYfwd_posZup"); // RWMesh_CoordinateSystem_Zup
    Bohdan::IO::OccCommon::textId("negZfwd_posYup"); // RWMesh_CoordinateSystem_Yup

    Bohdan::IO::OccCommon::textId("Undefined");
    Bohdan::IO::OccCommon::textId("Micrometer");
    Bohdan::IO::OccCommon::textId("Millimeter");
    Bohdan::IO::OccCommon::textId("Centimeter");
    Bohdan::IO::OccCommon::textId("Meter");
    Bohdan::IO::OccCommon::textId("Kilometer");
    Bohdan::IO::OccCommon::textId("Inch");
    Bohdan::IO::OccCommon::textId("Foot");
    Bohdan::IO::OccCommon::textId("Mile");

    Bohdan::IO::OccStlWriterI18N::textId("Ascii");
    Bohdan::IO::OccStlWriterI18N::textId("Binary");

    Bohdan::IO::OccGltfWriter::Properties::textId("Json");
    Bohdan::IO::OccGltfWriter::Properties::textId("Binary");

    Bohdan::IO::PlyWriterI18N::textId("Ascii");
    Bohdan::IO::PlyWriterI18N::textId("Binary");

    Bohdan::IO::ImageWriterI18N::textId("Perspective");
    Bohdan::IO::ImageWriterI18N::textId("Orthographic");

    Bohdan::IO::ImageWriterI18N::textId("None");
    Bohdan::IO::ImageWriterI18N::textId("Horizontal");
    Bohdan::IO::ImageWriterI18N::textId("Vertical");
    Bohdan::IO::ImageWriterI18N::textId("DiagonalTopLeftBottomRight");
    Bohdan::IO::ImageWriterI18N::textId("DiagonalTopRightBottomLeft");
    Bohdan::IO::ImageWriterI18N::textId("Radial");
    Bohdan::IO::ImageWriterI18N::textId("GraphicsShapeObjectDriver_displayMode");
    Bohdan::IO::ImageWriterI18N::textId("GraphicsMeshObjectDriver_displayMode");
}
