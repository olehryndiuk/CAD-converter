

<div align="center">
  <img src="images/appicon_256.png" alt="Logo" width="128px" align="center" />
  <p></p>
  <p align="center"><strong>CAD Converter - Bohdan</strong> the opensource 3D CAD viewer and converter</9>
  <p></p>
  <img src="doc/screencast_1.gif"/>
</div>

## :eyeglasses: Overview
- **Convert 3D files** <br/>
Bohdan can read/write 3D files from/to STEP, IGES, STL and many other [CAD formats](https://github.com/fougue/mayo/wiki/Supported-formats)

- **Visualize 3D files** <br/>
Bohdan 3D viewer supports clip planes, exploding of assemblies, measurement of shapes, show/hide parts, ...

- **Cross platform** <br/>
Bohdan runs on Windows, Linux and macOS

- **Solid foundations** <br/>
Bohdan is developed in modern C++ with [Qt](https://www.qt.io) and [OpenCascade](https://dev.opencascade.org)



## :zap: Features
- **3D clip planes** with configurable capping

- **3D exploding of the model tree** allowing better exploration of complex designs

- **3D measure tools** for circles, angles, lengths, areas, bounding box, ...

- **3D view cube** providing intuitive camera manipulation

- **Quick access to CAD files** recently open thanks to thumbnails in the [Home page](https://github.com/olehryndiuk/CAD-converter/blob/develop/doc/screenshot_5.png)

- **Toggle item visibility** within the Model tree(use checkbox)

- **Customizable mesh precision** for BREP shapes, affecting visualization quality and conversion into mesh formats

- **Convert files** to multiple CAD formats from [command-line interface](https://github.com/olehryndiuk/CAD-converter/blob/develop/doc/screencast_cli.gif):computer:

## :floppy_disk: Supported formats
  Format  |  Import            |  Export            | Notes
----------|--------------------|--------------------|------------------
STEP      | :white_check_mark: | :white_check_mark: | AP203, 214, 242
IGES      | :white_check_mark: | :white_check_mark: | v5.3
BREP      | :white_check_mark: | :white_check_mark: | OpenCascade format
DXF       | :white_check_mark: | :x:                |
OBJ       | :white_check_mark: | :white_check_mark: |
glTF      | :white_check_mark: | :white_check_mark: | 1.0, 2.0 and GLB
VRML      | :white_check_mark: | :white_check_mark: | v2.0 UTF8
STL       | :white_check_mark: | :white_check_mark: | ASCII/binary
AMF       | :white_check_mark: | :white_check_mark: | v1.2 Text/ZIP(export)
PLY       | :white_check_mark: | :white_check_mark: | ASCII/binary
OFF       | :white_check_mark: | :white_check_mark: |
3MF       | :white_check_mark: | :x:                |
3DS       | :white_check_mark: | :x:                |
FBX       | :white_check_mark: | :x:                | 
Collada   | :white_check_mark: | :x:                |
X3D       | :white_check_mark: | :x:                |
X(DirectX)| :white_check_mark: | :x:                |
Image     | :x:                | :white_check_mark: | PNG, JPEG, ...


## :mag: 3D viewer operations

  Operation    |  Mouse/Keyboard controls
---------------|--------------------------
Rotate         | mouseLeft  + move
Pan            | mouseRight + move
Zoom           | mouseLeft  + mouseRight + move
Zoom +/-       | mouseWheel(scroll)
Window zoom    | CTRL + mouseLeft + move
Instant zoom   | spaceBar
Select Object  | mouseLeft click
Select Objects | SHIFT + mouseLeft clicks

Bohdan supports also multiple 3D viewer navigation styles to mimic common CAD applications(CATIA, SOLIDWORKS, ...)

## :clapper: Gallery

_Easy to use command-line utility for batch conversion of CAD files_
<img src="doc/screencast_cli.gif"/> 

_Import of glTF file with textures_
<img src="doc/screenshot_2.png"/>

_Import of STEP file with many parts_
<img src="doc/screenshot_3.png"/>

_Import of PLY file defining point cloud_
<img src="doc/screenshot_6.png"/>

_Options dialog with import/export configuration per CAD format_
<img src="doc/screenshot_4.png"/>

_Home page with quick access to recent files_
<img src="doc/screenshot_5.png"/>
